#ifndef _SYSCAT_SYSCALL_H
#define _SYSCAT_SYSCALL_H

#include "Syscat/NtNumber.h"

namespace _SYSCAT_NAMESPACE {

	namespace _SYSCAT_INTERNAL_NAMESPACE {

#if defined(_SYSCAT_MSVC) && !defined(_SYSCAT_CLANG)
		__pragma(optimize("", off));
#endif

#if defined(_SYSCAT_AMD64)
#if defined(_SYSCAT_CLANG)

		//
		// __InternalDispatch
		//   Internal syscall dispatch for amd64 clang
		//
		template<class _SyscallType, PrimitiveOrPointerType... _Params>
		__attribute__((noinline, optnone, naked, __ms_abi__))
		typename _SyscallType::ReturnType __fastcall __InternalDispatch(_Params...) noexcept {
			__asm__ __volatile__(R"(
				movq %%rcx, %%r10
				syscall
				ret
				)" : : "a"((SyscatDword)_SyscallType::_SyscallNumber) : "rcx", "rdx", "r8", "r9", "r10", "memory");
		}

#elif defined(_SYSCAT_MSVC)

		//
		// _SyscallStubShellcode64
		// 
		//   Since MSVC forbids inline assembly, we hardcode the AMD64 machine code & use the DbgSsReserved field to pass the EAX/Syscall number value.
		//   Theres probably a better way to do this but this method was easiest.
		//
		__pragma(section(".text", execute, read));
		__declspec(allocate(".text"))
		constexpr static inline SyscatByte _SyscallStubShellcode64[] = {
				0x65, 0x8B, 0x04, 0x25, 0xA0, 0x16, 0x00, 0x00,	// mov eax, DWORD PTR gs:0x16a0 ; DbgSsReserved
				0x49, 0x89, 0xCA,								// mov r10, rcx
				0x0F, 0x05, 									// syscall
				0xC3 											// ret
		};

		//
		// __InternalDispatch
		//   Internal syscall dispatch for amd64 MSVC
		//
		template<class _SyscallType, PrimitiveOrPointerType... _Params>
		typename _SyscallType::ReturnType __fastcall __InternalDispatch(_Params... Arguments) noexcept {
			SyscatQword(__fastcall * SyscallStubFn)(_Params...) = 
				(SyscatQword(__fastcall*)(_Params...))(&_SyscallStubShellcode64[0]);

			// store old LastError and set it to the syscall number
			const SyscatDword Old = __readgsdword(0x16A0);

			SyscatSsnType Ssn = (SyscatDword)_SyscallType::_SyscallNumber;

			// write the syscall number to DbgSsReserved
			__writegsdword(0x16A0, SyscatDword(Ssn));

			// call stub which will get syscall number from LastError
			typename _SyscallType::ReturnType Result = 
				(typename _SyscallType::ReturnType)SyscallStubFn(Arguments...);

			// retore DbgSsReserved
			__writegsdword(0x16A0, Old);

			return Result;
		}

#endif
#elif defined(_SYSCAT_WOW64)
#if defined(_SYSCAT_MSVC)

		//
		// __InternalDispatch
		//   Internal syscall dispatch for x86 MSVC
		//
		template<class _SyscallType, PrimitiveOrPointerType... _Params>
		__declspec(noinline, naked) typename _SyscallType::ReturnType __InternalDispatch(_Params...) noexcept {
			__asm {
				// get syscall number (eax)
				xor eax, eax 
				mov ax, _SyscallType::_SyscallNumber

				// call Wow64SystemServiceCall (probably should cache this or manually do 64bit transition but this is fine for now)
				call fs:[0xC0]

				ret
			}
		}

#endif
#endif

#if defined(_SYSCAT_MSVC) && !defined(_SYSCAT_CLANG)
		__pragma(optimize("", on));
#endif

	} // namespace _SYSCAT_INTERNAL_NAMESPACE


	//
	// CSyscat
	//  Invoke direct system calls from a system call table (NtTables.h)
	//  Uses __InternalDispatch internally.
	// 
	// NOTE:
	//  For increased safety, call GetNumber on program start to prevent race condition (extremely unlikely)
	//  Use GetNumber instead of _SyscallNumber for accessing the syscall number. _SyscallNumber could be uninitialized if GetNumber has not been called.
	// 
	// TODO:
	//  The __InternalDispatch function is very hackily done. Especially for MSVC x64.
	//
	template<SyscallTableType _SyscallTable, _SYSCAT_INTERNAL_NAMESPACE::PrimitiveOrPointerType _ReturnType, _SYSCAT_INTERNAL_NAMESPACE::PrimitiveOrPointerType... _Params>
	class CSyscat {
	public:

		//
		// ReturnType
		//
		using ReturnType = _ReturnType;

		//
		// SyscallTableType
		//
		using SyscallTableType = _SyscallTable;

		//
		// SyscallType
		//
		using SyscallType = CSyscat<_SyscallTable, _ReturnType, _Params...>;

		//
		// CSyscat::Invoke
		// 
		//   Returns (ReturnType)-1 on invalid syscall number.
		//
		static inline ReturnType Invoke(_Params... Arguments) noexcept {
			if (GetNumber() == kInvalidSyscallNumber) {
				_SYSCAT_ERROR();
				return (ReturnType)-1;
			}

			return ReturnType(
				_SYSCAT_INTERNAL_NAMESPACE::__InternalDispatch<SyscallType, _Params...>(Arguments...)
			);
		}

		//
		// CSyscat::GetNumber
		//
		static inline SyscatSsnType GetNumber() noexcept {
			if (_SyscallNumber == kInvalidSyscallNumber) {
				_SyscallNumber = GetSsn<_SyscallTable>(GetCurrentBuildId());
			}
			return _SyscallNumber;
		}

	// protected:
		static inline SyscatSsnType _SyscallNumber = kInvalidSyscallNumber;
	};

} // namespace _SYSCAT_NAMESPACE

#endif