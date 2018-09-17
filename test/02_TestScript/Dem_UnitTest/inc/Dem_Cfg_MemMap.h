/**********************************************************************************************************************
*
 * COPYRIGHT RESERVED, 2010 Robert Bosch GmbH. All rights reserved.
* The reproduction, distribution and utilization of this document as well as the communication of its contents to
* others without explicit authorization is prohibited. Offenders will be held liable for the payment of damages.
* All rights reserved in the event of the grant of a patent, utility model or design.
*
**********************************************************************************************************************/


/* MemMap.h for AUTOSAR Dem R4.0 Rev 2 */


/* MR12 RULE 19.15 VIOLATION: Multiple inclusion is wanted and necessary for memmapping */
#define DEM_MEMMAP_ERROR

/* ============================   BSW   ============================ */
#if defined DEM_START_SEC_RAM_CLEARED
    #if defined DEM_WAS_STARTED_SEC_RAM_CLEARED
        #error DEM_WAS_STARTED_SEC_RAM_CLEARED already defined
    #endif
    #define BSW_START_SEC_VAR_CLEARED_UNSPECIFIED
    #include "Bsw_MemMap.h"
    #undef BSW_START_SEC_VAR_CLEARED_UNSPECIFIED
    #undef DEM_MEMMAP_ERROR
    #undef DEM_START_SEC_RAM_CLEARED
    #define DEM_WAS_STARTED_SEC_RAM_CLEARED

#elif defined DEM_STOP_SEC_RAM_CLEARED
    #if ! defined DEM_WAS_STARTED_SEC_RAM_CLEARED
        #error DEM_STOP_SEC_RAM_CLEARED without START_SEC
    #else
        #undef DEM_WAS_STARTED_SEC_RAM_CLEARED
    #endif
    #define BSW_STOP_SEC_VAR_CLEARED_UNSPECIFIED
    #include "Bsw_MemMap.h"
    #undef BSW_STOP_SEC_VAR_CLEARED_UNSPECIFIED
    #undef DEM_MEMMAP_ERROR
    #undef DEM_STOP_SEC_RAM_CLEARED

#elif defined DEM_START_SEC_RAM_INIT
    #if defined DEM_WAS_STARTED_SEC_RAM_INIT
        #error DEM_WAS_STARTED_SEC_RAM_INIT already defined
    #endif
    #define BSW_START_SEC_VAR_INIT_UNSPECIFIED
    #include "Bsw_MemMap.h"
    #undef BSW_START_SEC_VAR_INIT_UNSPECIFIED
    #undef DEM_MEMMAP_ERROR
    #undef DEM_START_SEC_RAM_INIT
    #define DEM_WAS_STARTED_SEC_RAM_INIT

#elif defined DEM_STOP_SEC_RAM_INIT
    #if ! defined DEM_WAS_STARTED_SEC_RAM_INIT
        #error DEM_STOP_SEC_RAM_INIT without START_SEC
    #else
        #undef DEM_WAS_STARTED_SEC_RAM_INIT
    #endif
    #define BSW_STOP_SEC_VAR_INIT_UNSPECIFIED
    #include "Bsw_MemMap.h"
    #undef BSW_STOP_SEC_VAR_INIT_UNSPECIFIED
    #undef DEM_MEMMAP_ERROR
    #undef DEM_STOP_SEC_RAM_INIT

#elif defined DEM_START_SEC_ROM_CONST
    #if defined DEM_WAS_STARTED_SEC_ROM_CONST
        #error DEM_WAS_STARTED_SEC_ROM_CONST already defined
    #endif
    #define BSW_START_SEC_CONST_UNSPECIFIED
    #include "Bsw_MemMap.h"
    #undef BSW_START_SEC_CONST_UNSPECIFIED
    #undef DEM_MEMMAP_ERROR
    #undef DEM_START_SEC_ROM_CONST
    #define DEM_WAS_STARTED_SEC_ROM_CONST

#elif defined DEM_STOP_SEC_ROM_CONST
    #if ! defined DEM_WAS_STARTED_SEC_ROM_CONST
        #error DEM_STOP_SEC_ROM_CONST without START_SEC
    #else
        #undef DEM_WAS_STARTED_SEC_ROM_CONST
    #endif
    #define BSW_STOP_SEC_CONST_UNSPECIFIED
    #include "Bsw_MemMap.h"
    #undef BSW_STOP_SEC_CONST_UNSPECIFIED
    #undef DEM_MEMMAP_ERROR
    #undef DEM_STOP_SEC_ROM_CONST

