
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


#ifndef DEMTEST_DATAELEMENTSCALLBACK_H
#define DEMTEST_DATAELEMENTSCALLBACK_H

/**
 * Depending on DEM-Configuration in BCT, callback fuctions are referenced for calculation of DataElements.
 * Usually the calculation is done outside DEM. If functions are missing, these may temporarily be stubed until
 * implementation is available.
 */





Std_ReturnType SWC_GetEngineTemperature(uint8* Buffer);


Std_ReturnType SWC_GetTorque(uint8* Buffer);


Std_ReturnType SWC_GetVehicleSpeed(uint8* Buffer);








void DemTest_GenerateEnvData (void);

#endif

