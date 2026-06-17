#ifndef _SYSCAT_CONFIG_H
#define _SYSCAT_CONFIG_H

#if !defined(SYSCAT_WIN11) && !defined(SYSCAT_WIN10) && !defined(SYSCAT_WIN8) && !defined(SYSCAT_WIN_OLD)
#define SYSCAT_WIN11
#define SYSCAT_WIN10
#define SYSCAT_WIN8
#define SYSCAT_WIN_OLD
#endif

#pragma region SysCat Namespace

#if !defined(_SYSCAT_NAMESPACE)
#define _SYSCAT_NAMESPACE syscat
#endif

#if !defined(_SYSCAT_INTERNAL_NAMESPACE)
#define _SYSCAT_INTERNAL_NAMESPACE internal
#endif

namespace _SYSCAT_NAMESPACE {
	namespace _SYSCAT_INTERNAL_NAMESPACE {
	} // namespace _SYSCAT_INTERNAL_NAMESPACE
} // namespace _SYSCAT_NAMESPACE

#pragma endregion

#pragma region SysCat Compiler Utility Macros

#if defined(_MSC_VER)
#define _SYSCAT_MSVC
#endif

#if defined(__clang__)
#define _SYSCAT_CLANG
#define _SYSCAT_PACKED __attribute__((packed))
#else
#define _SYSCAT_PACKED
#endif

#if defined(_M_X64) || defined(__amd64__) || defined(__x86_64__)
#define _SYSCAT_AMD64
#elif defined(_M_IX86) || defined(__i386__)
#define _SYSCAT_WOW64
#endif

#if defined(_SYSCAT_MSVC)
#if defined(_SYSCAT_WOW64)
extern "C" unsigned char __readfsbyte(unsigned long);
extern "C" unsigned short __readfsword(unsigned long);
extern "C" unsigned long __readfsdword(unsigned long);
extern "C" void __writefsbyte(unsigned long, unsigned char);
extern "C" void __writefsword(unsigned long, unsigned short);
extern "C" void __writefsdword(unsigned long, unsigned long);
#elif defined(_SYSCAT_AMD64)
extern "C" unsigned char __readgsbyte(unsigned long);
extern "C" unsigned short __readgsword(unsigned long);
extern "C" unsigned long __readgsdword(unsigned long);
extern "C" unsigned long long __readgsqword(unsigned long);
extern "C" void __writegsbyte(unsigned long, unsigned char);
extern "C" void __writegsword(unsigned long, unsigned short);
extern "C" void __writegsdword(unsigned long, unsigned long);
extern "C" void __writegsqword(unsigned long, unsigned long long);
#endif
extern "C" void __debugbreak(void);
#endif

#pragma endregion

#pragma region Syscat Type Aliases

namespace _SYSCAT_NAMESPACE {

	using SyscatByte = unsigned char; // uint8_t;
	using SyscatWord = unsigned short; // uint16_t;
	using SyscatDword = unsigned long; // uint32_t;
	using SyscatQword = unsigned long long; // uint64_t
	using SyscatOffset = SyscatDword;
	using SyscatBuildNumberType = SyscatDword;
	using SyscatMajorVersionType = SyscatDword;
	using SyscatSsnType = SyscatWord;

	constexpr inline SyscatSsnType kInvalidSyscallNumber = SyscatSsnType(-1);

	namespace _SYSCAT_INTERNAL_NAMESPACE {

		template <class, class> inline constexpr bool IsSameType = false;
		template <class _T> inline constexpr bool IsSameType<_T, _T> = true;
		template <class _S, class... _L>  inline constexpr bool IsTypeAnyOf = (IsSameType<_S, _L> || ...);

		template <class _ElementType> inline constexpr bool IsArray = false;
		template <class _ElementType, unsigned int _Extent> inline constexpr bool IsArray<_ElementType[_Extent]> = true;
		template <class _ElementType> inline constexpr bool IsArray<_ElementType[]> = true;

		template <class _T> inline constexpr bool IsTypePointer = false;
		template <class _T> inline constexpr bool IsTypePointer<_T*> = true;
		template <class _T> inline constexpr bool IsTypePointer<_T* const> = true;

		template <class _T> struct RemoveConstVolatile_t { using T = _T; };
		template <class _T> struct RemoveConstVolatile_t <const _T> { using T = _T; };
		template <class _T> struct RemoveConstVolatile_t <volatile _T> { using T = _T; };
		template <class _T> struct RemoveConstVolatile_t <const volatile _T> { using T = _T; };
		
		template<class _T>
		inline constexpr bool IsTypePrimitiveIntegral = IsTypeAnyOf<
			  typename RemoveConstVolatile_t<_T>::T,
			  bool, char, signed char, unsigned char, wchar_t, char8_t, char16_t, char32_t, short, unsigned short, int, unsigned int, long, unsigned long, long long, unsigned long long
		>;

		template <typename _T>
		concept PrimitiveOrPointerType = IsTypePrimitiveIntegral<_T> || IsTypePointer<_T>;

	} // namespace _SYSCAT_INTERNAL_NAMESPACE

	//
	// SyscallTableType
	//   This is by no means a complete concept. It should prevent most unintentional incorrect usage of CSyscat.
	//
	template <typename _T>
	concept SyscallTableType = _SYSCAT_INTERNAL_NAMESPACE::IsArray<decltype(_T::_Table)>;

} // namespace _SYSCAT_NAMESPACE

#pragma endregion

#pragma region Syscat Error

#if !defined(_SYSCAT_ERROR)
#define _SYSCAT_ERROR() { __debugbreak(); }
#endif

#pragma endregion

#endif
