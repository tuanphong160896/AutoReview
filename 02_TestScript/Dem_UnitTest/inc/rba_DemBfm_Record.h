/**********************************************************************************************************************
*
* COPYRIGHT RESERVED, Robert Bosch GmbH, 2013. All rights reserved.
* The reproduction, distribution and utilization of this document as well as the communication of its contents to
* others without explicit authorization is prohibited. Offenders will be held liable for the payment of damages.
* All rights reserved in the event of the grant of a patent, utility model or design.
*
**********************************************************************************************************************/
#ifndef RBA_DEMBFM_RECORD_H
#define RBA_DEMBFM_RECORD_H

#include "rba_DemBfm_Cfg_Nvm.h"
#include "rba_DemBfm_Buffer.h"
#include "rba_DemBfm_RecordTypes.h"

#define DEM_START_SEC_ROM_CODE
#include "Dem_Cfg_MemMap.h"

void rba_DemBfm_RecordInitCheckNvM(void);
void rba_DemBfm_RecordShutdown(void);

void rba_DemBfm_InitCausality(void);


void rba_DemBfm_RecordUpdateCustomData( rba_DemBfm_LocationDataType location, const Dem_EvBuffEvent* fe, const rba_DemBfm_StatusAndQualificationBitType qualification, boolean transitionQualifier);
void rba_DemBfm_RecordUpdate( rba_DemBfm_LocationDataType location, const Dem_EvBuffEvent* fe, const rba_DemBfm_StatusAndQualificationBitType qualification);
rba_DemBfm_ReturnType rba_DemBfm_RecordFindSlotForUpdate( const Dem_EvBuffEvent* fe, rba_DemBfm_LocationDataType *location, const rba_DemBfm_StatusAndQualificationBitType qualification );

void rba_DemBfm_RecordFindMaxTimestampAndLocation( rba_DemBfm_TimestampType *timestamp, rba_DemBfm_LocationDataType *location );
rba_DemBfm_TimestampType rba_DemBfm_RecordGetTimestamp( rba_DemBfm_LocationDataType location );

Dem_EventIdType rba_DemBfm_RecordGetEventId( rba_DemBfm_LocationDataType location );

/** * @ingroup RBA_DEMBFM_H
 * Get the first location of the BFM records.
 * Use rba_DemBfm_RecordGetFirst() and rba_DemBfm_RecordGetNext() to iterator through all BFM locations.
 * <b>Never</b> manipulate the location manually.
 * @param [out]  location  pointer to a buffer that is filled with location of the first BFM record
 * @return  RBA_DEMBFM_RET_OK: location got set\n
 *          RBA_DEMBFM_RET_NULL_PTR: location pointer is invalid\n
 *          RBA_DEMBFM_RET_NOK: something went wrong
 */
rba_DemBfm_ReturnType rba_DemBfm_RecordGetFirst( rba_DemBfm_LocationDataType *location );

/** * @ingroup RBA_DEMBFM_H
 * Get the next location of the BFM records.
 * Use rba_DemBfm_RecordGetFirst() and rba_DemBfm_RecordGetNext() to iterator through all BFM locations.
 * <b>Never</b> manipulate the location manually.
 * @param [in,out]  location  pointer to a buffer that contains the last location and is filled with the next location of a BFM record
 * @return  RBA_DEMBFM_RET_OK: location got updated\n
 *          RBA_DEMBFM_RET_NULL_PTR: location pointer is invalid\n
 *          RBA_DEMBFM_RET_NOK: end of iteration reached
 */
rba_DemBfm_ReturnType rba_DemBfm_RecordGetNext( rba_DemBfm_LocationDataType *location );

/** * @ingroup RBA_DEMBFM_H
 * Find the location that contains information for the passed eventId.
 * @param [in]  eventId  can be [RBA_DEMBFM_CHECK_RequestAccepted,RBA_DEMBFM_CHECK_MemoryDeleted,DEM_BFM_CHECK_MangementDataWrittenToNvm]
 * @param [out]  location  can be [RBA_DEMBFM_CHECK_RequestAccepted,RBA_DEMBFM_CHECK_MemoryDeleted,RBA_DEMBFM_CHECK_MangementDataWrittenToNvm]
 * @return  RBA_DEMBFM_RET_OK: a BFM record was found that contains the searched eventId, the location pointer got set\n
 *          RBA_DEMBFM_RET_NULL_PTR: location pointer is invalid\n
 *          RBA_DEMBFM_RET_OUT_OF_RANGE: eventId is invalid\n
 *          RBA_DEMBFM_RET_NOT_FOUND: no BFM record currently conatains information about the eventId
 */
rba_DemBfm_ReturnType rba_DemBfm_RecordFind( Dem_EventIdType eventId, rba_DemBfm_LocationDataType *location );

#if(RBA_DEMBFM_ENABLE_DIRECT_ACCESS_INTERFACE == DEM_BFM_ON)
/** * @ingroup RBA_DEMBFM_H
 * Get direct read access to a BFM record.
 * <b>Caution:</b> only use this function within the BFM task context, eg inside a callback function.
 * <b>The function is not interrupt protected!!!</b>
 * The interface needs to be enabled through configuration switch: DemRbEnableBfmDirectAccessInterface
 * @param [in]  location  the BFM record you want to have read access
 * @param [out]  bfmRecord  is set to point to a BFM record
 * @param [out]  isMarkedForDeletion  is the record marked for deletion (you will see content in the record that is invalid)
 * @param [out]  isEmpty  is the record emtpy
 * @param [out]  isModified  is the record modified (updated and not yet saved in NvM)
 * @param [out]  isLockedPerm  is the record locked permanently
 * @param [out]  isLockedTemp  is the record locked temporary
 * @return  RBA_DEMBFM_RET_OK: all pointers got updated\n
 *          RBA_DEMBFM_RET_NULL_PTR: some pointer is invalid\n
 *          RBA_DEMBFM_RET_OUT_OF_RANGE: location is invalid\n
 *          RBA_DEMBFM_RET_NOK: something went wrong
 */
