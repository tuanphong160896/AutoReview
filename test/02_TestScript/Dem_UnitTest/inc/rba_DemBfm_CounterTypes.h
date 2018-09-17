 /**********************************************************************************************************************
 *
* COPYRIGHT RESERVED, Robert Bosch GmbH, 2013. All rights reserved.
 * The reproduction, distribution and utilization of this document as well as the communication of its contents to
 * others without explicit authorization is prohibited. Offenders will be held liable for the payment of damages.
 * All rights reserved in the event of the grant of a patent, utility model or design.
 *
 **********************************************************************************************************************/
#ifndef RBA_DEMBFM_COUNTERTYPES_H
#define RBA_DEMBFM_COUNTERTYPES_H

#include "rba_DemBfm_Types.h"
#include "Dem_InternalEnvData.h"
#include "Dem_Cfg_OperationCycle.h"

typedef struct
{
    rba_DemBfm_RelativeOperatingTimeCounterType RelativeOperatingTimeCounter;
    rba_DemBfm_TimestampType TimestampCounter;
}
rba_DemBfm_CounterRam;

#if (RBA_DEMBFM_COUNTER_IN_NVM_ENABLED == DEM_BFM_ON)
typedef struct
{
	rba_DemBfm_OperationCycleCounterType OperationCycleCounter;
	rba_DemBfm_AbsoluteOperatingTimeCounterType AbsoluteOperatingTimeCounter;
}
rba_DemBfm_CounterNvm;

#define DEM_START_SEC_SAVED_ZONE
#include "Dem_Cfg_MemMap.h"

	//necessary to access the data directly through NvM configuration
	extern rba_DemBfm_CounterNvm rba_DemBfm_CounterValuesNvm;

#define DEM_STOP_SEC_SAVED_ZONE
#include "Dem_Cfg_MemMap.h"
#endif
#endif
