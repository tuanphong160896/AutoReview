
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


#ifndef DEMTEST_INTERNALDEBOUNCECALLBACK_H
#define DEMTEST_INTERNALDEBOUNCECALLBACK_H

/* ---------------------------------------- */
/* DEM_CFG_DEBMONINTBASE                    */
/* ---------------------------------------- */
Std_ReturnType CB_DemGetFaultDetectionCounter_Monitoring_08(sint8 * const faultDetCtr);
Std_ReturnType CB_DemGetFaultDetectionCounter_Monitoring_13(sint8 * const faultDetCtr);
Std_ReturnType CB_DemGetFaultDetectionCounter_Monitoring_14(sint8 * const faultDetCtr);
Std_ReturnType CB_DemGetFaultDetectionCounter_Monitoring_16(sint8 * const faultDetCtr);
Std_ReturnType CB_DemGetFaultDetectionCounter_Monitoring_17(sint8 * const faultDetCtr);
Std_ReturnType CB_DemGetFaultDetectionCounter_Monitoring_22(sint8 * const faultDetCtr);
Std_ReturnType CB_DemGetFaultDetectionCounter_Monitoring_24(sint8 * const faultDetCtr);
Std_ReturnType CB_DemGetFaultDetectionCounter_Monitoring_25(sint8 * const faultDetCtr);
Std_ReturnType CB_DemGetFaultDetectionCounter_Monitoring_27(sint8 * const faultDetCtr);
Std_ReturnType CB_DemGetFaultDetectionCounter_Monitoring_31(sint8 * const faultDetCtr);


void CB_DemGetFaultDetectionCounter_SetValueToReturn (Std_ReturnType returnValue, sint8 returnParamFdc);
void CB_DemGetFaultDetectionCounter_SetValueToReturnForEvent (Dem_EventIdType EventId, Std_ReturnType returnValue, sint8 returnParamFdc);


#endif

