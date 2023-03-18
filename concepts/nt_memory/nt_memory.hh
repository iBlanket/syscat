/*
*	nt_memory.hpp
* 
*	 Demonstration of simple windows memory management with Ntapi functions
* 
*/
#pragma once
#include <cstdint>
#include "../../syscat/syscat.hh"

#pragma region 
#define nt_success(status) (((long)(status)) >= 0)

/* psuedo handle to current process*/
#define nt_cur_proc() (((void*)0x0FFFFFFFFul))
#pragma endregion

/*
*	ntmem
*	 Windows memory management with functions in ntdll :D
* 
*/
struct ntmem {
	/* Syscall declarations, note: these indexes will be different depending on windows version */
	SYSCAT_DECLARE(NtAllocateVirtualMemory, 0x0018, void*, void**, void*, size_t*, uint32_t, uint32_t);
	SYSCAT_DECLARE(NtFreeVirtualMemory, 0x001E, void*, void**, size_t*, uint32_t);
	SYSCAT_DECLARE(NtProtectVirtualMemory, 0x0050, void*, void**, size_t*, size_t, size_t*);
};
