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


#ifndef DEM_PRJEVMEMPROJECTEXTENSION_H
#define DEM_PRJEVMEMPROJECTEXTENSION_H
#include "Dem_Cfg_DTCs.h"

typedef struct
{
    uint8 mycounter;
} Dem_EvMemProjectExtensionType;


void Dem_EvMemProjectExtensionInit(void);
void Dem_EvMemProjectExtensionMain(void);
void Dem_EvMemProjectExtensionUnRobust(Dem_EventIdType EventId, uint16_least LocId, uint16_least *writeSts);
void Dem_EvMemProjectExtensionFailed(Dem_EventIdType EventId, uint16_least LocId, uint16_least *writeSts);
void Dem_EvMemProjectExtensionStartOpCycle(uint16_least LocId, uint16_least *writeSts);


#endif /* INCLUDE_PROTECTION */


/* FC_VariationPoint_START */
/*<BASDKey>
**********************************************************************************************************************
* $History___:$
**********************************************************************************************************************
</BASDKey>*/
/* FC_VariationPoint_END */
