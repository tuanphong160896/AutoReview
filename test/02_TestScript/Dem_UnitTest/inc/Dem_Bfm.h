/**********************************************************************************************************************
 *
 * COPYRIGHT RESERVED, Robert Bosch GmbH, 2017. All rights reserved.
 * The reproduction, distribution and utilization of this document as well as the communication of its contents to
 * others without explicit authorization is prohibited. Offenders will be held liable for the payment of damages.
 * All rights reserved in the event of the grant of a patent, utility model or design.
 *
 **********************************************************************************************************************/

#ifndef DEM_BFM_H
#define DEM_BFM_H

#include "Dem_Cfg.h"

#if( DEM_BFM_ENABLED == DEM_BFM_ON )
/* FC_VariationPoint_START */
#include "rba_DemBfm_Counter.h"
#include "rba_DemBfm_Record.h"
#include "rba_DemBfm_Cfg.h"
#include "rba_DemBfm_Event.h"
/* FC_VariationPoint_END */
#endif

#endif

