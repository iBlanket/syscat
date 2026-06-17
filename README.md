<div align="center">

# Syscat

*Portable, fast, & lightweight direct system service calls for Windows.*

![C++](https://img.shields.io/badge/C%2B%2B-17%2B-00599C?logo=cplusplus&logoColor=white)
![Platform](https://img.shields.io/badge/platform-Windows-0078D6?logo=windows&logoColor=white)
![Arch](https://img.shields.io/badge/arch-x86_64-success)
![Header-only](https://img.shields.io/badge/header--only-yes-brightgreen)
![Dependencies](https://img.shields.io/badge/dependencies-none-lightgrey)

</div>

Syscat is a header-only C++ library aiming to solve the portability issues and runtime overhead associated with invoking direct system service calls on Windows by using static tables of system call numbers & Windows versions.

Unlike other tools, syscat utilizes optimized & minimal tables of system call numbers and OS build information to determine the correct syscall number to use at runtime across all major Windows versions.

This allows syscat to remain function when syscall stubs are hooked or modified, when PE image headers are tampered with or stripped and/or when LDR data table entries are removed or altered.

Syscat can also be configured for specific Windows versions, further increasing speed and reducing size.

## Support

| Compiler | AMD64 | Wow64 |
| :--- | :---: | :---: |
| **MSVC**  | ✅ | ✅ |
| **clang** | ✅ | ✅ |

> Wow64 calls are dispatched through `Wow64SystemServiceCall`

## Usage

The problem of giant syscall tables causing binary bloat does not exist with syscat. Binary size can be further reduced by defining `SYSCAT_WIN10`, `SYSCAT_WIN11`, `SYSCAT_WIN8`, and `SYSCAT_WIN_OLD`.

### Headers
```c++
#include "Syscat/SyscatDefinitions.h" // Compile options, types, & concepts used by syscat
#include "Syscat/NtApi.h" // Windows Internals utilities
#include "Syscat/NtBuildId.h" // Build number information
#include "Syscat/NtNumber.h" // Syscall table element type
#include "Syscat/NtTables.h" // Syscall tables (https://j00ru.vexillium.org/syscalls/nt/64/)
#include "Syscat/NtSyscall.h" // Direct syscall impl for MSVC & clang
```

### Printing System Time & Delaying Execution
```c++
#define SYSCAT_WIN10 // not needed, if no version specified all versions are included.
#define SYSCAT_WIN11
#include "Syscat/NtSyscall.h"
#include "Syscat/NtTables.h"
using namespace syscat;

// Syscat caller for NtQuerySystemTime (NtSyscall.h)
using _NtQuerySystemTime = CSyscat<CNtQuerySystemTime, // Syscall table type (NtTables.h)
	NTSTATUS, // syscall return type
	PLARGE_INTEGER // parameter types
	// ...
>;

// Syscat caller for NtDelayExecution (NtSyscall.h)
using _NtDelayExecution = CSyscat<CNtDelayExecution, // Syscall table type (NtTables.h)
	NTSTATUS, // syscall return type
	BOOLEAN, PLARGE_INTEGER // parameter types
	// ...
>;

int main() {
	LARGE_INTEGER SystemTime;
	LARGE_INTEGER DelayTime;
	DelayTime.QuadPart = -10000000;

	while(true) {

		// call NtDelayExecution
		if (!NT_SUCCESS(_NtDelayExecution::Invoke(TRUE, &DelayTime))) {
			__debugbreak();
		}

		// call NtQuerySystemTime
		if (!NT_SUCCESS(_NtQuerySystemTime::Invoke(&SystemTime))) {
			__debugbreak();
		}

		// print system time
		printf("%lld\n", SystemTime.QuadPart);
	}

	return 0;
}
```
### Reimplementing VirtualAlloc 
```c++
// Syscat caller for NtAllocateVirtualMemory (NtSyscall.h)
using _NtAllocateVirtualMemory = CSyscat<CNtAllocateVirtualMemory, // Syscall table type (NtTables.h)
	NTSTATUS, // syscall return type
	HANDLE, PVOID*, ULONG_PTR, PSIZE_T, ULONG, ULONG // parameter types
>;

//
// SyscatVirtualAlloc
//   Simple implementation of VirtualAlloc using syscat direct syscall
//
PVOID SyscatVirtualAlloc(LPVOID BaseAddress, SIZE_T RegionSize, ULONG AllocationType, ULONG Protection) {
	// call NtAllocateVirtualMemory
	NTSTATUS StatusAllocation = _NtAllocateVirtualMemory::Invoke(
		(HANDLE)-1, // Current process pseudo handle
		&BaseAddress,
		0, 
		&RegionSize,
		AllocationType, 
		Protection
	);

	// check if successful
	if (!NT_SUCCESS(StatusAllocation)) {
		return nullptr;
	}

	return BaseAddress;
}
```

## Code Generation
### C++ Code
```c++
#define SYSCAT_WIN10 // for smaller binary size
#define SYSCAT_WIN11 // for smaller binary size
#include "Syscat/NtSyscall.h"
#include "Syscat/NtTables.h"
using namespace syscat;

using _NtQuerySystemTime = CSyscat<CNtQuerySystemTime, NTSTATUS, PLARGE_INTEGER>;
using _NtDelayExecution = CSyscat<CNtDelayExecution, NTSTATUS, BOOLEAN, PLARGE_INTEGER>;

int main() {
	LARGE_INTEGER SystemTime;
	LARGE_INTEGER DelayTime;
	DelayTime.QuadPart = -10000000;

	while (true) {
		if (!NT_SUCCESS(_NtDelayExecution::Invoke(TRUE, &DelayTime))) {
			__debugbreak();
		}
		if (!NT_SUCCESS(_NtQuerySystemTime::Invoke(&SystemTime))) {
			__debugbreak();
		}
	}

	return 0;
}
```
### Ida Pro 9.0 Pseudocode
```c
void __fastcall __noreturn main(__int64 a1) {
  unsigned __int8 v1; // al
  unsigned __int8 v2; // al
  __int64 v3; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v4[48]; // [rsp+28h] [rbp-30h] BYREF
  v3 = -10000000LL;
  while ( 1 )
  {
    if ( word_140003000 == -1 ) {
      if ( byte_140003002 == 15 )
        byte_140003002 = sub_140001152(NtCurrentPeb()->OSBuildNumber);
      v1 = sub_14000110E(&unk_140002000);
      a1 = (v1 - 1) | 0x34u;
      word_140003000 = (v1 - 1) | 0x34;
      if ( !v1 )
        break;
    }
    LOBYTE(a1) = 1;
    if ( (int)sub_140001100(a1, &v3) < 0 )
      goto LABEL_9;
LABEL_10:
    if ( word_140003004 == -1 )
    {
      if ( byte_140003002 == 15 )
        byte_140003002 = sub_140001152(NtCurrentPeb()->OSBuildNumber);
      v2 = sub_14000110E(&unk_140002062);
      a1 = (v2 - 1) | 0x5Au;
      word_140003004 = (v2 - 1) | 0x5A;
      if ( !v2 ) {
        __debugbreak();
        goto LABEL_17;
      }
    }
    if ( (int)sub_140001270(v4) < 0 )
LABEL_17:
      __debugbreak();
  }
  __debugbreak();
LABEL_9:
  __debugbreak();
  goto LABEL_10;
}

__int64 sub_140001100() {
  __int64 result; // rax
  result = (unsigned __int16)word_140003000;
  __asm { syscall; Low latency system call }
  return result;
}

__int64 sub_140001270() {
  __int64 result; // rax
  result = (unsigned __int16)word_140003004;
  __asm { syscall; Low latency system call }
  return result;
}

unsigned __int8 __fastcall sub_14000110E(__int16 *a1, unsigned __int8 a2) {
  __int16 v2; // ax
  __int64 v3; // rcx
  int v5; // eax
  v2 = *a1;
  v3 = *a1 & 0x7F;
  if ( (unsigned __int16)v3 <= 0x3Fu )
    return byte_140002010[2 * v3] <= a2 && (unsigned __int8)(byte_140002010[2 * v3 + 1] + byte_140002010[2 * v3]) > a2;
  v5 = ((v2 & 1) << 19) + 655360;
  return _bittest(&v5, a2);
}

char __fastcall sub_140001152(unsigned __int16 a1) {
  char result; // al
  if ( a1 <= 0x4A60u ) {
    if ( a1 <= 0x3FAAu ) {
      if ( a1 > 0x3838u ) {
        if ( a1 == 14393 )
          return 12;
        if ( a1 == 15063 )
          return 11;
      }
      else {
        if ( a1 == 10240 )
          return 14;
        if ( a1 == 10586 )
          return 13;
      }
    }
    else if ( a1 <= 0x4562u ) {
      if ( a1 == 16299 )
        return 10;
      if ( a1 == 17134 )
        return 9; 
    }
    else {
      if ( a1 == 17763 )
        return 8;
      if ( a1 == 18362 || a1 == 18363 )
        return 7;
    }
    return 15;
  }
  if ( a1 > 0x55EFu ) {
    if ( a1 > 0x6335u ) {
      result = 0;
      if ( a1 == 26200 || a1 == 26100 )
        return result;
      if ( a1 == 25398 )
        return 1;
    }
    else {
      if ( a1 == 22000 )
        return 3;
      if ( a1 == 22621 || a1 == 22631 )
        return 2;
    }
    return 15;
  }
  switch ( a1 ) {
    case 0x4A61u:
    case 0x4A62u:
    case 0x4A63u:
      result = 6;
      break;
    case 0x4A64u:
    case 0x4A65u:
      result = 5;
      break;
    default:
      if ( a1 != 20348 )
        return 15;
      result = 4;
      break;
  }
  return result;
}
```
