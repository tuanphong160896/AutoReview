#ifndef SWC_BFMSTUBS_H
#define SWC_BFMSTUBS_H

#if( DEM_BFM_ENABLED != DEM_BFM_ON )
#include "Std_Types.h"
#include "Dem_Cfg.h"
#else
#include "rba_DemBfm_Cfg.h"
#include "rba_DemBfm_Types.h"

boolean SWC_IsDeleteRecordAllowed_CallbackFunction( rba_DemBfm_LocationDataType location );
boolean SWC_IsModifyLockedRecordAllowed_CallbackFunction( Dem_EventIdType newEventId, rba_DemBfm_LocationDataType location );
rba_DemBfm_ReturnType SWC_CustomReplacementLogic_CallbackFunction( Dem_EventIdType newEventId, rba_DemBfm_LocationDataType *location );

#endif //DEM_BFM_ENABLED

#endif
