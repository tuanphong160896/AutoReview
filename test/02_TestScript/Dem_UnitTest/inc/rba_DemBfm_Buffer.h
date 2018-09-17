/**********************************************************************************************************************
*
* COPYRIGHT RESERVED, Robert Bosch GmbH, 2013. All rights reserved.
* The reproduction, distribution and utilization of this document as well as the communication of its contents to
* others without explicit authorization is prohibited. Offenders will be held liable for the payment of damages.
* All rights reserved in the event of the grant of a patent, utility model or design.
*
**********************************************************************************************************************/
#ifndef RBA_DEMBFM_BUFFER_H
#define RBA_DEMBFM_BUFFER_H

#include "rba_DemBfm_Types.h"
#include "Dem_Cfg.h"
#include "Dem_EvBuffEvent.h"
typedef struct
{
	uint8 envDataElementIndex;
	uint16 offset;
}
rba_DemBfm_BufferConfiguration;


#define DEM_START_SEC_ROM_CODE
#include "Dem_Cfg_MemMap.h"

void rba_DemBfm_EnvReport( const Dem_EvBuffEvent* fe );
void rba_DemBfm_SetEventFailed( const Dem_EvBuffEvent* fe );
void rba_DemBfm_SetEventUnrobust( const Dem_EvBuffEvent* fe );
void rba_DemBfm_SetEventPassed( const Dem_EvBuffEvent* fe );
void rba_DemBfm_SetEvent(const Dem_EvBuffEvent* fe, const rba_DemBfm_StatusAndQualificationBitType qualification);

void rba_DemBfm_EnvCaptureBFM( Dem_EventIdType eventId, rba_DemBfm_EnvironmentalData *BfmBufferData DEM_DEBUGDATA_PARAM(Dem_DebugDataType debug0, Dem_DebugDataType debug1) );

void rba_DemBfm_BufferRead( const rba_DemBfm_EnvironmentalData *source, uint8 elementIdx, uint8 *target );
uint8 rba_DemBfm_BufferGetElementSize( uint8 idx );

#define DEM_STOP_SEC_ROM_CODE
#include "Dem_Cfg_MemMap.h"

#endif
