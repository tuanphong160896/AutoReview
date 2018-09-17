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


#ifndef DEM_CFG_OPERATIONCYCLE_DATASTRUCTURES_H
#define DEM_CFG_OPERATIONCYCLE_DATASTRUCTURES_H

#include "Dem_Types.h"
#include "Dem_Prv_Det.h"
#include "Dem_Cfg_OperationCycle.h"

typedef struct
{
	Dem_OperationCycleList DependentCycleMask;
	boolean IsAllowedToBeStartedDirectly;
} Dem_Cfg_OperationCycleType;


#define DEM_START_SEC_ROM_CONST
#include "Dem_MemMap.h"

extern const Dem_Cfg_OperationCycleType Dem_Cfg_OperationCycle[5];

#define DEM_STOP_SEC_ROM_CONST
#include "Dem_MemMap.h"

LOCAL_INLINE Dem_OperationCycleList Dem_Cfg_OperationCycle_GetDependentCycleMask(Dem_OperationCycleIdType indx)
{
	DEM_ASSERT_RANGECHECK(indx < 5);
	return Dem_Cfg_OperationCycle[indx].DependentCycleMask;
}

LOCAL_INLINE boolean Dem_Cfg_OperationCycle_GetIsAllowedToBeStartedDirectly(Dem_OperationCycleIdType indx)
{
	DEM_ASSERT_RANGECHECK(indx < 5);
	return Dem_Cfg_OperationCycle[indx].IsAllowedToBeStartedDirectly;
}


#endif
