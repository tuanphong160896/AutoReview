/**********************************************************************************************************************
*
* COPYRIGHT RESERVED, Robert Bosch GmbH, 2012. All rights reserved.
* The reproduction, distribution and utilization of this document as well as the communication of its contents to
* others without explicit authorization is prohibited. Offenders will be held liable for the payment of damages.
* All rights reserved in the event of the grant of a patent, utility model or design.
*
**********************************************************************************************************************/

#ifndef DEM_INTERNALENVDATA_H
#define DEM_INTERNALENVDATA_H


#include "Dem_Types.h"
#include "Dem_EvMemTypes.h"

/**
 * Used to pass information about the event to internal data element read functions
 */
typedef struct
{
    /** Id of the event */
	Dem_EventIdType eventId;
#if (DEM_CFG_DEBUGDATA != DEM_CFG_DEBUGDATA_OFF)
	/** Debug data */
	Dem_DebugDataType debug0;
	/** Debug data */
	Dem_DebugDataType debug1;
#endif
	/** Event memory location of the event. Only set on retrieval (otherwise == NULL_PTR) */
	Dem_EvMemEventMemoryType *evMemLocation;
} Dem_InternalEnvData;


#endif

