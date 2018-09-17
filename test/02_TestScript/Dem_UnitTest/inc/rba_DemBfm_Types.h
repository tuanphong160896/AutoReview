/**********************************************************************************************************************
*
* COPYRIGHT RESERVED, Robert Bosch GmbH, 2013. All rights reserved.
* The reproduction, distribution and utilization of this document as well as the communication of its contents to
* others without explicit authorization is prohibited. Offenders will be held liable for the payment of damages.
* All rights reserved in the event of the grant of a patent, utility model or design.
*
**********************************************************************************************************************/


#ifndef RBA_DEMBFM_TYPES_H
#define RBA_DEMBFM_TYPES_H

#include "Std_Types.h"
#include "Rte_Dem_Type.h"
#include "rba_DemBfm_Cfg.h"

#ifndef DEM_BFM_ON
#define DEM_BFM_ON 1
#endif
#ifndef DEM_BFM_OFF
#define DEM_BFM_OFF 0
#endif



#if(DEM_BFM_ENABLED == DEM_BFM_ON)

/**
 * @ingroup RBA_DEMBFM_H
 *
 * This type specifies the return values of the Bosch Failure Memory. Valid values are\n
 * \n
 * RBA_DEMBFM_RET_OK\n
 * RBA_DEMBFM_RET_PENDING\n
 * RBA_DEMBFM_RET_FINISHED\n
 * \n
 * RBA_DEMBFM_RET_NULL_PTR\n
 * RBA_DEMBFM_RET_BUFFER_TOO_SMALL\n
 * RBA_DEMBFM_RET_NOT_FOUND\n
 * RBA_DEMBFM_RET_OUT_OF_RANGE\n
 * RBA_DEMBFM_RET_BUSY\n
 * RBA_DEMBFM_RET_UNSUPPORTED\n
 * RBA_DEMBFM_RET_INVALIDATED\n
 * RBA_DEMBFM_RET_NOK
 */
typedef uint8 rba_DemBfm_ReturnType;
#define RBA_DEMBFM_RET_OK_MASK				0x0Fu
#define RBA_DEMBFM_RET_OK					0x01u
#define RBA_DEMBFM_RET_PENDING				0x02u
#define RBA_DEMBFM_RET_FINISHED			0x03u
//0x04...0x0E
#define RBA_DEMBFM_RET_NULL_PTR			0x10u
#define RBA_DEMBFM_RET_BUFFER_TOO_SMALL	0x20u
//#define RBA_DEMBFM_RET_ALREADY_LOCKED	0x30u
//#define RBA_DEMBFM_RET_NOTHING_LOCKED	0x40u
#define RBA_DEMBFM_RET_NOT_FOUND			0x50u
#define RBA_DEMBFM_RET_OUT_OF_RANGE		0x60u
#define RBA_DEMBFM_RET_BUSY				0x70u
#define RBA_DEMBFM_RET_UNSUPPORTED			0x80u
#define RBA_DEMBFM_RET_INVALIDATED			0x90u
//0xA0...0xD0
#define RBA_DEMBFM_RET_NOK					0xE0u
#define RBA_DEMBFM_RET_NOK_MASK			0xF0u


/**
 * @ingroup RBA_DEMBFM_H
 *
 * This type specifies the priority of an event. Defined/reserved values are\n
 * \n
 * RBA_DEMBFM_PRIORITY_MIN\n
 * RBA_DEMBFM_PRIORITY_MAX
 */
typedef uint8 rba_DemBfm_PriorityType;
#define RBA_DEMBFM_PRIORITY_MIN	0xFFu
#define RBA_DEMBFM_PRIORITY_MAX	0x00u


/**
 * @ingroup RBA_DEMBFM_H
 *
 * This type specifies the status of a delete operation. Valid values are\n
 * \n
 * RBA_DEMBFM_CHECK_RequestAccepted\n
 * RBA_DEMBFM_CHECK_MemoryDeleted\n
 * RBA_DEMBFM_CHECK_MangementDataWrittenToNvm
 */
typedef uint8 rba_DemBfm_DeleteAllCheckStatus;
#define RBA_DEMBFM_CHECK_RequestAccepted           1u
#define RBA_DEMBFM_CHECK_MemoryDeleted             2u
#define RBA_DEMBFM_CHECK_MangementDataWrittenToNvm 3u


/**
 * @ingroup RBA_DEMBFM_H
 *
 * This type is used to hold the location of a BFM record.
 */
typedef uint8 rba_DemBfm_LocationDataType;
#define RBA_DEMBFM_LOCATION_MAX 0xFFu


