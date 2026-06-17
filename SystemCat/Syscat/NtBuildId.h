#ifndef _SYSCAT_BUILD_NUMBER_H
#define _SYSCAT_BUILD_NUMBER_H

#include "Syscat/SyscatDefinitions.h"
#include "Syscat/NtApi.h"

namespace _SYSCAT_NAMESPACE {

    //
    // EWindowsBuildId
    //   https://j00ru.vexillium.org/syscalls/nt/64/
    //
    enum class EWindowsBuildId : SyscatByte {
#ifdef SYSCAT_WIN11
        W11_24H2 = 0,
        WSERVER_2025 = W11_24H2,
        W11_25H2 = W11_24H2,
        
        WSERVER_23H2 = 1,

        W11_22H2 = 2,
        W11_23H2 = W11_22H2,

        W11_21H2 = 3,
        WSERVER_2022 = 4,
#endif
#ifdef SYSCAT_WIN10
        W10_21H2 = 5,
        W10_22H2 = W10_21H2,

        W10_2004 = 6,
        W10_20H2 = W10_2004,
        W10_21H1 = W10_2004,

        W10_1903 = 7,
        W10_1909 = W10_1903,

        W10_1809 = 8,
        W10_1803 = 9,
        W10_1709 = 10,
        W10_1703 = 11,
        W10_1607 = 12,
        W10_1511 = 13,
        W10_1507 = 14,
#endif
#ifdef SYSCAT_WIN8
        W8_1 = 15,
        W8 = 16,
#endif
#ifdef SYSCAT_WIN_OLD
        W7 = 17,
        W7_SP1 = W7,

        WVISTA_SP1 = 18,
        WVISTA_SP2 = WVISTA_SP1,

        WVISTA = 19,

        WXP = 20,
        WXP_SP1 = WXP,
        WXP_SP2 = WXP,
        WSERVER_2003_R2_SP2 = WXP,
        WSERVER_2003_R2 = WXP,
        WSERVER_2003_SP2 = WXP,
        WSERVER_2003 = WXP,
#endif

        WINVALID_VERSION
    };

    //
    // GetBuildNumberId
    // 
    //  Note: For loop over build numbers would work here but would cause inconsistency 
    //        with config definitions for specific version inclusion.
    //
    constexpr EWindowsBuildId GetBuildNumberId(SyscatBuildNumberType BuildNumber) noexcept {
        switch (BuildNumber) {
#if defined(SYSCAT_WIN11)
        case 26200: return EWindowsBuildId::W11_25H2;
        case 26100: return EWindowsBuildId::W11_24H2; // IsOsBuildServer() ? EWindowsBuildId::WSERVER_2025 : EWindowsBuildId::W11_24H2;
        case 25398: return EWindowsBuildId::WSERVER_23H2;
        case 22631: return EWindowsBuildId::W11_23H2;
        case 22621: return EWindowsBuildId::W11_22H2;
        case 22000: return EWindowsBuildId::W11_21H2;
        case 20348: return EWindowsBuildId::WSERVER_2022;
#endif
#if defined(SYSCAT_WIN10)
        case 19045: return EWindowsBuildId::W10_22H2;
        case 19044: return EWindowsBuildId::W10_21H2;
        case 19043: return EWindowsBuildId::W10_21H1;
        case 19042: return EWindowsBuildId::W10_20H2;
        case 19041: return EWindowsBuildId::W10_2004;
        case 18363: return EWindowsBuildId::W10_1909;
        case 18362: return EWindowsBuildId::W10_1903;
        case 17763: return EWindowsBuildId::W10_1809;
        case 17134: return EWindowsBuildId::W10_1803;
        case 16299: return EWindowsBuildId::W10_1709;
        case 15063: return EWindowsBuildId::W10_1703;
        case 14393: return EWindowsBuildId::W10_1607;
        case 10586: return EWindowsBuildId::W10_1511;
        case 10240: return EWindowsBuildId::W10_1507;
#endif
#if defined(SYSCAT_WIN8)
        case 9600: return EWindowsBuildId::W8_1;
        case 9200: return EWindowsBuildId::W8;
#endif
#if defined(SYSCAT_WIN_OLD)
        case 7601: return EWindowsBuildId::W7_SP1;
        case 7600: return EWindowsBuildId::W7;
        case 6002: return EWindowsBuildId::WVISTA_SP2;
        case 6001: return EWindowsBuildId::WVISTA_SP1;
        case 6000: return EWindowsBuildId::WVISTA;
        case 3790: return EWindowsBuildId::WSERVER_2003_R2_SP2;
        case 2600: return EWindowsBuildId::WXP_SP2;
#endif
        default: return EWindowsBuildId::WINVALID_VERSION;
        }
    }

    //
    // GetCurrentBuildId
    //  Get buildid if uninitialized, otherwise return static variable.
    //
    inline EWindowsBuildId GetCurrentBuildId() noexcept {
        static EWindowsBuildId _CurrentBuildId = EWindowsBuildId::WINVALID_VERSION;
        if (_CurrentBuildId == EWindowsBuildId::WINVALID_VERSION) {
            _CurrentBuildId = GetBuildNumberId(GetOsBuildNumber());
        }
        return _CurrentBuildId;
    }

} // namespace _SYSCAT_NAMESPACE

#endif