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


#ifndef DEM_CFG_EVENTCATEGORY_H
#define DEM_CFG_EVENTCATEGORY_H

#include "Std_Types.h"

/* ---------------------------------------- */
/* DEM_CFG_EVTCATEGORY                      */
/* ---------------------------------------- */
#define DEM_CFG_EVTCATEGORY_OFF  STD_OFF
#define DEM_CFG_EVTCATEGORY_ON   STD_ON


#define DEM_CFG_EVTCATEGORY  STD_ON  /* enabled implicitely because necessary for Bosch failure memory */



#if (DEM_CFG_EVTCATEGORY == DEM_CFG_EVTCATEGORY_ON)

typedef uint8 Dem_EvtCategoryPrioType;

#define DemConf_DemEventCategory_EcuInternal                          1uL
#define DemConf_DemEventCategory_IISenvironment                       2uL
#define DemConf_DemEventCategory_AttachedEcu                          3uL
#define DemConf_DemEventCategory_ApbMssFault                          4uL
#define DemConf_DemEventCategory_WssFault                             5uL
#define DemConf_DemEventCategory_ApbFault                             6uL
#define DemConf_DemEventCategory_ExternalFault                        7uL
#define DemConf_DemEventCategory_TransientFaultState                  8uL

#define DemConf_DemEventCategory_INVALIDCATEGORY                      0uL
#define DEM_CFG_CATEGORY_COUNT 8
#define DEM_EVENTCATPRIO_ARRAYLENGTH   (DEM_CFG_CATEGORY_COUNT+1u)

#define DemConf_DemEventCategoryPriority_EcuInternal                  1
#define DemConf_DemEventCategoryPriority_IISenvironment               1
#define DemConf_DemEventCategoryPriority_AttachedEcu                  1
#define DemConf_DemEventCategoryPriority_WssFault                     3
#define DemConf_DemEventCategoryPriority_ApbMssFault                  4
#define DemConf_DemEventCategoryPriority_ApbFault                     6
#define DemConf_DemEventCategoryPriority_ExternalFault                7
#define DemConf_DemEventCategoryPriority_TransientFaultState          8


#define DemConf_DemEventCategoryPriority_INVALIDPRIO                  0

//generate the table index is category
#define DEM_CFG_EVTCATEGORYPRIO \
{\
{DemConf_DemEventCategoryPriority_INVALIDPRIO                },\
 {DemConf_DemEventCategoryPriority_EcuInternal                } , \
 {DemConf_DemEventCategoryPriority_IISenvironment             } , \
 {DemConf_DemEventCategoryPriority_AttachedEcu                } , \
 {DemConf_DemEventCategoryPriority_ApbMssFault                } , \
 {DemConf_DemEventCategoryPriority_WssFault                   } , \
 {DemConf_DemEventCategoryPriority_ApbFault                   } , \
 {DemConf_DemEventCategoryPriority_ExternalFault              } , \
 {DemConf_DemEventCategoryPriority_TransientFaultState        } , \
}
#endif

#endif

