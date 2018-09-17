/**********************************************************************************************************************
*
* COPYRIGHT RESERVED, Robert Bosch GmbH, 2013. All rights reserved.
* The reproduction, distribution and utilization of this document as well as the communication of its contents to
* others without explicit authorization is prohibited. Offenders will be held liable for the payment of damages.
* All rights reserved in the event of the grant of a patent, utility model or design.
*
**********************************************************************************************************************/
#ifndef RBA_DEMBFM_H
#define RBA_DEMBFM_H


#include "rba_DemBfm_Types.h"

#include "rba_DemBfm_Counter.h"
#include "rba_DemBfm_Record.h"
#include "rba_DemBfm_PB.h"

#define DEM_START_SEC_RAM_INIT
#include "Dem_Cfg_MemMap.h"

extern rba_DemBfm_ConfigDataType const * rba_DemBfm_ConfigParam_pcs;

#define DEM_STOP_SEC_RAM_INIT
#include "Dem_Cfg_MemMap.h"


#define DEM_START_SEC_ROM_CODE
#include "Dem_Cfg_MemMap.h"

void rba_DemBfm_PreInit( rba_DemBfm_ConfigDataType const * demBfmConfigPointer );
void rba_DemBfm_Init(void);
void rba_DemBfm_InitCheckNvM(void);
void rba_DemBfm_Shutdown(void);
void rba_DemBfm_MainFunction(void);


/** * @ingroup RBA_DEMBFM_H
 * Trigger a delete operation. Function returns immediately also delete operation is executed asynchroeously.
 * Use rba_DemBfm_DeleteAllCheck() to check the status.
 * @return  RBA_DEMBFM_RET_OK: order accepted
 */
rba_DemBfm_ReturnType rba_DemBfm_DeleteAllTrigger(void);

/** * @ingroup RBA_DEMBFM_H
 * Check the status of the delete operation that has been initiated by rba_DemBfm_DeleteAllTrigger().
 * You can pass against which status should be checked: check if order has been accepted, check if RAM has been zeroed, check if management data has been updatedin NvM
 * @param [in]  checkStatus  can be [RBA_DEMBFM_CHECK_RequestAccepted,RBA_DEMBFM_CHECK_MemoryDeleted,RBA_DEMBFM_CHECK_MangementDataWrittenToNvm]
 * @return  RBA_DEMBFM_RET_OK: delete operation has reached the status requested\n
 *          RBA_DEMBFM_RET_PENDING: delete operation has not yet reached the status requested\n
 *          RBA_DEMBFM_RET_NOK: no delete operation has been triggered or unsupported checkStatus was used
 */
rba_DemBfm_ReturnType rba_DemBfm_DeleteAllCheck( rba_DemBfm_DeleteAllCheckStatus checkStatus );
boolean rba_DemBfm_DeleteAllIsInProgress(void);

/** * @ingroup RBA_DEMBFM_H
 * Trigger to read one BFM record from NvM.
 * Only one read operation can be handled at a time.
 * @param [in]  location  location of the BFM record, should be aquired by using the interfaces rba_DemBfm_RecordGetFirst(), rba_DemBfm_RecordGetNext() or rba_DemBfm_RecordFind()
 * @param [out] buffer  pointer to a BFM record, where the content of NvM can be stored in
 * @return  RBA_DEMBFM_RET_PENDING: request has been accepted, result is pending\n
 *          RBA_DEMBFM_RET_BUSY: currently busy with another read operation\n
 *          RBA_DEMBFM_RET_OUT_OF_RANGE: the location is not within the limits\n
 *          RBA_DEMBFM_RET_NULL_PTR: pointer to buffer is not valid\n
 *          RBA_DEMBFM_RET_NOK: something went wrong
 */
rba_DemBfm_ReturnType rba_DemBfm_ReadRecordFromNvMTrigger( rba_DemBfm_LocationDataType location, rba_DemBfm_Record *buffer );

/** * @ingroup RBA_DEMBFM_H
 * Check the status of the read operation that has been initiated by rba_DemBfm_ReadRecordFromNvMTrigger().
 * You need to pass the location, that we can be sure you are checking the right read operation.
 * @param [in]  location  the same location as used for rba_DemBfm_ReadRecordFromNvMTrigger()
 * @return  RBA_DEMBFM_RET_OK: the read NvM operation has completed, content of BFM record buffer can now be used\n
 *          RBA_DEMBFM_RET_PENDING: the read NvM operation is not yet finished\n
 *          RBA_DEMBFM_RET_NOT_FOUND: there is no read NvM operation established for the passed location\n
 *          RBA_DEMBFM_RET_NOK: something went wrong
 */
