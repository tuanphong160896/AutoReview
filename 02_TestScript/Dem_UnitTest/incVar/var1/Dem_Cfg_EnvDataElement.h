/*                                                                                                                     
********************************************************************************************************************** 
*                                                                                                                      
* COPYRIGHT RESERVED, 2010 Robert Bosch GmbH. All rights reserved.                                                     
* The reproduction, distribution and utilization of this document as well as the communication of its contents to      
* others without explicit authorization is prohibited. Offenders will be held liable for the payment of damages.       
* All rights reserved in the event of the grant of a patent, utility model or design.                                  
*                                                                                                                      
********************************************************************************************************************** 
*/                                                                                                                     

/********************************************************************************************************************/
/*                                                                                                                  */
/* TOOL-GENERATED SOURCECODE, DO NOT CHANGE                                                                         */
/*                                                                                                                  */
/********************************************************************************************************************/


#ifndef DEM_CFG_ENVDATAELEMENT_H
#define DEM_CFG_ENVDATAELEMENT_H

#include "Std_Types.h"


#define DEM_CFG_ENV_DATAELEMENTS_EXTERN_AVAILABILITY   STD_ON
#define DEM_CFG_ENV_DATAELEMENTS_INTERN_AVAILABILITY  STD_ON

#define DEM_CFG_READDEM_AGINGCTR_UPCNT_SUPPORTED                         TRUE
#define DEM_CFG_READDEM_AGINGCTR_DOWNCNT_SUPPORTED                       TRUE
#define DEM_CFG_READDEM_OCCCTR_SUPPORTED                                 FALSE
#define DEM_CFG_READDEM_OVFLIND_SUPPORTED                                TRUE
#define DEM_CFG_READDEM_SIGNIFICANCE_SUPPORTED                           FALSE
#define DEM_CFG_READDEM_DEBUG0_SUPPORTED                                 TRUE
#define DEM_CFG_READDEM_DEBUG1_SUPPORTED                                 TRUE
#define DEM_CFG_READDEM_EVENT_ID_SUPPORTED                               TRUE
#define DEM_CFG_READDEM_CURRENT_FDC_SUPPORTED                            TRUE
#define DEM_CFG_READDEM_MAX_FDC_DURING_CURRENT_CYCLE_SUPPORTED           TRUE
#define DEM_CFG_READDEM_MAX_FDC_SINCE_LAST_CLEAR_SUPPORTED               TRUE
#define DEM_CFG_READDEM_CYCLES_SINCE_FIRST_FAILED_SUPPORTED              TRUE
#define DEM_CFG_READDEM_CYCLES_SINCE_LAST_FAILED_SUPPORTED               TRUE
#define DEM_CFG_READDEM_CYCLES_SINCE_LAST_FAILED_EXCLUDING_TNC_SUPPORTED   TRUE
#define DEM_CFG_READDEM_FAILED_CYCLES_SUPPORTED                          TRUE
#define DEM_CFG_READDEM_PRJ_SPECIFIC_DATA_ON_RETRIEVE_SUPPORTED          FALSE
#define DEM_CFG_READDEM_PRJ_SPECIFIC_DATA_ON_REPORT_SUPPORTED            FALSE


#define DEM_DATAELEM_IGNITIONCYCLES_A       1
#define DEM_DATAELEM_MILAGE                 2
#define DEM_DATAELEM_OCCURENCECOUNTER       3
#define DEM_DATAELEM_STUBBED_ENGINETEMPERATURE  4
#define DEM_DATAELEM_STUBBED_TORQUE         5
#define DEM_DATAELEM_STUBBED_VEHICLESPEED   6
#define DEM_DATAELEM_TEMPERATURENGINE       7
#define DEM_DATAELEM_TEMPERATUROUT          8
#define DEM_DATAELEM_VEHICLESPEED_A         9
#define DEM_DATAELEM_AGINGCOUNTERDOWNCNT    10
#define DEM_DATAELEM_AGINGCOUNTERUPCNT      11
#define DEM_DATAELEM_BFM_ABSOLUTEOPERATINGTIME  12
#define DEM_DATAELEM_BFM_OPERATIONCYCLE     13
#define DEM_DATAELEM_BFM_RELATIVEOPERATINGTIME  14
#define DEM_DATAELEM_BFM_TIMESTAMP          15
#define DEM_DATAELEM_BFM_UNIQUEEVENTID      16
#define DEM_DATAELEM_DEBUG0                 17
#define DEM_DATAELEM_DEBUG1                 18
#define DEM_DATAELEM_DEMEVENTSTATUS         19
#define DEM_DATAELEM_DEMDATAELEMENTCLASS_CURRENT_FDC  20
#define DEM_DATAELEM_DEMDATAELEMENTCLASS_CYCLES_FIRST_FAILED  21
#define DEM_DATAELEM_DEMDATAELEMENTCLASS_CYCLES_LAST_FAILED  22
#define DEM_DATAELEM_DEMDATAELEMENTCLASS_CYCLES_LAST_FAILED_EXCLUDING_TNC  23
#define DEM_DATAELEM_DEMDATAELEMENTCLASS_FAILED_CYCLES  24
#define DEM_DATAELEM_DEMDATAELEMENTCLASS_MAX_FDC_SLC  25
#define DEM_DATAELEM_DEMDATAELEMENTCLASS_MAX_FDC_TOC  26
#define DEM_DATAELEM_EVENTID                27
#define DEM_DATAELEM_OVERFLOWINDICATOR      28

