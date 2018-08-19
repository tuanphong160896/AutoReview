 /**********************************************************************************************************************
 *
  * COPYRIGHT RESERVED, Robert Bosch GmbH, 2012. All rights reserved.
 * The reproduction, distribution and utilization of this document as well as the communication of its contents to
 * others without explicit authorization is prohibited. Offenders will be held liable for the payment of damages.
 * All rights reserved in the event of the grant of a patent, utility model or design.
 *
 **********************************************************************************************************************/


#ifndef DEM_PRJSPECIFICFAILUREMEMORYTYPE_H
#define DEM_PRJSPECIFICFAILUREMEMORYTYPE_H

/* The Dem_PrjSpecificFailureMemory is a template file to be used only when the DemRbSupportProjectSpecificFailureMemory is enabled in the project,
 * if this parameter is disabled, kindly remove this file from project build */


#include "Dem_Cfg_EvBuff.h"
#include "Dem_Types.h"


#if(DEM_CFG_SUPPORT_PROJECTSPECIFIC_FAILUREMEMORY == TRUE)

typedef struct
{
    uint8 SampleData;
}DemRbProjectSpecificFailureMemoryType;


#endif

#endif /* INCLUDE_PROTECTION */