rba_DemBfm_ReturnType rba_DemBfm_ReadRecordFromNvMCheck( rba_DemBfm_LocationDataType location );

/** * @ingroup RBA_DEMBFM_H
 * Trigger to read one BFM record from RAM.
 * Only one read operation can be handled at a time.
 * @param [in]  location  location of the BFM record, should be aquired by using the interfaces rba_DemBfm_RecordGetFirst(), rba_DemBfm_RecordGetNext() or rba_DemBfm_RecordFind()
 * @param [out] buffer  pointer to a BFM record, where the content of RAM can be stored in
 * @return  RBA_DEMBFM_RET_PENDING: request has been accepted, result is pending\n
 *          RBA_DEMBFM_RET_BUSY: currently busy with another read operation\n
 *          RBA_DEMBFM_RET_OUT_OF_RANGE: the location is not within the limits\n
 *          RBA_DEMBFM_RET_NULL_PTR: pointer to buffer is not valid\n
 *          RBA_DEMBFM_RET_NOK: something went wrong
 */
rba_DemBfm_ReturnType rba_DemBfm_ReadRecordFromRAMTrigger( rba_DemBfm_LocationDataType location, rba_DemBfm_Record *buffer );

/** * @ingroup RBA_DEMBFM_H
 * Check the status of the read operation that has been initiated by rba_DemBfm_ReadRecordFromRAMTrigger().
 * You need to pass the location, that we can be sure you are checking the right read operation.
 * @param [in]  location  the same location as used for rba_DemBfm_ReadRecordFromRAMTrigger()
 * @return  RBA_DEMBFM_RET_OK: the read RAM operation has completed, content of BFM record buffer can now be used\n
 *          RBA_DEMBFM_RET_PENDING: the read RAM operation is not yet finished\n
 *          RBA_DEMBFM_RET_NOT_FOUND: there is no read RAM operation established for the passed location\n
 *          RBA_DEMBFM_RET_NOK: something went wrong
 */
rba_DemBfm_ReturnType rba_DemBfm_ReadRecordFromRAMCheck( rba_DemBfm_LocationDataType location );

/** * @ingroup RBA_DEMBFM_H
 * Try to read one BFM record directly from RAM.
 * The read operation can only be granted if currecntly no other process is using the location you want to read.
 * The access to the BFM record is interrupt protected and can block the system for a longer time. So the preferred solution should be to use rba_DemBfm_ReadRecordFromRAMTrigger/Check instead.
 * @param [in]  location  location of the BFM record, should be aquired by using the interfaces rba_DemBfm_RecordGetFirst(), rba_DemBfm_RecordGetNext() or rba_DemBfm_RecordFind()
 * @param [out] buffer  pointer to a BFM record, where the content of RAM can be stored in
 * @return  RBA_DEMBFM_RET_OK: the content was read/copied successfully\n
 *          RBA_DEMBFM_RET_BUSY: the location is crrently in use by another process\n
 *          RBA_DEMBFM_RET_OUT_OF_RANGE: the location is not within the limits\n
 *          RBA_DEMBFM_RET_NULL_PTR: pointer to buffer is not valid\n
 *          RBA_DEMBFM_RET_NOK: something went wrong
 */
rba_DemBfm_ReturnType rba_DemBfm_ReadRecordFromRAMDirect( rba_DemBfm_LocationDataType location, rba_DemBfm_Record *buffer );

/** * @ingroup RBA_DEMBFM_H
 * Temporary lock all BFM records against changes.
 * Temporary means that the entries are only locked as long as the ECU had not power off reset, or until the get unlocked.
 * If a lock and a unlock request arrive at the same time, than locking has the higher priority.
 * @return  RBA_DEMBFM_RET_OK: the BFM records are going to be locked temporary
 */
rba_DemBfm_ReturnType rba_DemBfm_LockAllRecordsTemporary(void);

/** * @ingroup RBA_DEMBFM_H
 * Unlock all temporary locked BFM records.
 * If a lock and a unlock request arrive at the same time, than locking has the higher priority.
 * @return  RBA_DEMBFM_RET_OK: the BFM records are going to be unlocked again
 */
rba_DemBfm_ReturnType rba_DemBfm_UnlockAllRecordsTemporary(void);

