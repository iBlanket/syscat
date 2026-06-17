#ifndef _SYSCAT_SYSCALL_LISTS_H
#define _SYSCAT_SYSCALL_LISTS_H

#include "Syscat/NtNumber.h"

namespace _SYSCAT_NAMESPACE {

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtAcceptConnectPort {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x0116},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x0080}, {0x3081},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x3015},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtAccessCheck {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x0016},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x3120},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x3095},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtAccessCheckAndAuditAlarm {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x1496},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x1381}, {0x1400},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x1315},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtAccessCheckByType {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8)
            {0x31A7},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x3115},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtAccessCheckByTypeAndAuditAlarm {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x2C96},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x2B81}, {0x2C00},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x2B15},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtAccessCheckByTypeResultList {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8)
            {0x3227},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x3195},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtAccessCheckByTypeResultListAndAuditAlarm {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8)
            {0x32A7},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x3215},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtAccessCheckByTypeResultListAndAuditAlarmByHandle {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8)
            {0x3327},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x3295},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN_OLD)
    class CNtAcquireCMFViewOwnership {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            {0x3323},
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
    class CNtAcquireCrossVmMutant {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            {0x33A6},
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
    class CNtAcquireProcessActivityReference {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x3426},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x33A1},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtAddAtom {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x2396},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x2281}, {0x2300},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x2215},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8)
    class CNtAddAtomEx {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x34A6},
            #endif
            #if defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8)
            {0x339A},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x3421},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtAddBootEntry {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x3526},
            #endif
            #if defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8)
            {0x341A},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x34A1},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x3341}, {0x33A3},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtAddDriverEntry {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x35A6},
            #endif
            #if defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8)
            {0x349A},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x3521},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x33C1}, {0x3423},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtAdjustGroupsToken {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x3626},
            #endif
            #if defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8)
            {0x351A},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x35A1},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x3441}, {0x34A3},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtAdjustPrivilegesToken {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x2096},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x1F81}, {0x2000},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x1F15},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8)
    class CNtAdjustTokenClaimsAndDeviceGroups {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x36A6},
            #endif
            #if defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8)
            {0x359A},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x3621},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11)
    class CNtAlertMultipleThreadByThreadId {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            {0x3702},
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtAlertResumeThread {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x3728},
            #endif
            #if defined(SYSCAT_WIN11)
            {0x3782},
            #endif
            #if defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8)
            {0x361A},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x36A1},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x34C1}, {0x3523},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtAlertThread {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x37A8},
            #endif
            #if defined(SYSCAT_WIN11)
            {0x3802},
            #endif
            #if defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8)
            {0x369A},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x3721},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x3541}, {0x35A3},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8)
    class CNtAlertThreadByThreadId {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x3828},
            #endif
            #if defined(SYSCAT_WIN11)
            {0x3882},
            #endif
            #if defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8)
            {0x371A},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x37A1},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11)
    class CNtAlertThreadByThreadIdEx {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            {0x3883}, {0x3902},
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtAllocateLocallyUniqueId {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x3898},
            #endif
            #if defined(SYSCAT_WIN11)
            {0x3903}, {0x3982},
            #endif
            #if defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8)
            {0x379A},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x3821},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x35C1}, {0x3623},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtAllocateReserveObject {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x3918},
            #endif
            #if defined(SYSCAT_WIN11)
            {0x3983}, {0x3A02},
            #endif
            #if defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8)
            {0x381A},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x38A1},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x3613},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtAllocateUserPhysicalPages {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x3998},
            #endif
            #if defined(SYSCAT_WIN11)
            {0x3A03}, {0x3A82},
            #endif
            #if defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8)
            {0x389A},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x3921},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x3614}, {0x369C},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
    class CNtAllocateUserPhysicalPagesEx {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x3A18},
            #endif
            #if defined(SYSCAT_WIN11)
            {0x3A83}, {0x3B02},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtAllocateUuids {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x3A98},
            #endif
            #if defined(SYSCAT_WIN11)
            {0x3B03}, {0x3B82},
            #endif
            #if defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8)
            {0x391A},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x39A1},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x3694}, {0x371C},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtAllocateVirtualMemory {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x0C16},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x0B01}, {0x0B80},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x0A95},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
    class CNtAllocateVirtualMemoryEx {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x3B18},
            #endif
            #if defined(SYSCAT_WIN11)
            {0x3B83}, {0x3C02},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x3A17},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtAlpcAcceptConnectPort {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x3B98},
            #endif
            #if defined(SYSCAT_WIN11)
            {0x3C03}, {0x3C82},
            #endif
            #if defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8)
            {0x399A},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x3A1B}, {0x3A97},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x379C},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtAlpcCancelMessage {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x3C18},
            #endif
            #if defined(SYSCAT_WIN11)
            {0x3C83}, {0x3D02},
            #endif
            #if defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8)
            {0x3A1A},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x3A9B}, {0x3B17},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x381C},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtAlpcConnectPort {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x3C98},
            #endif
            #if defined(SYSCAT_WIN11)
            {0x3D03}, {0x3D82},
            #endif
            #if defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8)
            {0x3A9A},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x3B1B}, {0x3B97},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x389C},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8)
    class CNtAlpcConnectPortEx {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x3D18},
            #endif
            #if defined(SYSCAT_WIN11)
            {0x3D83}, {0x3E02},
            #endif
            #if defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8)
            {0x3B1A},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x3B9B}, {0x3C17},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtAlpcCreatePort {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x3D98},
            #endif
            #if defined(SYSCAT_WIN11)
            {0x3E03}, {0x3E82},
            #endif
            #if defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8)
            {0x3B9A},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x3C1B}, {0x3C97},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x391C},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtAlpcCreatePortSection {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x3E18},
            #endif
            #if defined(SYSCAT_WIN11)
            {0x3E83}, {0x3F02},
            #endif
            #if defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8)
            {0x3C1A},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x3C9B}, {0x3D17},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x399C},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtAlpcCreateResourceReserve {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x3E98},
            #endif
            #if defined(SYSCAT_WIN11)
            {0x3F03}, {0x3F82},
            #endif
            #if defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8)
            {0x3C9A},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x3D1B}, {0x3D97},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x3A1C},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtAlpcCreateSectionView {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x3F18},
            #endif
            #if defined(SYSCAT_WIN11)
            {0x3F83}, {0x4002},
            #endif
            #if defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8)
            {0x3D1A},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x3D9B}, {0x3E17},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x3A9C},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtAlpcCreateSecurityContext {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x3F98},
            #endif
            #if defined(SYSCAT_WIN11)
            {0x4003}, {0x4082},
            #endif
            #if defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8)
            {0x3D9A},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x3E1B}, {0x3E97},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x3B1C},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtAlpcDeletePortSection {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x4018},
            #endif
            #if defined(SYSCAT_WIN11)
            {0x4083}, {0x4102},
            #endif
            #if defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8)
            {0x3E1A},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x3E9B}, {0x3F17},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x3B9C},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtAlpcDeleteResourceReserve {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x4098},
            #endif
            #if defined(SYSCAT_WIN11)
            {0x4103}, {0x4182},
            #endif
            #if defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8)
            {0x3E9A},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x3F1B}, {0x3F97},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x3C1C},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtAlpcDeleteSectionView {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x4118},
            #endif
            #if defined(SYSCAT_WIN11)
            {0x4183}, {0x4202},
            #endif
            #if defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8)
            {0x3F1A},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x3F9B}, {0x4017},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x3C9C},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtAlpcDeleteSecurityContext {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x4198},
            #endif
            #if defined(SYSCAT_WIN11)
            {0x4203}, {0x4282},
            #endif
            #if defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8)
            {0x3F9A},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x401B}, {0x4097},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x3D1C},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtAlpcDisconnectPort {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x4218},
            #endif
            #if defined(SYSCAT_WIN11)
            {0x4283}, {0x4302},
            #endif
            #if defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8)
            {0x401A},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x409B}, {0x4117},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x3D9C},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
    class CNtAlpcImpersonateClientContainerOfPort {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x4298},
            #endif
            #if defined(SYSCAT_WIN11)
            {0x4303}, {0x4382},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x409E}, {0x411B}, {0x4197},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtAlpcImpersonateClientOfPort {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x4318},
            #endif
            #if defined(SYSCAT_WIN11)
            {0x4383}, {0x4402},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x411E}, {0x419B}, {0x4217},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x40A0},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x3E1C},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtAlpcOpenSenderProcess {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x4398},
            #endif
            #if defined(SYSCAT_WIN11)
            {0x4403}, {0x4482},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x419E}, {0x421B}, {0x4297},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x4120},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x3E9C},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtAlpcOpenSenderThread {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x4418},
            #endif
            #if defined(SYSCAT_WIN11)
            {0x4483}, {0x4502},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x421E}, {0x429B}, {0x4317},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x41A0},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x3F1C},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtAlpcQueryInformation {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x4498},
            #endif
            #if defined(SYSCAT_WIN11)
            {0x4503}, {0x4582},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x429E}, {0x431B}, {0x4397},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x4220},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x3F9C},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtAlpcQueryInformationMessage {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x4518},
            #endif
            #if defined(SYSCAT_WIN11)
            {0x4583}, {0x4602},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x431E}, {0x439B}, {0x4417},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x42A0},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x401C},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtAlpcRevokeSecurityContext {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x4598},
            #endif
            #if defined(SYSCAT_WIN11)
            {0x4603}, {0x4682},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x439E}, {0x441B}, {0x4497},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x4320},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x409C},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtAlpcSendWaitReceivePort {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x4618},
            #endif
            #if defined(SYSCAT_WIN11)
            {0x4683}, {0x4702},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x441E}, {0x449B}, {0x4517},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x43A0},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x411C},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtAlpcSetInformation {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x4698},
            #endif
            #if defined(SYSCAT_WIN11)
            {0x4703}, {0x4782},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x449E}, {0x451B}, {0x4597},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x4420},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x419C},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtApphelpCacheControl {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x2616},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x2501}, {0x2580},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x2495},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtAreMappedFilesTheSame {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x4718},
            #endif
            #if defined(SYSCAT_WIN11)
            {0x4783}, {0x4802},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x451E}, {0x459B}, {0x4617},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x44A0},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x3714}, {0x421C},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtAssignProcessToJobObject {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x4798},
            #endif
            #if defined(SYSCAT_WIN11)
            {0x4803}, {0x4882},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x459E}, {0x461B}, {0x4697},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x4520},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x3794}, {0x429C},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8)
    class CNtAssociateWaitCompletionPacket {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x4818},
            #endif
            #if defined(SYSCAT_WIN11)
            {0x4883}, {0x4902},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x461E}, {0x469B}, {0x4717},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x45A0},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
    class CNtCallEnclave {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x4898},
            #endif
            #if defined(SYSCAT_WIN11)
            {0x4903}, {0x4982},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x4705}, {0x4797},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtCallbackReturn {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x0296},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x0181}, {0x0200},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x0115},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN_OLD)
    class CNtCancelDeviceWakeupRequest {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            {0x3814}, {0x4323},
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtCancelIoFile {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x2E96},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x2D81}, {0x2E00},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x2D15},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtCancelIoFileEx {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x4918},
            #endif
            #if defined(SYSCAT_WIN11)
            {0x4983}, {0x4A02},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x469E}, {0x4706}, {0x4785}, {0x4817},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x4620},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x4313}, {0x43A3},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtCancelSynchronousIoFile {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x4998},
            #endif
            #if defined(SYSCAT_WIN11)
            {0x4A03}, {0x4A82},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x471E}, {0x4786}, {0x4805}, {0x4897},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x46A0},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x4393}, {0x4423},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtCancelTimer {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x3096},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x2F81}, {0x3000},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x2F15},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8)
    class CNtCancelTimer2 {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x4A18},
            #endif
            #if defined(SYSCAT_WIN11)
            {0x4A83}, {0x4B02},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x479E}, {0x4806}, {0x4885}, {0x4917},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x4700},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8)
    class CNtCancelWaitCompletionPacket {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x4A98},
            #endif
            #if defined(SYSCAT_WIN11)
            {0x4B03}, {0x4B82},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x481E}, {0x4886}, {0x4905}, {0x4997},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x4701}, {0x4780},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11)
    class CNtChangeProcessState {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            {0x4B1F}, {0x4B83}, {0x4C02},
        };
    };
#endif

#if defined(SYSCAT_WIN11)
    class CNtChangeThreadState {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            {0x4B9F}, {0x4C03}, {0x4C82},
        };
    };
#endif

