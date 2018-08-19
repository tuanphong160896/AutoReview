 /**********************************************************************************************************************
 *
* COPYRIGHT RESERVED, Robert Bosch GmbH, 2013. All rights reserved.
 * The reproduction, distribution and utilization of this document as well as the communication of its contents to
 * others without explicit authorization is prohibited. Offenders will be held liable for the payment of damages.
 * All rights reserved in the event of the grant of a patent, utility model or design.
 *
 **********************************************************************************************************************/
#ifndef RBA_DEMBFM_RECORDTYPES_H
#define RBA_DEMBFM_RECORDTYPES_H

#include "rba_DemBfm_Types.h"
#include "rba_DemBfm_Cfg_Nvm.h"


#define RBA_DEMBFM_INVALID_INDEX  0xFFu

#define RBA_DEMBFM_ST_PERM_LOCK	0x01u
#define RBA_DEMBFM_ST_PERM_DELETE	0x02u
#define RBA_DEMBFM_ST_PERM_EMPTY	0x04u
//define 0x08
//0x10
#define RBA_DEMBFM_ST_PERM_EXT_DELETE	0x20u
#define RBA_DEMBFM_ST_PERM_EXT_EMPTY	0x40u
//0x80

#define RBA_DEMBFM_ST_TEMP_LOCK		0x01u
#define RBA_DEMBFM_ST_TEMP_MODIFY		0x02u
#define RBA_DEMBFM_ST_TEMP_EXT_MODIFY	0x20u

/**
 * @ingroup RBA_DEMBFM_H
 *
 * This type is used to hold a complete BFM record. The order here (sorted by name) does not represent the order in the real struct.
 */
typedef struct
{
	rba_DemBfm_PriorityType priority; /**< The priority of the record (event that is saved), used in replacement logic */
	rba_DemBfm_StatusAndQualificationBitType statusAndQualification; /**< Contains the type (FAILED,PASSED,UNROBUST) and the time (FIRST,MOST CURRENT) of the last update/setting */
	#if( RBA_DEMBFM_OCCURRENCE_COUNTER == DEM_BFM_ON )
	rba_DemBfm_OccurenceCounterType occurrences; /**< optional: the occurence counter gets incremented whenver the BFM record is updated (depends on configuration) */
	#endif
	/* MR12 RULE 1.1 VIOLATION: This byte array has Array Length of Zero when BFM Custom Data Size is Configured Zero */
	uint8 customData[RBA_DEMBFM_CUSTOM_DATA_SIZE]; /**< This byte array contains the configured custom data of the BFM record */
	Dem_EventIdType eventId; /**< The event that is saved in this record */
	rba_DemBfm_TimestampType age; /**< The age/timestamp of the record, used in replacement logic */
	#if(RBA_DEMBFM_EXTENDED_DEBUG_DATA_SUPPORTED == DEM_BFM_ON)
	rba_DemBfm_ExtDbgDataRecordIndexType ExtDbgDataRecordIndex; /**<optional: the index of the extended data record gets saved */
	#endif
}
rba_DemBfm_Record;

/**
 * @ingroup RBA_DEMBFM_H
 *
 * This type is used to hold a complete BFM extended data record.
 */
#if(RBA_DEMBFM_EXTENDED_DEBUG_DATA_SUPPORTED == DEM_BFM_ON)
typedef struct
{
	uint8 ExtData[RBA_DEMBFM_EXTENDED_DEBUG_DATA_ELEMENT_SIZE]; /**< This byte array contains the BFM extend debug data */
	uint8 BfmRecIndex; /**< The index of the BFM record which it belongs to */
}
rba_DemBfm_ExtendedDebugDataRecord;
#endif

/**
 * @ingroup RBA_DEMBFM_H
 *
 * This type is used to hold the complete BFM record/ ExtDbgDataRecord .
 */
typedef union
{
    rba_DemBfm_Record BfmRecord; /**< The union always provides enough space to save the content of a BfmRecord */

	#if(RBA_DEMBFM_EXTENDED_DEBUG_DATA_SUPPORTED == DEM_BFM_ON)
    rba_DemBfm_ExtendedDebugDataRecord BfmExtDbgDataRecord; /**< optional: the union can also provide space to save the content of a rba_DemBfm_ExtendedDebugDataRecord */
	#endif
}rba_DemBfm_NvMBufferType;


typedef struct
{
	uint8 managementData[RBA_DEMBFM_AMOUNT_RECORDS];
}
rba_DemBfm_RecordManagementDataNvm;

typedef struct
{
	uint8 managementData[RBA_DEMBFM_AMOUNT_RECORDS];
}
rba_DemBfm_RecordManagementDataRam;

typedef struct
{
	uint8 bufferIndex;
	uint16 offset;
}
rba_DemBfm_CustomDataElement;


#define DEM_START_SEC_RAM_CLEARED
#include "Dem_Cfg_MemMap.h"

    extern rba_DemBfm_LocationDataType rba_DemBfm_CurrentlyUpdatingLocation;
    extern boolean rba_DemBfm_IsCurrentlyBusyWithUpdating;

    #if(RBA_DEMBFM_EXTENDED_DEBUG_DATA_SUPPORTED == DEM_BFM_ON)
    extern boolean rba_DemBfm_ExtDbgDataRecIsCurrentlyBusyWithUpdating;
    extern rba_DemBfm_LocationDataType rba_DemBfm_ExtDbgDataCurrentlyUpdatingLocation;
    #endif

#define DEM_STOP_SEC_RAM_CLEARED
#include "Dem_Cfg_MemMap.h"

#define DEM_START_SEC_SAVED_ZONE
#include "Dem_Cfg_MemMap.h"

    /* MR12 RULE 14.3 VIOLATION: This array has Array Length of Zero when BFM record Size is Configured Zero */
    extern rba_DemBfm_Record mBfmRecords[RBA_DEMBFM_FIX_ARRAY_SIZE(RBA_DEMBFM_AMOUNT_RECORDS)];
    extern rba_DemBfm_RecordManagementDataNvm rba_DemBfm_RecordManagementDataValuesNvm;

    #if(RBA_DEMBFM_EXTENDED_DEBUG_DATA_SUPPORTED == DEM_BFM_ON)
    /* MR12 RULE 14.3 VIOLATION: This array has Array Length of Zero when Extended debug data record Size is Configured Zero */
    extern rba_DemBfm_ExtendedDebugDataRecord mbfmExtDbgDataRam[RBA_DEMBFM_FIX_ARRAY_SIZE(RBA_DEMBFM_EXTENDED_DEBUG_DATA_AMOUNT_RECORDS)];
    #endif

#define DEM_STOP_SEC_SAVED_ZONE
#include "Dem_Cfg_MemMap.h"

#endif