#elif defined DEM_START_SEC_ROM_CODE
    #if defined DEM_WAS_STARTED_SEC_ROM_CODE
        #error DEM_WAS_STARTED_SEC_ROM_CODE already defined
    #endif
    #define BSW_START_SEC_CODE
    #include "Bsw_MemMap.h"
    #undef BSW_START_SEC_CODE
    #undef DEM_MEMMAP_ERROR
    #undef DEM_START_SEC_ROM_CODE
    #define DEM_WAS_STARTED_SEC_ROM_CODE

#elif defined DEM_STOP_SEC_ROM_CODE
    #if ! defined DEM_WAS_STARTED_SEC_ROM_CODE
        #error DEM_STOP_SEC_ROM_CODE without START_SEC
    #else
        #undef DEM_WAS_STARTED_SEC_ROM_CODE
    #endif
    #define BSW_STOP_SEC_CODE
    #include "Bsw_MemMap.h"
    #undef BSW_STOP_SEC_CODE
    #undef DEM_MEMMAP_ERROR
    #undef DEM_STOP_SEC_ROM_CODE

#elif defined DEM_START_SEC_CODE
    #if defined Dem_WAS_STARTED_SEC_CODE
        #error Dem_WAS_STARTED_SEC_CODE already defined
    #endif
    #define BSW_START_SEC_CODE
    #include "Bsw_MemMap.h"
    #undef BSW_START_SEC_CODE
    #undef DEM_MEMMAP_ERROR
    #undef DEM_START_SEC_CODE
    #define Dem_WAS_STARTED_SEC_CODE

#elif defined DEM_STOP_SEC_CODE
    #if ! defined Dem_WAS_STARTED_SEC_CODE
        #error Dem_WAS_STARTED_SEC_CODE without START_SEC
    #else
        #undef Dem_WAS_STARTED_SEC_CODE
    #endif
    #define BSW_STOP_SEC_CODE
    #include "Bsw_MemMap.h"
    #undef BSW_STOP_SEC_CODE
    #undef DEM_MEMMAP_ERROR
    #undef DEM_STOP_SEC_CODE


#elif defined Dem_START_SEC_CODE
    #if defined Dem_WAS_STARTED_SEC_CODE
        #error Dem_WAS_STARTED_SEC_CODE already defined
    #endif
    #define BSW_START_SEC_CODE
    #include "Bsw_MemMap.h"
    #undef BSW_START_SEC_CODE
    #undef DEM_MEMMAP_ERROR
    #undef Dem_START_SEC_CODE
    #define Dem_WAS_STARTED_SEC_CODE

#elif defined Dem_STOP_SEC_CODE
    #if ! defined Dem_WAS_STARTED_SEC_CODE
        #error Dem_WAS_STARTED_SEC_CODE without START_SEC
    #else
        #undef Dem_WAS_STARTED_SEC_CODE
    #endif
    #define BSW_STOP_SEC_CODE
    #include "Bsw_MemMap.h"
    #undef BSW_STOP_SEC_CODE
    #undef DEM_MEMMAP_ERROR
    #undef Dem_STOP_SEC_CODE

#elif defined DEM_START_SEC_SAVED_ZONE
    #if defined DEM_WAS_STARTED_SEC_SAVED_ZONE
        #error DEM_WAS_STARTED_SEC_SAVED_ZONE already defined
    #endif
    #define BSW_START_SEC_VAR_SAVED_ZONE_UNSPECIFIED
    #include "Bsw_MemMap.h"
    #undef BSW_START_SEC_VAR_SAVED_ZONE_UNSPECIFIED
    #undef DEM_MEMMAP_ERROR
    #undef DEM_START_SEC_SAVED_ZONE
    #define DEM_WAS_STARTED_SEC_SAVED_ZONE

#elif defined DEM_STOP_SEC_SAVED_ZONE
    #if ! defined DEM_WAS_STARTED_SEC_SAVED_ZONE
        #error DEM_WAS_STARTED_SEC_SAVED_ZONE without START_SEC
    #else
        #undef DEM_WAS_STARTED_SEC_SAVED_ZONE
    #endif
    #define BSW_STOP_SEC_VAR_SAVED_ZONE_UNSPECIFIED
    #include "Bsw_MemMap.h"
    #undef BSW_STOP_SEC_VAR_SAVED_ZONE_UNSPECIFIED
    #undef DEM_MEMMAP_ERROR
    #undef DEM_STOP_SEC_SAVED_ZONE

#elif defined DEM_MEMMAP_ERROR
    #error "Dem_MemMap.h, wrong #pragma command"
#endif

