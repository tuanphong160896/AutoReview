/**********************************************************************************************************************
*
* COPYRIGHT RESERVED, Robert Bosch GmbH, 2012. All rights reserved.
* The reproduction, distribution and utilization of this document as well as the communication of its contents to
* others without explicit authorization is prohibited. Offenders will be held liable for the payment of damages.
* All rights reserved in the event of the grant of a patent, utility model or design.
*
**********************************************************************************************************************/


#ifndef DEM_EVMEMAPI_H
#define DEM_EVMEMAPI_H

#include "Dem_EvMemTypes.h"
#include "Dem_Cfg_EvMem.h"

/* ----------------------------------------------------------------------------
   Interface Functions
   ----------------------------------------------------------------------------
*/

typedef struct
{
  /* DEM API write */
  Dem_DtcIdType            DtcId;
  Dem_DTCOriginType        DTCOrigin;
  uint8                    ReqCounter;
  /* DEM Main write */
  uint8                    DemCounter;
  boolean                  IsValid;
  Dem_EvMemEventMemoryType EventMemory;
} Dem_EvMemDTCRecordType;

#define DEM_START_SEC_RAM_CLEARED
#include "Dem_Cfg_MemMap.h"
extern Dem_EvMemDTCRecordType Dem_EvMemDTCRecord;
#define DEM_STOP_SEC_RAM_CLEARED
#include "Dem_Cfg_MemMap.h"
#define DEM_START_SEC_ROM_CODE
#include "Dem_Cfg_MemMap.h"

/* Read Events From EvMem */

void Dem_EvMemApiMainFunction(void);

#define DEM_STOP_SEC_ROM_CODE
#include "Dem_Cfg_MemMap.h"

/* ----------------------------------------------------------------------------
   Inline Functions
   ----------------------------------------------------------------------------
*/

DEM_INLINE Dem_boolean_least Dem_EvMemIsDtcKindValid (Dem_DTCKindType DTCKind)
{
    return (DTCKind == DEM_DTC_KIND_ALL_DTCS);
}


DEM_INLINE Dem_boolean_least Dem_EvMemIsDtcOriginValid (Dem_DTCOriginType  *DTCOrigin)
{
    if(*DTCOrigin == DEM_DTC_ORIGIN_USERDEFINED_MEMORY)
    {
        *DTCOrigin = DEM_DTC_ORIGIN_SECONDARY_MEMORY;
    }
    return (
               (*DTCOrigin == DEM_DTC_ORIGIN_PRIMARY_MEMORY)
#if DEM_CFG_MAX_NUMBER_EVENT_ENTRY_SECONDARY > 0
            || (*DTCOrigin == DEM_DTC_ORIGIN_SECONDARY_MEMORY)
#endif
#if (DEM_CFG_MAX_NUMBER_EVENT_ENTRY_MIRROR > 0) || DEM_CFG_EVMEM_SHADOW_MEMORY_SUPPORTED
            || (*DTCOrigin == DEM_DTC_ORIGIN_MIRROR_MEMORY)
#endif
           );
}


#endif
