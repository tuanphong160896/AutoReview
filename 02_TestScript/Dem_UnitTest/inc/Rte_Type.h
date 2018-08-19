/** @file     Rte_Type.h
  *
  * @brief    RTE type definitions
  *
  * @note     AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
  *
  * @note     Generated by ETAS RTA-RTE
  * @note     Version 6.4.0 
  *
  * @date     Sun Jul 29 21:33:08 2018
  */

#ifndef RTE_TYPE_H
#define RTE_TYPE_H

#include "Rte.h"
#include "Rte_Cfg.h"

/*******************************************************
 ***
 *** Forward Declarations
 ***
 *******************************************************/

struct Rte_CDS_Dem;
struct Rte_CDS_Swc1;

/*******************************************************
 ***
 *** Types
 ***
 *******************************************************/

/* Information: No typedef for ImplementationDataType uint8 because typeEmitter is a value other than RTE */

typedef uint8 DemDataElememtDataSize_IgnitionCycles[3];
typedef uint8 DemDataElememtDataSize_Milage[3];
typedef uint8 DemDataElememtDataSize_OccurenceCounter[2];
typedef uint8 DemDataElememtDataSize_TemperaturEngine[3];
typedef uint8 DemDataElememtDataSize_TemperaturOut[3];
typedef uint8 DemDataElememtDataSize_VehicleSpeed_i[1];
typedef uint8 Dem_DTCFormatType;

typedef uint8 Dem_DTCOriginType;

typedef uint8 Dem_DebounceResetStatusType;

typedef uint8 Dem_DebouncingStateType;

typedef uint16 Dem_EventIdType;

typedef uint8 Dem_EventStatusType;

typedef uint8 Dem_IndicatorIdType;

typedef uint8 Dem_IndicatorStatusType;

typedef uint8 Dem_InitMonitorReasonType;

typedef uint8 Dem_MaxDataValueType[13];
typedef uint8 Dem_OperationCycleIdType;

typedef uint8 Dem_OperationCycleStateType;

typedef uint8 Dem_ReturnClearDTCType;

typedef uint8 Dem_UdsStatusByteType;

/* Information: No typedef for ImplementationDataType boolean because typeEmitter is a value other than RTE */

/* Information: No typedef for ImplementationDataType float32 because typeEmitter is a value other than RTE */

/* Information: No typedef for ImplementationDataType float64 because typeEmitter is a value other than RTE */

/* Information: No typedef for ImplementationDataType sint16 because typeEmitter is a value other than RTE */

/* Information: No typedef for ImplementationDataType sint16_least because typeEmitter is a value other than RTE */

/* Information: No typedef for ImplementationDataType sint32 because typeEmitter is a value other than RTE */

/* Information: No typedef for ImplementationDataType sint32_least because typeEmitter is a value other than RTE */

/* Information: No typedef for ImplementationDataType sint64 because typeEmitter is a value other than RTE */

/* Information: No typedef for ImplementationDataType sint8 because typeEmitter is a value other than RTE */

/* Information: No typedef for ImplementationDataType sint8_least because typeEmitter is a value other than RTE */

/* Information: No typedef for ImplementationDataType uint16_least because typeEmitter is a value other than RTE */

/* Information: No typedef for ImplementationDataType uint32 because typeEmitter is a value other than RTE */

/* Information: No typedef for ImplementationDataType uint32_least because typeEmitter is a value other than RTE */

/* Information: No typedef for ImplementationDataType uint64 because typeEmitter is a value other than RTE */

/* Information: No typedef for ImplementationDataType uint8_least because typeEmitter is a value other than RTE */

/* Information: No typedef for ImplementationDataType uint16 because typeEmitter is a value other than RTE */

/* Information: No typedef for ImplementationDataType Std_ReturnType because typeEmitter is a value other than RTE */

/* Information: No typedef for ImplementationDataType Std_VersionInfoType because typeEmitter is a value other than RTE */

typedef P2FUNC(VAR(Std_ReturnType, AUTOMATIC), RTE_CODE, Rte_CallFP_Dem_CSDataServices_IgnitionCycles_ReadData) (P2VAR(uint8, AUTOMATIC, RTE_APPL_DATA) Data);

