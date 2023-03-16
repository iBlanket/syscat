#include <cstdint>
#include "syscat/syscat.hh"

/* a function which is a syscall */
#pragma comment(lib, "ntdll.lib")
extern "C" __declspec(dllimport) long __stdcall NtQueryPerformanceCounter(uint64_t*, uint64_t*);


int main() {

	// intialize syscall manager
	if (!SysCat::Initialize((void*)NtQueryPerformanceCounter)) {
		return 1;
	}

	// do stuff

}