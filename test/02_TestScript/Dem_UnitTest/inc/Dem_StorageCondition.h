/**********************************************************************************************************************
*
* COPYRIGHT RESERVED, Robert Bosch GmbH, 2012. All rights reserved.
* The reproduction, distribution and utilization of this document as well as the communication of its contents to
* others without explicit authorization is prohibited. Offenders will be held liable for the payment of damages.
* All rights reserved in the event of the grant of a patent, utility model or design.
*
**********************************************************************************************************************/


#ifndef DEM_STORAGECONDITION_H
#define DEM_STORAGECONDITION_H


#include "Dem_Cfg_StorageCondition.h"
#include "Dem_Mapping.h"
#include "Dem_Lock.h"
#include "Dem_Helpers.h"
#include "Dem_Cfg_Events.h"


#if (DEM_CFG_STORAGECONDITION == DEM_CFG_STORAGECONDITION_ON)


typedef struct {
   Dem_StoCoList isActive;
   Dem_StoCoList isReplacementEventRequested;
   Dem_StoCoList isReplacementEventStored;

#if (DEM_CFG_DEBUGDATA != DEM_CFG_DEBUGDATA_OFF)
   Dem_EventIdType eventId[DEM_STORAGECONDITION_ARRAYLENGTH];
   Dem_DebugDataType debug1[DEM_STORAGECONDITION_ARRAYLENGTH];
#endif
} Dem_StoCoState;


typedef struct {
   Dem_EventIdType replacementEvent[DEM_STORAGECONDITION_ARRAYLENGTH];
} Dem_StoCoParam;

#define DEM_START_SEC_RAM_INIT
#include "Dem_Cfg_MemMap.h"

extern Dem_StoCoState Dem_StoCoAllStates;

#define DEM_STOP_SEC_RAM_INIT
#include "Dem_Cfg_MemMap.h"


#endif



#define DEM_START_SEC_ROM_CODE
#include "Dem_Cfg_MemMap.h"


/*** INTERNAL FUNCTIONS *******************************************************/

DEM_INLINE boolean Dem_StoCoAreAllFulfilled(Dem_StoCoList storageConditionList)
{
#if (DEM_CFG_STORAGECONDITION == DEM_CFG_STORAGECONDITION_ON)
   return ((storageConditionList & Dem_StoCoAllStates.isActive) == storageConditionList);
#else
   DEM_UNUSED_PARAM(storageConditionList);
   return TRUE;
#endif
}



/* may only be used within interrupt lock */
DEM_INLINE void Dem_StoCoSetHasFilteredEvent(Dem_StoCoList storageConditionList
                                             DEM_DEBUGDATA_PARAM(Dem_DebugDataType EventId, Dem_DebugDataType debug1))
{
#if (DEM_CFG_STORAGECONDITION == DEM_CFG_STORAGECONDITION_ON)

#if (DEM_CFG_DEBUGDATA != DEM_CFG_DEBUGDATA_OFF)
   uint16_least i;
   Dem_StoCoList stoco_mask;
#endif

    DEM_ASSERT_ISLOCKED ();

#if (DEM_CFG_DEBUGDATA != DEM_CFG_DEBUGDATA_OFF)
   for (i=0; i < DEM_STORAGECONDITION_COUNT; i++)
   {
      stoco_mask = ((Dem_StoCoList)(1u << i));

      if((stoco_mask & storageConditionList & (Dem_StoCoList)(~Dem_StoCoAllStates.isActive))!=0u)
      {
         Dem_StoCoAllStates.eventId[i] = ((Dem_EventIdType)EventId);
         Dem_StoCoAllStates.debug1[i]  = debug1;
      }

   }
#endif


   Dem_StoCoAllStates.isReplacementEventRequested |= (   storageConditionList
                                               &  (Dem_StoCoList)(~Dem_StoCoAllStates.isActive)
                                               &  (Dem_StoCoList)(~Dem_StoCoAllStates.isReplacementEventStored)
                                            );
#else
   DEM_UNUSED_PARAM(storageConditionList);
#if (DEM_CFG_DEBUGDATA != DEM_CFG_DEBUGDATA_OFF)
   DEM_UNUSED_PARAM(EventId);
   DEM_UNUSED_PARAM(debug1);
#endif
#endif
}


#if (DEM_CFG_STORAGECONDITION == DEM_CFG_STORAGECONDITION_ON)


void Dem_StoCoMainFunction(void);
void Dem_StoCoRecheckReplacementStorage(Dem_StoCoList storageConditions);


#else

DEM_INLINE void Dem_StoCoMainFunction(void) {}
DEM_INLINE void Dem_StoCoRecheckReplacementStorage(uint32 storageConditions) { DEM_UNUSED_PARAM(storageConditions); }

#endif


#define DEM_STOP_SEC_ROM_CODE
#include "Dem_Cfg_MemMap.h"



#endif

