#ifndef RBA_BSWSRV_H
#define RBA_BSWSRV_H

#include "Platform_Types.h"
#include "Compiler.h"

typedef struct
{
#ifdef RBA_BSWSRV_PRV_C_LOCK
    volatile uint32 Prv_Lock_vu32;   /* structure content may change without notice as it depends on implementation */
#else
    volatile uint32 Prv_SwapLock_vu32; /* 0: no core tries to get the lock, 1: get lock action in progress */
    volatile uint8  Prv_CoreLock_vu8; /* 0: no core has lock; >1: Core+1 has lock */
    volatile uint8  Prv_ctNest_vu8;   /* lock counter */
#endif
}rba_BswSrv_Lock_to;

#ifdef CPU_SINGLECORE

extern void rba_BswSrv_PrvSuspendCoreLocalInt(void);

extern void rba_BswSrv_PrvResumeCoreLocalInt(void);

extern void* rba_BswSrv_MemCopy(void* xDest_pv, const void* xSrc_pcv, uint32 numBytes_s32);

extern void* rba_BswSrv_MemSet(void* xDest_pv, sint32 xPattern_u32, uint32 numBytes_s32);

extern sint32 rba_BswSrv_MemCompare(const void* xSrc1_pcv, const void* xSrc2_pcv, uint32 numBytes_s32);

LOCAL_INLINE uint32 rba_BswSrv_ByteOrderSwap32(uint32 Input_u32);
LOCAL_INLINE uint16 rba_BswSrv_ByteOrderSwap16(uint16 Input_u16);
/**
 ***************************************************************************************************
 * rba_BswSrv_MemSet8 - initialize memory with 8 Bit data
 *
 * Memory initialization routine. 8 Bit Pattern is written to the destination.
 *
 * \param   xDest_pu8       destination address
 * \param   xPattern_u32    fill pattern, only lower 8 bit used
 * \param   numBytes_u32    number of bytes to be initialized
 * \seealso     rba_BswSrv_MemSet16, rba_BswSrv_MemSet32, rba_BswSrv_MemSet64
 ***************************************************************************************************
 */
LOCAL_INLINE void rba_BswSrv_MemSet8(uint8* xDest_pu8, uint32 xPattern_u32, uint32 numBytes_u32)
{
    uint32 ctLoop_u32;

    for(ctLoop_u32 = 0; ctLoop_u32 < numBytes_u32; ctLoop_u32++)
    {
        *xDest_pu8 = (uint8)xPattern_u32;
        xDest_pu8++;
    }

    return;
}

/**
 *********************************************************************
 * rba_BswSrv_ByteOrderSwap32
 *
 * Swaps the byte order of a 32 bit value for endianess conversion.
 *
 * \param   Input_u32: input value
 * \return  value with swapped byte order
 * \retval  uint32
 * \seealso
 * \usedresources
 *********************************************************************
 */
LOCAL_INLINE uint32 rba_BswSrv_ByteOrderSwap32(uint32 Input_u32)
{
    uint32 retVal_u32;

#if defined(RBA_BSWSRV_PRV_IFX_UC1_ASM)
    asm volatile(" sh.h %0, %1,  8   \n\
                   sh.h %1, %1, -8   \n\
                   or %1, %0         \n\
                   sh %0, %1, -16    \n\
                   insert %0, %0, %1, 16, 16 \n\
				 ": "=&d" (retVal_u32) : "d" (Input_u32));
#elif defined(RBA_BSWSRV_PRV_JDP_UC1_ASM)
    asm volatile(" rotlwi %0,%1,8           \n\
                   rlwimi %0,%1,24,0,7      \n\
                   rlwimi %0,%1,24,16,23    \n\
                 ": "=&r" (retVal_u32) : "r" (Input_u32));
#else
    retVal_u32 = (Input_u32 << 24) | ((Input_u32 & 0xFF00u) << 8) | ((Input_u32 & 0x00FF0000u) >> 8) | (Input_u32 >> 24);
#endif

    /* MISRA RULE 9.1 VIOLATION: variable is set by inline assembly but the checker does not understand this */
    return retVal_u32;
}

/**
 *********************************************************************
 * rba_BswSrv_ByteOrderSwap16
 *
 * Swaps the byte order of a 16 bit value for endianess conversion.
 *
 * \param   Input_u16: input value
 * \return  value with swapped byte order
 * \retval  uint16
 * \seealso
 * \usedresources
 *********************************************************************
 */
LOCAL_INLINE uint16 rba_BswSrv_ByteOrderSwap16(uint16 Input_u16)
{
    uint16 retVal_u16;

#if defined(RBA_BSWSRV_PRV_IFX_UC1_ASM)
    asm volatile(" extr.u %0, %1, 8, 8     \n\
                   insert %0, %0, %1, 8, 8 \n\
                 ": "=&d" (retVal_u16) : "d" (Input_u16));
#else
    retVal_u16 = ((Input_u16 & 0x00FFu) << 8) | ((Input_u16 & 0xFF00u) >> 8);
#endif

    /* MISRA RULE 9.1 VIOLATION: variable is set by inline assembly but the checker does not understand this */
    return retVal_u16;
}

#else



extern uint16 rba_BswSrv_LockCommon_Counter;

extern void rba_BswSrv_PrvGetLockCommon(void);

extern void rba_BswSrv_PrvReleaseLockCommon(void);