/**
 * @ingroup RBA_DEMBFM_H
 *
 * This type is used to hold the status and qulification bits used to control the entries of a BFM record. Valid values are:\n
 * \n
 * RBA_DEMBFM_STQU_FAILED\n
 * RBA_DEMBFM_STQU_PASSED\n
 * RBA_DEMBFM_STQU_UNROBUST\n
 * RBA_DEMBFM_STQU_FIRST\n
 * RBA_DEMBFM_STQU_FAILED_OCCURRED_ALREADY\n
 * RBA_DEMBFM_STQU_PASSED_OCCURRED_ALREADY\n
 * RBA_DEMBFM_STQU_UNROBUST_OCCURRED_ALREADY\n
 * RBA_DEMBFM_STQU_INTERNAL\n
 * RBA_DEMBFM_STQU_MASK_TYPE\n
 * RBA_DEMBFM_STQU_MASK_TIME\n
 * RBA_DEMBFM_STQU_MASK_OCCURRED_TYPE\n
 * RBA_DEMBFM_STQU_MASK_ORIGIN
 */
typedef uint8 rba_DemBfm_StatusAndQualificationBitType;


#define RBA_DEMBFM_STQU_FAILED                     0x01u
#define RBA_DEMBFM_STQU_PASSED			            0x02u
#define RBA_DEMBFM_STQU_UNROBUST                   0x04u
#define RBA_DEMBFM_STQU_FIRST			            0x08u
#define RBA_DEMBFM_STQU_FAILED_OCCURRED_ALREADY    0x10u
#define RBA_DEMBFM_STQU_PASSED_OCCURRED_ALREADY    0x20u
#define RBA_DEMBFM_STQU_UNROBUST_OCCURRED_ALREADY  0x40u
#define RBA_DEMBFM_STQU_INTERNAL                   0x80u

#define RBA_DEMBFM_STQU_MASK_TYPE                  0x07u
#define RBA_DEMBFM_STQU_MASK_TIME                  0x08u
#define RBA_DEMBFM_STQU_MASK_OCCURRED_TYPE         0x70u
#define RBA_DEMBFM_STQU_MASK_ORIGIN                0x80u

/**
 * @ingroup RBA_DEMBFM_H
 *
 * This function pointer type defines the interface for a replacement logic callback function.
 */
typedef rba_DemBfm_ReturnType (*rba_DemBfm_CallbackFunctionReplaceRecord)( Dem_EventIdType newEventId, rba_DemBfm_LocationDataType *location );

/**
 * @ingroup RBA_DEMBFM_H
 *
 * This function pointer type defines the interface for a callback function to check whether it is allowed to modify a locked BFM record or not.
 */
typedef boolean (*rba_DemBfm_CallbackFunctionModifyLockedAllowed)( Dem_EventIdType newEventId, rba_DemBfm_LocationDataType location );

/**
 * @ingroup RBA_DEMBFM_H
 *
 * This function pointer type defines the interface for a callback function to check whether it is allowed to delete a BFM record or not.
 */
typedef boolean (*rba_DemBfm_CallbackFunctionDeleteAllowed)( rba_DemBfm_LocationDataType location );

/**
 * @ingroup RBA_DEMBFM_H
 *
 * This type is used to hold the value of the deletion counter
 */
#if(RBA_DEMBFM_EXTENDED_DEBUG_DATA_SUPPORTED == DEM_BFM_ON)

#if ((RBA_DEMBFM_AMOUNT_RECORDS+RBA_DEMBFM_EXTENDED_DEBUG_DATA_AMOUNT_RECORDS) <= 0xFF)
typedef uint8 rba_DemBfm_DeletionCounterType;
#elif ((RBA_DEMBFM_AMOUNT_RECORDS+RBA_DEMBFM_EXTENDED_DEBUG_DATA_AMOUNT_RECORDS) <= 0xFFFF)
typedef uint16 rba_DemBfm_DeletionCounterType;
#else
#error DeletionCounter Type must be 8 or 16-Bit
#endif

#else
typedef uint8 rba_DemBfm_DeletionCounterType;
#endif

#if (RBA_DEMBFM_COUNTER_IN_NVM_ENABLED == DEM_BFM_ON)
/**
 * @ingroup RBA_DEMBFM_H
 *
 * This type is used to hold the counter value of the operation cycle counter
 */
typedef uint32 rba_DemBfm_OperationCycleCounterType;
#define RBA_DEMBFM_OPERATIONCYCLECOUNTER_MAX	0xFFFFFFFFu

/**
 * @ingroup RBA_DEMBFM_H
 *
 * This type is used to hold the counter value of the absolute operating time counter
 */
