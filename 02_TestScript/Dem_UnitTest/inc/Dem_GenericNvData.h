/**********************************************************************************************************************
*
* COPYRIGHT RESERVED, Robert Bosch GmbH, 2012. All rights reserved.
* The reproduction, distribution and utilization of this document as well as the communication of its contents to
* others without explicit authorization is prohibited. Offenders will be held liable for the payment of damages.
* All rights reserved in the event of the grant of a patent, utility model or design.
*
**********************************************************************************************************************/

#ifndef DEM_GENERICNVDATA_H
#define DEM_GENERICNVDATA_H

#include "Dem_OperationCycle.h"
#include "Dem_EvMemGenTypes.h"

typedef struct
{
#if (DEM_CFG_OBD != DEM_CFG_OBD_OFF)
    rba_DemObdBasic_PidDataType pidData;
    boolean ObdPfcCycleCondition;
#endif

   Dem_OperationCycleList OperationCycleStates;
   Dem_OperationCycleList OperationCycleQualified;

#if DEM_CFG_EVMEMGENERIC_SUPPORTED
    /* used in API service Dem_GetEventMemoryOverflow */
   boolean           Overflow[DEM_EVMEMGEN_OVERFLOW_ARRAYSIZE];
   /* used in API service Dem_GetDTCByOccurrenceTime */
   Dem_DtcIdType     DtcIdsByOccurrenceTime[DEM_EVMEMGEN_DTCIDS_BY_OCCURRENCE_TIME_ARRAYSIZE];
#endif
}  Dem_GenericNvDataType;

#define DEM_START_SEC_SAVED_ZONE
#include "Dem_Cfg_MemMap.h"
extern Dem_GenericNvDataType Dem_GenericNvData;
#define DEM_STOP_SEC_SAVED_ZONE
#include "Dem_Cfg_MemMap.h"


#endif /* DEM_GENERICNVDATA_H */