extern void rba_BswSrv_PrvGetLockNonest(rba_BswSrv_Lock_to* Lock_pst);

extern void rba_BswSrv_PrvReleaseLockNonest(rba_BswSrv_Lock_to* Lock_pst);

extern void* rba_BswSrv_MemSet(void* xDest_pv, sint32 xPattern_u32, uint32 numBytes_s32);

extern void* rba_BswSrv_MemCopy(void* xDest_pv, const void* xSrc_pcv, uint32 numBytes_s32);

extern sint32 rba_BswSrv_MemCompare(const void* xSrc1_pcv, const void* xSrc2_pcv, uint32 numBytes_s32);

/**
 *********************************************************************
 * rba_BswSrv_ByteOrderSwap32
 *
 * Swaps the byte order of a 32 bit value for endianess conversion.
 *
 * \param   Input_u32: input value
 * \return  value with swapped byte order
 * \retval  uint32
 * \seealso
 * \usedresources
 *********************************************************************
 */
LOCAL_INLINE uint32 rba_BswSrv_ByteOrderSwap32(uint32 Input_u32)
{
    uint32 retVal_u32;

#if defined(RBA_BSWSRV_PRV_IFX_UC1_ASM)
    asm volatile(" sh.h %0, %1,  8   \n\
                   sh.h %1, %1, -8   \n\
                   or %1, %0         \n\
                   sh %0, %1, -16    \n\
                   insert %0, %0, %1, 16, 16 \n\
				 ": "=&d" (retVal_u32) : "d" (Input_u32));
#elif defined(RBA_BSWSRV_PRV_JDP_UC1_ASM)
    asm volatile(" rotlwi %0,%1,8           \n\
                   rlwimi %0,%1,24,0,7      \n\
                   rlwimi %0,%1,24,16,23    \n\
                 ": "=&r" (retVal_u32) : "r" (Input_u32));
#else
    retVal_u32 = (Input_u32 << 24) | ((Input_u32 & 0xFF00u) << 8) | ((Input_u32 & 0x00FF0000u) >> 8) | (Input_u32 >> 24);
#endif

    /* MISRA RULE 9.1 VIOLATION: variable is set by inline assembly but the checker does not understand this */
    return retVal_u32;
}

/**
 *********************************************************************
 * rba_BswSrv_ByteOrderSwap16
 *
 * Swaps the byte order of a 16 bit value for endianess conversion.
 *
 * \param   Input_u16: input value
 * \return  value with swapped byte order
 * \retval  uint16
 * \seealso
 * \usedresources
 *********************************************************************
 */
LOCAL_INLINE uint16 rba_BswSrv_ByteOrderSwap16(uint16 Input_u16)
{
    uint16 retVal_u16;

#if defined(RBA_BSWSRV_PRV_IFX_UC1_ASM)
    asm volatile(" extr.u %0, %1, 8, 8     \n\
                   insert %0, %0, %1, 8, 8 \n\
                 ": "=&d" (retVal_u16) : "d" (Input_u16));
#else
    retVal_u16 = ((Input_u16 & 0x00FFu) << 8) | ((Input_u16 & 0xFF00u) >> 8);
#endif

    /* MISRA RULE 9.1 VIOLATION: variable is set by inline assembly but the checker does not understand this */
    return retVal_u16;
}

/**
 ***************************************************************************************************
 * rba_BswSrv_MemSet8 - initialize memory with 8 Bit data
 *
 * Memory initialization routine. 8 Bit Pattern is written to the destination.
 *
 * \param   xDest_pu8       destination address
 * \param   xPattern_u32    fill pattern, only lower 8 bit used
 * \param   numBytes_u32    number of bytes to be initialized
 * \seealso     rba_BswSrv_MemSet16, rba_BswSrv_MemSet32, rba_BswSrv_MemSet64
 ***************************************************************************************************
 */
LOCAL_INLINE void rba_BswSrv_MemSet8(uint8* xDest_pu8, uint32 xPattern_u32, uint32 numBytes_u32)
{
    uint32 ctLoop_u32;

    for(ctLoop_u32 = 0; ctLoop_u32 < numBytes_u32; ctLoop_u32++)
    {
        *xDest_pu8 = (uint8)xPattern_u32;
        xDest_pu8++;
    }

    return;
}

/**
 ***************************************************************************************************
 * rba_BswSrv_GetPhysCore :
 * The API returns the Current Core ID.
 *
 *
 *
 * \param   None
 *
 * \retval  uint32
 ***************************************************************************************************
 */
LOCAL_INLINE uint32 rba_BswSrv_GetPhysCore(void)
{
    return 0;
#if 0
#if (RBA_BSWSRV_NUM_USED_CORE == 1)
    return 0;
#elif defined(RBA_BSWSRV_PRV_IFX_ARCH)
    /* MISRA RULE 1.1,9.1 VIOLATION: statement expression is required by function */
    return RBA_BSWSRV_IFX_MFCR(RBA_REG_CSFR_CORE_ID_MXCR_OFFSET);
#elif defined(RBA_BSWSRV_PRV_POWER_ARCH)
    /* MISRA RULE 1.1,9.1 VIOLATION: statement expression is required by function */
    return RBA_BSWSRV_JDP_MFSPR(RBA_REG_SPR_PIR_MXSPR_OFFSET);
#else
    return 1;
//#  error "CPU architecture is not supported"
#endif
#endif
}


#endif

#endif  /*__RBA_BSWSRV_H__*/