typedef uint32 rba_DemBfm_AbsoluteOperatingTimeCounterType;
#define RBA_DEMBFM_ABSOPERATINGTIME_MAX	0xFFFFFFFFu

/**
 * @ingroup RBA_DEMBFM_H
 *
 * This type is used to hold the unit/resolution of the relative operating time counter
 */
typedef uint32 rba_DemBfm_RelativeOperatingTimeCounterTimebaseType;
#endif

/**
 * @ingroup RBA_DEMBFM_H
 *
 * This type is used to hold the counter value of the relative operating time counter
 */
typedef uint32 rba_DemBfm_RelativeOperatingTimeCounterType;
#define RBA_DEMBFM_RELOPERATINGTIME_MAX 0xFFFFFFFFu

/**
 * @ingroup RBA_DEMBFM_H
 *
 * This type is used to hold the counter value of the timestamp counter
 */
typedef uint32 rba_DemBfm_TimestampType;
#define RBA_DEMBFM_TIMESTAMP_MAX	0xFFFFFFFFu

#define RBA_DEMBFM_TIMESTAMP_THRESHOLD_LIMITER	3u


/**
 * @ingroup RBA_DEMBFM_H
 *
 * This type is used to hold the occurrence counter value of a BFM record.
 */
typedef uint8 rba_DemBfm_OccurenceCounterType;
#define RBA_DEMBFM_OCCURRENCECOUNTER_MAX 0xFFu

/**
 * @ingroup RBA_DEMBFM_H
 *
 * This type is used to hold the index of the extended data record which gets saved to the BFM record.
 */
typedef uint8 rba_DemBfm_ExtDbgDataRecordIndexType;

typedef uint8 atomic_ui8;
typedef boolean atomic_b;


#define RBA_DEMBFM_FIX_ARRAY_SIZE(x) (((x)!=(0u))?(x):(1u))


/**
 * @ingroup RBA_DEMBFM_H
 *
 * This type is used to hold the unique id value of an event
 */
#if (RBA_DEMBFM_UNIQUEID == DEM_BFM_ON)
#if (RBA_DEMBFM_UNIQUEID_SIZE==1)
typedef uint8 rba_DemBfm_UniqueIdDataType;
#elif (RBA_DEMBFM_UNIQUEID_SIZE==2)
typedef uint16 rba_DemBfm_UniqueIdDataType;
#else
typedef uint32 rba_DemBfm_UniqueIdDataType;
#endif
#define RBA_DEMBFM_UNIQUE_ID_UNDEFINED  0x00u
#endif


/**
 * @ingroup RBA_DEMBFM_H
 *
 * This type is used to hold POSTBUILD supported BFM Parameters.
 */
typedef struct
{
	uint8 savingInterval; /**< The interval in which the counter block should be saved */
	uint8 releaseCounterLimit; /**< The number of cycles to be waited before the (trigger operation or polling result) result to be freed */
	uint8 nvmBlockAccessRetries; /**< No of cycles for BFM to access a NvM block */
	#if (RBA_DEMBFM_EXTENDED_DEBUG_DATA_SUPPORTED == DEM_BFM_ON)
	uint8 extDbgDataConfigMask; /**< optional: mask that defines when to save the data source in extended debug record (depends on configuration) */
	uint8 extDbgDataPriorityThreshold; /**< optional: the priority threshold which decides whether the event can be saved in the EDD record or not  */
	#endif
	#if (RBA_DEMBFM_OCCURRENCE_COUNTER == DEM_BFM_ON)
	uint8 occurrenceCounterMask; /**< optional: mask that defines when to save the data source in BFM (depends on configuration) */
	boolean occurrenceCounterOnlyIncrementOnTransition; /**< optional: controls if occurrence counter is always incremented when BFM record get modified or only on transitions (e.g. PASSED -> FAILED) */
	#endif
	uint8 const * recordConfigurationPtr; /**< Config pointer of BFM record structure */
	boolean * recordConfigPtr_CustomData;/**< Controls if Custom data is always updated when BFM record get modified or only on transitions (e.g. PASSED -> FAILED) */
} rba_DemBfm_ConfigDataType;

typedef struct
{
    /* MR12 RULE 14.3 VIOLATION: This array has Array Length of Zero when Bfm Buffer data element Size is Configured Zero */
    uint8 buffer[RBA_DEMBFM_FIX_ARRAY_SIZE(RBA_DEMBFM_BUFFER_DATA_ELEMENTS_SIZE)];
    Dem_EventIdType eventId;
}
rba_DemBfm_EnvironmentalData;

#endif//DEM_BFM_ENABLED
#endif

