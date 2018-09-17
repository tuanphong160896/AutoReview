/**********************************************************************************************************************
*
* COPYRIGHT RESERVED, Robert Bosch GmbH, 2012. All rights reserved.
* The reproduction, distribution and utilization of this document as well as the communication of its contents to
* others without explicit authorization is prohibited. Offenders will be held liable for the payment of damages.
* All rights reserved in the event of the grant of a patent, utility model or design.
*
**********************************************************************************************************************/


#ifndef DEM_DEBARTIME_H
#define DEM_DEBARTIME_H



#include "Dem_Types.h"
#include "Dem_DebSharing.h"


typedef struct
{
   sint16 TimeFailedThreshold;
   sint16 TimePassedThreshold;
   sint16 FDCThreshold;
   sint16 SuspiciousThreshold;
} Dem_DebArTime_ParamSet;

#define DEM_START_SEC_ROM_CODE
#include "Dem_Cfg_MemMap.h"

uint8_least Dem_DebArTime_Filter (Dem_EventIdType EventId, Dem_EventStatusType* status, const void* paramSet, uint16 paramIndex DEM_DEB_LOCAL_CALC_PARAMS);
void        Dem_DebArTime_GetLimits (const void* paramSet, uint16 paramIndex, sint16_least* MinThreshold, sint16_least* MaxThreshold);
void        Dem_DebArTime_Cyclic (Dem_EventIdType EventId, const void* paramSet, uint16 paramIndex DEM_DEB_LOCAL_CALC_PARAMS);

#define DEM_STOP_SEC_ROM_CODE
#include "Dem_Cfg_MemMap.h"

#endif