/** * @ingroup RBA_DEMBFM_H
 * Permanently lock all BFM records against changes.
 * Permanently means that the entries are locked over several ECU power off cycles, or until they get unlocked.
 * If a lock and a unlock request arrive at the same time, than locking has the higher priority.
 * @return  RBA_DEMBFM_RET_OK: the BFM records are going to be locked permanently
 */
rba_DemBfm_ReturnType rba_DemBfm_LockAllRecordsPermanently(void);

/** * @ingroup RBA_DEMBFM_H
 * Unlock all permanently locked BFM records.
 * If a lock and a unlock request arrive at the same time, than locking has the higher priority.
 * @return  RBA_DEMBFM_RET_OK: the BFM records are going to be unlocked again
 */
rba_DemBfm_ReturnType rba_DemBfm_UnlockAllRecordsPermanently(void);

/** * @ingroup RBA_DEMBFM_H
 * Trigger storing BFM counter and BFM management data to NvM. The request will be processed in the next BFM main loop. BFM records are handled separately
 * @return  RBA_DEMBFM_RET_OK: order accepted
 */
rba_DemBfm_ReturnType rba_DemBfm_TriggerStoreToNvm(void);

#if(RBA_DEMBFM_EXTENDED_DEBUG_DATA_SUPPORTED == DEM_BFM_ON)
/** * @ingroup RBA_DEMBFM_H
 * Trigger to read one BFM extended data record from RAM.
 * Only one read operation can be handled at a time.
 * @param [in]  location  location of the extended data record, should be acquired by using the rba_DemBfm_RecordFind()
 * @param [out] buffer  Pointer to a buffer where an extended debug record can be copied to.
 * @return  RBA_DEMBFM_RET_PENDING: request has been accepted, result is pending\n
 *          RBA_DEMBFM_RET_BUSY: currently busy with another read operation\n
 *          RBA_DEMBFM_RET_OUT_OF_RANGE: the location is not within the limits\n
 *          RBA_DEMBFM_RET_NULL_PTR: pointer to buffer is not valid\n
 *          RBA_DEMBFM_RET_NOK: something went wrong
 */
rba_DemBfm_ReturnType rba_DemBfm_ReadExtendedDebugDataFromRAMTrigger( rba_DemBfm_LocationDataType location, rba_DemBfm_ExtendedDebugDataRecord *buffer );


/** * @ingroup RBA_DEMBFM_H
 * Check the status of the Extended data record read operation that has been initiated by rba_DemBfm_ReadRecordFromRAMTrigger().
 * You need to pass the location, that we can be sure you are checking the right read operation.
 * @param [in]  location  the same location as used for rba_DemBfm_ReadRecordFromRAMTrigger()
 * @return  RBA_DEMBFM_RET_OK: the read RAM operation has completed, content of BFM record buffer can now be used\n
 *          RBA_DEMBFM_RET_PENDING: the read RAM operation is not yet finished\n
 *          RBA_DEMBFM_RET_NOT_FOUND: there is no read RAM operation established for the passed location\n
 *          RBA_DEMBFM_RET_NOK: something went wrong
 */
rba_DemBfm_ReturnType rba_DemBfm_ReadExtendedDebugDataFromRAMCheck( rba_DemBfm_LocationDataType location);

/** * @ingroup RBA_DEMBFM_H
 * Try to read one BFM record directly from RAM.
 * The read operation can only be granted if currently no other process is using the location you want to read.
 * The access to the BFM record is interrupt protected and can block the system for a longer time. So the preferred solution should be to use rba_DemBfm_ReadRecordFromRAMTrigger/Check instead.
 * @param [in]  location  location of the BFM record, should be acquired by using the interfaces rba_DemBfm_RecordGetFirst(), rba_DemBfm_RecordGetNext() or rba_DemBfm_RecordFind()
 * @param [out] buffer  pointer to a BFM record, where the content of RAM can be stored in
 * @return  RBA_DEMBFM_RET_OK: the content was read/copied successfully\n
 *          RBA_DEMBFM_RET_BUSY: the location is currently in use by another process\n
 *          RBA_DEMBFM_RET_OUT_OF_RANGE: the location is not within the limits\n
 *          RBA_DEMBFM_RET_NULL_PTR: pointer to buffer is not valid\n
 *          RBA_DEMBFM_RET_NOK: something went wrong
 */
rba_DemBfm_ReturnType rba_DemBfm_ReadExtendedDebugDataFromRAMDirect( rba_DemBfm_LocationDataType location, rba_DemBfm_ExtendedDebugDataRecord *buffer );
#endif

#define DEM_STOP_SEC_ROM_CODE
#include "Dem_Cfg_MemMap.h"

#endif
