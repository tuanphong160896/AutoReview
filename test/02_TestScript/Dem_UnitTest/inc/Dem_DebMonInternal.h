/**********************************************************************************************************************
*
* COPYRIGHT RESERVED, Robert Bosch GmbH, 2012. All rights reserved.
* The reproduction, distribution and utilization of this document as well as the communication of its contents to
* others without explicit authorization is prohibited. Offenders will be held liable for the payment of damages.
* All rights reserved in the event of the grant of a patent, utility model or design.
*
**********************************************************************************************************************/

#ifndef DEM_DEBMONINTERNAL_H
#define DEM_DEBMONINTERNAL_H


#include "Dem_Types.h"


typedef Std_ReturnType(*Dem_GetFaultDetectionCounterOfIntDebMonitors)(sint8 * faultDetCtr);


typedef struct
{
  /* Pointer to DemCallBackGetFaultDetectionCounter Function */
    Dem_GetFaultDetectionCounterOfIntDebMonitors funcPointer_GetFDC;
}Dem_DebounceMonitorInternal;



#endif