#if defined(SYSCAT_WIN_OLD)
    class CNtClearAllSavepointsTransaction {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            {0x4491},
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtClearEvent {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x1F16},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x1E01}, {0x1E80},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x1D95},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN_OLD)
    class CNtClearSavepointTransaction {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            {0x4511},
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtClose {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x0796},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x0681}, {0x0700},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x0615},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtCloseObjectAuditAlarm {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x1D96},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x1C81}, {0x1D00},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x1C15},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtCommitComplete {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x4C1F}, {0x4C83}, {0x4D02},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x489E}, {0x4906}, {0x4985}, {0x4A17}, {0x4B22},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x4781}, {0x4800},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x4413}, {0x4492}, {0x4591},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtCommitEnlistment {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x4C9F}, {0x4D03}, {0x4D82},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x491E}, {0x4986}, {0x4A05}, {0x4A97}, {0x4BA2},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x4801}, {0x4880},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x4493}, {0x4512}, {0x4611},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
    class CNtCommitRegistryTransaction {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x4D1F}, {0x4D83}, {0x4E02},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x498B}, {0x4A06}, {0x4A85}, {0x4B17}, {0x4C22},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtCommitTransaction {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x4D9F}, {0x4E03}, {0x4E82},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x49A4}, {0x4A0B}, {0x4A86}, {0x4B05}, {0x4B97}, {0x4CA2},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x4881}, {0x4900},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x4513}, {0x4592}, {0x4691},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtCompactKeys {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x4E1F}, {0x4E83}, {0x4F02},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x4A24}, {0x4A8B}, {0x4B06}, {0x4B85}, {0x4C17}, {0x4D22},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x4901}, {0x4980},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x3894}, {0x4593}, {0x4612}, {0x4711},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
    class CNtCompareObjects {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x4E9F}, {0x4F03}, {0x4F82},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x4AA4}, {0x4B0B}, {0x4B86}, {0x4C05}, {0x4C97}, {0x4DA2},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
    class CNtCompareSigningLevels {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x4F1F}, {0x4F83}, {0x5002},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x4C06}, {0x4C85}, {0x4D17}, {0x4E22},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtCompareTokens {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x4F9F}, {0x5003}, {0x5082},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x4B24}, {0x4B8B}, {0x4C86}, {0x4D05}, {0x4D97}, {0x4EA2},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x4981}, {0x4A00},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x3914}, {0x4613}, {0x4692}, {0x4791},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtCompleteConnectPort {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x501F}, {0x5083}, {0x5102},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x4BA4}, {0x4C0B}, {0x4D06}, {0x4D85}, {0x4E17}, {0x4F22},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x4A01}, {0x4A80},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x3994}, {0x4693}, {0x4712}, {0x4811},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtCompressKey {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x509F}, {0x5103}, {0x5182},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x4C24}, {0x4C8B}, {0x4D86}, {0x4E05}, {0x4E97}, {0x4FA2},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x4A81}, {0x4B00},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x3A14}, {0x4713}, {0x4792}, {0x4891},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtConnectPort {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x511F}, {0x5183}, {0x5202},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x4CA4}, {0x4D0B}, {0x4E06}, {0x4E85}, {0x4F17}, {0x5022},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x4B01}, {0x4B80},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x3A94}, {0x4793}, {0x4812}, {0x4911},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtContinue {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x2196},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x2081}, {0x2100},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x2015},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
    class CNtContinueEx {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x519F}, {0x5203}, {0x5282},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x50A2},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
    class CNtConvertBetweenAuxiliaryCounterAndPerformanceCounter {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x521F}, {0x5283}, {0x5302},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x4E86}, {0x4F05}, {0x4F97}, {0x5122},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
    class CNtCopyFileChunk {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x529F}, {0x5303}, {0x5382},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x5187},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11)
    class CNtCreateCpuPartition {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            {0x5304}, {0x5383}, {0x5402},
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
    class CNtCreateCrossVmEvent {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x5325}, {0x5384}, {0x5403}, {0x5482},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x500A}, {0x5188}, {0x5207},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
    class CNtCreateCrossVmMutant {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x53A5}, {0x5404}, {0x5483}, {0x5502},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x5208}, {0x5287},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtCreateDebugObject {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x5425}, {0x5484}, {0x5503}, {0x5582},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x4D24}, {0x4D8B}, {0x4F06}, {0x4F85}, {0x5019}, {0x508A}, {0x5288}, {0x5307},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x4B81}, {0x4C00},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x3B14}, {0x4813}, {0x4892}, {0x4991},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtCreateDirectoryObject {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x54A5}, {0x5504}, {0x5583}, {0x5602},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x4DA4}, {0x4E0B}, {0x4F86}, {0x5005}, {0x5099}, {0x510A}, {0x5308}, {0x5387},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x4C01}, {0x4C80},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x3B94}, {0x4893}, {0x4912}, {0x4A11},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8)
    class CNtCreateDirectoryObjectEx {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x5525}, {0x5584}, {0x5603}, {0x5682},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x4E24}, {0x4E8B}, {0x5006}, {0x5085}, {0x5119}, {0x518A}, {0x5388}, {0x5407},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x4C81}, {0x4D00},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
    class CNtCreateEnclave {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x55A5}, {0x5604}, {0x5683}, {0x5702},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x4E8D}, {0x4F0B}, {0x5086}, {0x5105}, {0x5199}, {0x520A}, {0x5408}, {0x5487},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtCreateEnlistment {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x5625}, {0x5684}, {0x5703}, {0x5782},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x4E8E}, {0x4F0D}, {0x4F8B}, {0x5106}, {0x5185}, {0x5219}, {0x528A}, {0x5488}, {0x5507},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x4D01}, {0x4D80},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x4913}, {0x4992}, {0x4A91},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtCreateEvent {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x2416},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x2301}, {0x2380},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x2295},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtCreateEventPair {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x56A5}, {0x5704}, {0x5783}, {0x5802},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x4F0E}, {0x4F8D}, {0x500B}, {0x5186}, {0x5205}, {0x5299}, {0x530A}, {0x5508}, {0x5587},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x4D81}, {0x4E00},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x3C14}, {0x4993}, {0x4A12}, {0x4B11},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtCreateFile {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x2A96},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x2981}, {0x2A00},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x2915},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8)
    class CNtCreateIRTimer {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x5725}, {0x5784}, {0x5803}, {0x5882},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x4F8E}, {0x500D}, {0x508B}, {0x5206}, {0x5285}, {0x5319}, {0x538A}, {0x5588}, {0x5607},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x4E01}, {0x4E80},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtCreateIoCompletion {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x57A5}, {0x5804}, {0x5883}, {0x5902},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x500E}, {0x508D}, {0x510B}, {0x5286}, {0x5305}, {0x5399}, {0x540A}, {0x5608}, {0x5687},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x4E81}, {0x4F00},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x3C94}, {0x4A13}, {0x4A92}, {0x4B91},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11)
    class CNtCreateIoRing {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            {0x5809}, {0x5884}, {0x5903}, {0x5982},
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtCreateJobObject {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x580C}, {0x5889}, {0x5904}, {0x5983}, {0x5A02},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x508E}, {0x510D}, {0x518B}, {0x5306}, {0x5385}, {0x5419}, {0x548A}, {0x5688}, {0x5707},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x4F01}, {0x4F80},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x3D14}, {0x4A93}, {0x4B12}, {0x4C11},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtCreateJobSet {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x588C}, {0x5909}, {0x5984}, {0x5A03}, {0x5A82},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x510E}, {0x518D}, {0x520B}, {0x5386}, {0x5405}, {0x5499}, {0x550A}, {0x5708}, {0x5787},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x4F81}, {0x5000},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x3D94}, {0x4B13}, {0x4B92}, {0x4C91},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtCreateKey {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x0E96},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x0D81}, {0x0E00},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x0D15},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtCreateKeyTransacted {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x590C}, {0x5989}, {0x5A04}, {0x5A83}, {0x5B02},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x518E}, {0x520D}, {0x528B}, {0x5406}, {0x5485}, {0x5519}, {0x558A}, {0x5788}, {0x5807},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x5001}, {0x5080},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x4B93}, {0x4C12}, {0x4D11},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtCreateKeyedEvent {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x598C}, {0x5A09}, {0x5A84}, {0x5B03}, {0x5B82},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x520E}, {0x528D}, {0x530B}, {0x5486}, {0x5505}, {0x5599}, {0x560A}, {0x5808}, {0x5887},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x5081}, {0x5100},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x3E14}, {0x4C13}, {0x4C92}, {0x4D91},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8)
    class CNtCreateLowBoxToken {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x5A0C}, {0x5A89}, {0x5B04}, {0x5B83}, {0x5C02},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x528E}, {0x530D}, {0x538B}, {0x5506}, {0x5585}, {0x5619}, {0x568A}, {0x5888}, {0x5907},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x5101}, {0x5180},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtCreateMailslotFile {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x5A8C}, {0x5B09}, {0x5B84}, {0x5C03}, {0x5C82},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x530E}, {0x538D}, {0x540B}, {0x5586}, {0x5605}, {0x5699}, {0x570A}, {0x5908}, {0x5987},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x5181}, {0x5200},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x3E94}, {0x4C93}, {0x4D12}, {0x4E11},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtCreateMutant {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x5B0C}, {0x5B89}, {0x5C04}, {0x5C83}, {0x5D02},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x538E}, {0x540D}, {0x548B}, {0x5606}, {0x5685}, {0x5719}, {0x578A}, {0x5988}, {0x5A07},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x5201}, {0x5280},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x3F14}, {0x4D13}, {0x4D92}, {0x4E91},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtCreateNamedPipeFile {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x5B8C}, {0x5C09}, {0x5C84}, {0x5D03}, {0x5D82},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x540E}, {0x548D}, {0x550B}, {0x5686}, {0x5705}, {0x5799}, {0x580A}, {0x5A08}, {0x5A87},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x5281}, {0x5300},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x3F94}, {0x4D93}, {0x4E12}, {0x4F11},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtCreatePagingFile {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x5C0C}, {0x5C89}, {0x5D04}, {0x5D83}, {0x5E02},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x548E}, {0x550D}, {0x558B}, {0x5706}, {0x5785}, {0x5819}, {0x588A}, {0x5A88}, {0x5B07},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x5301}, {0x5380},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x4014}, {0x4E13}, {0x4E92}, {0x4F91},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
    class CNtCreatePartition {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x5C8C}, {0x5D09}, {0x5D84}, {0x5E03}, {0x5E82},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x550E}, {0x558D}, {0x560B}, {0x5786}, {0x5805}, {0x5899}, {0x590A}, {0x5B08}, {0x5B87},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtCreatePort {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x5D0C}, {0x5D89}, {0x5E04}, {0x5E83}, {0x5F02},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x558E}, {0x560D}, {0x568B}, {0x5806}, {0x5885}, {0x5919}, {0x598A}, {0x5B88}, {0x5C07},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x5381}, {0x5400},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x4094}, {0x4E93}, {0x4F12}, {0x5011},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtCreatePrivateNamespace {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x5D8C}, {0x5E09}, {0x5E84}, {0x5F03}, {0x5F82},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x560E}, {0x568D}, {0x570B}, {0x5886}, {0x5905}, {0x5999}, {0x5A0A}, {0x5C08}, {0x5C87},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x5401}, {0x5480},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x4F13}, {0x4F92}, {0x5091},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtCreateProcess {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x5E0C}, {0x5E89}, {0x5F04}, {0x5F83}, {0x6002},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x568E}, {0x570D}, {0x578B}, {0x5906}, {0x5985}, {0x5A19}, {0x5A8A}, {0x5C88}, {0x5D07},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x5481}, {0x5500},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x4114}, {0x4F93}, {0x5012}, {0x5111},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtCreateProcessEx {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x2696},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x2581}, {0x2600},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x2515},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11)
    class CNtCreateProcessStateChange {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            {0x5E8C}, {0x5F09}, {0x5F84}, {0x6003}, {0x6082},
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtCreateProfile {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x5F0C}, {0x5F89}, {0x6004}, {0x6083}, {0x6102},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x570E}, {0x578D}, {0x580B}, {0x5986}, {0x5A05}, {0x5A99}, {0x5B0A}, {0x5D08}, {0x5D87},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x5501}, {0x5580},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x4194}, {0x5013}, {0x5092}, {0x5191},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtCreateProfileEx {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x5F8C}, {0x6009}, {0x6084}, {0x6103}, {0x6182},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x578E}, {0x580D}, {0x588B}, {0x5A06}, {0x5A85}, {0x5B19}, {0x5B8A}, {0x5D88}, {0x5E07},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x5581}, {0x5600},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x5093},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
    class CNtCreateRegistryTransaction {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x600C}, {0x6089}, {0x6104}, {0x6183}, {0x6202},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x590B}, {0x5A86}, {0x5B05}, {0x5B99}, {0x5C0A}, {0x5E08}, {0x5E87},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtCreateResourceManager {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x608C}, {0x6109}, {0x6184}, {0x6203}, {0x6282},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x580E}, {0x588D}, {0x598B}, {0x5B06}, {0x5B85}, {0x5C19}, {0x5C8A}, {0x5E88}, {0x5F07},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x5601}, {0x5680},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x511D}, {0x5211},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtCreateSection {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x2516},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x2401}, {0x2480},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x2395},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
    class CNtCreateSectionEx {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x610C}, {0x6189}, {0x6204}, {0x6283}, {0x6302},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x5C8F}, {0x5D0A}, {0x5F08}, {0x5F87},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtCreateSemaphore {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x618C}, {0x6209}, {0x6284}, {0x6303}, {0x6382},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x588E}, {0x590D}, {0x5A0B}, {0x5B86}, {0x5C05}, {0x5C90}, {0x5D0F}, {0x5D8A}, {0x5F88}, {0x6007},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x5681}, {0x5700},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x4214}, {0x519D}, {0x5291},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtCreateSymbolicLinkObject {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x620C}, {0x6289}, {0x6304}, {0x6383}, {0x6402},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x590E}, {0x598D}, {0x5A8B}, {0x5C06}, {0x5C85}, {0x5D10}, {0x5D8F}, {0x5E0A}, {0x6008}, {0x6087},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x5701}, {0x5780},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x4294}, {0x521D}, {0x5311},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtCreateThread {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x2716},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x2601}, {0x2680},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x2595},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtCreateThreadEx {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x628C}, {0x6309}, {0x6384}, {0x6403}, {0x6482},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x598E}, {0x5A0D}, {0x5B0B}, {0x5C86}, {0x5D05}, {0x5D90}, {0x5E0F}, {0x5E8A}, {0x6088}, {0x6107},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x5781}, {0x5800},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x529D}, {0x5391},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11)
    class CNtCreateThreadStateChange {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            {0x630C}, {0x6389}, {0x6404}, {0x6483}, {0x6502},
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtCreateTimer {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x638C}, {0x6409}, {0x6484}, {0x6503}, {0x6582},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x5A0E}, {0x5A8D}, {0x5B8B}, {0x5D06}, {0x5D85}, {0x5E10}, {0x5E8F}, {0x5F0A}, {0x6108}, {0x6187},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x5801}, {0x5880},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x4314}, {0x531D}, {0x5411},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8)
    class CNtCreateTimer2 {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x640C}, {0x6489}, {0x6504}, {0x6583}, {0x6602},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x5A8E}, {0x5B0D}, {0x5C0B}, {0x5D86}, {0x5E05}, {0x5E90}, {0x5F0F}, {0x5F8A}, {0x6188}, {0x6207},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x5900},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtCreateToken {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x648C}, {0x6509}, {0x6584}, {0x6603}, {0x6682},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x5B0E}, {0x5B8D}, {0x5C8B}, {0x5E06}, {0x5E85}, {0x5F10}, {0x5F8F}, {0x600A}, {0x6208}, {0x6287},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x5881}, {0x5980},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x4394}, {0x539D}, {0x5491},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8)
    class CNtCreateTokenEx {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x650C}, {0x6589}, {0x6604}, {0x6683}, {0x6702},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x5B8E}, {0x5C0D}, {0x5D0B}, {0x5E86}, {0x5F05}, {0x5F90}, {0x600F}, {0x608A}, {0x6288}, {0x6307},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x5901}, {0x5A00},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtCreateTransaction {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x658C}, {0x6609}, {0x6684}, {0x6703}, {0x6782},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x5C0E}, {0x5C8D}, {0x5D8B}, {0x5F06}, {0x5F85}, {0x6010}, {0x608F}, {0x610A}, {0x6308}, {0x6387},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x5981}, {0x5A80},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x541D}, {0x5511},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtCreateTransactionManager {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x660C}, {0x6689}, {0x6704}, {0x6783}, {0x6802},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x5C8E}, {0x5D0D}, {0x5E0B}, {0x5F86}, {0x6005}, {0x6090}, {0x610F}, {0x618A}, {0x6388}, {0x6407},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x5A01}, {0x5B00},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x549D}, {0x5591},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtCreateUserProcess {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x668C}, {0x6709}, {0x6784}, {0x6803}, {0x6882},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x5D0E}, {0x5D8D}, {0x5E8B}, {0x6006}, {0x6085}, {0x6110}, {0x618F}, {0x620A}, {0x6408}, {0x6487},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x5A81}, {0x5B80},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x551D}, {0x5611},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8)
    class CNtCreateWaitCompletionPacket {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x670C}, {0x6789}, {0x6804}, {0x6883}, {0x6902},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x5D8E}, {0x5E0D}, {0x5F0B}, {0x6086}, {0x6105}, {0x6190}, {0x620F}, {0x628A}, {0x6488}, {0x6507},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x5B01}, {0x5C00},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtCreateWaitablePort {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x678C}, {0x6809}, {0x6884}, {0x6903}, {0x6982},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x5E0E}, {0x5E8D}, {0x5F8B}, {0x6106}, {0x6185}, {0x6210}, {0x628F}, {0x630A}, {0x6508}, {0x6587},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x5B81}, {0x5C80},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x4414}, {0x559D}, {0x5691},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8)
    class CNtCreateWnfStateName {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x680C}, {0x6889}, {0x6904}, {0x6983}, {0x6A02},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x5E8E}, {0x5F0D}, {0x600B}, {0x6186}, {0x6205}, {0x6290}, {0x630F}, {0x638A}, {0x6588}, {0x6607},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x5C01}, {0x5D00},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtCreateWorkerFactory {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x688C}, {0x6909}, {0x6984}, {0x6A03}, {0x6A82},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x5F0E}, {0x5F8D}, {0x608B}, {0x6206}, {0x6285}, {0x6310}, {0x638F}, {0x640A}, {0x6608}, {0x6687},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x5C81}, {0x5D80},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x561D}, {0x5711},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtDebugActiveProcess {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x690C}, {0x6989}, {0x6A04}, {0x6A83}, {0x6B02},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x5F8E}, {0x600D}, {0x610B}, {0x6286}, {0x6305}, {0x6390}, {0x640F}, {0x648A}, {0x6688}, {0x6707},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x5D01}, {0x5E00},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x4494}, {0x569D}, {0x5791},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtDebugContinue {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x698C}, {0x6A09}, {0x6A84}, {0x6B03}, {0x6B82},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x600E}, {0x608D}, {0x618B}, {0x6306}, {0x6385}, {0x6410}, {0x648F}, {0x650A}, {0x6708}, {0x6787},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x5D81}, {0x5E80},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x4514}, {0x571D}, {0x5811},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtDelayExecution {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x1A16},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x1901}, {0x1980},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x1895},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtDeleteAtom {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x6A0C}, {0x6A89}, {0x6B04}, {0x6B83}, {0x6C02},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x608E}, {0x610D}, {0x620B}, {0x6386}, {0x6405}, {0x6490}, {0x650F}, {0x658A}, {0x6788}, {0x6807},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x5E01}, {0x5F00},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x4594}, {0x579D}, {0x5891},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtDeleteBootEntry {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x6A8C}, {0x6B09}, {0x6B84}, {0x6C03}, {0x6C82},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x610E}, {0x618D}, {0x628B}, {0x6406}, {0x6485}, {0x6510}, {0x658F}, {0x660A}, {0x6808}, {0x6887},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x5E81}, {0x5F80},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x4614}, {0x581D}, {0x5911},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtDeleteDriverEntry {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x6B0C}, {0x6B89}, {0x6C04}, {0x6C83}, {0x6D02},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x618E}, {0x620D}, {0x630B}, {0x6486}, {0x6505}, {0x6590}, {0x660F}, {0x668A}, {0x6888}, {0x6907},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x5F01}, {0x6000},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x4694}, {0x589D}, {0x5991},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtDeleteFile {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x6B8C}, {0x6C09}, {0x6C84}, {0x6D03}, {0x6D82},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x620E}, {0x628D}, {0x638B}, {0x6506}, {0x6585}, {0x6610}, {0x668F}, {0x670A}, {0x6908}, {0x6987},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x5F81}, {0x6080},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x4714}, {0x591D}, {0x5A11},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtDeleteKey {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x6C0C}, {0x6C89}, {0x6D04}, {0x6D83}, {0x6E02},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x628E}, {0x630D}, {0x640B}, {0x6586}, {0x6605}, {0x6690}, {0x670F}, {0x678A}, {0x6988}, {0x6A07},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x6001}, {0x6100},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x4794}, {0x599D}, {0x5A91},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtDeleteObjectAuditAlarm {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x6C8C}, {0x6D09}, {0x6D84}, {0x6E03}, {0x6E82},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x630E}, {0x638D}, {0x648B}, {0x6606}, {0x6685}, {0x6710}, {0x678F}, {0x680A}, {0x6A08}, {0x6A87},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x6081}, {0x6180},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x4814}, {0x5A1D}, {0x5B11},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtDeletePrivateNamespace {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x6D0C}, {0x6D89}, {0x6E04}, {0x6E83}, {0x6F02},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x638E}, {0x640D}, {0x650B}, {0x6686}, {0x6705}, {0x6790}, {0x680F}, {0x688A}, {0x6A88}, {0x6B07},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x6101}, {0x6200},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x5A9D}, {0x5B91},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtDeleteValueKey {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x6D8C}, {0x6E09}, {0x6E84}, {0x6F03}, {0x6F82},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x640E}, {0x648D}, {0x658B}, {0x6706}, {0x6785}, {0x6810}, {0x688F}, {0x690A}, {0x6B08}, {0x6B87},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x6181}, {0x6280},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x4894}, {0x5B1D}, {0x5C11},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8)
    class CNtDeleteWnfStateData {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x6E0C}, {0x6E89}, {0x6F04}, {0x6F83}, {0x7002},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x648E}, {0x650D}, {0x660B}, {0x6786}, {0x6805}, {0x6890}, {0x690F}, {0x698A}, {0x6B88}, {0x6C07},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x6201}, {0x6300},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8)
    class CNtDeleteWnfStateName {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x6E8C}, {0x6F09}, {0x6F84}, {0x7003}, {0x7082},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x650E}, {0x658D}, {0x668B}, {0x6806}, {0x6885}, {0x6910}, {0x698F}, {0x6A0A}, {0x6C08}, {0x6C87},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x6281}, {0x6380},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtDeviceIoControlFile {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x0396},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x0281}, {0x0300},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x0215},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
    class CNtDirectGraphicsCall {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x6F0C}, {0x6F89}, {0x7004}, {0x7083}, {0x7102},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x6C88}, {0x6D07},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtDisableLastKnownGood {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x6F8C}, {0x7009}, {0x7084}, {0x7103}, {0x7182},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x658E}, {0x660D}, {0x670B}, {0x6886}, {0x6905}, {0x6990}, {0x6A0F}, {0x6A8A}, {0x6D08}, {0x6D87},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x6301}, {0x6400},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x5B93},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtDisplayString {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x700C}, {0x7089}, {0x7104}, {0x7183}, {0x7202},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x660E}, {0x668D}, {0x678B}, {0x6906}, {0x6985}, {0x6A10}, {0x6A8F}, {0x6B0A}, {0x6D88}, {0x6E07},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x6381}, {0x6480},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x4914}, {0x5B92}, {0x5C13}, {0x5C91},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtDrawText {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x708C}, {0x7109}, {0x7184}, {0x7203}, {0x7282},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x668E}, {0x670D}, {0x680B}, {0x6986}, {0x6A05}, {0x6A90}, {0x6B0F}, {0x6B8A}, {0x6E08}, {0x6E87},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x6401}, {0x6500},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x5C93},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtDuplicateObject {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x1E16},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x1D01}, {0x1D80},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x1C95},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtDuplicateToken {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x2116},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x2001}, {0x2080},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x1F95},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtEnableLastKnownGood {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x710C}, {0x7189}, {0x7204}, {0x7283}, {0x7302},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x670E}, {0x678D}, {0x688B}, {0x6A06}, {0x6A85}, {0x6B10}, {0x6B8F}, {0x6C0A}, {0x6E88}, {0x6F07},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x6481}, {0x6580},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x5D13},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtEnumerateBootEntries {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x718C}, {0x7209}, {0x7284}, {0x7303}, {0x7382},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x678E}, {0x680D}, {0x690B}, {0x6A86}, {0x6B05}, {0x6B90}, {0x6C0F}, {0x6C8A}, {0x6F08}, {0x6F87},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x6501}, {0x6600},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x4994}, {0x5C12}, {0x5D11}, {0x5D93},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtEnumerateDriverEntries {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x720C}, {0x7289}, {0x7304}, {0x7383}, {0x7402},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x680E}, {0x688D}, {0x698B}, {0x6B06}, {0x6B85}, {0x6C10}, {0x6C8F}, {0x6D0A}, {0x6F88}, {0x7007},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x6581}, {0x6680},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x4A14}, {0x5C92}, {0x5D91}, {0x5E13},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtEnumerateKey {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x1916},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x1801}, {0x1880},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x1795},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtEnumerateSystemEnvironmentValuesEx {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x728C}, {0x7309}, {0x7384}, {0x7403}, {0x7482},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x688E}, {0x690D}, {0x6A0B}, {0x6B86}, {0x6C05}, {0x6C90}, {0x6D0F}, {0x6D8A}, {0x7008}, {0x7087},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x6601}, {0x6700},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x4A94}, {0x5D12}, {0x5E11}, {0x5E93},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtEnumerateTransactionObject {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x730C}, {0x7389}, {0x7404}, {0x7483}, {0x7502},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x690E}, {0x698D}, {0x6A8B}, {0x6C06}, {0x6C85}, {0x6D10}, {0x6D8F}, {0x6E0A}, {0x7088}, {0x7107},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x6681}, {0x6780},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x5D92}, {0x5E91}, {0x5F13},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtEnumerateValueKey {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x0996},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x0881}, {0x0900},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x0815},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtExtendSection {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x738C}, {0x7409}, {0x7484}, {0x7503}, {0x7582},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x698E}, {0x6A0D}, {0x6B0B}, {0x6C86}, {0x6D05}, {0x6D90}, {0x6E0F}, {0x6E8A}, {0x7108}, {0x7187},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x6701}, {0x6800},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x4B14}, {0x5E12}, {0x5F11}, {0x5F93},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8)
    class CNtFilterBootOption {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x740C}, {0x7489}, {0x7504}, {0x7583}, {0x7602},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x6A0E}, {0x6A8D}, {0x6B8B}, {0x6D06}, {0x6D85}, {0x6E10}, {0x6E8F}, {0x6F0A}, {0x7188}, {0x7207},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x6781}, {0x6880},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtFilterToken {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x748C}, {0x7509}, {0x7584}, {0x7603}, {0x7682},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x6A8E}, {0x6B0D}, {0x6C0B}, {0x6D86}, {0x6E05}, {0x6E90}, {0x6F0F}, {0x6F8A}, {0x7208}, {0x7287},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x6801}, {0x6900},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x4B94}, {0x5E92}, {0x5F91}, {0x6013},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8)
    class CNtFilterTokenEx {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x750C}, {0x7589}, {0x7604}, {0x7683}, {0x7702},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x6B0E}, {0x6B8D}, {0x6C8B}, {0x6E06}, {0x6E85}, {0x6F10}, {0x6F8F}, {0x700A}, {0x7288}, {0x7307},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x6881}, {0x6980},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtFindAtom {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x0A16},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x0901}, {0x0980},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x0895},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtFlushBuffersFile {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x2596},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x2481}, {0x2500},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x2415},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8)
    class CNtFlushBuffersFileEx {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x758C}, {0x7609}, {0x7684}, {0x7703}, {0x7782},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x6B8E}, {0x6C0D}, {0x6D0B}, {0x6E86}, {0x6F05}, {0x6F90}, {0x700F}, {0x708A}, {0x7308}, {0x7387},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x6901}, {0x6A00},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtFlushInstallUILanguage {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x760C}, {0x7689}, {0x7704}, {0x7783}, {0x7802},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x6C0E}, {0x6C8D}, {0x6D8B}, {0x6F06}, {0x6F85}, {0x7010}, {0x708F}, {0x710A}, {0x7388}, {0x7407},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x6981}, {0x6A80},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x5F12}, {0x6011}, {0x6093},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtFlushInstructionCache {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x768C}, {0x7709}, {0x7784}, {0x7803}, {0x7882},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x6C8E}, {0x6D0D}, {0x6E0B}, {0x6F86}, {0x7005}, {0x7090}, {0x710F}, {0x718A}, {0x7408}, {0x7487},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x6A01}, {0x6B00},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x4C14}, {0x5F92}, {0x6091}, {0x6113},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtFlushKey {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x770C}, {0x7789}, {0x7804}, {0x7883}, {0x7902},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x6D0E}, {0x6D8D}, {0x6E8B}, {0x7006}, {0x7085}, {0x7110}, {0x718F}, {0x720A}, {0x7488}, {0x7507},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x6A81}, {0x6B80},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x4C94}, {0x6012}, {0x6111}, {0x6193},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtFlushProcessWriteBuffers {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x778C}, {0x7809}, {0x7884}, {0x7903}, {0x7982},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x6D8E}, {0x6E0D}, {0x6F0B}, {0x7086}, {0x7105}, {0x7190}, {0x720F}, {0x728A}, {0x7508}, {0x7587},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x6B01}, {0x6C00},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x6092}, {0x6191}, {0x6213},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtFlushVirtualMemory {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x780C}, {0x7889}, {0x7904}, {0x7983}, {0x7A02},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x6E0E}, {0x6E8D}, {0x6F8B}, {0x7106}, {0x7185}, {0x7210}, {0x728F}, {0x730A}, {0x7588}, {0x7607},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x6B81}, {0x6C80},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x4D14}, {0x6112}, {0x6211}, {0x6293},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtFlushWriteBuffer {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x788C}, {0x7909}, {0x7984}, {0x7A03}, {0x7A82},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x6E8E}, {0x6F0D}, {0x700B}, {0x7186}, {0x7205}, {0x7290}, {0x730F}, {0x738A}, {0x7608}, {0x7687},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x6C01}, {0x6D00},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x4D94}, {0x6192}, {0x6291}, {0x6313},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtFreeUserPhysicalPages {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x790C}, {0x7989}, {0x7A04}, {0x7A83}, {0x7B02},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x6F0E}, {0x6F8D}, {0x708B}, {0x7206}, {0x7285}, {0x7310}, {0x738F}, {0x740A}, {0x7688}, {0x7707},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x6C81}, {0x6D80},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x4E14}, {0x6212}, {0x6311}, {0x6393},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtFreeVirtualMemory {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x0F16},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x0E01}, {0x0E80},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x0D95},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtFreezeRegistry {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x798C}, {0x7A09}, {0x7A84}, {0x7B03}, {0x7B82},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x6F8E}, {0x700D}, {0x710B}, {0x7286}, {0x7305}, {0x7390}, {0x740F}, {0x748A}, {0x7708}, {0x7787},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x6D01}, {0x6E00},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x6292}, {0x6391}, {0x6413},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtFreezeTransactions {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x7A0C}, {0x7A89}, {0x7B04}, {0x7B83}, {0x7C02},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x700E}, {0x708D}, {0x718B}, {0x7306}, {0x7385}, {0x7410}, {0x748F}, {0x750A}, {0x7788}, {0x7807},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x6D81}, {0x6E80},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x6312}, {0x6411}, {0x6493},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtFsControlFile {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x1C96},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x1B81}, {0x1C00},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x1B15},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8)
    class CNtGetCachedSigningLevel {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x7A8C}, {0x7B09}, {0x7B84}, {0x7C03}, {0x7C82},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x708E}, {0x710D}, {0x720B}, {0x7386}, {0x7405}, {0x7490}, {0x750F}, {0x758A}, {0x7808}, {0x7887},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x6E01}, {0x6F00},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8)
    class CNtGetCompleteWnfStateSubscription {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x7B0C}, {0x7B89}, {0x7C04}, {0x7C83}, {0x7D02},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x710E}, {0x718D}, {0x728B}, {0x7406}, {0x7485}, {0x7510}, {0x758F}, {0x760A}, {0x7888}, {0x7907},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x6F80},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtGetContextThread {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x7B8C}, {0x7C09}, {0x7C84}, {0x7D03}, {0x7D82},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x718E}, {0x720D}, {0x730B}, {0x7486}, {0x7505}, {0x7590}, {0x760F}, {0x768A}, {0x7908}, {0x7987},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x6E81}, {0x7000},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x4E94}, {0x6392}, {0x6491}, {0x6513},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtGetCurrentProcessorNumber {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x7C0C}, {0x7C89}, {0x7D04}, {0x7D83}, {0x7E02},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x720E}, {0x728D}, {0x738B}, {0x7506}, {0x7585}, {0x7610}, {0x768F}, {0x770A}, {0x7988}, {0x7A07},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x6F01}, {0x7080},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x4F14}, {0x6412}, {0x6511}, {0x6593},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
    class CNtGetCurrentProcessorNumberEx {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x7C8C}, {0x7D09}, {0x7D84}, {0x7E03}, {0x7E82},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x728E}, {0x730D}, {0x740B}, {0x7586}, {0x7605}, {0x7690}, {0x770F}, {0x778A}, {0x7A08}, {0x7A87},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtGetDevicePowerState {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x7D0C}, {0x7D89}, {0x7E04}, {0x7E83}, {0x7F02},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x730E}, {0x738D}, {0x748B}, {0x7606}, {0x7685}, {0x7710}, {0x778F}, {0x780A}, {0x7A88}, {0x7B07},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x6F81}, {0x7100},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x4F94}, {0x6492}, {0x6591}, {0x6613},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtGetMUIRegistryInfo {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x7D8C}, {0x7E09}, {0x7E84}, {0x7F03}, {0x7F82},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x738E}, {0x740D}, {0x750B}, {0x7686}, {0x7705}, {0x7790}, {0x780F}, {0x788A}, {0x7B08}, {0x7B87},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x7001}, {0x7180},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x6512}, {0x6611}, {0x6693},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtGetNextProcess {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x7E0C}, {0x7E89}, {0x7F04}, {0x7F83}, {0x8002},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x740E}, {0x748D}, {0x758B}, {0x7706}, {0x7785}, {0x7810}, {0x788F}, {0x790A}, {0x7B88}, {0x7C07},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x7081}, {0x7200},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x6592}, {0x6691}, {0x6713},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtGetNextThread {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x7E8C}, {0x7F09}, {0x7F84}, {0x8003}, {0x8082},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x748E}, {0x750D}, {0x760B}, {0x7786}, {0x7805}, {0x7890}, {0x790F}, {0x798A}, {0x7C08}, {0x7C87},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x7101}, {0x7280},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x6612}, {0x6711}, {0x6793},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtGetNlsSectionPtr {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x7F0C}, {0x7F89}, {0x8004}, {0x8083}, {0x8102},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x750E}, {0x758D}, {0x768B}, {0x7806}, {0x7885}, {0x7910}, {0x798F}, {0x7A0A}, {0x7C88}, {0x7D07},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x7181}, {0x7300},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x6692}, {0x6791}, {0x6813},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtGetNotificationResourceManager {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x7F8C}, {0x8009}, {0x8084}, {0x8103}, {0x8182},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x758E}, {0x760D}, {0x770B}, {0x7886}, {0x7905}, {0x7990}, {0x7A0F}, {0x7A8A}, {0x7D08}, {0x7D87},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x7201}, {0x7380},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x6712}, {0x6811}, {0x6893},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN_OLD)
    class CNtGetPlugPlayEvent {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            {0x5014}, {0x6792}, {0x6891}, {0x6913},
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtGetWriteWatch {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x800C}, {0x8089}, {0x8104}, {0x8183}, {0x8202},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x760E}, {0x768D}, {0x778B}, {0x7906}, {0x7985}, {0x7A10}, {0x7A8F}, {0x7B0A}, {0x7D88}, {0x7E07},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x7281}, {0x7400},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x5094}, {0x6812}, {0x6911}, {0x6993},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtImpersonateAnonymousToken {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x808C}, {0x8109}, {0x8184}, {0x8203}, {0x8282},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x768E}, {0x770D}, {0x780B}, {0x7986}, {0x7A05}, {0x7A90}, {0x7B0F}, {0x7B8A}, {0x7E08}, {0x7E87},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x7301}, {0x7480},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x5114}, {0x6892}, {0x6991}, {0x6A13},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtImpersonateClientOfPort {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x0F96},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x0E81}, {0x0F00},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x0E15},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtImpersonateThread {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x810C}, {0x8189}, {0x8204}, {0x8283}, {0x8302},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x770E}, {0x778D}, {0x788B}, {0x7A06}, {0x7A85}, {0x7B10}, {0x7B8F}, {0x7C0A}, {0x7E88}, {0x7F07},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x7381}, {0x7500},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x5194}, {0x6912}, {0x6A11}, {0x6A93},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
    class CNtInitializeEnclave {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x818C}, {0x8209}, {0x8284}, {0x8303}, {0x8382},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x780D}, {0x790B}, {0x7A86}, {0x7B05}, {0x7B90}, {0x7C0F}, {0x7C8A}, {0x7F08}, {0x7F87},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtInitializeNlsFiles {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x820C}, {0x8289}, {0x8304}, {0x8383}, {0x8402},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x778E}, {0x788D}, {0x798B}, {0x7B06}, {0x7B85}, {0x7C10}, {0x7C8F}, {0x7D0A}, {0x7F88}, {0x8007},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x7401}, {0x7580},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x6992}, {0x6A91}, {0x6B13},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtInitializeRegistry {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x828C}, {0x8309}, {0x8384}, {0x8403}, {0x8482},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x780E}, {0x790D}, {0x7A0B}, {0x7B86}, {0x7C05}, {0x7C90}, {0x7D0F}, {0x7D8A}, {0x8008}, {0x8087},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x7481}, {0x7600},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x5214}, {0x6A12}, {0x6B11}, {0x6B93},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtInitiatePowerAction {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x830C}, {0x8389}, {0x8404}, {0x8483}, {0x8502},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x788E}, {0x798D}, {0x7A8B}, {0x7C06}, {0x7C85}, {0x7D10}, {0x7D8F}, {0x7E0A}, {0x8088}, {0x8107},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x7501}, {0x7680},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x5294}, {0x6A92}, {0x6B91}, {0x6C13},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtIsProcessInJob {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x2796},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x2681}, {0x2700},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x2615},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtIsSystemResumeAutomatic {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x838C}, {0x8409}, {0x8484}, {0x8503}, {0x8582},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x790E}, {0x7A0D}, {0x7B0B}, {0x7C86}, {0x7D05}, {0x7D90}, {0x7E0F}, {0x7E8A}, {0x8108}, {0x8187},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x7581}, {0x7700},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x5314}, {0x6B12}, {0x6C11}, {0x6C93},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtIsUILanguageComitted {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x840C}, {0x8489}, {0x8504}, {0x8583}, {0x8602},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x798E}, {0x7A8D}, {0x7B8B}, {0x7D06}, {0x7D85}, {0x7E10}, {0x7E8F}, {0x7F0A}, {0x8188}, {0x8207},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x7601}, {0x7780},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x6B92}, {0x6C91}, {0x6D13},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN_OLD)
    class CNtListTransactions {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            {0x6D11},
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtListenPort {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x848C}, {0x8509}, {0x8584}, {0x8603}, {0x8682},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x7A0E}, {0x7B0D}, {0x7C0B}, {0x7D86}, {0x7E05}, {0x7E90}, {0x7F0F}, {0x7F8A}, {0x8208}, {0x8287},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x7681}, {0x7800},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x5394}, {0x6C12}, {0x6DC0},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtLoadDriver {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x850C}, {0x8589}, {0x8604}, {0x8683}, {0x8702},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x7A8E}, {0x7B8D}, {0x7C8B}, {0x7E06}, {0x7E85}, {0x7F10}, {0x7F8F}, {0x800A}, {0x8288}, {0x8307},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x7701}, {0x7880},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x5414}, {0x6C92}, {0x6E40},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
    class CNtLoadEnclaveData {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x858C}, {0x8609}, {0x8684}, {0x8703}, {0x8782},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x7C0D}, {0x7D0B}, {0x7E86}, {0x7F05}, {0x7F90}, {0x800F}, {0x808A}, {0x8308}, {0x8387},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN10)
    class CNtLoadHotPatch {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            {0x7F06}, {0x7F85}, {0x8010},
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtLoadKey {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x860C}, {0x8689}, {0x8704}, {0x8783}, {0x8802},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x7B0E}, {0x7C8D}, {0x7D8B}, {0x7F86}, {0x8005}, {0x8099}, {0x810A}, {0x8388}, {0x8407},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x7781}, {0x7900},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x5494}, {0x6D12}, {0x6EC0},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtLoadKey2 {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x868C}, {0x8709}, {0x8784}, {0x8803}, {0x8882},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x7B8E}, {0x7D0D}, {0x7E0B}, {0x8006}, {0x8085}, {0x8119}, {0x818A}, {0x8408}, {0x8487},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x7801}, {0x7980},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x5514}, {0x6D92}, {0x6F40},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
    class CNtLoadKey3 {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x870C}, {0x8789}, {0x8804}, {0x8883}, {0x8902},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xEB08}, {0xEB87},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtLoadKeyEx {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x878C}, {0x8809}, {0x8884}, {0x8903}, {0x8982},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x7C0E}, {0x7D8D}, {0x7E8B}, {0x8086}, {0x8105}, {0x8199}, {0x820A}, {0x8488}, {0x8507},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x7881}, {0x7A00},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x5594}, {0x6E12}, {0x6FC0},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtLockFile {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x880C}, {0x8889}, {0x8904}, {0x8983}, {0x8A02},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x7C8E}, {0x7E0D}, {0x7F0B}, {0x8106}, {0x8185}, {0x8219}, {0x828A}, {0x8508}, {0x8587},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x7901}, {0x7A80},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x5614}, {0x6E92}, {0x7040},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtLockProductActivationKeys {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x888C}, {0x8909}, {0x8984}, {0x8A03}, {0x8A82},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x7D0E}, {0x7E8D}, {0x7F8B}, {0x8186}, {0x8205}, {0x8299}, {0x830A}, {0x8588}, {0x8607},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x7981}, {0x7B00},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x5694}, {0x6F12}, {0x70C0},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtLockRegistryKey {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x890C}, {0x8989}, {0x8A04}, {0x8A83}, {0x8B02},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x7D8E}, {0x7F0D}, {0x800B}, {0x8206}, {0x8285}, {0x8319}, {0x838A}, {0x8608}, {0x8687},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x7A01}, {0x7B80},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x5714}, {0x6F92}, {0x7140},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtLockVirtualMemory {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x898C}, {0x8A09}, {0x8A84}, {0x8B03}, {0x8B82},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x7E0E}, {0x7F8D}, {0x808B}, {0x8286}, {0x8305}, {0x8399}, {0x840A}, {0x8688}, {0x8707},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x7A81}, {0x7C00},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x5794}, {0x7012}, {0x71C0},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtMakePermanentObject {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x8A0C}, {0x8A89}, {0x8B04}, {0x8B83}, {0x8C02},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x7E8E}, {0x800D}, {0x810B}, {0x8306}, {0x8385}, {0x8419}, {0x848A}, {0x8708}, {0x8787},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x7B01}, {0x7C80},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x5814}, {0x7092}, {0x7240},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtMakeTemporaryObject {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x8A8C}, {0x8B09}, {0x8B84}, {0x8C03}, {0x8C82},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x7F0E}, {0x808D}, {0x818B}, {0x8386}, {0x8405}, {0x8499}, {0x850A}, {0x8788}, {0x8807},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x7B81}, {0x7D00},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x5894}, {0x7112}, {0x72C0},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
    class CNtManageHotPatch {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x8B0C}, {0x8B89}, {0x8C04}, {0x8C83}, {0x8D02},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x850F}, {0x858A}, {0x8808}, {0x8887},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
    class CNtManagePartition {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x8B8C}, {0x8C09}, {0x8C84}, {0x8D03}, {0x8D82},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x7F8E}, {0x810D}, {0x820B}, {0x8406}, {0x8485}, {0x8510}, {0x858F}, {0x860A}, {0x8888}, {0x8907},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtMapCMFModule {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x8C0C}, {0x8C89}, {0x8D04}, {0x8D83}, {0x8E02},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x800E}, {0x818D}, {0x828B}, {0x8486}, {0x8505}, {0x8590}, {0x860F}, {0x868A}, {0x8908}, {0x8987},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x7C01}, {0x7D80},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x7192}, {0x7340},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtMapUserPhysicalPages {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x8C8C}, {0x8D09}, {0x8D84}, {0x8E03}, {0x8E82},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x808E}, {0x820D}, {0x830B}, {0x8506}, {0x8585}, {0x8610}, {0x868F}, {0x870A}, {0x8988}, {0x8A07},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x7C81}, {0x7E00},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x5914}, {0x7212}, {0x73C0},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtMapUserPhysicalPagesScatter {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x0196},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x0081}, {0x0100},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x0015},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtMapViewOfSection {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x1416},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x1301}, {0x1380},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x1295},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
    class CNtMapViewOfSectionEx {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x8D0C}, {0x8D89}, {0x8E04}, {0x8E83}, {0x8F02},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x8690}, {0x870F}, {0x878A}, {0x8A08}, {0x8A87},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN_OLD)
    class CNtMarshallTransaction {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            {0x7411},
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtModifyBootEntry {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x8D8C}, {0x8E09}, {0x8E84}, {0x8F03}, {0x8F82},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x810E}, {0x828D}, {0x838B}, {0x8586}, {0x8605}, {0x8710}, {0x878F}, {0x880A}, {0x8A88}, {0x8B07},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x7D01}, {0x7E80},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x5994}, {0x7292}, {0x7413}, {0x7491},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtModifyDriverEntry {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x8E0C}, {0x8E89}, {0x8F04}, {0x8F83}, {0x9002},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x818E}, {0x830D}, {0x840B}, {0x8606}, {0x8685}, {0x8790}, {0x880F}, {0x888A}, {0x8B08}, {0x8B87},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x7D81}, {0x7F00},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x5A14}, {0x7312}, {0x7493}, {0x7511},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtNotifyChangeDirectoryFile {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x8E8C}, {0x8F09}, {0x8F84}, {0x9003}, {0x9082},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x820E}, {0x838D}, {0x848B}, {0x8686}, {0x8705}, {0x8810}, {0x888F}, {0x890A}, {0x8B88}, {0x8C07},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x7E01}, {0x7F80},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x5A94}, {0x7392}, {0x7513}, {0x7591},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
    class CNtNotifyChangeDirectoryFileEx {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x8F0C}, {0x8F89}, {0x9004}, {0x9083}, {0x9102},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x8785}, {0x8890}, {0x890F}, {0x898A}, {0x8C08}, {0x8C87},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtNotifyChangeKey {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x8F8C}, {0x9009}, {0x9084}, {0x9103}, {0x9182},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x828E}, {0x840D}, {0x850B}, {0x8706}, {0x8805}, {0x8910}, {0x898F}, {0x8A0A}, {0x8C88}, {0x8D07},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x7E81}, {0x8000},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x5B14}, {0x7412}, {0x7593}, {0x7611},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtNotifyChangeMultipleKeys {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x900C}, {0x9089}, {0x9104}, {0x9183}, {0x9202},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x830E}, {0x848D}, {0x858B}, {0x8786}, {0x8885}, {0x8990}, {0x8A0F}, {0x8A8A}, {0x8D08}, {0x8D87},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x7F01}, {0x8080},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x5B94}, {0x7492}, {0x7613}, {0x7691},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtNotifyChangeSession {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x908C}, {0x9109}, {0x9184}, {0x9203}, {0x9282},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x838E}, {0x850D}, {0x860B}, {0x8806}, {0x8905}, {0x8A10}, {0x8A8F}, {0x8B0A}, {0x8D88}, {0x8E07},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x7F81}, {0x8100},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x7693},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11)
    class CNtOpenCpuPartition {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            {0x9204}, {0x9283}, {0x9302},
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtOpenDirectoryObject {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x2C16},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x2B01}, {0x2B80},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x2A95},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtOpenEnlistment {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x910C}, {0x9189}, {0x9284}, {0x9303}, {0x9382},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x840E}, {0x858D}, {0x868B}, {0x8886}, {0x8985}, {0x8A90}, {0x8B0F}, {0x8B8A}, {0x8E08}, {0x8E87},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x8001}, {0x8180},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x7512}, {0x7740},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtOpenEvent {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x2016},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x1F01}, {0x1F80},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x1E95},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtOpenEventPair {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x918C}, {0x9209}, {0x9304}, {0x9383}, {0x9402},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x848E}, {0x860D}, {0x870B}, {0x8906}, {0x8A05}, {0x8B10}, {0x8B8F}, {0x8C0A}, {0x8E88}, {0x8F07},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x8081}, {0x8200},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x5C14}, {0x7592}, {0x77C0},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtOpenFile {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x1996},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x1881}, {0x1900},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x1815},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtOpenIoCompletion {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x920C}, {0x9289}, {0x9384}, {0x9403}, {0x9482},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x850E}, {0x868D}, {0x878B}, {0x8986}, {0x8A85}, {0x8B90}, {0x8C0F}, {0x8C8A}, {0x8F08}, {0x8F87},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x8101}, {0x8280},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x5C94}, {0x7612}, {0x7840},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtOpenJobObject {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x928C}, {0x9309}, {0x9404}, {0x9483}, {0x9502},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x858E}, {0x870D}, {0x880B}, {0x8A06}, {0x8B05}, {0x8C10}, {0x8C8F}, {0x8D0A}, {0x8F88}, {0x9007},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x8181}, {0x8300},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x5D14}, {0x7692}, {0x78C0},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtOpenKey {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x0916},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x0801}, {0x0880},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x0795},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtOpenKeyEx {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x930C}, {0x9389}, {0x9484}, {0x9503}, {0x9582},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x860E}, {0x878D}, {0x888B}, {0x8A86}, {0x8B85}, {0x8C90}, {0x8D0F}, {0x8D8A}, {0x9008}, {0x9087},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x8201}, {0x8380},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x7913},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtOpenKeyTransacted {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x938C}, {0x9409}, {0x9504}, {0x9583}, {0x9602},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x868E}, {0x880D}, {0x890B}, {0x8B06}, {0x8C05}, {0x8D10}, {0x8D8F}, {0x8E0A}, {0x9088}, {0x9107},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x8281}, {0x8400},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x7712}, {0x7911}, {0x7993},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtOpenKeyTransactedEx {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x940C}, {0x9489}, {0x9584}, {0x9603}, {0x9682},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x870E}, {0x888D}, {0x898B}, {0x8B86}, {0x8C85}, {0x8D90}, {0x8E0F}, {0x8E8A}, {0x9108}, {0x9187},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x8301}, {0x8480},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x7A13},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtOpenKeyedEvent {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x948C}, {0x9509}, {0x9604}, {0x9683}, {0x9702},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x878E}, {0x890D}, {0x8A0B}, {0x8C06}, {0x8D05}, {0x8E10}, {0x8E8F}, {0x8F0A}, {0x9188}, {0x9207},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x8381}, {0x8500},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x5D94}, {0x7792}, {0x7991}, {0x7A93},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtOpenMutant {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x950C}, {0x9589}, {0x9684}, {0x9703}, {0x9782},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x880E}, {0x898D}, {0x8A8B}, {0x8C86}, {0x8D85}, {0x8E90}, {0x8F0F}, {0x8F8A}, {0x9208}, {0x9287},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x8401}, {0x8580},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x5E14}, {0x7812}, {0x7A11}, {0x7B13},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtOpenObjectAuditAlarm {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x958C}, {0x9609}, {0x9704}, {0x9783}, {0x9802},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x888E}, {0x8A0D}, {0x8B0B}, {0x8D06}, {0x8E05}, {0x8F10}, {0x8F8F}, {0x900A}, {0x9288}, {0x9307},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x8481}, {0x8600},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x5E94}, {0x7892}, {0x7A91}, {0x7B93},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
    class CNtOpenPartition {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x960C}, {0x9689}, {0x9784}, {0x9803}, {0x9882},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x890E}, {0x8A8D}, {0x8B8B}, {0x8D86}, {0x8E85}, {0x8F90}, {0x900F}, {0x908A}, {0x9308}, {0x9387},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtOpenPrivateNamespace {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x968C}, {0x9709}, {0x9804}, {0x9883}, {0x9902},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x898E}, {0x8B0D}, {0x8C0B}, {0x8E06}, {0x8F05}, {0x9010}, {0x908F}, {0x910A}, {0x9388}, {0x9407},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x8501}, {0x8680},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x7912}, {0x7B11}, {0x7C13},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtOpenProcess {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x1316},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x1201}, {0x1280},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x1195},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtOpenProcessToken {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x970C}, {0x9789}, {0x9884}, {0x9903}, {0x9982},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x8A0E}, {0x8B8D}, {0x8C8B}, {0x8E86}, {0x8F85}, {0x9090}, {0x910F}, {0x918A}, {0x9408}, {0x9487},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x8581}, {0x8700},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x5F14}, {0x7992}, {0x7B91}, {0x7C93},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtOpenProcessTokenEx {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x1816},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x1701}, {0x1780},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x1695},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
    class CNtOpenRegistryTransaction {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x978C}, {0x9809}, {0x9904}, {0x9983}, {0x9A02},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x8D0B}, {0x8F06}, {0x9005}, {0x9110}, {0x918F}, {0x920A}, {0x9488}, {0x9507},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtOpenResourceManager {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x980C}, {0x9889}, {0x9984}, {0x9A03}, {0x9A82},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x8A8E}, {0x8C0D}, {0x8D8B}, {0x8F86}, {0x9085}, {0x9190}, {0x920F}, {0x928A}, {0x9508}, {0x9587},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x8601}, {0x8780},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x7A12}, {0x7C11}, {0x7D13},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtOpenSection {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x1B96},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x1A81}, {0x1B00},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x1A15},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtOpenSemaphore {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x988C}, {0x9909}, {0x9A04}, {0x9A83}, {0x9B02},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x8B0E}, {0x8C8D}, {0x8E0B}, {0x9006}, {0x9105}, {0x9210}, {0x928F}, {0x930A}, {0x9588}, {0x9607},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x8681}, {0x8800},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x5F94}, {0x7A92}, {0x7C91}, {0x7D93},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtOpenSession {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x990C}, {0x9989}, {0x9A84}, {0x9B03}, {0x9B82},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x8B8E}, {0x8D0D}, {0x8E8B}, {0x9086}, {0x9185}, {0x9290}, {0x930F}, {0x938A}, {0x9608}, {0x9687},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x8701}, {0x8880},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x7B12}, {0x7D11}, {0x7E13},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtOpenSymbolicLinkObject {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x998C}, {0x9A09}, {0x9B04}, {0x9B83}, {0x9C02},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x8C0E}, {0x8D8D}, {0x8F0B}, {0x9106}, {0x9205}, {0x9310}, {0x938F}, {0x940A}, {0x9688}, {0x9707},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x8781}, {0x8900},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x6014}, {0x7B92}, {0x7D91}, {0x7E93},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtOpenThread {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x9A0C}, {0x9A89}, {0x9B84}, {0x9C03}, {0x9C82},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x8C8E}, {0x8E0D}, {0x8F8B}, {0x9186}, {0x9285}, {0x9390}, {0x940F}, {0x948A}, {0x9708}, {0x9787},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x8801}, {0x8980},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x6094}, {0x7C12}, {0x7E11}, {0x7F13},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtOpenThreadToken {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x1216},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x1101}, {0x1180},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x1095},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtOpenThreadTokenEx {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x1796},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x1681}, {0x1700},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x1615},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtOpenTimer {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x9A8C}, {0x9B09}, {0x9C04}, {0x9C83}, {0x9D02},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x8D0E}, {0x8E8D}, {0x900B}, {0x9206}, {0x9305}, {0x9410}, {0x948F}, {0x950A}, {0x9788}, {0x9807},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x8881}, {0x8A00},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x6114}, {0x7C92}, {0x7E91}, {0x7F93},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtOpenTransaction {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x9B0C}, {0x9B89}, {0x9C84}, {0x9D03}, {0x9D82},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x8D8E}, {0x8F0D}, {0x908B}, {0x9286}, {0x9385}, {0x9490}, {0x950F}, {0x958A}, {0x9808}, {0x9887},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x8901}, {0x8A80},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x7D12}, {0x7F11}, {0x8013},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtOpenTransactionManager {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x9B8C}, {0x9C09}, {0x9D04}, {0x9D83}, {0x9E02},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x8E0E}, {0x8F8D}, {0x910B}, {0x9306}, {0x9405}, {0x9510}, {0x958F}, {0x960A}, {0x9888}, {0x9907},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x8981}, {0x8B00},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x7D92}, {0x7F91}, {0x8093},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtPlugPlayControl {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x9C0C}, {0x9C89}, {0x9D84}, {0x9E03}, {0x9E82},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x8E8E}, {0x900D}, {0x918B}, {0x9386}, {0x9485}, {0x9590}, {0x960F}, {0x968A}, {0x9908}, {0x9987},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x8A01}, {0x8B80},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x6194}, {0x7E12}, {0x8011}, {0x8113},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtPowerInformation {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x2F96},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x2E81}, {0x2F00},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x2E15},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtPrePrepareComplete {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x9C8C}, {0x9D09}, {0x9E04}, {0x9E83}, {0x9F02},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x8F0E}, {0x908D}, {0x920B}, {0x9406}, {0x9505}, {0x9610}, {0x968F}, {0x970A}, {0x9988}, {0x9A07},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x8A81}, {0x8C00},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x7E92}, {0x8091}, {0x8193},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtPrePrepareEnlistment {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x9D0C}, {0x9D89}, {0x9E84}, {0x9F03}, {0x9F82},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x8F8E}, {0x910D}, {0x928B}, {0x9486}, {0x9585}, {0x9690}, {0x970F}, {0x978A}, {0x9A08}, {0x9A87},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x8B01}, {0x8C80},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x7F12}, {0x8111}, {0x8213},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtPrepareComplete {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x9D8C}, {0x9E09}, {0x9F04}, {0x9F83}, {0xA002},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x900E}, {0x918D}, {0x930B}, {0x9506}, {0x9605}, {0x9710}, {0x978F}, {0x980A}, {0x9A88}, {0x9B07},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x8B81}, {0x8D00},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x7F92}, {0x8191}, {0x8293},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtPrepareEnlistment {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x9E0C}, {0x9E89}, {0x9F84}, {0xA003}, {0xA082},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x908E}, {0x920D}, {0x938B}, {0x9586}, {0x9685}, {0x9790}, {0x980F}, {0x988A}, {0x9B08}, {0x9B87},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x8C01}, {0x8D80},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x8012}, {0x8211}, {0x8313},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtPrivilegeCheck {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x9E8C}, {0x9F09}, {0xA004}, {0xA083}, {0xA102},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x910E}, {0x928D}, {0x940B}, {0x9606}, {0x9705}, {0x9810}, {0x988F}, {0x990A}, {0x9B88}, {0x9C07},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x8C81}, {0x8E00},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x6214}, {0x8092}, {0x8291}, {0x8393},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtPrivilegeObjectAuditAlarm {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x9F0C}, {0x9F89}, {0xA084}, {0xA103}, {0xA182},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x918E}, {0x930D}, {0x948B}, {0x9686}, {0x9785}, {0x9890}, {0x990F}, {0x998A}, {0x9C08}, {0x9C87},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x8D01}, {0x8E80},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x6294}, {0x8112}, {0x8311}, {0x8413},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtPrivilegedServiceAuditAlarm {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0x9F8C}, {0xA009}, {0xA104}, {0xA183}, {0xA202},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x920E}, {0x938D}, {0x950B}, {0x9706}, {0x9805}, {0x9910}, {0x998F}, {0x9A0A}, {0x9C88}, {0x9D07},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x8D81}, {0x8F00},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x6314}, {0x8192}, {0x8391}, {0x8493},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtPropagationComplete {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xA00C}, {0xA089}, {0xA184}, {0xA203}, {0xA282},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x928E}, {0x940D}, {0x958B}, {0x9786}, {0x9885}, {0x9990}, {0x9A0F}, {0x9A8A}, {0x9D08}, {0x9D87},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x8E01}, {0x8F80},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x8212}, {0x8411}, {0x8513},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtPropagationFailed {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xA08C}, {0xA109}, {0xA204}, {0xA283}, {0xA302},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x930E}, {0x948D}, {0x960B}, {0x9806}, {0x9905}, {0x9A10}, {0x9A8F}, {0x9B0A}, {0x9D88}, {0x9E07},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x8E81}, {0x9000},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x8292}, {0x8491}, {0x8593},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtProtectVirtualMemory {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x2816},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x2701}, {0x2780},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x2695},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
    class CNtPssCaptureVaSpaceBulk {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xA10C}, {0xA189}, {0xA284}, {0xA303}, {0xA382},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x9E08}, {0x9E87},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN_OLD)
    class CNtPullTransaction {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            {0x8511},
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtPulseEvent {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xA18C}, {0xA209}, {0xA304}, {0xA383}, {0xA402},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x938E}, {0x950D}, {0x968B}, {0x9886}, {0x9985}, {0x9A90}, {0x9B0F}, {0x9B8A}, {0x9E88}, {0x9F07},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x8F01}, {0x9080},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x6394}, {0x8312}, {0x8591}, {0x8613},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtQueryAttributesFile {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x1E96},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x1D81}, {0x1E00},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x1D15},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
    class CNtQueryAuxiliaryCounterFrequency {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xA20C}, {0xA289}, {0xA384}, {0xA403}, {0xA482},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x9906}, {0x9A05}, {0x9B10}, {0x9B8F}, {0x9C0A}, {0x9F08}, {0x9F87},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtQueryBootEntryOrder {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xA28C}, {0xA309}, {0xA404}, {0xA483}, {0xA502},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x940E}, {0x958D}, {0x970B}, {0x9986}, {0x9A85}, {0x9B90}, {0x9C0F}, {0x9C8A}, {0x9F88}, {0xA007},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x8F81}, {0x9100},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x6414}, {0x8392}, {0x8611}, {0x8693},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtQueryBootOptions {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xA30C}, {0xA389}, {0xA484}, {0xA503}, {0xA582},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x948E}, {0x960D}, {0x978B}, {0x9A06}, {0x9B05}, {0x9C10}, {0x9C8F}, {0x9D0A}, {0xA008}, {0xA087},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x9001}, {0x9180},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x6494}, {0x8412}, {0x8691}, {0x8713},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtQueryDebugFilterState {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xA38C}, {0xA409}, {0xA504}, {0xA583}, {0xA602},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x950E}, {0x968D}, {0x980B}, {0x9A86}, {0x9B85}, {0x9C90}, {0x9D0F}, {0x9D8A}, {0xA088}, {0xA107},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x9081}, {0x9200},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x6514}, {0x8492}, {0x8711}, {0x8793},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtQueryDefaultLocale {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x0A96},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x0981}, {0x0A00},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x0915},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtQueryDefaultUILanguage {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x2216},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x2101}, {0x2180},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x2095},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtQueryDirectoryFile {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x1A96},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x1981}, {0x1A00},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x1915},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
    class CNtQueryDirectoryFileEx {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xA40C}, {0xA489}, {0xA584}, {0xA603}, {0xA682},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x9C05}, {0x9D10}, {0x9D8F}, {0x9E0A}, {0xA108}, {0xA187},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtQueryDirectoryObject {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xA48C}, {0xA509}, {0xA604}, {0xA683}, {0xA702},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x958E}, {0x970D}, {0x988B}, {0x9B06}, {0x9C85}, {0x9D90}, {0x9E0F}, {0x9E8A}, {0xA188}, {0xA207},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x9101}, {0x9280},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x6594}, {0x8512}, {0x8791}, {0x8813},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtQueryDriverEntryOrder {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xA50C}, {0xA589}, {0xA684}, {0xA703}, {0xA782},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x960E}, {0x978D}, {0x990B}, {0x9B86}, {0x9D05}, {0x9E10}, {0x9E8F}, {0x9F0A}, {0xA208}, {0xA287},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x9181}, {0x9300},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x6614}, {0x8592}, {0x8811}, {0x8893},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtQueryEaFile {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xA58C}, {0xA609}, {0xA704}, {0xA783}, {0xA802},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x968E}, {0x980D}, {0x998B}, {0x9C06}, {0x9D85}, {0x9E90}, {0x9F0F}, {0x9F8A}, {0xA288}, {0xA307},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x9201}, {0x9380},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x6694}, {0x8612}, {0x8891}, {0x8913},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtQueryEvent {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x2B16},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x2A01}, {0x2A80},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x2995},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtQueryFullAttributesFile {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xA60C}, {0xA689}, {0xA784}, {0xA803}, {0xA882},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x970E}, {0x988D}, {0x9A0B}, {0x9C86}, {0x9E05}, {0x9F10}, {0x9F8F}, {0xA00A}, {0xA308}, {0xA387},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x9281}, {0x9400},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x6714}, {0x8692}, {0x8911}, {0x8993},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtQueryInformationAtom {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xA68C}, {0xA709}, {0xA804}, {0xA883}, {0xA902},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x978E}, {0x990D}, {0x9A8B}, {0x9D06}, {0x9E85}, {0x9F90}, {0xA00F}, {0xA08A}, {0xA388}, {0xA407},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x9301}, {0x9480},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x6794}, {0x8712}, {0x8991}, {0x8A13},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
    class CNtQueryInformationByName {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xA70C}, {0xA789}, {0xA884}, {0xA903}, {0xA982},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x9D86}, {0x9F05}, {0xA010}, {0xA08F}, {0xA10A}, {0xA408}, {0xA487},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11)
    class CNtQueryInformationCpuPartition {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            {0xA904}, {0xA983}, {0xAA02},
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtQueryInformationEnlistment {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xA78C}, {0xA809}, {0xA984}, {0xAA03}, {0xAA82},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x980E}, {0x998D}, {0x9B0B}, {0x9E06}, {0x9F85}, {0xA090}, {0xA10F}, {0xA18A}, {0xA488}, {0xA507},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x9381}, {0x9500},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x8792}, {0x8A11}, {0x8A93},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtQueryInformationFile {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x0896},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x0781}, {0x0800},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x0715},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtQueryInformationJobObject {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xA80C}, {0xA889}, {0xAA04}, {0xAA83}, {0xAB02},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x988E}, {0x9A0D}, {0x9B8B}, {0x9E86}, {0xA005}, {0xA110}, {0xA18F}, {0xA20A}, {0xA508}, {0xA587},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x9401}, {0x9580},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x6814}, {0x8812}, {0x8A91}, {0x8B13},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtQueryInformationPort {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xA88C}, {0xA909}, {0xAA84}, {0xAB03}, {0xAB82},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x990E}, {0x9A8D}, {0x9C0B}, {0x9F06}, {0xA085}, {0xA190}, {0xA20F}, {0xA28A}, {0xA588}, {0xA607},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x9481}, {0x9600},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x6894}, {0x8892}, {0x8B11}, {0x8B93},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtQueryInformationProcess {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x0C96},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x0B81}, {0x0C00},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x0B15},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtQueryInformationResourceManager {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xA90C}, {0xA989}, {0xAB04}, {0xAB83}, {0xAC02},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x998E}, {0x9B0D}, {0x9C8B}, {0x9F86}, {0xA105}, {0xA210}, {0xA28F}, {0xA30A}, {0xA608}, {0xA687},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x9501}, {0x9680},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x8912}, {0x8B91}, {0x8C13},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtQueryInformationThread {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x1296},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x1181}, {0x1200},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x1115},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtQueryInformationToken {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x1096},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x0F81}, {0x1000},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x0F15},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtQueryInformationTransaction {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xA98C}, {0xAA09}, {0xAB84}, {0xAC03}, {0xAC82},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x9A0E}, {0x9B8D}, {0x9D0B}, {0xA006}, {0xA185}, {0xA290}, {0xA30F}, {0xA38A}, {0xA688}, {0xA707},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x9581}, {0x9700},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x8992}, {0x8C11}, {0x8C93},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtQueryInformationTransactionManager {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xAA0C}, {0xAA89}, {0xAC04}, {0xAC83}, {0xAD02},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x9A8E}, {0x9C0D}, {0x9D8B}, {0xA086}, {0xA205}, {0xA310}, {0xA38F}, {0xA40A}, {0xA708}, {0xA787},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x9601}, {0x9780},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x8A12}, {0x8C91}, {0x8D13},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtQueryInformationWorkerFactory {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xAA8C}, {0xAB09}, {0xAC84}, {0xAD03}, {0xAD82},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x9B0E}, {0x9C8D}, {0x9E0B}, {0xA106}, {0xA285}, {0xA390}, {0xA40F}, {0xA48A}, {0xA788}, {0xA807},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x9681}, {0x9800},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x8A92}, {0x8D11}, {0x8D93},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtQueryInstallUILanguage {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xAB0C}, {0xAB89}, {0xAD04}, {0xAD83}, {0xAE02},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x9B8E}, {0x9D0D}, {0x9E8B}, {0xA186}, {0xA305}, {0xA410}, {0xA48F}, {0xA50A}, {0xA808}, {0xA887},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x9701}, {0x9880},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x6914}, {0x8B12}, {0x8D91}, {0x8E13},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtQueryIntervalProfile {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xAB8C}, {0xAC09}, {0xAD84}, {0xAE03}, {0xAE82},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x9C0E}, {0x9D8D}, {0x9F0B}, {0xA206}, {0xA385}, {0xA490}, {0xA50F}, {0xA58A}, {0xA888}, {0xA907},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x9781}, {0x9900},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x6994}, {0x8B92}, {0x8E11}, {0x8E93},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtQueryIoCompletion {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xAC0C}, {0xAC89}, {0xAE04}, {0xAE83}, {0xAF02},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x9C8E}, {0x9E0D}, {0x9F8B}, {0xA286}, {0xA405}, {0xA510}, {0xA58F}, {0xA60A}, {0xA908}, {0xA987},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x9801}, {0x9980},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x6A14}, {0x8C12}, {0x8E91}, {0x8F13},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11)
    class CNtQueryIoRingCapabilities {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            {0xAD09}, {0xAE84}, {0xAF03}, {0xAF82},
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtQueryKey {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x0B16},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x0A01}, {0x0A80},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x0995},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtQueryLicenseValue {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xAC8C}, {0xAD89}, {0xAF04}, {0xAF83}, {0xB002},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x9D0E}, {0x9E8D}, {0xA00B}, {0xA306}, {0xA485}, {0xA590}, {0xA60F}, {0xA68A}, {0xA988}, {0xAA07},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x9881}, {0x9A00},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x8C92}, {0x8F11}, {0x8F93},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtQueryMultipleValueKey {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xAD0C}, {0xAE09}, {0xAF84}, {0xB003}, {0xB082},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x9D8E}, {0x9F0D}, {0xA08B}, {0xA386}, {0xA505}, {0xA610}, {0xA68F}, {0xA70A}, {0xAA08}, {0xAA87},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x9901}, {0x9A80},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x6A94}, {0x8D12}, {0x8F91}, {0x9013},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtQueryMutant {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xAD8C}, {0xAE89}, {0xB004}, {0xB083}, {0xB102},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x9E0E}, {0x9F8D}, {0xA10B}, {0xA406}, {0xA585}, {0xA690}, {0xA70F}, {0xA78A}, {0xAA88}, {0xAB07},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x9981}, {0x9B00},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x6B14}, {0x8D92}, {0x9011}, {0x9093},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtQueryObject {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x0816},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x0701}, {0x0780},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x0695},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtQueryOpenSubKeys {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xAE0C}, {0xAF09}, {0xB084}, {0xB103}, {0xB182},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x9E8E}, {0xA00D}, {0xA18B}, {0xA486}, {0xA605}, {0xA710}, {0xA78F}, {0xA80A}, {0xAB08}, {0xAB87},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x9A01}, {0x9B80},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x6B94}, {0x8E12}, {0x9091}, {0x9113},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtQueryOpenSubKeysEx {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xAE8C}, {0xAF89}, {0xB104}, {0xB183}, {0xB202},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x9F0E}, {0xA08D}, {0xA20B}, {0xA506}, {0xA685}, {0xA790}, {0xA80F}, {0xA88A}, {0xAB88}, {0xAC07},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x9A81}, {0x9C00},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x6C14}, {0x8E92}, {0x9111}, {0x9193},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtQueryPerformanceCounter {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x1896},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x1781}, {0x1800},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x1715},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtQueryPortInformationProcess {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xAF0C}, {0xB009}, {0xB184}, {0xB203}, {0xB282},
            #endif
            #if defined(SYSCAT_WIN10)
            {0x9F8E}, {0xA10D}, {0xA28B}, {0xA586}, {0xA705}, {0xA810}, {0xA88F}, {0xA90A}, {0xAC08}, {0xAC87},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x9B01}, {0x9C80},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x6C94}, {0x8F12}, {0x9191}, {0x9213},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtQueryQuotaInformationFile {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xAF8C}, {0xB089}, {0xB204}, {0xB283}, {0xB302},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xA00E}, {0xA18D}, {0xA30B}, {0xA606}, {0xA785}, {0xA890}, {0xA90F}, {0xA98A}, {0xAC88}, {0xAD07},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x9B81}, {0x9D00},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x6D14}, {0x8F92}, {0x9211}, {0x9293},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtQuerySection {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x2896},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x2781}, {0x2800},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x2715},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtQuerySecurityAttributesToken {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xB00C}, {0xB109}, {0xB284}, {0xB303}, {0xB382},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xA08E}, {0xA20D}, {0xA38B}, {0xA686}, {0xA805}, {0xA910}, {0xA98F}, {0xAA0A}, {0xAD08}, {0xAD87},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x9C01}, {0x9D80},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x9313},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtQuerySecurityObject {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xB08C}, {0xB189}, {0xB304}, {0xB383}, {0xB402},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xA10E}, {0xA28D}, {0xA40B}, {0xA706}, {0xA885}, {0xA990}, {0xAA0F}, {0xAA8A}, {0xAD88}, {0xAE07},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x9C81}, {0x9E00},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x6D94}, {0x9012}, {0x9291}, {0x9393},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
    class CNtQuerySecurityPolicy {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xB10C}, {0xB209}, {0xB384}, {0xB403}, {0xB482},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xA48B}, {0xA786}, {0xA905}, {0xAA10}, {0xAA8F}, {0xAB0A}, {0xAE08}, {0xAE87},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtQuerySemaphore {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xB18C}, {0xB289}, {0xB404}, {0xB483}, {0xB502},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xA18E}, {0xA30D}, {0xA50B}, {0xA806}, {0xA985}, {0xAA90}, {0xAB0F}, {0xAB8A}, {0xAE88}, {0xAF07},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x9D01}, {0x9E80},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x6E14}, {0x9092}, {0x9311}, {0x9413},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtQuerySymbolicLinkObject {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xB20C}, {0xB309}, {0xB484}, {0xB503}, {0xB582},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xA20E}, {0xA38D}, {0xA58B}, {0xA886}, {0xAA05}, {0xAB10}, {0xAB8F}, {0xAC0A}, {0xAF08}, {0xAF87},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x9D81}, {0x9F00},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x6E94}, {0x9112}, {0x9391}, {0x9493},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtQuerySystemEnvironmentValue {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xB28C}, {0xB389}, {0xB504}, {0xB583}, {0xB602},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xA28E}, {0xA40D}, {0xA60B}, {0xA906}, {0xAA85}, {0xAB90}, {0xAC0F}, {0xAC8A}, {0xAF88}, {0xB007},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x9E01}, {0x9F80},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x6F14}, {0x9192}, {0x9411}, {0x9513},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtQuerySystemEnvironmentValueEx {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xB30C}, {0xB409}, {0xB584}, {0xB603}, {0xB682},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xA30E}, {0xA48D}, {0xA68B}, {0xA986}, {0xAB05}, {0xAC10}, {0xAC8F}, {0xAD0A}, {0xB008}, {0xB087},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x9E81}, {0xA000},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x6F94}, {0x9212}, {0x9491}, {0x9593},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtQuerySystemInformation {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x1B16},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x1A01}, {0x1A80},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x1995},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtQuerySystemInformationEx {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xB38C}, {0xB489}, {0xB604}, {0xB683}, {0xB702},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xA38E}, {0xA50D}, {0xA70B}, {0xAA06}, {0xAB85}, {0xAC90}, {0xAD0F}, {0xAD8A}, {0xB088}, {0xB107},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x9F01}, {0xA080},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x9613},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtQuerySystemTime {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x2D16},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x2C01}, {0x2C80},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x2B95},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtQueryTimer {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x1C16},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x1B01}, {0x1B80},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x1A95},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtQueryTimerResolution {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xB40C}, {0xB509}, {0xB684}, {0xB703}, {0xB782},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xA40E}, {0xA58D}, {0xA78B}, {0xAA86}, {0xAC05}, {0xAD10}, {0xAD8F}, {0xAE0A}, {0xB108}, {0xB187},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x9F81}, {0xA100},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x7014}, {0x9292}, {0x9511}, {0x9693},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtQueryValueKey {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x0B96},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x0A81}, {0x0B00},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x0A15},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtQueryVirtualMemory {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x1196},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x1081}, {0x1100},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x1015},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtQueryVolumeInformationFile {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x2496},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x2381}, {0x2400},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x2315},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8)
    class CNtQueryWnfStateData {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xB48C}, {0xB589}, {0xB704}, {0xB783}, {0xB802},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xA48E}, {0xA60D}, {0xA80B}, {0xAB06}, {0xAC85}, {0xAD90}, {0xAE0F}, {0xAE8A}, {0xB188}, {0xB207},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xA001}, {0xA180},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8)
    class CNtQueryWnfStateNameInformation {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xB50C}, {0xB609}, {0xB784}, {0xB803}, {0xB882},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xA50E}, {0xA68D}, {0xA88B}, {0xAB86}, {0xAD05}, {0xAE10}, {0xAE8F}, {0xAF0A}, {0xB208}, {0xB287},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xA081}, {0xA200},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtQueueApcThread {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x2296},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x2181}, {0x2200},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x2115},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtQueueApcThreadEx {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xB58C}, {0xB689}, {0xB804}, {0xB883}, {0xB902},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xA58E}, {0xA70D}, {0xA90B}, {0xAC06}, {0xAD85}, {0xAE90}, {0xAF0F}, {0xAF8A}, {0xB288}, {0xB307},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xA101}, {0xA280},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x9713},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
    class CNtQueueApcThreadEx2 {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xB60C}, {0xB709}, {0xB884}, {0xB903}, {0xB982},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xB387},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtRaiseException {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xB68C}, {0xB789}, {0xB904}, {0xB983}, {0xBA02},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xA60E}, {0xA78D}, {0xA98B}, {0xAC86}, {0xAE05}, {0xAF10}, {0xAF8F}, {0xB00A}, {0xB308}, {0xB407},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xA181}, {0xA300},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x7094}, {0x9312}, {0x9591}, {0x9793},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtRaiseHardError {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xB70C}, {0xB809}, {0xB984}, {0xBA03}, {0xBA82},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xA68E}, {0xA80D}, {0xAA0B}, {0xAD06}, {0xAE85}, {0xAF90}, {0xB00F}, {0xB08A}, {0xB388}, {0xB487},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xA201}, {0xA380},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x7114}, {0x9392}, {0x9611}, {0x9813},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtReadFile {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x0316},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x0201}, {0x0280},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x0195},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtReadFileScatter {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x1716},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x1601}, {0x1680},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x1595},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtReadOnlyEnlistment {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xB78C}, {0xB889}, {0xBA04}, {0xBA83}, {0xBB02},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xA70E}, {0xA88D}, {0xAA8B}, {0xAD86}, {0xAF05}, {0xB010}, {0xB08F}, {0xB10A}, {0xB408}, {0xB507},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xA281}, {0xA400},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x9412}, {0x9691}, {0x9893},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtReadRequestData {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x2A16},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x2901}, {0x2980},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x2895},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtReadVirtualMemory {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x1F96},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x1E81}, {0x1F00},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x1E15},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11)
    class CNtReadVirtualMemoryEx {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            {0xB80C}, {0xB909}, {0xBA84}, {0xBB03}, {0xBB82},
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtRecoverEnlistment {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xB88C}, {0xB989}, {0xBB04}, {0xBB83}, {0xBC02},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xA78E}, {0xA90D}, {0xAB0B}, {0xAE06}, {0xAF85}, {0xB090}, {0xB10F}, {0xB18A}, {0xB488}, {0xB587},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xA301}, {0xA480},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x9492}, {0x9711}, {0x9913},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtRecoverResourceManager {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xB90C}, {0xBA09}, {0xBB84}, {0xBC03}, {0xBC82},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xA80E}, {0xA98D}, {0xAB8B}, {0xAE86}, {0xB005}, {0xB110}, {0xB18F}, {0xB20A}, {0xB508}, {0xB607},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xA381}, {0xA500},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x9512}, {0x9791}, {0x9993},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtRecoverTransactionManager {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xB98C}, {0xBA89}, {0xBC04}, {0xBC83}, {0xBD02},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xA88E}, {0xAA0D}, {0xAC0B}, {0xAF06}, {0xB085}, {0xB190}, {0xB20F}, {0xB28A}, {0xB588}, {0xB687},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xA401}, {0xA580},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x9592}, {0x9811}, {0x9A13},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtRegisterProtocolAddressInformation {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xBA0C}, {0xBB09}, {0xBC84}, {0xBD03}, {0xBD82},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xA90E}, {0xAA8D}, {0xAC8B}, {0xAF86}, {0xB105}, {0xB210}, {0xB28F}, {0xB30A}, {0xB608}, {0xB707},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xA481}, {0xA600},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x9612}, {0x9891}, {0x9A93},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtRegisterThreadTerminatePort {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xBA8C}, {0xBB89}, {0xBD04}, {0xBD83}, {0xBE02},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xA98E}, {0xAB0D}, {0xAD0B}, {0xB006}, {0xB185}, {0xB290}, {0xB30F}, {0xB38A}, {0xB688}, {0xB787},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xA501}, {0xA680},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x7194}, {0x9692}, {0x9911}, {0x9B13},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN_OLD)
    class CNtReleaseCMFViewOwnership {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            {0x9712}, {0x9991},
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtReleaseKeyedEvent {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xBB0C}, {0xBC09}, {0xBD84}, {0xBE03}, {0xBE82},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xAA0E}, {0xAB8D}, {0xAD8B}, {0xB086}, {0xB205}, {0xB310}, {0xB38F}, {0xB40A}, {0xB708}, {0xB807},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xA581}, {0xA700},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x7214}, {0x9792}, {0x9A11}, {0x9B93},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtReleaseMutant {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x1016},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x0F01}, {0x0F80},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x0E95},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtReleaseSemaphore {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x0516},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x0401}, {0x0480},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x0395},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtReleaseWorkerFactoryWorker {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xBB8C}, {0xBC89}, {0xBE04}, {0xBE83}, {0xBF02},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xAA8E}, {0xAC0D}, {0xAE0B}, {0xB106}, {0xB285}, {0xB390}, {0xB40F}, {0xB48A}, {0xB788}, {0xB887},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xA601}, {0xA780},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x9812}, {0x9A91}, {0x9C13},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtRemoveIoCompletion {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x0496},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x0381}, {0x0400},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x0315},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtRemoveIoCompletionEx {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xBC0C}, {0xBD09}, {0xBE84}, {0xBF03}, {0xBF82},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xAB0E}, {0xAC8D}, {0xAE8B}, {0xB186}, {0xB305}, {0xB410}, {0xB48F}, {0xB50A}, {0xB808}, {0xB907},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xA681}, {0xA800},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x9892}, {0x9B11}, {0x9C93},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtRemoveProcessDebug {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xBC8C}, {0xBD89}, {0xBF04}, {0xBF83}, {0xC002},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xAB8E}, {0xAD0D}, {0xAF0B}, {0xB206}, {0xB385}, {0xB490}, {0xB50F}, {0xB58A}, {0xB888}, {0xB987},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xA701}, {0xA880},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x7294}, {0x9912}, {0x9B91}, {0x9D13},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtRenameKey {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xBD0C}, {0xBE09}, {0xBF84}, {0xC003}, {0xC082},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xAC0E}, {0xAD8D}, {0xAF8B}, {0xB286}, {0xB405}, {0xB510}, {0xB58F}, {0xB60A}, {0xB908}, {0xBA07},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xA781}, {0xA900},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x7314}, {0x9992}, {0x9C11}, {0x9D93},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtRenameTransactionManager {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xBD8C}, {0xBE89}, {0xC004}, {0xC083}, {0xC102},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xAC8E}, {0xAE0D}, {0xB00B}, {0xB306}, {0xB485}, {0xB590}, {0xB60F}, {0xB68A}, {0xB988}, {0xBA87},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xA801}, {0xA980},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x9A12}, {0x9E13},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtReplaceKey {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xBE0C}, {0xBF09}, {0xC084}, {0xC103}, {0xC182},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xAD0E}, {0xAE8D}, {0xB08B}, {0xB386}, {0xB505}, {0xB610}, {0xB68F}, {0xB70A}, {0xBA08}, {0xBB07},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xA881}, {0xAA00},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x7394}, {0x9A92}, {0x9C91}, {0x9E93},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtReplacePartitionUnit {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xBE8C}, {0xBF89}, {0xC104}, {0xC183}, {0xC202},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xAD8E}, {0xAF0D}, {0xB10B}, {0xB406}, {0xB585}, {0xB690}, {0xB70F}, {0xB78A}, {0xBA88}, {0xBB87},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xA901}, {0xAA80},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x9B12}, {0x9F13},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtReplyPort {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x0616},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x0501}, {0x0580},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x0495},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtReplyWaitReceivePort {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x0596},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x0481}, {0x0500},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x0415},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtReplyWaitReceivePortEx {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x1596},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x1481}, {0x1500},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x1415},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtReplyWaitReplyPort {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xBF0C}, {0xC009}, {0xC184}, {0xC203}, {0xC282},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xAE0E}, {0xAF8D}, {0xB18B}, {0xB486}, {0xB605}, {0xB710}, {0xB78F}, {0xB80A}, {0xBB08}, {0xBC07},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xA981}, {0xAB00},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x7414}, {0x9B92}, {0x9D11}, {0x9F93},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN_OLD)
    class CNtRequestDeviceWakeup {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            {0x7494}, {0x9C12}, {0x9D91},
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtRequestPort {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xBF8C}, {0xC089}, {0xC204}, {0xC283}, {0xC302},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xAE8E}, {0xB00D}, {0xB20B}, {0xB506}, {0xB685}, {0xB790}, {0xB80F}, {0xB88A}, {0xBB88}, {0xBC87},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xAA01}, {0xAB80},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x7514}, {0x9C92}, {0x9E11}, {0xA013},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtRequestWaitReplyPort {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x1116},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x1001}, {0x1080},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x0F95},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN_OLD)
    class CNtRequestWakeupLatency {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            {0x7594}, {0x9D12}, {0x9E91},
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtResetEvent {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xC00C}, {0xC109}, {0xC284}, {0xC303}, {0xC382},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xAF0E}, {0xB08D}, {0xB28B}, {0xB586}, {0xB705}, {0xB810}, {0xB88F}, {0xB90A}, {0xBC08}, {0xBD07},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xAA81}, {0xAC00},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x7614}, {0x9D92}, {0x9F11}, {0xA093},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtResetWriteWatch {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xC08C}, {0xC189}, {0xC304}, {0xC383}, {0xC402},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xAF8E}, {0xB10D}, {0xB30B}, {0xB606}, {0xB785}, {0xB890}, {0xB90F}, {0xB98A}, {0xBC88}, {0xBD87},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xAB01}, {0xAC80},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x7694}, {0x9E12}, {0x9F91}, {0xA113},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtRestoreKey {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xC10C}, {0xC209}, {0xC384}, {0xC403}, {0xC482},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xB00E}, {0xB18D}, {0xB38B}, {0xB686}, {0xB805}, {0xB910}, {0xB98F}, {0xBA0A}, {0xBD08}, {0xBE07},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xAB81}, {0xAD00},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x7714}, {0x9E92}, {0xA011}, {0xA193},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtResumeProcess {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xC18C}, {0xC289}, {0xC404}, {0xC483}, {0xC502},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xB08E}, {0xB20D}, {0xB40B}, {0xB706}, {0xB885}, {0xB990}, {0xBA0F}, {0xBA8A}, {0xBD88}, {0xBE87},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xAC01}, {0xAD80},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x7794}, {0x9F12}, {0xA091}, {0xA213},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtResumeThread {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x2916},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x2801}, {0x2880},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x2795},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
    class CNtRevertContainerImpersonation {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xC20C}, {0xC309}, {0xC484}, {0xC503}, {0xC582},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xB10E}, {0xB28D}, {0xB48B}, {0xB786}, {0xB905}, {0xBA10}, {0xBA8F}, {0xBB0A}, {0xBE08}, {0xBF07},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtRollbackComplete {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xC28C}, {0xC389}, {0xC504}, {0xC583}, {0xC602},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xB18E}, {0xB30D}, {0xB50B}, {0xB806}, {0xB985}, {0xBA90}, {0xBB0F}, {0xBB8A}, {0xBE88}, {0xBF87},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xAC81}, {0xAE00},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x9F92}, {0xA111}, {0xA293},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtRollbackEnlistment {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xC30C}, {0xC409}, {0xC584}, {0xC603}, {0xC682},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xB20E}, {0xB38D}, {0xB58B}, {0xB886}, {0xBA05}, {0xBB10}, {0xBB8F}, {0xBC0A}, {0xBF08}, {0xC007},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xAD01}, {0xAE80},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0xA012}, {0xA191}, {0xA313},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
    class CNtRollbackRegistryTransaction {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xC38C}, {0xC489}, {0xC604}, {0xC683}, {0xC702},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xB60B}, {0xB906}, {0xBA85}, {0xBB90}, {0xBC0F}, {0xBC8A}, {0xBF88}, {0xC087},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN_OLD)
    class CNtRollbackSavepointTransaction {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            {0xA211},
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtRollbackTransaction {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xC40C}, {0xC509}, {0xC684}, {0xC703}, {0xC782},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xB28E}, {0xB40D}, {0xB68B}, {0xB986}, {0xBB05}, {0xBC10}, {0xBC8F}, {0xBD0A}, {0xC008}, {0xC107},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xAD81}, {0xAF00},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0xA092}, {0xA291}, {0xA393},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtRollforwardTransactionManager {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xC48C}, {0xC589}, {0xC704}, {0xC783}, {0xC802},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xB30E}, {0xB48D}, {0xB70B}, {0xBA06}, {0xBB85}, {0xBC90}, {0xBD0F}, {0xBD8A}, {0xC088}, {0xC187},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xAE01}, {0xAF80},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0xA112}, {0xA311}, {0xA413},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtSaveKey {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xC50C}, {0xC609}, {0xC784}, {0xC803}, {0xC882},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xB38E}, {0xB50D}, {0xB78B}, {0xBA86}, {0xBC05}, {0xBD10}, {0xBD8F}, {0xBE0A}, {0xC108}, {0xC207},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xAE81}, {0xB000},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x7814}, {0xA192}, {0xA391}, {0xA493},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtSaveKeyEx {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xC58C}, {0xC689}, {0xC804}, {0xC883}, {0xC902},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xB40E}, {0xB58D}, {0xB80B}, {0xBB06}, {0xBC85}, {0xBD90}, {0xBE0F}, {0xBE8A}, {0xC188}, {0xC287},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xAF01}, {0xB080},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x7894}, {0xA212}, {0xA411}, {0xA513},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtSaveMergedKeys {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xC60C}, {0xC709}, {0xC884}, {0xC903}, {0xC982},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xB48E}, {0xB60D}, {0xB88B}, {0xBB86}, {0xBD05}, {0xBE10}, {0xBE8F}, {0xBF0A}, {0xC208}, {0xC307},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xAF81}, {0xB100},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x7914}, {0xA292}, {0xA491}, {0xA593},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN_OLD)
    class CNtSavepointComplete {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            {0xA511},
        };
    };
