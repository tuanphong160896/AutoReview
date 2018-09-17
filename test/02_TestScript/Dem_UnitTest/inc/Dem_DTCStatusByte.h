/**********************************************************************************************************************
*
* COPYRIGHT RESERVED, Robert Bosch GmbH, 2012. All rights reserved.
* The reproduction, distribution and utilization of this document as well as the communication of its contents to
* others without explicit authorization is prohibited. Offenders will be held liable for the payment of damages.
* All rights reserved in the event of the grant of a patent, utility model or design.
*
**********************************************************************************************************************/

#ifndef DEM_DTCSTATUSBYTE_H
#define DEM_DTCSTATUSBYTE_H

#include "Dem_ClientBaseHandling.h"
#include "Dem_ClientClearMachine.h"
#include "Dem_Types.h"

#include "Dem_Clear.h"

#define DEM_START_SEC_ROM_CODE
#include "Dem_Cfg_MemMap.h"

uint8 Dem_DtcStatusByteRetrieve (Dem_DtcIdType dtcId);
uint8 Dem_DtcStatusByteRetrieveWithOrigin (Dem_DtcIdType dtcId, Dem_DTCOriginType DtcOrigin, boolean* DtcStatusIsValid);
void Dem_ClearDTCsEvents(Dem_EventIdType EventId, Dem_DTCOriginType DTCOrigin, Dem_ClientClearMachineType *Dem_ClientClearMachinePtr);
void Dem_ClearAllDTCs(Dem_DTCOriginType DTCOrigin, Dem_ClientClearMachineType *Dem_ClientClearMachinePtr);
void Dem_ClearSingleDTC(Dem_DtcIdType dtcId, Dem_DTCOriginType DTCOrigin, Dem_ClientClearMachineType *Dem_ClientClearMachinePtr);
boolean Dem_IsPendingClearEvent(Dem_EventIdType EventId);

#define DEM_STOP_SEC_ROM_CODE
#include "Dem_Cfg_MemMap.h"

#endif
