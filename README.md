# Syscat
Header for easily making &amp; hooking syscalls in x86 processes using wow64

## Note
This is only verified to work on a few machines, using different compilers or compiler settings could cause issues. The concept should be clear enough to make fixing these issues easy enough.
### Features which will ( probably ) break this 
- mov edi, edi dumb idiot Hotswappatch setting
- Incremental linking
- any other setting that does something stupid to functions

## Usage

Ensure you call **`SysCat::Initialize`** ( Example in main.cc )
```cpp
SysCat::Initialize(lpSomeSyscallProcedure);
```
Create syscalls with the documented SYSCAT_DECLARE macro ( /syscat/syscat.hh )
```cpp
// code from /concepts/nt_memory/nt_memory.hh
SYSCAT_DECLARE(NtAllocateVirtualMemory, 0x0018, void*, void**, void*, size_t*, uint32_t, uint32_t);
SYSCAT_DECLARE(NtFreeVirtualMemory, 0x001E, void*, void**, size_t*, uint32_t);
SYSCAT_DECLARE(NtProtectVirtualMemory, 0x0050, void*, void**, size_t*, size_t, size_t*);
```
Syscalls can be called with the **`() operator`** or the **`Call`** function
```cpp
NtAllocateVirtualMemory(...);
NtAllocateVirtualMemory.Call(...);
```
Or if youre lazy, you can just use
```cpp
// documented in syscat.hh
SysCat::DoSyscall<returntype, index>(args);
```