typedef P2FUNC(VAR(Std_ReturnType, AUTOMATIC), RTE_CODE, Rte_CallFP_Dem_CSDataServices_Milage_ReadData) (P2VAR(uint8, AUTOMATIC, RTE_APPL_DATA) Data);

typedef P2FUNC(VAR(Std_ReturnType, AUTOMATIC), RTE_CODE, Rte_CallFP_Dem_CSDataServices_OccurenceCounter_ReadData) (P2VAR(uint8, AUTOMATIC, RTE_APPL_DATA) Data);

typedef P2FUNC(VAR(Std_ReturnType, AUTOMATIC), RTE_CODE, Rte_CallFP_Dem_CSDataServices_TemperaturEngine_ReadData) (P2VAR(uint8, AUTOMATIC, RTE_APPL_DATA) Data);

typedef P2FUNC(VAR(Std_ReturnType, AUTOMATIC), RTE_CODE, Rte_CallFP_Dem_CSDataServices_TemperaturOut_ReadData) (P2VAR(uint8, AUTOMATIC, RTE_APPL_DATA) Data);

typedef P2FUNC(VAR(Std_ReturnType, AUTOMATIC), RTE_CODE, Rte_CallFP_Dem_CSDataServices_VehicleSpeed_i_ReadData) (P2VAR(uint8, AUTOMATIC, RTE_APPL_DATA) Data);

typedef P2FUNC(VAR(Std_ReturnType, AUTOMATIC), RTE_CODE, Rte_CallFP_Dem_CallbackClearEventAllowed_ClearEventAllowed) (P2VAR(boolean, AUTOMATIC, RTE_APPL_DATA) Allowed);

typedef P2FUNC(VAR(Std_ReturnType, AUTOMATIC), RTE_CODE, Rte_CallFP_Dem_CallbackComponentStatusChanged_ComponentStatusChanged) (VAR(boolean, AUTOMATIC) ComponentFailedStatus);

typedef P2FUNC(VAR(Std_ReturnType, AUTOMATIC), RTE_CODE, Rte_CallFP_Dem_CallbackDTCStatusChange_DTCStatusChanged) (VAR(uint32, AUTOMATIC) DTC, VAR(Dem_UdsStatusByteType, AUTOMATIC) DTCStatusOld, VAR(Dem_UdsStatusByteType, AUTOMATIC) DTCStatusNew);

typedef P2FUNC(VAR(Std_ReturnType, AUTOMATIC), RTE_CODE, Rte_CallFP_Dem_CallbackEventStatusChange_EventStatusChanged) (VAR(Dem_UdsStatusByteType, AUTOMATIC) EventStatusOld, VAR(Dem_UdsStatusByteType, AUTOMATIC) EventStatusNew);

typedef P2FUNC(VAR(Std_ReturnType, AUTOMATIC), RTE_CODE, Rte_CallFP_Dem_CallbackGetFaultDetectCounter_GetFaultDetectionCounter) (P2VAR(sint8, AUTOMATIC, RTE_APPL_DATA) FaultDetectionCounter);

typedef P2FUNC(VAR(Std_ReturnType, AUTOMATIC), RTE_CODE, Rte_CallFP_Dem_CallbackInitMonitorForEvent_InitMonitorForEvent) (VAR(Dem_InitMonitorReasonType, AUTOMATIC) InitMonitorReason);

typedef P2FUNC(VAR(Std_ReturnType, AUTOMATIC), RTE_CODE, Rte_CallFP_Dem_GeneralCallbackEventDataChanged_EventDataChanged) (VAR(Dem_EventIdType, AUTOMATIC) EventId);

typedef P2FUNC(VAR(Std_ReturnType, AUTOMATIC), RTE_CODE, Rte_CallFP_Dem_GeneralCallbackEventStatusChange_EventStatusChanged) (VAR(Dem_EventIdType, AUTOMATIC) EventId, VAR(Dem_UdsStatusByteType, AUTOMATIC) EventStatusOld, VAR(Dem_UdsStatusByteType, AUTOMATIC) EventStatusNew);

typedef P2FUNC(VAR(Std_ReturnType, AUTOMATIC), RTE_CODE, Rte_CallFP_Swc1_CddIf_ClearDTC) (VAR(uint32, AUTOMATIC) DTC, VAR(Dem_DTCFormatType, AUTOMATIC) DTCFormat, VAR(Dem_DTCOriginType, AUTOMATIC) DTCOrigin);

