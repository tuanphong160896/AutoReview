/*                                                                                                                     
********************************************************************************************************************** 
*                                                                                                                      
* COPYRIGHT RESERVED, 2010 Robert Bosch GmbH. All rights reserved.                                                     
* The reproduction, distribution and utilization of this document as well as the communication of its contents to      
* others without explicit authorization is prohibited. Offenders will be held liable for the payment of damages.       
* All rights reserved in the event of the grant of a patent, utility model or design.                                  
*                                                                                                                      
********************************************************************************************************************** 
*/                                                                                                                     

/********************************************************************************************************************/
/*                                                                                                                  */
/* TOOL-GENERATED SOURCECODE, DO NOT CHANGE                                                                         */
/*                                                                                                                  */
/********************************************************************************************************************/


#ifndef DEM_CFG_STORAGECONDITION_H
#define DEM_CFG_STORAGECONDITION_H


#include "Std_Types.h"


#define DEM_CFG_STORAGECONDITION_ON    STD_ON
#define DEM_CFG_STORAGECONDITION_OFF   STD_OFF
#define DEM_CFG_STORAGECONDITION       DEM_CFG_STORAGECONDITION_ON


#define DemConf_DemStorageCondition_DemStorageCondition_0   0u


#define DEM_STORAGECONDITION_COUNT         1u
#define DEM_STORAGECONDITION_ARRAYLENGTH   (DEM_STORAGECONDITION_COUNT)


/* define type depends on projectspecific number of storageconditions */
/* if no storage conditions are support use uint8 to allow empty inline functions */
#if (DEM_STORAGECONDITION_ARRAYLENGTH <= 8) \
	|| (DEM_CFG_STORAGECONDITION == DEM_CFG_STORAGECONDITION_OFF)
typedef uint8 Dem_StoCoList;
#elif (DEM_STORAGECONDITION_ARRAYLENGTH <= 16)
typedef uint16 Dem_StoCoList;
#elif (DEM_STORAGECONDITION_ARRAYLENGTH <= 32)
typedef uint32 Dem_StoCoList;
#else
#error DEM currently only supports up to 32 StorageConditions
#endif

#if (DEM_CFG_STORAGECONDITION == DEM_CFG_STORAGECONDITION_ON)


#define DEM_STOCOBM_DemStorageCondition_0               ((Dem_StoCoList)(1u << DemConf_DemStorageCondition_DemStorageCondition_0))


#define DEM_STOCO_Monitoring_01                             (0u)
#define DEM_STOCO_Monitoring_02                             (0u)
#define DEM_STOCO_Monitoring_03                             (0u)
#define DEM_STOCO_Monitoring_04                             (0u)
#define DEM_STOCO_Monitoring_05                             (0u | DEM_STOCOBM_DemStorageCondition_0)
#define DEM_STOCO_Monitoring_06                             (0u)
#define DEM_STOCO_Monitoring_07                             (0u | DEM_STOCOBM_DemStorageCondition_0)
#define DEM_STOCO_Monitoring_08                             (0u | DEM_STOCOBM_DemStorageCondition_0)
#define DEM_STOCO_Monitoring_09                             (0u)
#define DEM_STOCO_Monitoring_10                             (0u)
#define DEM_STOCO_Monitoring_11                             (0u)
#define DEM_STOCO_Monitoring_12                             (0u)
#define DEM_STOCO_Monitoring_13                             (0u)
#define DEM_STOCO_Monitoring_14                             (0u | DEM_STOCOBM_DemStorageCondition_0)
#define DEM_STOCO_Monitoring_15                             (0u)
#define DEM_STOCO_Monitoring_16                             (0u | DEM_STOCOBM_DemStorageCondition_0)
#define DEM_STOCO_Monitoring_17                             (0u | DEM_STOCOBM_DemStorageCondition_0)
#define DEM_STOCO_Monitoring_18                             (0u)
#define DEM_STOCO_Monitoring_19                             (0u)
#define DEM_STOCO_Monitoring_20                             (0u)
#define DEM_STOCO_Monitoring_21                             (0u)
#define DEM_STOCO_Monitoring_22                             (0u)
#define DEM_STOCO_Monitoring_23                             (0u)
#define DEM_STOCO_Monitoring_24                             (0u)
#define DEM_STOCO_Monitoring_25                             (0u)
#define DEM_STOCO_Monitoring_26                             (0u)
#define DEM_STOCO_Monitoring_27                             (0u)
#define DEM_STOCO_Monitoring_28                             (0u)
#define DEM_STOCO_Monitoring_29                             (0u)
#define DEM_STOCO_Monitoring_30                             (0u)
#define DEM_STOCO_Monitoring_31                             (0u)
#define DEM_STOCO_Monitoring_32                             (0u)


#define DEM_CFG_STOCO_INITIALSTATE    (   0u \
                                       + (1u * DEM_STOCOBM_DemStorageCondition_0) \
                                      )


/* definition of replacement failures */
#define DEM_CFG_STOCO_PARAMS \
{ \
   { \
   DEM_EVENTID_INVALID, \
   } \
}


#endif

#endif

