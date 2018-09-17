/**********************************************************************************************************************
*
* COPYRIGHT RESERVED, Robert Bosch GmbH, 2013. All rights reserved.
* The reproduction, distribution and utilization of this document as well as the communication of its contents to
* others without explicit authorization is prohibited. Offenders will be held liable for the payment of damages.
* All rights reserved in the event of the grant of a patent, utility model or design.
*
**********************************************************************************************************************/

#ifndef RBA_DEMBFM_PB_H
#define RBA_DEMBFM_PB_H

/*
 ***************************************************************************************************
 * Includes
 ***************************************************************************************************
 */

#include "rba_DemBfm_Cfg.h"
#if (DEM_BFM_ENABLED == DEM_BFM_ON)

#include "rba_DemBfm_Types.h"


#define DEM_START_SEC_ROM_CONST
#include "Dem_Cfg_MemMap.h"

/* Dem_ConfigParam_cs global structure of type rba_DemBfm_ConfigDataType */
extern const rba_DemBfm_ConfigDataType rba_DemBfm_ConfigParam_cs;

#define DEM_STOP_SEC_ROM_CONST
#include "Dem_Cfg_MemMap.h"


#endif

#endif