typedef P2FUNC(VAR(Std_ReturnType, AUTOMATIC), RTE_CODE, Rte_CallFP_Swc1_DTCSuppression_SetDTCSuppression) (VAR(uint32, AUTOMATIC) DTC, VAR(Dem_DTCFormatType, AUTOMATIC) DTCFormat, VAR(boolean, AUTOMATIC) SuppressionStatus);

typedef P2FUNC(VAR(Std_ReturnType, AUTOMATIC), RTE_CODE, Rte_CallFP_Swc1_DcmIf_ClearDTC) (VAR(uint32, AUTOMATIC) DTC, VAR(Dem_DTCFormatType, AUTOMATIC) DTCFormat, VAR(Dem_DTCOriginType, AUTOMATIC) DTCOrigin);

typedef P2FUNC(VAR(Std_ReturnType, AUTOMATIC), RTE_CODE, Rte_CallFP_Swc1_DiagnosticInfo_GetDTCOfEvent) (VAR(Dem_DTCFormatType, AUTOMATIC) DTCFormat, P2VAR(uint32, AUTOMATIC, RTE_APPL_DATA) DTCOfEvent);

typedef P2FUNC(VAR(Std_ReturnType, AUTOMATIC), RTE_CODE, Rte_CallFP_Swc1_DiagnosticInfo_GetDebouncingOfEvent) (P2VAR(Dem_DebouncingStateType, AUTOMATIC, RTE_APPL_DATA) DebouncingState);

typedef P2FUNC(VAR(Std_ReturnType, AUTOMATIC), RTE_CODE, Rte_CallFP_Swc1_DiagnosticInfo_GetEventExtendedDataRecord) (VAR(uint8, AUTOMATIC) RecordNumber, P2VAR(uint8, AUTOMATIC, RTE_APPL_DATA) DestBuffer);

typedef P2FUNC(VAR(Std_ReturnType, AUTOMATIC), RTE_CODE, Rte_CallFP_Swc1_DiagnosticInfo_GetEventExtendedDataRecordEx) (VAR(uint8, AUTOMATIC) RecordNumber, P2VAR(uint8, AUTOMATIC, RTE_APPL_DATA) DestBuffer, P2VAR(uint16, AUTOMATIC, RTE_APPL_DATA) Bufsize);

typedef P2FUNC(VAR(Std_ReturnType, AUTOMATIC), RTE_CODE, Rte_CallFP_Swc1_DiagnosticInfo_GetEventFailed) (P2VAR(boolean, AUTOMATIC, RTE_APPL_DATA) EventFailed);

typedef P2FUNC(VAR(Std_ReturnType, AUTOMATIC), RTE_CODE, Rte_CallFP_Swc1_DiagnosticInfo_GetEventFreezeFrameData) (VAR(uint8, AUTOMATIC) RecordNumber, VAR(boolean, AUTOMATIC) ReportTotalRecord, VAR(uint16, AUTOMATIC) DataId, P2VAR(uint8, AUTOMATIC, RTE_APPL_DATA) DestBuffer);

typedef P2FUNC(VAR(Std_ReturnType, AUTOMATIC), RTE_CODE, Rte_CallFP_Swc1_DiagnosticInfo_GetEventFreezeFrameDataEx) (VAR(uint8, AUTOMATIC) RecordNumber, VAR(uint16, AUTOMATIC) DataId, P2VAR(uint8, AUTOMATIC, RTE_APPL_DATA) DestBuffer, P2VAR(uint16, AUTOMATIC, RTE_APPL_DATA) BufSize);

typedef P2FUNC(VAR(Std_ReturnType, AUTOMATIC), RTE_CODE, Rte_CallFP_Swc1_DiagnosticInfo_GetEventStatus) (P2VAR(Dem_UdsStatusByteType, AUTOMATIC, RTE_APPL_DATA) EventStatusByte);

typedef P2FUNC(VAR(Std_ReturnType, AUTOMATIC), RTE_CODE, Rte_CallFP_Swc1_DiagnosticInfo_GetEventTested) (P2VAR(boolean, AUTOMATIC, RTE_APPL_DATA) EventTested);

