#pragma once

/*
*	SysCat
*	 Static struct for handling / storing information about Wow64SystemSerivceCall and other related
*	 functions for making & handling Wow64 Syscalls.
* 
*	lpWow64SystemServiceCall - stored ( last validated ) address of Wow64SystemSerivceCall
* 
*	Note: This class should not be instanced
* 
*/
struct SysCat
{
	/*
	*	KittyCall_t
	*	 type representing system service call information
	*	 required for making system service calls
	* 
	*/
	template <size_t nIndex, class T, class... Args>
	struct KittyCall_t {

		/*
		*	Call
		*	 Wrap DoSyscall with checks to ensure Syscat is initialized.
		* 
		*	Note: this may not work / fail on different compiler settings & compilers
		*/
		__forceinline T Call(Args... a) noexcept {
			// calling this each time we syscall isnt ideal as it checks the functions bytes but its good
			// to have in case something gets fucked up.
			if (!IsInitialized()) {
				return {};
			}
			return DoSyscall<T, nIndex>(a...);
		}

		__forceinline T operator()(Args... a) { return this->Call(a...); }
	};

	/*
	*	Initialize
	*	 Setup data required for making wow64 syscalls
	*	
	*	Args:
	*	  ~ lpSyscallProc - a procedure which is a wow64 syscall / follows the structure seen in the 
	*	  IsProcSyscall86 function ( like NtQueryPerformanceCounter )
	* 
	*	Note: Should be called on program startup
	* 
	*/
	__forceinline static bool Initialize(void* lpParam) noexcept;

	/*
	*	IsInitialized
	*	 Ensure SysCat is initialized to prevent access violations upon calling a invalid pointer when making 
	*	 a syscall
	*	
	*	Note: This checks if lpWow64SystemServiceCall is nullptr, then if its bytes are valid
	*	 
	*/
	__forceinline static bool IsInitialized() noexcept;

	/*
	*	DoSyscall
	*	 Makes a syscall [ IF lpWow64SystemServiceCall is nullptr this will fail! call IsInitialized or use 
	*	 CallCat_t to prevent this ]
	* 
	*	 ~ T - Return type.
	*	 ~ ... - Args pushed onto the stack ( this could be made different / break with different compilers or 
	*	 different msvc settings.
	* 
	*	Note: this is only verified to work on msvc
	*/
	template <typename T, unsigned long _nSyscallIndex >
	__forceinline static T __stdcall DoSyscall(...) noexcept;

	/*
	*	Syscat_t::IsProcSyscall86
	*	 Determine ( with reasonable accuracy ) if a function is a wow64systemcall without requiring a pointer
	*	 to the Wow64SystemServiceCall function.
	*
	*	Arguments:
	*	 ~ lpProc - pointer to the procedure
	*	 ~ pOutWow64SystemServiceCall - will be set to the address of
	*	 Wow64SystemCall if the procedure meets the criteria
	* 
	*	Result:
	*	 a boolean representing if the bytes of the procedure match those typically contained in x86
	*	 system calls
	*
	*	Note: this function can ( very rarely ) produce false positives, its just meant to be a check on functions
	*	already known to be x86 system calls as a assurance no tampering or strange issues have occured.
	* 
	*/
	__forceinline static bool IsProcSyscall86(void* lpProc, void** pOutWow64SystemServiceCall) noexcept;

	/*
	*	GetStoredWow64SystemServiceCall
	* 
	*/
	__forceinline static void* GetStoredWow64SystemServiceCall() noexcept;

private:
	/*
	*	static pointer to stored Wow64SystemServiceCall address
	*/
	static inline void* lpWow64SystemServiceCall{ nullptr };
};

__forceinline bool SysCat::Initialize(void* lpSyscallProc) noexcept {
	if (IsProcSyscall86(lpSyscallProc, &lpWow64SystemServiceCall)) {
		return true;
	}
	return false;
}

__forceinline bool SysCat::IsInitialized() noexcept {
	if (!lpWow64SystemServiceCall) {
		return false;
	}
	return true;
	/* check if functions bytes are correct */
	auto pBytes = (unsigned char*)lpWow64SystemServiceCall;
	return (pBytes[0] == 0xFF && pBytes[1] == 0x25);
}

__forceinline void* SysCat::GetStoredWow64SystemServiceCall() noexcept {
	return lpWow64SystemServiceCall;
}

__forceinline bool SysCat::IsProcSyscall86(void* lpProc, void** pOutWow64SystemServiceCall) noexcept {
	// ==
	// This is how these are *GENERALLY*
	// 	~ mov eax, SyscallCode ~ 1 byte for mov eax + 4 bytes for the long
	// 	~ mov edx, Address     ~ 1 byte for mov eax + 4 bytes for address
	// 	~ call edx
	// ==

	unsigned char* pBytes = (unsigned char*)lpProc;

	// this code could possible lead to false positives but it ... shouldnt 
	if (
		(pBytes[0] == 0xB8) &&  // mov eax
		(pBytes[5] == 0xBA) &&  // mov edx
		(pBytes[10] == 0xFF) && // call
		(pBytes[11] == 0xD2) && // edx
		(pBytes[12] == 0xC2) && // ret
		(pBytes[15] == 0x90)    // nop
		) {
		// ( if the proc is wow64syscall & structured in this manner )
		// the 6th byte from the beginning will contain the address of Wow64SystemServiceCall
		// which contains a jmp instruction to Wow64Transition inside
		// of the 64bit "_wow64cpu.dll" module
		unsigned char* pCallLocation = *(unsigned char**)&pBytes[6];

		// the first two bytes of wow64systemservicecall ( jmp instruction to Wow64Transition inside )
		if (pCallLocation[0] == 0xFF && pCallLocation[1] == 0x25) {
			// set pOutWow64SystemServiceCall and return true
			*pOutWow64SystemServiceCall = pCallLocation;
			return true;
		}
	}

	return false;
}

template <typename T, unsigned long _nSyscallIndex >
__forceinline __declspec(naked) T __stdcall SysCat::DoSyscall(...) noexcept {
	constexpr static auto nSyscallIndex = _nSyscallIndex; // fix compiler issue
	__asm {
		/* eax is the register syscall indexes are moved into */
		mov eax, nSyscallIndex
		call lpWow64SystemServiceCall
		ret
	}
}

/* declare syscall which returns ntstatus */
#define SYSCAT_DECLARE(name, index, ...) \
static inline SysCat::KittyCall_t< index , long, __VA_ARGS__ > name ;
