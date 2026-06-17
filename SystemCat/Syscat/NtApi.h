#ifndef _SYSCAT_WINDOWS_H
#define _SYSCAT_WINDOWS_H

#include "Syscat/SyscatDefinitions.h"

namespace _SYSCAT_NAMESPACE {

	namespace _SYSCAT_INTERNAL_NAMESPACE {

		/*
		*  Windows Offsets for Kernel User Shared Mapping & Os/Build Information
		*   
		*   Note: Offsets are used instead of using phnt to minimize compile-time overhead
		*         I recommend using phnt's NtCurrentPeb()->Field & USER_SHARED_DATA->Field instead
		*         of offsets but the goal of this project is to be minimal and a drop in solution
		*         for direct system calls.
		* 
		*/

		constexpr inline SyscatDword kKUserSharedData = SyscatDword(0x7FFE0000);
		constexpr inline SyscatOffset kNtMajorOffsetKUserShared = SyscatOffset(0x026C);
		constexpr inline SyscatOffset kNtBuildOffsetKUserShared = SyscatOffset(0x0260);


		/*
		*  Windows Offsets for Process Environment Block & Os/Build Information
		*
		*   Note: Offsets are used instead of using phnt to minimize compile-time overhead
		*         I recommend using phnt's NtCurrentPeb()->Field & USER_SHARED_DATA->Field instead
		*         of offsets but the goal of this project is to be minimal and a drop in solution
		*         for direct system calls.
		*
		*/

		constexpr inline SyscatOffset kPeb64OffsetGsbase = SyscatOffset(0x0060);
		constexpr inline SyscatOffset kOsBuildOffsetPeb64 = SyscatOffset(0x0120);
		constexpr inline SyscatOffset kPeb32OffsetFsbase = SyscatOffset(0x0030);
		constexpr inline SyscatOffset kOsBuildOffsetPeb32 = SyscatOffset(0x00AC);


		/*
		*  Windows Os Version/Information Utility Functions
		*
		*/

		//
		// GetNtMajor
		//   https://www.geoffchappell.com/studies/windows/km/ntoskrnl/inc/api/ntexapi_x/kuser_shared_data/index.htm
		// 
		//  Versions:
		//   4.0 and higher
		//
		inline SyscatMajorVersionType GetNtMajor() noexcept {
			return *(SyscatMajorVersionType*)(kKUserSharedData + kNtMajorOffsetKUserShared);
		}

		//
		// GetNtBuild
		//   https://www.geoffchappell.com/studies/windows/km/ntoskrnl/inc/api/ntexapi_x/kuser_shared_data/index.htm
		// 
		//  Versions:
		//   10.0 and higher
		//
		inline SyscatBuildNumberType GetNtBuild() noexcept {
			return *(SyscatBuildNumberType*)(kKUserSharedData + kNtBuildOffsetKUserShared);
		}

		//
		// GetOsBuild
		//   https://www.geoffchappell.com/studies/windows/km/ntoskrnl/inc/api/pebteb/peb/index.htm
		// 
		//  Note: Not all compilers have intrinsics for __readgs/fs ( use inline asm )
		//        Only x86 architecture fs/gs segment registers & fs/gsbase registers ( use ((SyscatByte*)NtCurrentPeb()) )
		//        This project is designed to support x86_64 for clang and msvc. Other compilers/architectures
		//        are not supported and may require modifications to syscat in order to use. 
		//        The inline NtCurrentPeb + offset should make it pretty easy to widen support. 
		//        Contact me via telegram or discord for help/issues.
		// 
		//  Versions:
		//   4.0 and higher
		//
		inline SyscatBuildNumberType GetOsBuild() noexcept {
			SyscatByte* Peb;
#if defined(_SYSCAT_AMD64)
#if defined(_SYSCAT_CLANG)
			__asm__ __volatile__("movq %%gs:(%1), %0" : "=r"(Peb) : "r"(kPeb64OffsetGsbase) : "memory");
#else
			Peb = (SyscatByte*)__readgsqword(kPeb64OffsetGsbase);
#endif
			return SyscatBuildNumberType(*(SyscatWord*)&Peb[kOsBuildOffsetPeb64]);
#else
#if defined(_SYSCAT_CLANG)
			__asm__ __volatile__("movl %%fs:(%1), %0" : "=r"(Peb) : "r"(kPeb32OffsetFsbase) : "memory");
#else
			Peb = (SyscatByte*)__readfsdword(kPeb32OffsetFsbase);
#endif
			return SyscatBuildNumberType(*(SyscatWord*)&Peb[kOsBuildOffsetPeb32]);
#endif
		}

	} // namespace _SYSCAT_INTERNAL_NAMESPACE


	//
	// GetOsBuildNumber
	// 
	//  Versions:
	//   4.0 and higher
	//
	inline SyscatBuildNumberType GetOsBuildNumber() noexcept {
		// Unless version is Windows 8/older, we want to use shared kernel mapping as it cannot be easily monitored for memory access or modified.
#if defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
		// KUSER_SHARED_DATA->NtBuildNumber is only supported on 10.0 and higher
		if (_SYSCAT_INTERNAL_NAMESPACE::GetNtMajor() >= SyscatMajorVersionType(10)) {
			return _SYSCAT_INTERNAL_NAMESPACE::GetNtBuild();
		}
#endif
		
		// fallback to PEB->OsBuildNumber (supported on 4.0 and higher)
		return _SYSCAT_INTERNAL_NAMESPACE::GetOsBuild();
	}


} // namespace _SYSCAT_NAMESPACE

#endif