typedef P2FUNC(VAR(Std_ReturnType, AUTOMATIC), RTE_CODE, Rte_CallFP_Swc1_DiagnosticInfo_GetFaultDetectionCounter) (P2VAR(sint8, AUTOMATIC, RTE_APPL_DATA) FaultDetectionCounter);

typedef P2FUNC(VAR(Std_ReturnType, AUTOMATIC), RTE_CODE, Rte_CallFP_Swc1_DiagnosticMonitor_ClearPrestoredFreezeFrame) (void);

typedef P2FUNC(VAR(Std_ReturnType, AUTOMATIC), RTE_CODE, Rte_CallFP_Swc1_DiagnosticMonitor_PrestoreFreezeFrame) (void);

typedef P2FUNC(VAR(Std_ReturnType, AUTOMATIC), RTE_CODE, Rte_CallFP_Swc1_DiagnosticMonitor_ResetEventDebounceStatus) (VAR(Dem_DebounceResetStatusType, AUTOMATIC) DebounceResetStatus);

typedef P2FUNC(VAR(Std_ReturnType, AUTOMATIC), RTE_CODE, Rte_CallFP_Swc1_DiagnosticMonitor_ResetEventStatus) (void);

typedef P2FUNC(VAR(Std_ReturnType, AUTOMATIC), RTE_CODE, Rte_CallFP_Swc1_DiagnosticMonitor_SetEventStatus) (VAR(Dem_EventStatusType, AUTOMATIC) EventStatus);

typedef P2FUNC(VAR(Std_ReturnType, AUTOMATIC), RTE_CODE, Rte_CallFP_Swc1_EnableCondition_SetEnableCondition) (VAR(boolean, AUTOMATIC) ConditionFulfilled);

typedef P2FUNC(VAR(Std_ReturnType, AUTOMATIC), RTE_CODE, Rte_CallFP_Swc1_EvMemOverflowIndication_GetEventMemoryOverflow) (P2VAR(boolean, AUTOMATIC, RTE_APPL_DATA) OverflowIndication);

typedef P2FUNC(VAR(Std_ReturnType, AUTOMATIC), RTE_CODE, Rte_CallFP_Swc1_EvMemOverflowIndication_GetNumberOfEventMemoryEntries) (P2VAR(uint8, AUTOMATIC, RTE_APPL_DATA) NumberOfEventMemoryEntries);

typedef P2FUNC(VAR(Std_ReturnType, AUTOMATIC), RTE_CODE, Rte_CallFP_Swc1_EventAvailable_SetEventAvailable) (VAR(boolean, AUTOMATIC) AvailableStatus);

typedef P2FUNC(VAR(Std_ReturnType, AUTOMATIC), RTE_CODE, Rte_CallFP_Swc1_EventStatus_SetWIRStatus) (VAR(boolean, AUTOMATIC) WIRStatus);

typedef P2FUNC(VAR(Std_ReturnType, AUTOMATIC), RTE_CODE, Rte_CallFP_Swc1_GeneralDiagnosticInfo_GetDTCOfEvent) (VAR(Dem_EventIdType, AUTOMATIC) EventId, VAR(Dem_DTCFormatType, AUTOMATIC) DTCFormat, P2VAR(uint32, AUTOMATIC, RTE_APPL_DATA) DTCOfEvent);

typedef P2FUNC(VAR(Std_ReturnType, AUTOMATIC), RTE_CODE, Rte_CallFP_Swc1_GeneralDiagnosticInfo_GetDebouncingOfEvent) (VAR(Dem_EventIdType, AUTOMATIC) EventId, P2VAR(Dem_DebouncingStateType, AUTOMATIC, RTE_APPL_DATA) DebouncingState);

typedef P2FUNC(VAR(Std_ReturnType, AUTOMATIC), RTE_CODE, Rte_CallFP_Swc1_GeneralDiagnosticInfo_GetEventExtendedDataRecord) (VAR(Dem_EventIdType, AUTOMATIC) EventId, VAR(uint8, AUTOMATIC) RecordNumber, P2VAR(uint8, AUTOMATIC, RTE_APPL_DATA) DestBuffer);

