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

	/*
	*	alloc
	*	 NtAllocateVirtualMemory wrapper
	* 
	*/
	template <class T = void*>
	static T alloc(void* base, size_t size, uint32_t type, uint32_t protect, void* proc_handle = nt_cur_proc());
	
	/*
	*	protect
	*	 NtProtectVirtualMemory wrapper
	*
	*/
	static bool protect(void* base, size_t size, uint32_t new_protect, uint32_t& old_protect, void* proc_handle = nt_cur_proc());

	/*
	*	free
	*	 NtFreeVirtualMemory wrapper
	*
	*/
	static bool free(void* base, size_t size, uint32_t freetype, void* proc_handle = nt_cur_proc());
};

template <class T>
T ntmem::alloc(void* base, size_t size, uint32_t type, uint32_t protect, void* proc_handle) {
	// copy these so we dont change the value of the arguments
	void* result = base;
	size_t region_size = size;

	const auto status = NtAllocateVirtualMemory(proc, &result, nullptr, &region_size, type, proc_handle);

	if (!nt_success(status)) {
		return {};
	}

	return (T)result;
}

bool ntmem::free(void* base, size_t size, uint32_t freetype, void* proc_handle) {
	const auto status = NtFreeVirtualMemory(proc_handle, &base, &size, freetype);
	return nt_success(status);
}

bool ntmem::protect(void* base, size_t size, uint32_t new_protect, uint32_t& old_protect, void* proc_handle = nt_cur_proc()) {
	const auto status = NtProtectVirtualMemory(proc_handle, &base, &size, new_protect, &old_protect);
	return nt_success(status);
}