#define DEM_CFG_ENV_DATAELEMENTS \
{ \
   { DEM_ENV_DATAELEMENTS_EXTCS_INIT(NULL_PTR) DEM_ENV_DATAELEMENTS_INTERN_INIT(NULL_PTR) 0, FALSE } \
   ,{ &Rte_Call_CBReadData_IgnitionCycles_ReadData, DEM_ENV_DATAELEMENTS_INTERN_INIT(NULL_PTR)3, FALSE } \
   ,{ &Rte_Call_CBReadData_Milage_ReadData, DEM_ENV_DATAELEMENTS_INTERN_INIT(NULL_PTR)3, FALSE } \
   ,{ &Rte_Call_CBReadData_OccurenceCounter_ReadData, DEM_ENV_DATAELEMENTS_INTERN_INIT(NULL_PTR)2, FALSE } \
   ,{ &SWC_GetEngineTemperature, DEM_ENV_DATAELEMENTS_INTERN_INIT(NULL_PTR) 1, FALSE } \
   ,{ &SWC_GetTorque, DEM_ENV_DATAELEMENTS_INTERN_INIT(NULL_PTR) 5, FALSE } \
   ,{ &SWC_GetVehicleSpeed, DEM_ENV_DATAELEMENTS_INTERN_INIT(NULL_PTR) 3, FALSE } \
   ,{ &Rte_Call_CBReadData_TemperaturEngine_ReadData, DEM_ENV_DATAELEMENTS_INTERN_INIT(NULL_PTR)3, FALSE } \
   ,{ &Rte_Call_CBReadData_TemperaturOut_ReadData, DEM_ENV_DATAELEMENTS_INTERN_INIT(NULL_PTR)3, FALSE } \
   ,{ &Rte_Call_CBReadData_VehicleSpeed_i_ReadData, DEM_ENV_DATAELEMENTS_INTERN_INIT(NULL_PTR)1, FALSE } \
   ,{ DEM_ENV_DATAELEMENTS_EXTCS_INIT(NULL_PTR) &Dem_ReadAgingCtrDownCnt, 1, TRUE } \
   ,{ DEM_ENV_DATAELEMENTS_EXTCS_INIT(NULL_PTR) &Dem_ReadAgingCtrUpCnt, 1, TRUE } \
   ,{ DEM_ENV_DATAELEMENTS_EXTCS_INIT(NULL_PTR) &rba_DemBfm_WrapperGetAbsoluteOperatingTime, 4, FALSE } \
   ,{ DEM_ENV_DATAELEMENTS_EXTCS_INIT(NULL_PTR) &rba_DemBfm_WrapperGetOperationCycle, 4, FALSE } \
   ,{ DEM_ENV_DATAELEMENTS_EXTCS_INIT(NULL_PTR) &rba_DemBfm_WrapperGetRelativeOperatingTime, 4, FALSE } \
   ,{ DEM_ENV_DATAELEMENTS_EXTCS_INIT(NULL_PTR) &rba_DemBfm_WrapperGetTimestamp, 4, FALSE } \
   ,{ DEM_ENV_DATAELEMENTS_EXTCS_INIT(NULL_PTR) &rba_DemBfm_WrapperGetUniqueEventId, 2, FALSE } \
   ,{ DEM_ENV_DATAELEMENTS_EXTCS_INIT(NULL_PTR) &Dem_ReadDebug0, 4, FALSE } \
   ,{ DEM_ENV_DATAELEMENTS_EXTCS_INIT(NULL_PTR) &Dem_ReadDebug1, 4, FALSE } \
   ,{ DEM_ENV_DATAELEMENTS_EXTCS_INIT(NULL_PTR) &Dem_ReadEventStatusByte, 1, FALSE } \
   ,{ DEM_ENV_DATAELEMENTS_EXTCS_INIT(NULL_PTR) &Dem_ReadCurrentFDC, 1, TRUE } \
   ,{ DEM_ENV_DATAELEMENTS_EXTCS_INIT(NULL_PTR) &Dem_ReadCyclesSinceFirstFailed, 1, TRUE } \
   ,{ DEM_ENV_DATAELEMENTS_EXTCS_INIT(NULL_PTR) &Dem_ReadCyclesSinceLastFailed, 1, TRUE } \
   ,{ DEM_ENV_DATAELEMENTS_EXTCS_INIT(NULL_PTR) &Dem_ReadCyclesSinceLastFailedExcludingTNC, 1, TRUE } \
   ,{ DEM_ENV_DATAELEMENTS_EXTCS_INIT(NULL_PTR) &Dem_ReadFailedCycles, 1, TRUE } \
   ,{ DEM_ENV_DATAELEMENTS_EXTCS_INIT(NULL_PTR) &Dem_ReadMaxFdcSinceLastClear, 1, TRUE } \
   ,{ DEM_ENV_DATAELEMENTS_EXTCS_INIT(NULL_PTR) &Dem_ReadMaxFdcDuringCurrentCycle, 1, TRUE } \
   ,{ DEM_ENV_DATAELEMENTS_EXTCS_INIT(NULL_PTR) &Dem_ReadEventId, 2, FALSE } \
   ,{ DEM_ENV_DATAELEMENTS_EXTCS_INIT(NULL_PTR) &Dem_ReadOvflInd, 1, TRUE } \
}

#define DEM_CFG_ENV_DATAELEMENTS_ARRAYLENGTH      (28+1)


#endif