rba_DemBfm_ReturnType rba_DemBfm_RecordGetDirectReadAccess( rba_DemBfm_LocationDataType location, rba_DemBfm_Record const **bfmRecord,
		boolean *isMarkedForDeletion, boolean *isEmpty, boolean *isModified, boolean *isLockedPerm, boolean *isLockedTemp );
#endif

void rba_DemBfm_RecordLockAllTemp(void);
void rba_DemBfm_RecordUnlockAllTemp(void);
boolean rba_DemBfm_RecordIsLockedTemp( rba_DemBfm_LocationDataType location );
void rba_DemBfm_RecordSetLockedTemp( rba_DemBfm_LocationDataType location );
void rba_DemBfm_RecordResetLockedTemp( rba_DemBfm_LocationDataType location );
void rba_DemBfm_RecordLockAllPerm(void);
void rba_DemBfm_RecordUnlockAllPerm(void);
boolean rba_DemBfm_RecordIsLockedPerm( rba_DemBfm_LocationDataType location );
void rba_DemBfm_RecordSetLockedPerm( rba_DemBfm_LocationDataType location );
void rba_DemBfm_RecordResetLockedPerm( rba_DemBfm_LocationDataType location );
boolean rba_DemBfm_RecordHandleAllowLockedModify( rba_DemBfm_LocationDataType location, Dem_EventIdType eventId );

void rba_DemBfm_RecordRead( rba_DemBfm_LocationDataType location, rba_DemBfm_Record *buffer );
void rba_DemBfm_RecordGetManagementDataNvm( rba_DemBfm_RecordManagementDataNvm *managementDataNvm );


void rba_DemBfm_RecordEncodeBytes( uint8 *pBfmRecDest, rba_DemBfm_Record const *pBfmRecSrc);
void rba_DemBfm_RecordDecodeBytes( rba_DemBfm_Record *pBfmRecDest, uint8 const *pBfmRecSrc);
void rba_DemBfm_RecordEncodeBytes_MemCpySyntax(void *destination, const void* source, uint32 size);

void rba_DemBfm_RecordHandleDeletion( rba_DemBfm_LocationDataType location );
void rba_DemBfm_RecordMarkAllForDeletion(void);


void rba_DemBfm_RecordResetDeletionCounter(void);
boolean rba_DemBfm_RecordIsMarkedForDeletion( rba_DemBfm_LocationDataType location );
void rba_DemBfm_RecordResetDeletionFlag( rba_DemBfm_LocationDataType location );


void rba_DemBfm_RecordSetManagementDataModified(boolean isModified);
boolean rba_DemBfm_RecordIsManagementDataModified(void);



void* rba_DemBfm_RecordGetAddress( rba_DemBfm_LocationDataType location );

void rba_DemBfm_ConsistencyChkForManagementData(void);
void rba_DemBfm_ConsistencyChkForBfmCounters(void);

boolean rba_DemBfm_IsRecordValid(rba_DemBfm_LocationDataType location);

void rba_DemBfm_SetRecordInvalid(rba_DemBfm_LocationDataType location);
void rba_DemBfm_SetManagementDataInvalid(rba_DemBfm_LocationDataType location);

#if(RBA_DEMBFM_EXTENDED_DEBUG_DATA_SUPPORTED == DEM_BFM_ON)

boolean rba_DemBfm_IsExtDbgDataValid(rba_DemBfm_LocationDataType location);
void rba_DemBfm_SetExtDbgDataInvalid(rba_DemBfm_LocationDataType location);
void rba_DemBfm_SetExtDbgDataRecIndexToInvalid(rba_DemBfm_LocationDataType BfmRecordIndex);

uint8 rba_DemBfm_GetExtDbgDataRecordIndex(rba_DemBfm_LocationDataType location);
rba_DemBfm_LocationDataType rba_DemBfm_ExtDbgDataGetBfmRecordIndex( rba_DemBfm_LocationDataType location );

rba_DemBfm_ReturnType rba_DemBfm_ExtDbgDataRecordFindslotForUpdate(rba_DemBfm_LocationDataType location,rba_DemBfm_LocationDataType *locationEdd,
        const Dem_EvBuffEvent* fe, const rba_DemBfm_StatusAndQualificationBitType qualification);
void rba_DemBfm_ExtDbgDataRecordUpdate(rba_DemBfm_LocationDataType location, rba_DemBfm_LocationDataType ExtRecLocation);
void rba_DemBfm_ExtDbgDataRecordHandleDeletion( rba_DemBfm_LocationDataType location );

void rba_DemBfm_ExtDbgDataRecordRead(rba_DemBfm_LocationDataType location, void *buffer);


void rba_DemBfm_ExtSetBfmIndexToInvalid(rba_DemBfm_LocationDataType ExtRecIndex);
void* rba_DemBfm_ExtDbgDataGetRecordAddress(rba_DemBfm_LocationDataType location);
void rba_DemBfm_SetExtDbgDataRecordInvalid(uint8 ExtRecIndex);



#endif

#define DEM_STOP_SEC_ROM_CODE
#include "Dem_Cfg_MemMap.h"

#endif
