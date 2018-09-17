/**********************************************************************************************************************
 *
 * COPYRIGHT RESERVED, Robert Bosch GmbH, 2012. All rights reserved.
 * The reproduction, distribution and utilization of this document as well as the communication of its contents to
 * others without explicit authorization is prohibited. Offenders will be held liable for the payment of damages.
 * All rights reserved in the event of the grant of a patent, utility model or design.
 *
 **********************************************************************************************************************/

#ifndef DEM_OPERATIONCYCLE_H
#define DEM_OPERATIONCYCLE_H

#include "Dem_Cfg_OperationCycle.h"
#include "Dem_Cfg_OperationCycle_DataStructures.h"
#include "Dem_Types.h"

#define DEM_START_SEC_RAM_CLEARED
#include "Dem_Cfg_MemMap.h"

extern Dem_OperationCycleList Dem_OperationCycleStates;

#define DEM_STOP_SEC_RAM_CLEARED
#include "Dem_Cfg_MemMap.h"

#define DEM_START_SEC_ROM_CODE
#include "Dem_Cfg_MemMap.h"

DEM_INLINE boolean Dem_IsOperationCycleStarted(Dem_OperationCycleIdType OperationCycleId)
{
    return DEM_OPERATIONCYCLE_ISBITSET(Dem_OperationCycleStates, OperationCycleId);
}

void Dem_OperationCycleInit(void);
void Dem_OperationCycleInitCheckNvm(void);
boolean Dem_OperationCyclesMainFunction(void);

#define DEM_STOP_SEC_ROM_CODE
#include "Dem_Cfg_MemMap.h"
#endif

