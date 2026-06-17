#ifndef _SYSCAT_NUMBER_H
#define _SYSCAT_NUMBER_H

#include "Syscat/NtBuildId.h"

namespace _SYSCAT_NAMESPACE {

#if defined(_SYSCAT_MSVC) && !defined(_SYSCAT_CLANG)
	__pragma(pack(push, 1));
#endif

	namespace _SYSCAT_INTERNAL_NAMESPACE {

		//
		// CInternalSyscallMask
		//
		struct CInternalSyscallMask {
		public:

			//
			// CInternalSyscallMask::CInternalSyscallMask
			//
			constexpr CInternalSyscallMask() noexcept = default;

			//
			// CInternalSyscallMask::CInternalSyscallMask
			//
			constexpr CInternalSyscallMask(SyscatByte Start, SyscatByte Length) noexcept : m_Start(Start), m_Length(Length) {
			}

			//
			// CInternalSyscallMask::IsVersion
			//
			constexpr bool IsVersion(EWindowsBuildId Version) const noexcept {
				if (SyscatByte(Version) < GetStart() || SyscatByte(Version) >= GetEnd()) {
					return false;
				}
				return true;
			}

			//
			// CInternalSyscallMask::GetEnd
			//
			constexpr SyscatByte GetEnd() const noexcept {
				return m_Start + m_Length;
			}

			//
			// CInternalSyscallMask::GetStart
			//
			constexpr SyscatByte GetStart() const noexcept {
				return m_Start;
			}

			//
			// CInternalSyscallMask::GetLength
			//
			constexpr SyscatByte GetLength() const noexcept {
				return m_Length;
			}

		private:
			SyscatByte m_Start{};
			SyscatByte m_Length{};
		} _SYSCAT_PACKED;


		//
		// _SyscallMasks
		//
		inline constexpr CInternalSyscallMask _SyscallMasks[] = {
			CInternalSyscallMask(0x0F, 0x01), CInternalSyscallMask(0x10, 0x01), 
			CInternalSyscallMask(0x00, 0x01), CInternalSyscallMask(0x01, 0x01),
			CInternalSyscallMask(0x02, 0x01), CInternalSyscallMask(0x0A, 0x01), 
			CInternalSyscallMask(0x0B, 0x01), CInternalSyscallMask(0x05, 0x01),
			CInternalSyscallMask(0x06, 0x01), CInternalSyscallMask(0x03, 0x01), 
			CInternalSyscallMask(0x07, 0x01), CInternalSyscallMask(0x0C, 0x01),
			CInternalSyscallMask(0x04, 0x01), CInternalSyscallMask(0x0D, 0x01), 
			CInternalSyscallMask(0x0E, 0x01), CInternalSyscallMask(0x08, 0x01),
			CInternalSyscallMask(0x09, 0x01), CInternalSyscallMask(0x13, 0x01), 
			CInternalSyscallMask(0x12, 0x01), CInternalSyscallMask(0x11, 0x01),
			CInternalSyscallMask(0x14, 0x01), CInternalSyscallMask(0x11, 0x04), 
			CInternalSyscallMask(0x00, 0x0F), CInternalSyscallMask(0x07, 0x03),
			CInternalSyscallMask(0x02, 0x05), CInternalSyscallMask(0x08, 0x02), 
			CInternalSyscallMask(0x0C, 0x05), CInternalSyscallMask(0x0A, 0x02),
			CInternalSyscallMask(0x11, 0x03), CInternalSyscallMask(0x11, 0x02), 
			CInternalSyscallMask(0x0C, 0x03), CInternalSyscallMask(0x02, 0x03),
			CInternalSyscallMask(0x0F, 0x02), CInternalSyscallMask(0x07, 0x05), 
			CInternalSyscallMask(0x05, 0x02), CInternalSyscallMask(0x12, 0x02),
			CInternalSyscallMask(0x0D, 0x02), CInternalSyscallMask(0x03, 0x02), 
			CInternalSyscallMask(0x00, 0x07), CInternalSyscallMask(0x00, 0x11),
			CInternalSyscallMask(0x01, 0x06),
		};


	} // namespace _SYSCAT_INTERNAL_NAMESPACE

	//
	// CSyscallNumber
	//
	class CSyscallNumber {
	public:

		//
		// SyscatPackedSsnType
		//
		using SyscatPackedSsnType = SyscatWord;

		//
		// CSyscallNumber::CSyscallNumber
		//
		constexpr CSyscallNumber() noexcept = default;

		//
		// CSyscallNumber::CSyscallNumber
		//
		constexpr CSyscallNumber(SyscatPackedSsnType PackedSyscallNumber) noexcept
			: m_PackedSyscallNumber(PackedSyscallNumber) {

		}

		//
		// CSyscallNumber::IsVersion
		//
		constexpr bool IsVersion(EWindowsBuildId WindowsVersion) const noexcept {
			SyscatDword MaskIdx = GetMaskIdx();

			if (!((MaskIdx >> 0x06) & 0x01)) {
				if (!_SYSCAT_INTERNAL_NAMESPACE::_SyscallMasks[MaskIdx].IsVersion(WindowsVersion)) {
					return false;
				}
				return true;
			}

			// TODO: Find a cheap way to avoid explicit handling of non-contiguous masks (W7 & WVISTA/WXP)
			SyscatDword Mask = (MaskIdx & 0x01) ? SyscatDword(0x00120000) : SyscatDword(0x000A0000);
			if ((Mask >> SyscatDword(WindowsVersion)) & 0x01) {
				return true;
			}
			return false;
		}

		//
		// CSyscallNumber::GetNumber
		//
		constexpr SyscatSsnType GetNumber() const noexcept {
			return (m_PackedSyscallNumber >> 0x07);
		}

	protected:

		//
		// CSyscallNumber::GetMaskIdx
		//
		constexpr SyscatWord GetMaskIdx() const noexcept {
			return m_PackedSyscallNumber & ((0x01 << 0x07) - 0x01);
		}

	private:
		SyscatPackedSsnType m_PackedSyscallNumber{};
	} _SYSCAT_PACKED;

	//
	// GetSsnFromList
	//   Search the syscall tables list for a specific version
	//
	template<SyscatDword _SyscallsLength>
	constexpr SyscatSsnType GetSsnFromList(const CSyscallNumber(&SyscallNumbers)[_SyscallsLength], EWindowsBuildId BuildId) noexcept {
		for (SyscatDword i = 0; i < _SyscallsLength; ++i) {
			if (SyscallNumbers[i].IsVersion(BuildId)) {
				return SyscallNumbers[i].GetNumber();
			}
		}
		return kInvalidSyscallNumber;
	}

	//
	// GetSsn
	//   Search the syscall table for a specific version
	//
	template<class _SyscallTable>
	constexpr SyscatSsnType GetSsn(EWindowsBuildId BuildId) noexcept {
		return GetSsnFromList(_SyscallTable::_Table, BuildId);
	}

#if defined(_SYSCAT_MSVC) && !defined(_SYSCAT_CLANG)
	__pragma(pack(pop));
#endif

} // namespace _SYSCAT_NAMESPACE

#endif