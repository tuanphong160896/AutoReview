/**********************************************************************************************************************
*
* COPYRIGHT RESERVED, Robert Bosch GmbH, 2013. All rights reserved.
* The reproduction, distribution and utilization of this document as well as the communication of its contents to
* others without explicit authorization is prohibited. Offenders will be held liable for the payment of damages.
* All rights reserved in the event of the grant of a patent, utility model or design.
*
**********************************************************************************************************************/
#ifndef RBA_DEMBFM_EVENT_H
#define RBA_DEMBFM_EVENT_H

#include "rba_DemBfm_Types.h"
#include "Dem_InternalEnvData.h"

#define DEM_START_SEC_ROM_CODE
#include "Dem_Cfg_MemMap.h"


/** * @ingroup RBA_DEMBFM_H
 * Get the priority of an event.
 * The lower the value, the higher the priority.
 * An event that has no configured priority is filled with the reserved value RBA_DEMBFM_PRIORITY_MIN.
 * The event priority is mapped to the DemRbEventCategory parameter.
 * The priority of an event is static.
 * @param [in]  eventId  the eventId you want to query
 * @param [out]  priority  pointer to a buffer that is filled with the found priority of this event
 * @return  RBA_DEMBFM_RET_OK: priority got set\n
 *          RBA_DEMBFM_RET_NULL_PTR: priority pointer is invalid\n
 *          RBA_DEMBFM_RET_NOK: something went wrong
 */
rba_DemBfm_ReturnType rba_DemBfm_EventGetPriority( Dem_EventIdType eventId, rba_DemBfm_PriorityType *priority );

#if( RBA_DEMBFM_UNIQUEID == DEM_BFM_ON )
/** * @ingroup RBA_DEMBFM_H
 * Get the unique id of an event.
 * An event that has no configured unique id is filled with the reserved value RBA_DEMBFM_UNIQUE_ID_UNDEFINED.
 * The unique id is statically mapped to an event.
 * This feature needs to be enabled by seeting configuration switch DemRbBfmUniqueId to something else than "OFF".
 * @param [in]  eventId  the eventId you want to query
 * @param [out]  uniqueId  pointer to a buffer that is filled with the found unique id of this event
 * @return  RBA_DEMBFM_RET_OK: uniqueId got set\n
 *          RBA_DEMBFM_RET_NULL_PTR: uniqueId pointer is invalid\n
 *          RBA_DEMBFM_RET_NOK: something went wrong
 */
rba_DemBfm_ReturnType rba_DemBfm_EventGetUniqueId( Dem_EventIdType eventId, rba_DemBfm_UniqueIdDataType *uniqueId );
Std_ReturnType rba_DemBfm_WrapperGetUniqueEventId( uint8* buffer, const Dem_InternalEnvData* internalData );
#endif


#define DEM_STOP_SEC_ROM_CODE
#include "Dem_Cfg_MemMap.h"


#endif
