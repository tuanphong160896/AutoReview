
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


#ifndef DEMTEST_EVENTCALLBACK_H
#define DEMTEST_EVENTCALLBACK_H

#include "Dem_Types.h"

#include "Dem_Cfg_Events.h"

extern void DemTest_SetClearEventAllowedReturnValue (boolean value);
extern boolean DemTest_GetClearEventAllowedReturnValue (void);

extern boolean DemTest_IsCBEvtDataChangedCalled;


void DemTest_CallbackEventStatusChanged_0 (Dem_EventIdType EventId, Dem_UdsStatusByteType EventStatusOld, Dem_UdsStatusByteType EventStatusNew);
void DemTest_CallbackEventStatusChanged_1 (Dem_EventIdType EventId, Dem_UdsStatusByteType EventStatusOld, Dem_UdsStatusByteType EventStatusNew);
void DemTest_CallbackEventStatusChanged_2 (Dem_EventIdType EventId, Dem_UdsStatusByteType EventStatusOld, Dem_UdsStatusByteType EventStatusNew);
void DemTest_CallbackEventStatusChanged_3 (Dem_EventIdType EventId, Dem_UdsStatusByteType EventStatusOld, Dem_UdsStatusByteType EventStatusNew);



Std_ReturnType SWC_ClearAllowed_Mon2 (boolean* Allowed);

Std_ReturnType SWC_ClearAllowed_Mon9 (boolean* Allowed);

Std_ReturnType SWC_ClearAllowed_Mon27 (boolean* Allowed);



Std_ReturnType SWC_GlobalClearEventAllowedCheck (Dem_EventIdType EventId, boolean* Allowed);

#if (DEM_CFG_CALLBACK_INIT_MON_FOR_EVENT_SUPPORTED == TRUE)
#define DEMTEST_CFG_CALLBACK_INITMFORE_LISTLENGTH  5
void InitMonForE_CB_initialize(void);
boolean Is_InitMonForECB_Called (Dem_EventIdType EventId);

Std_ReturnType CBInitEvt_Monitoring_01 (Dem_InitMonitorReasonType InitMonitorReason);
Std_ReturnType CBInitEvt_Monitoring_15 (Dem_InitMonitorReasonType InitMonitorReason);
Std_ReturnType CBInitEvt_Monitoring_16 (Dem_InitMonitorReasonType InitMonitorReason);

Std_ReturnType Monitoring04_InitMForE_callback (Dem_InitMonitorReasonType InitMonitorReason);
Std_ReturnType Monitoring20_InitMForE_callback (Dem_InitMonitorReasonType InitMonitorReason);
#endif

#endif