#endif

#if defined(SYSCAT_WIN_OLD)
    class CNtSavepointTransaction {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            {0xA591},
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtSecureConnectPort {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xC68C}, {0xC789}, {0xC904}, {0xC983}, {0xCA02},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xB50E}, {0xB68D}, {0xB90B}, {0xBC06}, {0xBD85}, {0xBE90}, {0xBF0F}, {0xBF8A}, {0xC288}, {0xC387},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xB001}, {0xB180},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x7994}, {0xA312}, {0xA640},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtSerializeBoot {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xC70C}, {0xC809}, {0xC984}, {0xCA03}, {0xCA82},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xB58E}, {0xB70D}, {0xB98B}, {0xBC86}, {0xBE05}, {0xBF10}, {0xBF8F}, {0xC00A}, {0xC308}, {0xC407},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xB081}, {0xB200},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0xA693},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtSetBootEntryOrder {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xC78C}, {0xC889}, {0xCA04}, {0xCA83}, {0xCB02},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xB60E}, {0xB78D}, {0xBA0B}, {0xBD06}, {0xBE85}, {0xBF90}, {0xC00F}, {0xC08A}, {0xC388}, {0xC487},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xB101}, {0xB280},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x7A14}, {0xA392}, {0xA691}, {0xA713},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtSetBootOptions {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xC80C}, {0xC909}, {0xCA84}, {0xCB03}, {0xCB82},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xB68E}, {0xB80D}, {0xBA8B}, {0xBD86}, {0xBF05}, {0xC010}, {0xC08F}, {0xC10A}, {0xC408}, {0xC507},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xB181}, {0xB300},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x7A94}, {0xA412}, {0xA711}, {0xA793},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8)
    class CNtSetCachedSigningLevel {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xC88C}, {0xC989}, {0xCB04}, {0xCB83}, {0xCC02},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xB70E}, {0xB88D}, {0xBB0B}, {0xBE06}, {0xBF85}, {0xC090}, {0xC10F}, {0xC18A}, {0xC488}, {0xC587},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xB201}, {0xB380},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
    class CNtSetCachedSigningLevel2 {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xC90C}, {0xCA09}, {0xCB84}, {0xCC03}, {0xCC82},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xBB8B}, {0xBE86}, {0xC005}, {0xC110}, {0xC18F}, {0xC20A}, {0xC508}, {0xC607},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtSetContextThread {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xC98C}, {0xCA89}, {0xCC04}, {0xCC83}, {0xCD02},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xB78E}, {0xB90D}, {0xBC0B}, {0xBF06}, {0xC085}, {0xC190}, {0xC20F}, {0xC28A}, {0xC588}, {0xC687},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xB281}, {0xB400},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x7B14}, {0xA492}, {0xA791}, {0xA813},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtSetDebugFilterState {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xCA0C}, {0xCB09}, {0xCC84}, {0xCD03}, {0xCD82},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xB80E}, {0xB98D}, {0xBC8B}, {0xBF86}, {0xC105}, {0xC210}, {0xC28F}, {0xC30A}, {0xC608}, {0xC707},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xB301}, {0xB480},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x7B94}, {0xA512}, {0xA811}, {0xA893},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtSetDefaultHardErrorPort {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xCA8C}, {0xCB89}, {0xCD04}, {0xCD83}, {0xCE02},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xB88E}, {0xBA0D}, {0xBD0B}, {0xC006}, {0xC185}, {0xC290}, {0xC30F}, {0xC38A}, {0xC688}, {0xC787},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xB381}, {0xB500},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x7C14}, {0xA592}, {0xA891}, {0xA913},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtSetDefaultLocale {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xCB0C}, {0xCC09}, {0xCD84}, {0xCE03}, {0xCE82},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xB90E}, {0xBA8D}, {0xBD8B}, {0xC086}, {0xC205}, {0xC310}, {0xC38F}, {0xC40A}, {0xC708}, {0xC807},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xB401}, {0xB580},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x7C94}, {0xA612}, {0xA911}, {0xA993},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtSetDefaultUILanguage {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xCB8C}, {0xCC89}, {0xCE04}, {0xCE83}, {0xCF02},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xB98E}, {0xBB0D}, {0xBE0B}, {0xC106}, {0xC285}, {0xC390}, {0xC40F}, {0xC48A}, {0xC788}, {0xC887},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xB481}, {0xB600},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x7D14}, {0xA692}, {0xA991}, {0xAA13},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtSetDriverEntryOrder {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xCC0C}, {0xCD09}, {0xCE84}, {0xCF03}, {0xCF82},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xBA0E}, {0xBB8D}, {0xBE8B}, {0xC186}, {0xC305}, {0xC410}, {0xC48F}, {0xC50A}, {0xC808}, {0xC907},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xB501}, {0xB680},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x7D94}, {0xA712}, {0xAA11}, {0xAA93},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtSetEaFile {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xCC8C}, {0xCD89}, {0xCF04}, {0xCF83}, {0xD002},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xBA8E}, {0xBC0D}, {0xBF0B}, {0xC206}, {0xC385}, {0xC490}, {0xC50F}, {0xC58A}, {0xC888}, {0xC987},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xB581}, {0xB700},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x7E14}, {0xA792}, {0xAA91}, {0xAB13},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtSetEvent {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x0716},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x0601}, {0x0680},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x0595},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtSetEventBoostPriority {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x1696},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x1581}, {0x1600},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x1515},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11)
    class CNtSetEventEx {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            {0xD003}, {0xD082},
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtSetHighEventPair {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xCD0C}, {0xCE09}, {0xCF84}, {0xD083}, {0xD102},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xBB0E}, {0xBC8D}, {0xBF8B}, {0xC286}, {0xC405}, {0xC510}, {0xC58F}, {0xC60A}, {0xC908}, {0xCA07},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xB601}, {0xB780},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x7E94}, {0xA812}, {0xAB11}, {0xAB93},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtSetHighWaitLowEventPair {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xCD8C}, {0xCE89}, {0xD004}, {0xD103}, {0xD182},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xBB8E}, {0xBD0D}, {0xC00B}, {0xC306}, {0xC485}, {0xC590}, {0xC60F}, {0xC68A}, {0xC988}, {0xCA87},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xB681}, {0xB800},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x7F14}, {0xA892}, {0xAB91}, {0xAC13},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8)
    class CNtSetIRTimer {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xCE0C}, {0xCF09}, {0xD084}, {0xD183}, {0xD202},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xBC0E}, {0xBD8D}, {0xC08B}, {0xC386}, {0xC505}, {0xC610}, {0xC68F}, {0xC70A}, {0xCA08}, {0xCB07},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xB701}, {0xB880},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11)
    class CNtSetInformationCpuPartition {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            {0xD104}, {0xD203}, {0xD282},
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtSetInformationDebugObject {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xCE8C}, {0xCF89}, {0xD184}, {0xD283}, {0xD302},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xBC8E}, {0xBE0D}, {0xC10B}, {0xC406}, {0xC585}, {0xC690}, {0xC70F}, {0xC78A}, {0xCA88}, {0xCB87},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xB781}, {0xB900},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x7F94}, {0xA912}, {0xAC11}, {0xAC93},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtSetInformationEnlistment {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xCF0C}, {0xD009}, {0xD204}, {0xD303}, {0xD382},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xBD0E}, {0xBE8D}, {0xC18B}, {0xC486}, {0xC605}, {0xC710}, {0xC78F}, {0xC80A}, {0xCB08}, {0xCC07},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xB801}, {0xB980},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0xA992}, {0xAC91}, {0xAD13},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtSetInformationFile {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x1396},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x1281}, {0x1300},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x1215},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11)
    class CNtSetInformationIoRing {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            {0xD089}, {0xD284}, {0xD383}, {0xD402},
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtSetInformationJobObject {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xCF8C}, {0xD109}, {0xD304}, {0xD403}, {0xD482},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xBD8E}, {0xBF0D}, {0xC20B}, {0xC506}, {0xC685}, {0xC790}, {0xC80F}, {0xC88A}, {0xCB88}, {0xCC87},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xB881}, {0xBA00},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x8014}, {0xAA12}, {0xAD11}, {0xAD93},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtSetInformationKey {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xD00C}, {0xD189}, {0xD384}, {0xD483}, {0xD502},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xBE0E}, {0xBF8D}, {0xC28B}, {0xC586}, {0xC705}, {0xC810}, {0xC88F}, {0xC90A}, {0xCC08}, {0xCD07},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xB901}, {0xBA80},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x8094}, {0xAA92}, {0xAD91}, {0xAE13},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtSetInformationObject {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x2E16},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x2D01}, {0x2D80},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x2C95},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtSetInformationProcess {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x0E16},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x0D01}, {0x0D80},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x0C95},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtSetInformationResourceManager {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xD08C}, {0xD209}, {0xD404}, {0xD503}, {0xD582},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xBE8E}, {0xC00D}, {0xC30B}, {0xC606}, {0xC785}, {0xC890}, {0xC90F}, {0xC98A}, {0xCC88}, {0xCD87},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xB981}, {0xBB00},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0xAB12}, {0xAE11}, {0xAE93},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
    class CNtSetInformationSymbolicLink {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xD10C}, {0xD289}, {0xD484}, {0xD583}, {0xD602},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xBF0E}, {0xC08D}, {0xC38B}, {0xC686}, {0xC805}, {0xC910}, {0xC98F}, {0xCA0A}, {0xCD08}, {0xCE07},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtSetInformationThread {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x0696},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x0581}, {0x0600},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x0515},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtSetInformationToken {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xD18C}, {0xD309}, {0xD504}, {0xD603}, {0xD682},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xBF8E}, {0xC10D}, {0xC40B}, {0xC706}, {0xC885}, {0xC990}, {0xCA0F}, {0xCA8A}, {0xCD88}, {0xCE87},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xBA01}, {0xBB80},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x8114}, {0xAB92}, {0xAE91}, {0xAF13},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtSetInformationTransaction {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xD20C}, {0xD389}, {0xD584}, {0xD683}, {0xD702},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xC00E}, {0xC18D}, {0xC48B}, {0xC786}, {0xC905}, {0xCA10}, {0xCA8F}, {0xCB0A}, {0xCE08}, {0xCF07},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xBA81}, {0xBC00},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0xAC12}, {0xAF11}, {0xAF93},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtSetInformationTransactionManager {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xD28C}, {0xD409}, {0xD604}, {0xD703}, {0xD782},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xC08E}, {0xC20D}, {0xC50B}, {0xC806}, {0xC985}, {0xCA90}, {0xCB0F}, {0xCB8A}, {0xCE88}, {0xCF87},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xBB01}, {0xBC80},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0xAC92}, {0xAF91}, {0xB013},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8)
    class CNtSetInformationVirtualMemory {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xD30C}, {0xD489}, {0xD684}, {0xD783}, {0xD802},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xC10E}, {0xC28D}, {0xC58B}, {0xC886}, {0xCA05}, {0xCB10}, {0xCB8F}, {0xCC0A}, {0xCF08}, {0xD007},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xBB81}, {0xBD00},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtSetInformationWorkerFactory {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xD38C}, {0xD509}, {0xD704}, {0xD803}, {0xD882},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xC18E}, {0xC30D}, {0xC60B}, {0xC906}, {0xCA85}, {0xCB90}, {0xCC0F}, {0xCC8A}, {0xCF88}, {0xD087},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xBC01}, {0xBD80},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0xAD12}, {0xB011}, {0xB093},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtSetIntervalProfile {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xD40C}, {0xD589}, {0xD784}, {0xD883}, {0xD902},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xC20E}, {0xC38D}, {0xC68B}, {0xC986}, {0xCB05}, {0xCC10}, {0xCC8F}, {0xCD0A}, {0xD008}, {0xD107},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xBC81}, {0xBE00},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x8194}, {0xAD92}, {0xB091}, {0xB113},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtSetIoCompletion {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xD48C}, {0xD609}, {0xD804}, {0xD903}, {0xD982},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xC28E}, {0xC40D}, {0xC70B}, {0xCA06}, {0xCB85}, {0xCC90}, {0xCD0F}, {0xCD8A}, {0xD088}, {0xD187},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xBD01}, {0xBE80},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x8214}, {0xAE12}, {0xB111}, {0xB193},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtSetIoCompletionEx {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xD50C}, {0xD689}, {0xD884}, {0xD983}, {0xDA02},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xC30E}, {0xC48D}, {0xC78B}, {0xCA86}, {0xCC05}, {0xCD10}, {0xCD8F}, {0xCE0A}, {0xD108}, {0xD207},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xBD81}, {0xBF00},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0xB213},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtSetLdtEntries {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xD58C}, {0xD709}, {0xD904}, {0xDA03}, {0xDA82},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xC38E}, {0xC50D}, {0xC80B}, {0xCB06}, {0xCC85}, {0xCD90}, {0xCE0F}, {0xCE8A}, {0xD188}, {0xD287},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xBE01}, {0xBF80},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x8294}, {0xAE92}, {0xB191}, {0xB293},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtSetLowEventPair {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xD60C}, {0xD789}, {0xD984}, {0xDA83}, {0xDB02},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xC40E}, {0xC58D}, {0xC88B}, {0xCB86}, {0xCD05}, {0xCE10}, {0xCE8F}, {0xCF0A}, {0xD208}, {0xD307},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xBE81}, {0xC000},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x8314}, {0xAF12}, {0xB211}, {0xB313},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtSetLowWaitHighEventPair {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xD68C}, {0xD809}, {0xDA04}, {0xDB03}, {0xDB82},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xC48E}, {0xC60D}, {0xC90B}, {0xCC06}, {0xCD85}, {0xCE90}, {0xCF0F}, {0xCF8A}, {0xD288}, {0xD387},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xBF01}, {0xC080},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x8394}, {0xAF92}, {0xB291}, {0xB393},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtSetQuotaInformationFile {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xD70C}, {0xD889}, {0xDA84}, {0xDB83}, {0xDC02},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xC50E}, {0xC68D}, {0xC98B}, {0xCC86}, {0xCE05}, {0xCF10}, {0xCF8F}, {0xD00A}, {0xD308}, {0xD407},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xBF81}, {0xC100},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x8414}, {0xB012}, {0xB311}, {0xB413},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtSetSecurityObject {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xD78C}, {0xD909}, {0xDB04}, {0xDC03}, {0xDC82},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xC58E}, {0xC70D}, {0xCA0B}, {0xCD06}, {0xCE85}, {0xCF90}, {0xD00F}, {0xD08A}, {0xD388}, {0xD487},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xC001}, {0xC180},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x8494}, {0xB092}, {0xB391}, {0xB493},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtSetSystemEnvironmentValue {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xD80C}, {0xD989}, {0xDB84}, {0xDC83}, {0xDD02},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xC60E}, {0xC78D}, {0xCA8B}, {0xCD86}, {0xCF05}, {0xD010}, {0xD08F}, {0xD10A}, {0xD408}, {0xD507},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xC081}, {0xC200},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x8514}, {0xB112}, {0xB411}, {0xB513},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtSetSystemEnvironmentValueEx {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xD88C}, {0xDA09}, {0xDC04}, {0xDD03}, {0xDD82},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xC68E}, {0xC80D}, {0xCB0B}, {0xCE06}, {0xCF85}, {0xD090}, {0xD10F}, {0xD18A}, {0xD488}, {0xD587},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xC101}, {0xC280},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x8594}, {0xB192}, {0xB491}, {0xB593},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtSetSystemInformation {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xD90C}, {0xDA89}, {0xDC84}, {0xDD83}, {0xDE02},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xC70E}, {0xC88D}, {0xCB8B}, {0xCE86}, {0xD005}, {0xD110}, {0xD18F}, {0xD20A}, {0xD508}, {0xD607},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xC181}, {0xC300},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x8614}, {0xB212}, {0xB511}, {0xB613},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtSetSystemPowerState {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xD98C}, {0xDB09}, {0xDD04}, {0xDE03}, {0xDE82},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xC78E}, {0xC90D}, {0xCC0B}, {0xCF06}, {0xD085}, {0xD190}, {0xD20F}, {0xD28A}, {0xD588}, {0xD687},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xC201}, {0xC380},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x8694}, {0xB292}, {0xB591}, {0xB693},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtSetSystemTime {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xDA0C}, {0xDB89}, {0xDD84}, {0xDE83}, {0xDF02},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xC80E}, {0xC98D}, {0xCC8B}, {0xCF86}, {0xD105}, {0xD210}, {0xD28F}, {0xD30A}, {0xD608}, {0xD707},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xC281}, {0xC400},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x8714}, {0xB312}, {0xB611}, {0xB713},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtSetThreadExecutionState {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xDA8C}, {0xDC09}, {0xDE04}, {0xDF03}, {0xDF82},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xC88E}, {0xCA0D}, {0xCD0B}, {0xD006}, {0xD185}, {0xD290}, {0xD30F}, {0xD38A}, {0xD688}, {0xD787},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xC301}, {0xC480},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x8794}, {0xB392}, {0xB691}, {0xB793},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtSetTimer {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x3116},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x3001}, {0x3080},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x2F95},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8)
    class CNtSetTimer2 {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xDB0C}, {0xDC89}, {0xDE84}, {0xDF83}, {0xE002},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xC90E}, {0xCA8D}, {0xCD8B}, {0xD086}, {0xD205}, {0xD310}, {0xD38F}, {0xD40A}, {0xD708}, {0xD807},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xC500},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtSetTimerEx {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xDB8C}, {0xDD09}, {0xDF04}, {0xE003}, {0xE082},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xC98E}, {0xCB0D}, {0xCE0B}, {0xD106}, {0xD285}, {0xD390}, {0xD40F}, {0xD48A}, {0xD788}, {0xD887},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xC381}, {0xC580},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0xB813},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtSetTimerResolution {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xDC0C}, {0xDD89}, {0xDF84}, {0xE083}, {0xE102},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xCA0E}, {0xCB8D}, {0xCE8B}, {0xD186}, {0xD305}, {0xD410}, {0xD48F}, {0xD50A}, {0xD808}, {0xD907},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xC401}, {0xC600},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x8814}, {0xB412}, {0xB711}, {0xB893},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtSetUuidSeed {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xDC8C}, {0xDE09}, {0xE004}, {0xE103}, {0xE182},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xCA8E}, {0xCC0D}, {0xCF0B}, {0xD206}, {0xD385}, {0xD490}, {0xD50F}, {0xD58A}, {0xD888}, {0xD987},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xC481}, {0xC680},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x8894}, {0xB492}, {0xB791}, {0xB913},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtSetValueKey {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x3016},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x2F01}, {0x2F80},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x2E95},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtSetVolumeInformationFile {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xDD0C}, {0xDE89}, {0xE084}, {0xE183}, {0xE202},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xCB0E}, {0xCC8D}, {0xCF8B}, {0xD286}, {0xD405}, {0xD510}, {0xD58F}, {0xD60A}, {0xD908}, {0xDA07},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xC501}, {0xC700},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x8914}, {0xB512}, {0xB811}, {0xB993},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8)
    class CNtSetWnfProcessNotificationEvent {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xDD8C}, {0xDF09}, {0xE104}, {0xE203}, {0xE282},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xCB8E}, {0xCD0D}, {0xD00B}, {0xD306}, {0xD485}, {0xD590}, {0xD60F}, {0xD68A}, {0xD988}, {0xDA87},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xC780},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtShutdownSystem {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xDE0C}, {0xDF89}, {0xE184}, {0xE283}, {0xE302},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xCC0E}, {0xCD8D}, {0xD08B}, {0xD386}, {0xD505}, {0xD610}, {0xD68F}, {0xD70A}, {0xDA08}, {0xDB07},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xC581}, {0xC800},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x8994}, {0xB592}, {0xB891}, {0xBA13},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtShutdownWorkerFactory {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xDE8C}, {0xE009}, {0xE204}, {0xE303}, {0xE382},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xCC8E}, {0xCE0D}, {0xD10B}, {0xD406}, {0xD585}, {0xD690}, {0xD70F}, {0xD78A}, {0xDA88}, {0xDB87},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xC601}, {0xC880},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0xB612}, {0xB911}, {0xBA93},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtSignalAndWaitForSingleObject {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xDF0C}, {0xE089}, {0xE284}, {0xE383}, {0xE402},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xCD0E}, {0xCE8D}, {0xD18B}, {0xD486}, {0xD605}, {0xD710}, {0xD78F}, {0xD80A}, {0xDB08}, {0xDC07},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xC681}, {0xC900},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x8A14}, {0xB692}, {0xB991}, {0xBB13},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtSinglePhaseReject {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xDF8C}, {0xE109}, {0xE304}, {0xE403}, {0xE482},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xCD8E}, {0xCF0D}, {0xD20B}, {0xD506}, {0xD685}, {0xD790}, {0xD80F}, {0xD88A}, {0xDB88}, {0xDC87},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xC701}, {0xC980},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0xB712}, {0xBA11}, {0xBB93},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtStartProfile {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xE00C}, {0xE189}, {0xE384}, {0xE483}, {0xE502},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xCE0E}, {0xCF8D}, {0xD28B}, {0xD586}, {0xD705}, {0xD810}, {0xD88F}, {0xD90A}, {0xDC08}, {0xDD07},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xC781}, {0xCA00},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x8A94}, {0xB792}, {0xBA91}, {0xBC13},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN_OLD)
    class CNtStartTm {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            {0xBB11},
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtStopProfile {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xE08C}, {0xE209}, {0xE404}, {0xE503}, {0xE582},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xCE8E}, {0xD00D}, {0xD30B}, {0xD606}, {0xD785}, {0xD890}, {0xD90F}, {0xD98A}, {0xDC88}, {0xDD87},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xC801}, {0xCA80},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x8B14}, {0xB812}, {0xBB91}, {0xBC93},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11)
    class CNtSubmitIoRing {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            {0xE289}, {0xE484}, {0xE583}, {0xE602},
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8)
    class CNtSubscribeWnfStateChange {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xE10C}, {0xE309}, {0xE504}, {0xE603}, {0xE682},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xCF0E}, {0xD08D}, {0xD38B}, {0xD686}, {0xD805}, {0xD910}, {0xD98F}, {0xDA0A}, {0xDD08}, {0xDE07},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xC881}, {0xCB00},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtSuspendProcess {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xE18C}, {0xE389}, {0xE584}, {0xE683}, {0xE702},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xCF8E}, {0xD10D}, {0xD40B}, {0xD706}, {0xD885}, {0xD990}, {0xDA0F}, {0xDA8A}, {0xDD88}, {0xDE87},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xC901}, {0xCB80},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x8B94}, {0xB892}, {0xBC11}, {0xBD13},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtSuspendThread {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xE20C}, {0xE409}, {0xE604}, {0xE703}, {0xE782},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xD00E}, {0xD18D}, {0xD48B}, {0xD786}, {0xD905}, {0xDA10}, {0xDA8F}, {0xDB0A}, {0xDE08}, {0xDF07},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xC981}, {0xCC00},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x8C14}, {0xB912}, {0xBC91}, {0xBD93},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtSystemDebugControl {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xE28C}, {0xE489}, {0xE684}, {0xE783}, {0xE802},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xD08E}, {0xD20D}, {0xD50B}, {0xD806}, {0xD985}, {0xDA90}, {0xDB0F}, {0xDB8A}, {0xDE88}, {0xDF87},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xCA01}, {0xCC80},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x8C94}, {0xB992}, {0xBD11}, {0xBE13},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
    class CNtTerminateEnclave {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xE30C}, {0xE509}, {0xE704}, {0xE803}, {0xE882},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xDA05}, {0xDB10}, {0xDB8F}, {0xDC0A}, {0xDF08}, {0xE007},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtTerminateJobObject {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xE38C}, {0xE589}, {0xE784}, {0xE883}, {0xE902},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xD10E}, {0xD28D}, {0xD58B}, {0xD886}, {0xDA85}, {0xDB90}, {0xDC0F}, {0xDC8A}, {0xDF88}, {0xE087},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xCA81}, {0xCD00},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x8D14}, {0xBA12}, {0xBD91}, {0xBE93},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtTerminateProcess {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x1616},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x1501}, {0x1580},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x1495},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtTerminateThread {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x2996},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x2881}, {0x2900},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x2815},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtTestAlert {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xE40C}, {0xE609}, {0xE804}, {0xE903}, {0xE982},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xD18E}, {0xD30D}, {0xD60B}, {0xD906}, {0xDB05}, {0xDC10}, {0xDC8F}, {0xDD0A}, {0xE008}, {0xE107},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xCB01}, {0xCD80},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x8D94}, {0xBA92}, {0xBE11}, {0xBF13},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtThawRegistry {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xE48C}, {0xE689}, {0xE884}, {0xE983}, {0xEA02},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xD20E}, {0xD38D}, {0xD68B}, {0xD986}, {0xDB85}, {0xDC90}, {0xDD0F}, {0xDD8A}, {0xE088}, {0xE187},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xCB81}, {0xCE00},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0xBB12}, {0xBE91}, {0xBF93},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtThawTransactions {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xE50C}, {0xE709}, {0xE904}, {0xEA03}, {0xEA82},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xD28E}, {0xD40D}, {0xD70B}, {0xDA06}, {0xDC05}, {0xDD10}, {0xDD8F}, {0xDE0A}, {0xE108}, {0xE207},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xCC01}, {0xCE80},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0xBB92}, {0xBF11}, {0xC013},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtTraceControl {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xE58C}, {0xE789}, {0xE984}, {0xEA83}, {0xEB02},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xD30E}, {0xD48D}, {0xD78B}, {0xDA86}, {0xDC85}, {0xDD90}, {0xDE0F}, {0xDE8A}, {0xE188}, {0xE287},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xCC81}, {0xCF00},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0xBC12}, {0xBF91}, {0xC093},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtTraceEvent {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x2F16},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x2E01}, {0x2E80},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x2D95},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtTranslateFilePath {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xE60C}, {0xE809}, {0xEA04}, {0xEB03}, {0xEB82},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xD38E}, {0xD50D}, {0xD80B}, {0xDB06}, {0xDD05}, {0xDE10}, {0xDE8F}, {0xDF0A}, {0xE208}, {0xE307},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xCD01}, {0xCF80},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x8E14}, {0xBC92}, {0xC011}, {0xC113},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtUmsThreadYield {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xE68C}, {0xE889}, {0xEA84}, {0xEB83}, {0xEC02},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xD40E}, {0xD58D}, {0xD88B}, {0xDB86}, {0xDD85}, {0xDE90}, {0xDF0F}, {0xDF8A}, {0xE288}, {0xE387},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xCD81}, {0xD000},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0xC193},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtUnloadDriver {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xE70C}, {0xE909}, {0xEB04}, {0xEC03}, {0xEC82},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xD48E}, {0xD60D}, {0xD90B}, {0xDC06}, {0xDE05}, {0xDF10}, {0xDF8F}, {0xE00A}, {0xE308}, {0xE407},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xCE01}, {0xD080},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x8E94}, {0xBD12}, {0xC091}, {0xC213},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtUnloadKey {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xE78C}, {0xE989}, {0xEB84}, {0xEC83}, {0xED02},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xD50E}, {0xD68D}, {0xD98B}, {0xDC86}, {0xDE85}, {0xDF90}, {0xE00F}, {0xE08A}, {0xE388}, {0xE487},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xCE81}, {0xD100},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x8F14}, {0xBD92}, {0xC111}, {0xC293},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtUnloadKey2 {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xE80C}, {0xEA09}, {0xEC04}, {0xED03}, {0xED82},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xD58E}, {0xD70D}, {0xDA0B}, {0xDD06}, {0xDF05}, {0xE010}, {0xE08F}, {0xE10A}, {0xE408}, {0xE507},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xCF01}, {0xD180},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x8F94}, {0xBE12}, {0xC191}, {0xC313},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtUnloadKeyEx {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xE88C}, {0xEA89}, {0xEC84}, {0xED83}, {0xEE02},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xD60E}, {0xD78D}, {0xDA8B}, {0xDD86}, {0xDF85}, {0xE090}, {0xE10F}, {0xE18A}, {0xE488}, {0xE587},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xCF81}, {0xD200},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x9014}, {0xBE92}, {0xC211}, {0xC393},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtUnlockFile {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xE90C}, {0xEB09}, {0xED04}, {0xEE03}, {0xEE82},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xD68E}, {0xD80D}, {0xDB0B}, {0xDE06}, {0xE005}, {0xE110}, {0xE18F}, {0xE20A}, {0xE508}, {0xE607},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xD001}, {0xD280},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x9094}, {0xBF12}, {0xC291}, {0xC413},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtUnlockVirtualMemory {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xE98C}, {0xEB89}, {0xED84}, {0xEE83}, {0xEF02},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xD70E}, {0xD88D}, {0xDB8B}, {0xDE86}, {0xE085}, {0xE190}, {0xE20F}, {0xE28A}, {0xE588}, {0xE687},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xD081}, {0xD300},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x9114}, {0xBF92}, {0xC311}, {0xC493},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtUnmapViewOfSection {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x1516},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x1401}, {0x1480},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x1395},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8)
    class CNtUnmapViewOfSectionEx {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xEA0C}, {0xEC09}, {0xEE04}, {0xEF03}, {0xEF82},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xD78E}, {0xD90D}, {0xDC0B}, {0xDF06}, {0xE105}, {0xE210}, {0xE28F}, {0xE30A}, {0xE608}, {0xE707},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xD101}, {0xD380},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8)
    class CNtUnsubscribeWnfStateChange {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xEA8C}, {0xEC89}, {0xEE84}, {0xEF83}, {0xF002},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xD80E}, {0xD98D}, {0xDC8B}, {0xDF86}, {0xE185}, {0xE290}, {0xE30F}, {0xE38A}, {0xE688}, {0xE787},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xD181}, {0xD400},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8)
    class CNtUpdateWnfStateData {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xEB0C}, {0xED09}, {0xEF04}, {0xF003}, {0xF082},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xD88E}, {0xDA0D}, {0xDD0B}, {0xE006}, {0xE205}, {0xE310}, {0xE38F}, {0xE40A}, {0xE708}, {0xE807},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xD201}, {0xD480},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtVdmControl {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xEB8C}, {0xED89}, {0xEF84}, {0xF083}, {0xF102},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xD90E}, {0xDA8D}, {0xDD8B}, {0xE086}, {0xE285}, {0xE390}, {0xE40F}, {0xE48A}, {0xE788}, {0xE887},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xD281}, {0xD500},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x9194}, {0xC012}, {0xC391}, {0xC513},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8)
    class CNtWaitForAlertByThreadId {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xEC0C}, {0xEE09}, {0xF004}, {0xF103}, {0xF182},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xD98E}, {0xDB0D}, {0xDE0B}, {0xE106}, {0xE305}, {0xE410}, {0xE48F}, {0xE50A}, {0xE808}, {0xE907},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xD301}, {0xD580},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtWaitForDebugEvent {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xEC8C}, {0xEE89}, {0xF084}, {0xF183}, {0xF202},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xDA0E}, {0xDB8D}, {0xDE8B}, {0xE186}, {0xE385}, {0xE490}, {0xE50F}, {0xE58A}, {0xE888}, {0xE987},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xD381}, {0xD600},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x9214}, {0xC092}, {0xC411}, {0xC593},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtWaitForKeyedEvent {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xED0C}, {0xEF09}, {0xF104}, {0xF203}, {0xF282},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xDA8E}, {0xDC0D}, {0xDF0B}, {0xE206}, {0xE405}, {0xE510}, {0xE58F}, {0xE60A}, {0xE908}, {0xEA07},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xD401}, {0xD680},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x9294}, {0xC112}, {0xC491}, {0xC613},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtWaitForMultipleObjects {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x2D96},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x2C81}, {0x2D00},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x2C15},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtWaitForMultipleObjects32 {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x0D16},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x0C01}, {0x0C80},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x0B95},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtWaitForSingleObject {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x0216},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x0101}, {0x0180},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x0095},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN8)
    class CNtWaitForWnfNotifications {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            {0xD481},
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtWaitForWorkViaWorkerFactory {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xED8C}, {0xEF89}, {0xF184}, {0xF283}, {0xF302},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xDB0E}, {0xDC8D}, {0xDF8B}, {0xE286}, {0xE485}, {0xE590}, {0xE60F}, {0xE68A}, {0xE988}, {0xEA87},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xD501}, {0xD700},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0xC192}, {0xC511}, {0xC693},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtWaitHighEventPair {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xEE0C}, {0xF009}, {0xF204}, {0xF303}, {0xF382},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xDB8E}, {0xDD0D}, {0xE00B}, {0xE306}, {0xE505}, {0xE610}, {0xE68F}, {0xE70A}, {0xEA08}, {0xEB07},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xD581}, {0xD780},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x9314}, {0xC212}, {0xC591}, {0xC713},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtWaitLowEventPair {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11)
            {0xEE8C}, {0xF089}, {0xF284}, {0xF383}, {0xF402},
            #endif
            #if defined(SYSCAT_WIN10)
            {0xDC0E}, {0xDD8D}, {0xE08B}, {0xE386}, {0xE585}, {0xE690}, {0xE70F}, {0xE78A}, {0xEA88}, {0xEC07},
            #endif
            #if defined(SYSCAT_WIN8)
            {0xD601}, {0xD800},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x9394}, {0xC292}, {0xC611}, {0xC793},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtWorkerFactoryWorkerReady {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x0096},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x0020},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0xC312}, {0xC691}, {0xC813},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtWriteFile {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x0416},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x0301}, {0x0380},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x0295},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtWriteFileGather {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x0D96},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x0C81}, {0x0D00},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x0C15},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtWriteRequestData {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x2B96},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x2A81}, {0x2B00},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x2A15},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtWriteVirtualMemory {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x1D16},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x1C01}, {0x1C80},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x1B95},
            #endif
        };
    };
#endif

#if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10) || defined(SYSCAT_WIN8) || defined(SYSCAT_WIN_OLD)
    class CNtYieldExecution {
    public:
        constexpr static inline CSyscallNumber _Table[] = {
            #if defined(SYSCAT_WIN11) || defined(SYSCAT_WIN10)
            {0x2316},
            #endif
            #if defined(SYSCAT_WIN8)
            {0x2201}, {0x2280},
            #endif
            #if defined(SYSCAT_WIN_OLD)
            {0x2195},
            #endif
        };
    };
#endif

} // namespace _SYSCAT_NAMESPACE

#endif
