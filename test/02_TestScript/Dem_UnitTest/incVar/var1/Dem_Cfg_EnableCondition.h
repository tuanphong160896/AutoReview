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


#ifndef DEM_CFG_ENABLECONDITION_H
#define DEM_CFG_ENABLECONDITION_H


#include "Std_Types.h"


#define DEM_CFG_ENABLECONDITION_ON    STD_ON
#define DEM_CFG_ENABLECONDITION_OFF   STD_OFF
#define DEM_CFG_ENABLECONDITION       DEM_CFG_ENABLECONDITION_ON


#define DemConf_DemEnableCondition_EnableCondNormal   0u
#define DemConf_DemEnableCondition_EnableCondPowerOn   1u
#define DemConf_DemEnableCondition_EnableCondSleep   2u


#define DEM_ENABLECONDITION_COUNT         3u
#define DEM_ENABLECONDITION_ARRAYLENGTH   (DEM_ENABLECONDITION_COUNT)


/* define type depends on projectspecific number of storageconditions */
/* if no storage conditions are support use uint8 to allow empty inline functions */
#if (DEM_ENABLECONDITION_ARRAYLENGTH <= 8) \
	|| (DEM_CFG_ENABLECONDITION == DEM_CFG_ENABLECONDITION_OFF)
typedef uint8 Dem_EnCoList;
#elif (DEM_ENABLECONDITION_ARRAYLENGTH <= 16)
typedef uint16 Dem_EnCoList;
#elif (DEM_ENABLECONDITION_ARRAYLENGTH <= 32)
typedef uint32 Dem_EnCoList;
#else
#error DEM currently only supports up to 32 EnableConditions
#endif


#if (DEM_CFG_ENABLECONDITION == DEM_CFG_ENABLECONDITION_ON)


#define DEM_ENCOBM_EnableCondNormal                    ((Dem_EnCoList)(1u << DemConf_DemEnableCondition_EnableCondNormal))
#define DEM_ENCOBM_EnableCondPowerOn                   ((Dem_EnCoList)(1u << DemConf_DemEnableCondition_EnableCondPowerOn))
#define DEM_ENCOBM_EnableCondSleep                     ((Dem_EnCoList)(1u << DemConf_DemEnableCondition_EnableCondSleep))


#define DEM_ENCO_Monitoring_01                  (0u)
#define DEM_ENCO_Monitoring_02                  (0u)
#define DEM_ENCO_Monitoring_03                  (0u)
#define DEM_ENCO_Monitoring_04                  (0u)
#define DEM_ENCO_Monitoring_05                  (0u | DEM_ENCOBM_EnableCondPowerOn)
#define DEM_ENCO_Monitoring_06                  (0u)
#define DEM_ENCO_Monitoring_07                  (0u | DEM_ENCOBM_EnableCondPowerOn)
#define DEM_ENCO_Monitoring_08                  (0u | DEM_ENCOBM_EnableCondNormal | DEM_ENCOBM_EnableCondSleep)
#define DEM_ENCO_Monitoring_09                  (0u | DEM_ENCOBM_EnableCondNormal | DEM_ENCOBM_EnableCondSleep)
#define DEM_ENCO_Monitoring_10                  (0u | DEM_ENCOBM_EnableCondNormal | DEM_ENCOBM_EnableCondSleep)
#define DEM_ENCO_Monitoring_11                  (0u)
#define DEM_ENCO_Monitoring_12                  (0u)
#define DEM_ENCO_Monitoring_13                  (0u)
#define DEM_ENCO_Monitoring_14                  (0u | DEM_ENCOBM_EnableCondPowerOn)
#define DEM_ENCO_Monitoring_15                  (0u)
#define DEM_ENCO_Monitoring_16                  (0u)
#define DEM_ENCO_Monitoring_17                  (0u)
#define DEM_ENCO_Monitoring_18                  (0u)
#define DEM_ENCO_Monitoring_19                  (0u)
#define DEM_ENCO_Monitoring_20                  (0u)
#define DEM_ENCO_Monitoring_21                  (0u)
#define DEM_ENCO_Monitoring_22                  (0u)
#define DEM_ENCO_Monitoring_23                  (0u)
#define DEM_ENCO_Monitoring_24                  (0u)
#define DEM_ENCO_Monitoring_25                  (0u)
#define DEM_ENCO_Monitoring_26                  (0u)
#define DEM_ENCO_Monitoring_27                  (0u)
#define DEM_ENCO_Monitoring_28                  (0u)
#define DEM_ENCO_Monitoring_29                  (0u)
#define DEM_ENCO_Monitoring_30                  (0u)
#define DEM_ENCO_Monitoring_31                  (0u)
#define DEM_ENCO_Monitoring_32                  (0u)



#define DEM_CFG_ENCO_INITIALSTATE    (   0u \
                                       + (0u * DEM_ENCOBM_EnableCondNormal) \
                                       + (1u * DEM_ENCOBM_EnableCondPowerOn) \
                                       + (1u * DEM_ENCOBM_EnableCondSleep) \
                                      )

#endif

#endif

