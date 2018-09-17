
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


#ifndef DEMTEST_DTCCALLBACK_H
#define DEMTEST_DTCCALLBACK_H

#include "Dem_Types.h"

Std_ReturnType DemTest_DTCStatusChangedCallback0 (uint32 DTC, Dem_UdsStatusByteType DTCStatusOld, Dem_UdsStatusByteType DTCStatusNew);
Std_ReturnType DemTest_DTCStatusChangedCallback1 (uint32 DTC, Dem_UdsStatusByteType DTCStatusOld, Dem_UdsStatusByteType DTCStatusNew);
Std_ReturnType Dcm_DemTriggerOnDTCStatus (uint32 DTC, Dem_UdsStatusByteType DTCStatusOld, Dem_UdsStatusByteType DTCStatusNew);


void DemTest_InitClearDTCCallBackFunc (void);

boolean DemTest_CheckClearDTCStartCallBackFunc (uint32 DTC,Dem_DTCFormatType DTCFormat,Dem_DTCOriginType DTCOrigin);
boolean DemTest_CheckClearDTCFinishCallBackFunc (uint32 DTC,Dem_DTCFormatType DTCFormat,Dem_DTCOriginType DTCOrigin);

void DemTest_ClearDTCStartHookFnc (uint32 DTC,Dem_DTCFormatType DTCFormat,Dem_DTCOriginType DTCOrigin);
void DemTest_ClearDTCFinishHookFnc (uint32 DTC,Dem_DTCFormatType DTCFormat,Dem_DTCOriginType DTCOrigin);

#endif

