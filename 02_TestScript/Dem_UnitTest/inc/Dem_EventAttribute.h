/* BASDKey_start */
/*<BASDKey>
**********************************************************************************************************************
*
* COPYRIGHT RESERVED, Robert Bosch GmbH, 2012. All rights reserved.
* The reproduction, distribution and utilization of this document as well as the communication of its contents to
* others without explicit authorization is prohibited. Offenders will be held liable for the payment of damages.
* All rights reserved in the event of the grant of a patent, utility model or design.
*
**********************************************************************************************************************/
/* BASDKey_end */
/* Administrative Information (automatically filled in)
* $Domain____:$
* $Namespace_:$
* $Class_____:$
* $Name______:$
* $Variant___:$
* $Revision__:$
**********************************************************************************************************************
</BASDKey>*/

#ifndef DEM_EVENTATTRIBUTE_H
#define DEM_EVENTATTRIBUTE_H


#include "Dem_Events.h"

#if (DEM_CFG_EVT_ATTRIBUTE == DEM_CFG_EVT_ATTRIBUTE_ON)

/** @ingroup DEM_EXT_H
 *  This structure holds the event attributes defined by user.
 *  Its user responsibility to add event attributes inside the structure. The name of the structure should be same as
 *  mentioned(Dem_EventAttributeType).
 */
typedef struct {
   uint8 value; /**< just some example struct content */
} Dem_EventAttributeType;

#define DEM_START_SEC_ROM_CODE
#include "Dem_Cfg_MemMap.h"
extern const Dem_EventAttributeType* Dem_getEventUserAttributes(Dem_EventIdType EventId);
#define DEM_STOP_SEC_ROM_CODE
#include "Dem_Cfg_MemMap.h"
/**
 * "DEM_EVTS_ATTRIBUTES_INIT" function shall be defined with event attributes as defined in "Dem_EventAttributeType" structure and
 * arrange the parameters in sequence.
 */
#define DEM_EVTS_USERATTRIBUTES_INIT(VALUE)   \
{                                             \
   (VALUE)                                 	  \
}

/**
 * This function returns the project specific attributes of the Events. The attributes are only
 * available with macro switch setting to DEM_CFG_EVT_ATTRIBUTE_ON. The definition may be done
 * based on the attributes template: DEM_EVENTATTRIBUTE.H_TPL.
 */


DEM_INLINE uint8 Dem_GetEventAttribute_value(Dem_EventIdType EventId)
{
   return (Dem_getEventUserAttributes(EventId)->value);
}

#endif
#endif /* INCLUDE_PROTECTION */

/* FC_VariationPoint_START */
/*<BASDKey>
**********************************************************************************************************************
* $History___:$
**********************************************************************************************************************
</BASDKey>*/
/* FC_VariationPoint_END */