typedef P2FUNC(VAR(Std_ReturnType, AUTOMATIC), RTE_CODE, Rte_CallFP_Swc1_GeneralDiagnosticInfo_GetEventFailed) (VAR(Dem_EventIdType, AUTOMATIC) EventId, P2VAR(boolean, AUTOMATIC, RTE_APPL_DATA) EventFailed);

typedef P2FUNC(VAR(Std_ReturnType, AUTOMATIC), RTE_CODE, Rte_CallFP_Swc1_GeneralDiagnosticInfo_GetEventFreezeFrameData) (VAR(Dem_EventIdType, AUTOMATIC) EventId, VAR(uint8, AUTOMATIC) RecordNumber, VAR(boolean, AUTOMATIC) ReportTotalRecord, VAR(uint16, AUTOMATIC) DataId, P2VAR(uint8, AUTOMATIC, RTE_APPL_DATA) DestBuffer);

typedef P2FUNC(VAR(Std_ReturnType, AUTOMATIC), RTE_CODE, Rte_CallFP_Swc1_GeneralDiagnosticInfo_GetEventStatus) (VAR(Dem_EventIdType, AUTOMATIC) EventId, P2VAR(Dem_UdsStatusByteType, AUTOMATIC, RTE_APPL_DATA) EventStatusByte);

typedef P2FUNC(VAR(Std_ReturnType, AUTOMATIC), RTE_CODE, Rte_CallFP_Swc1_GeneralDiagnosticInfo_GetEventTested) (VAR(Dem_EventIdType, AUTOMATIC) EventId, P2VAR(boolean, AUTOMATIC, RTE_APPL_DATA) EventTested);

typedef P2FUNC(VAR(Std_ReturnType, AUTOMATIC), RTE_CODE, Rte_CallFP_Swc1_GeneralDiagnosticInfo_GetFaultDetectionCounter) (VAR(Dem_EventIdType, AUTOMATIC) EventId, P2VAR(sint8, AUTOMATIC, RTE_APPL_DATA) FaultDetectionCounter);

typedef P2FUNC(VAR(Std_ReturnType, AUTOMATIC), RTE_CODE, Rte_CallFP_Swc1_IndicatorStatus_GetIndicatorStatus) (P2VAR(Dem_IndicatorStatusType, AUTOMATIC, RTE_APPL_DATA) IndicatorStatus);

typedef P2FUNC(VAR(Std_ReturnType, AUTOMATIC), RTE_CODE, Rte_CallFP_Swc1_OperationCycle_GetCycleQualified) (P2VAR(boolean, AUTOMATIC, RTE_APPL_DATA) CycleState);

typedef P2FUNC(VAR(Std_ReturnType, AUTOMATIC), RTE_CODE, Rte_CallFP_Swc1_OperationCycle_GetOperationCycleState) (P2VAR(Dem_OperationCycleStateType, AUTOMATIC, RTE_APPL_DATA) CycleState);

typedef P2FUNC(VAR(Std_ReturnType, AUTOMATIC), RTE_CODE, Rte_CallFP_Swc1_OperationCycle_SetCycleQualified) (void);

typedef P2FUNC(VAR(Std_ReturnType, AUTOMATIC), RTE_CODE, Rte_CallFP_Swc1_OperationCycle_SetOperationCycleState) (VAR(Dem_OperationCycleStateType, AUTOMATIC) CycleState);

typedef P2FUNC(VAR(Std_ReturnType, AUTOMATIC), RTE_CODE, Rte_CallFP_Swc1_StorageCondition_GetStorageCondition) (P2VAR(boolean, AUTOMATIC, RTE_APPL_DATA) ConditionFulfilled);

typedef P2FUNC(VAR(Std_ReturnType, AUTOMATIC), RTE_CODE, Rte_CallFP_Swc1_StorageCondition_SetStorageCondition) (VAR(boolean, AUTOMATIC) ConditionFulfilled);

typedef P2CONST(struct Rte_CDS_Dem,AUTOMATIC,RTE_CONST) Rte_SelfType_Dem;

typedef P2CONST(struct Rte_CDS_Swc1,AUTOMATIC,RTE_CONST) Rte_SelfType_Swc1;


#endif /* !RTE_TYPE_H */
