/**********************************************************************************************************************
*
* COPYRIGHT RESERVED, Robert Bosch GmbH, 2013. All rights reserved.
* The reproduction, distribution and utilization of this document as well as the communication of its contents to
* others without explicit authorization is prohibited. Offenders will be held liable for the payment of damages.
* All rights reserved in the event of the grant of a patent, utility model or design.
*
**********************************************************************************************************************/
#ifndef RBA_DEMBFM_COUNTER_H
#define RBA_DEMBFM_COUNTER_H


#include "Dem_InternalEnvData.h"
#include "rba_DemBfm_CounterTypes.h"

#define DEM_START_SEC_ROM_CODE
#include "Dem_Cfg_MemMap.h"

/** * @ingroup RBA_DEMBFM_H
 * Get the current value of the internal timestamp counter.
 * The timestamp is used to differentiate the age of the BFM records.
 * @param [out]  timestamp  pointer to a buffer that is filled with current value of the timestamp counter
 * @return  RBA_DEMBFM_RET_OK: timestamp got set\n
 *          RBA_DEMBFM_RET_NULL_PTR: timestamp pointer is invalid\n
 *          RBA_DEMBFM_RET_NOK: something went wrong
 */
rba_DemBfm_ReturnType rba_DemBfm_CounterGetTimestamp( rba_DemBfm_TimestampType *timestamp );

Std_ReturnType rba_DemBfm_WrapperGetTimestamp( uint8* buffer, const Dem_InternalEnvData* internalData );

void rba_DemBfm_CounterCalcTimestamp(void);

void rba_DemBfm_CounterInit(void);

void rba_DemBfm_CounterAdvanceOperationCycle( Dem_OperationCycleList currentTriggers );

//*********************************************************************************************************************
#if (RBA_DEMBFM_COUNTER_IN_NVM_ENABLED == DEM_BFM_ON)
/** * @ingroup RBA_DEMBFM_H
 * Get the current value of the operation cycle counter.
 * The operation cycle type that is responsible for triggering a counter increment has to be set through configuration parameter "DemRbBfmOperationCycleType".
 * @param [out]  operationCycles  pointer to a buffer that is filled with current value of the operation cycle counter
 * @return  RBA_DEMBFM_RET_OK: operationCycles got set\n
 *          RBA_DEMBFM_RET_NULL_PTR: operationCycles pointer is invalid\n
 *          RBA_DEMBFM_RET_NOK: something went wrong
 */
rba_DemBfm_ReturnType rba_DemBfm_CounterGetOperationCycle( rba_DemBfm_OperationCycleCounterType *operationCycles );

/** * @ingroup RBA_DEMBFM_H
 * Get the current value of the absolute operating time counter.
 * The absolute operating time counter counts over all power cycles. The unit of the counter is one second.
 * @param [out]  operatingTime  pointer to a buffer that is filled with current value of the absolute operating time counter
 * @return  RBA_DEMBFM_RET_OK: operatingTime got set\n
 *          RBA_DEMBFM_RET_NULL_PTR: operatingTime pointer is invalid\n
 *          RBA_DEMBFM_RET_NOK: something went wrong
 */
rba_DemBfm_ReturnType rba_DemBfm_CounterGetAbsoluteOperatingTime( rba_DemBfm_AbsoluteOperatingTimeCounterType *operatingTime );

/** * @ingroup RBA_DEMBFM_H
 * Get the current value of the relative operating time counter.
 * The relative operating time counter counts wihtin one power cycle. The unit of the counter is resolution of the Dem task, eg 1ms, 10ms or 20ms.
 * @param [out]  operatingTime  pointer to a buffer that is filled with current value of the relative operating time counter
 * @return  RBA_DEMBFM_RET_OK: operatingTime got set\n
 *          RBA_DEMBFM_RET_NULL_PTR: operatingTime pointer is invalid\n
 *          RBA_DEMBFM_RET_NOK: something went wrong
 */
rba_DemBfm_ReturnType rba_DemBfm_CounterGetRelativeOperatingTime( rba_DemBfm_RelativeOperatingTimeCounterType *operatingTime );

/** * @ingroup RBA_DEMBFM_H
 * Get the unit/resolution of the of the relative operating time counter.
 * The unit of the counter is resolution of the Dem task in milli seconds, eg 1ms, 10ms or 20ms.
 * @param [out]  timebase  pointer to a buffer that is filled with current value of the resolution in ms
 * @return  RBA_DEMBFM_RET_OK: timebase got set\n
 *          RBA_DEMBFM_RET_NULL_PTR: timebase pointer is invalid\n
 *          RBA_DEMBFM_RET_NOK: something went wrong
 */
rba_DemBfm_ReturnType rba_DemBfm_CounterGetRelativeOperatingTimeTimebase( rba_DemBfm_RelativeOperatingTimeCounterTimebaseType *timebase );

Std_ReturnType rba_DemBfm_WrapperGetOperationCycle( uint8* buffer, const Dem_InternalEnvData* internalData );
Std_ReturnType rba_DemBfm_WrapperGetAbsoluteOperatingTime( uint8* buffer, const Dem_InternalEnvData* internalData );
Std_ReturnType rba_DemBfm_WrapperGetRelativeOperatingTime( uint8* buffer, const Dem_InternalEnvData* internalData );

void rba_DemBfm_CounterCalcOperationCycle(void);

void rba_DemBfm_CounterMainFunction(void);
void rba_DemBfm_CounterInitCheckNvM(void);
void rba_DemBfm_CounterShutdown(void);

boolean rba_DemBfm_CounterNeedsToBeSaved(void);
void rba_DemBfm_CounterSetNeedsToBeSaved( boolean needsTobeSaved );
void rba_DemBfm_CounterGetCounterDataNvm( rba_DemBfm_CounterNvm *counterDataNvm );

void rba_DemBfm_CounterDecodeBytes( rba_DemBfm_CounterNvm* pCounterDest, uint8 const * pCounterSrc);
void rba_DemBfm_CounterEncodeBytes( uint8 *pCounterDest, rba_DemBfm_CounterNvm const * pCounterSrc);
void rba_DemBfm_CounterEncodeBytes_MemCpySyntax(void *destination, const void* source, uint32 size);
#endif

#define DEM_STOP_SEC_ROM_CODE
#include "Dem_Cfg_MemMap.h"

#endif
