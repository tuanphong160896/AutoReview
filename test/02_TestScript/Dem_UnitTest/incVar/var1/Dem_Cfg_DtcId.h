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


#ifndef DEM_CFG_DTCID_H
#define DEM_CFG_DTCID_H


#include "Dem_Cfg_EventId.h"


#define DEM_CFG_EVCOMB_DISABLED       1u
#define DEM_CFG_EVCOMB_ONSTORAGE      2u
#define DEM_CFG_EVCOMB_ONRETRIEVAL    3u
#define DEM_CFG_EVCOMB            DEM_CFG_EVCOMB_ONSTORAGE


#define DEM_DTCID_INVALID           0u
#define DEM_DTCID_COUNT             8u
#define DEM_DTCID_ARRAYLENGTH       (DEM_DTCID_COUNT+1u)


#define DEM_ALTERNATIVE_DTCCODE_COUNT       8u
#define DEM_ALTERNATIVE_DTCCODE_ARRAYLENGTH (DEM_ALTERNATIVE_DTCCODE_COUNT)


#define DemConf_DemDTCClass_DTC_PowerCycle                           1u
#define DemConf_DemDTCClass_DTC_DrivingCycle                         2u
#define DemConf_DemDTCClass_DTC_IgnitionCycle                        3u
#define DemConf_DemDTCClass_DTC_5                                    4u
#define DemConf_DemDTCClass_DTC_1                                    5u
#define DemConf_DemDTCClass_DTC_2                                    6u
#define DemConf_DemDTCClass_DTC_3                                    7u
#define DemConf_DemDTCClass_DTC_4                                    8u

#define DEM_DTCGROUPID_INVALID           0u
#define DEM_DTCGROUPID_COUNT             3u
#define DEM_DTCGROUPID_ARRAYLENGTH       (DEM_DTCGROUPID_COUNT+1u)

#define DemGroupOfDTC_0                                              1u
#define DemGroupOfDTC_1                                              2u


// genInfo: for (EvCombination==OFF) the explicit mapping from dtcid to eventId is necessary, because an event may not be assigned to any DTC
#define  DEM_MAP_EVENTID_DTCID   \
const Dem_DtcIdType Dem_MapEventIdToDtcId[DEM_EVENTID_ARRAYLENGTH] = \
{ \
   DEM_DTCID_INVALID \
   ,DemConf_DemDTCClass_DTC_2               /* Monitoring_01 */ \
   ,DemConf_DemDTCClass_DTC_2               /* Monitoring_02 */ \
   ,DemConf_DemDTCClass_DTC_3               /* Monitoring_03 */ \
   ,DemConf_DemDTCClass_DTC_4               /* Monitoring_04 */ \
   ,DemConf_DemDTCClass_DTC_PowerCycle      /* Monitoring_05 */ \
   ,DEM_DTCID_INVALID                       /* Monitoring_06 */ \
   ,DemConf_DemDTCClass_DTC_IgnitionCycle   /* Monitoring_07 */ \
   ,DemConf_DemDTCClass_DTC_5               /* Monitoring_08 */ \
   ,DemConf_DemDTCClass_DTC_DrivingCycle    /* Monitoring_09 */ \
   ,DEM_DTCID_INVALID                       /* Monitoring_10 */ \
   ,DEM_DTCID_INVALID                       /* Monitoring_11 */ \
   ,DEM_DTCID_INVALID                       /* Monitoring_12 */ \
   ,DEM_DTCID_INVALID                       /* Monitoring_13 */ \
   ,DEM_DTCID_INVALID                       /* Monitoring_14 */ \
   ,DEM_DTCID_INVALID                       /* Monitoring_15 */ \
   ,DEM_DTCID_INVALID                       /* Monitoring_16 */ \
   ,DEM_DTCID_INVALID                       /* Monitoring_17 */ \
   ,DEM_DTCID_INVALID                       /* Monitoring_18 */ \
   ,DEM_DTCID_INVALID                       /* Monitoring_19 */ \
   ,DEM_DTCID_INVALID                       /* Monitoring_20 */ \
   ,DEM_DTCID_INVALID                       /* Monitoring_21 */ \
   ,DemConf_DemDTCClass_DTC_5               /* Monitoring_22 */ \
   ,DEM_DTCID_INVALID                       /* Monitoring_23 */ \
   ,DEM_DTCID_INVALID                       /* Monitoring_24 */ \
   ,DemConf_DemDTCClass_DTC_1               /* Monitoring_25 */ \
   ,DEM_DTCID_INVALID                       /* Monitoring_26 */ \
   ,DEM_DTCID_INVALID                       /* Monitoring_27 */ \
   ,DEM_DTCID_INVALID                       /* Monitoring_28 */ \
   ,DemConf_DemDTCClass_DTC_5               /* Monitoring_29 */ \
   ,DEM_DTCID_INVALID                       /* Monitoring_30 */ \
   ,DEM_DTCID_INVALID                       /* Monitoring_31 */ \
   ,DEM_DTCID_INVALID                       /* Monitoring_32 */ \
};


#define DEM_MAP_DTCGROUPID_DTCID \
{ {0u,0u}\
 ,{DemConf_DemDTCClass_DTC_PowerCycle      , DemConf_DemDTCClass_DTC_5}    	/* DEM_DTC_GROUP_DemGroupOfDTC_0_DTCS */ \
 ,{DemConf_DemDTCClass_DTC_1               , DemConf_DemDTCClass_DTC_4}    	/* DEM_DTC_GROUP_DemGroupOfDTC_1_DTCS */ \
  ,{DemConf_DemDTCClass_DTC_PowerCycle      , DemConf_DemDTCClass_DTC_4}	/* DEM_DTC_GROUP_ALL_DTCS */\
}

#if (DEM_CFG_EVCOMB == DEM_CFG_EVCOMB_DISABLED)


#define DEM_MAP_DTCID_EVENTID        \
const Dem_MapDtcIdToEventIdType  Dem_MapDtcIdToEventId[DEM_DTCID_ARRAYLENGTH] = \
{ \
   DEM_EVENTID_INVALID \
   ,DemConf_DemEventParameter_Monitoring_05 /* DTC_PowerCycle */ \
   ,DemConf_DemEventParameter_Monitoring_09 /* DTC_DrivingCycle */ \
   ,DemConf_DemEventParameter_Monitoring_07 /* DTC_IgnitionCycle */ \
   ,DemConf_DemEventParameter_Monitoring_08 /* DTC_5 */ \
   ,DemConf_DemEventParameter_Monitoring_25 /* DTC_1 */ \
   ,DemConf_DemEventParameter_Monitoring_01 /* DTC_2 */ \
   ,DemConf_DemEventParameter_Monitoring_03 /* DTC_3 */ \
   ,DemConf_DemEventParameter_Monitoring_04 /* DTC_4 */ \
};


#else

#define DEM_MAP_DTCID_EVENTID        \
static const  Dem_EventIdType  Dem_MapDtcIdToEventId_DTC_PowerCycle[] = { \
   DemConf_DemEventParameter_Monitoring_05 \
}; \
 \
 \
static const  Dem_EventIdType  Dem_MapDtcIdToEventId_DTC_DrivingCycle[] = { \
   DemConf_DemEventParameter_Monitoring_09 \
}; \
 \
 \
static const  Dem_EventIdType  Dem_MapDtcIdToEventId_DTC_IgnitionCycle[] = { \
   DemConf_DemEventParameter_Monitoring_07 \
}; \
 \
 \
static const  Dem_EventIdType  Dem_MapDtcIdToEventId_DTC_5[] = { \
   DemConf_DemEventParameter_Monitoring_08 \
,   DemConf_DemEventParameter_Monitoring_22 \
,   DemConf_DemEventParameter_Monitoring_29 \
}; \
 \
 \
static const  Dem_EventIdType  Dem_MapDtcIdToEventId_DTC_1[] = { \
   DemConf_DemEventParameter_Monitoring_25 \
}; \
 \
 \
static const  Dem_EventIdType  Dem_MapDtcIdToEventId_DTC_2[] = { \
   DemConf_DemEventParameter_Monitoring_01 \
,   DemConf_DemEventParameter_Monitoring_02 \
}; \
 \
 \
static const  Dem_EventIdType  Dem_MapDtcIdToEventId_DTC_3[] = { \
   DemConf_DemEventParameter_Monitoring_03 \
}; \
 \
 \
static const  Dem_EventIdType  Dem_MapDtcIdToEventId_DTC_4[] = { \
   DemConf_DemEventParameter_Monitoring_04 \
}; \
 \
 \
 \
const Dem_MapDtcIdToEventIdType  Dem_MapDtcIdToEventId[DEM_DTCID_ARRAYLENGTH] = \
{ \
   { \
      NULL_PTR, \
      0u \
   } \
   ,{ \
      &Dem_MapDtcIdToEventId_DTC_PowerCycle[0], \
      (uint16)(DEM_SIZEOF_VAR(Dem_MapDtcIdToEventId_DTC_PowerCycle)/DEM_SIZEOF_VAR(Dem_MapDtcIdToEventId_DTC_PowerCycle[0])) \
   } \
   ,{ \
      &Dem_MapDtcIdToEventId_DTC_DrivingCycle[0], \
      (uint16)(DEM_SIZEOF_VAR(Dem_MapDtcIdToEventId_DTC_DrivingCycle)/DEM_SIZEOF_VAR(Dem_MapDtcIdToEventId_DTC_DrivingCycle[0])) \
   } \
   ,{ \
      &Dem_MapDtcIdToEventId_DTC_IgnitionCycle[0], \
      (uint16)(DEM_SIZEOF_VAR(Dem_MapDtcIdToEventId_DTC_IgnitionCycle)/DEM_SIZEOF_VAR(Dem_MapDtcIdToEventId_DTC_IgnitionCycle[0])) \
   } \
   ,{ \
      &Dem_MapDtcIdToEventId_DTC_5[0], \
      (uint16)(DEM_SIZEOF_VAR(Dem_MapDtcIdToEventId_DTC_5)/DEM_SIZEOF_VAR(Dem_MapDtcIdToEventId_DTC_5[0])) \
   } \
   ,{ \
      &Dem_MapDtcIdToEventId_DTC_1[0], \
      (uint16)(DEM_SIZEOF_VAR(Dem_MapDtcIdToEventId_DTC_1)/DEM_SIZEOF_VAR(Dem_MapDtcIdToEventId_DTC_1[0])) \
   } \
   ,{ \
      &Dem_MapDtcIdToEventId_DTC_2[0], \
      (uint16)(DEM_SIZEOF_VAR(Dem_MapDtcIdToEventId_DTC_2)/DEM_SIZEOF_VAR(Dem_MapDtcIdToEventId_DTC_2[0])) \
   } \
   ,{ \
      &Dem_MapDtcIdToEventId_DTC_3[0], \
      (uint16)(DEM_SIZEOF_VAR(Dem_MapDtcIdToEventId_DTC_3)/DEM_SIZEOF_VAR(Dem_MapDtcIdToEventId_DTC_3[0])) \
   } \
   ,{ \
      &Dem_MapDtcIdToEventId_DTC_4[0], \
      (uint16)(DEM_SIZEOF_VAR(Dem_MapDtcIdToEventId_DTC_4)/DEM_SIZEOF_VAR(Dem_MapDtcIdToEventId_DTC_4[0])) \
   } \
};


#endif


/*----------------------------------------------------------------------------
   J1939Node <-> DTC Mapping
----------------------------------------------------------------------------*/



#define DEM_J1939NODEID_0                              0u
#define DEM_J1939NODEID_1                              1u
#define DEM_J1939NODEID_2                              2u

#define DEM_J1939NODEID_COUNT 3u
#define DEM_J1939NODEID_ARRAYLENGTH (DEM_J1939NODEID_COUNT+1u)

#define Dem_MAP_J1939NODEIDTODTCID \
static const  Dem_DtcIdType  Dem_J1939NodeIDMapToDtcId_0[] = { \
    DemConf_DemDTCClass_DTC_2        \
,    DemConf_DemDTCClass_DTC_3        \
,    DemConf_DemDTCClass_DTC_4        \
,    DemConf_DemDTCClass_DTC_IgnitionCycle    \
}; /* NodeID = 0 */ \
\
static const  Dem_DtcIdType  Dem_J1939NodeIDMapToDtcId_1[] = { \
    DemConf_DemDTCClass_DTC_PowerCycle    \
,    DemConf_DemDTCClass_DTC_1        \
,    DemConf_DemDTCClass_DTC_2        \
,    DemConf_DemDTCClass_DTC_3        \
}; /* NodeID = 1 */ \
\
static const  Dem_DtcIdType  Dem_J1939NodeIDMapToDtcId_2[] = { \
    DemConf_DemDTCClass_DTC_PowerCycle    \
,    DemConf_DemDTCClass_DTC_5        \
,    DemConf_DemDTCClass_DTC_2        \
,    DemConf_DemDTCClass_DTC_4        \
}; /* NodeID = 2 */ \
\
\
const Dem_J1939NodeIDMapToDtcIdType Dem_J1939NodeIDMapToDtcId[DEM_J1939NODEID_ARRAYLENGTH] = \
{ \
   { \
      &Dem_J1939NodeIDMapToDtcId_0[0], \
      (uint16)(DEM_SIZEOF_VAR(Dem_J1939NodeIDMapToDtcId_0)/DEM_SIZEOF_VAR(Dem_J1939NodeIDMapToDtcId_0[0])) \
   } \
,   { \
      &Dem_J1939NodeIDMapToDtcId_1[0], \
      (uint16)(DEM_SIZEOF_VAR(Dem_J1939NodeIDMapToDtcId_1)/DEM_SIZEOF_VAR(Dem_J1939NodeIDMapToDtcId_1[0])) \
   } \
,   { \
      &Dem_J1939NodeIDMapToDtcId_2[0], \
      (uint16)(DEM_SIZEOF_VAR(Dem_J1939NodeIDMapToDtcId_2)/DEM_SIZEOF_VAR(Dem_J1939NodeIDMapToDtcId_2[0])) \
   } \
,   { \
       NULL_PTR, \
       0u \
   } \
};

/*----------------------------------------------------------------------------
   DTC <-> J1939Node Mapping
----------------------------------------------------------------------------*/

#define DEM_J1939NODEID_INVALID                    DEM_J1939NODEID_ARRAYLENGTH

#define DEM_MAP_DTCIDTOJ1939NODEID \
static const  uint8  Dem_MapDtcIdToJ1939NodeId_DTC_PowerCycle[] = { \
   DEM_J1939NODEID_2 \
,   DEM_J1939NODEID_1 \
}; \
 \
 \
static const  uint8  Dem_MapDtcIdToJ1939NodeId_DTC_DrivingCycle[] = { \
   DEM_J1939NODEID_INVALID \
}; \
 \
 \
static const  uint8  Dem_MapDtcIdToJ1939NodeId_DTC_IgnitionCycle[] = { \
   DEM_J1939NODEID_0 \
}; \
 \
 \
static const  uint8  Dem_MapDtcIdToJ1939NodeId_DTC_5[] = { \
   DEM_J1939NODEID_2 \
}; \
 \
 \
static const  uint8  Dem_MapDtcIdToJ1939NodeId_DTC_1[] = { \
   DEM_J1939NODEID_1 \
}; \
 \
 \
static const  uint8  Dem_MapDtcIdToJ1939NodeId_DTC_2[] = { \
   DEM_J1939NODEID_0 \
,   DEM_J1939NODEID_1 \
,   DEM_J1939NODEID_2 \
}; \
 \
 \
static const  uint8  Dem_MapDtcIdToJ1939NodeId_DTC_3[] = { \
   DEM_J1939NODEID_0 \
,   DEM_J1939NODEID_1 \
}; \
 \
 \
static const  uint8  Dem_MapDtcIdToJ1939NodeId_DTC_4[] = { \
   DEM_J1939NODEID_2 \
,   DEM_J1939NODEID_0 \
}; \
 \
 \
 \
const Dem_MapDtcIdToJ1939NodeIdType  Dem_MapDtcIdToJ1939NodeId[DEM_DTCID_ARRAYLENGTH] = \
{ \
   { \
      NULL_PTR, \
      0u \
   } \
   ,{ \
      &Dem_MapDtcIdToJ1939NodeId_DTC_PowerCycle[0], \
      (uint16)(DEM_SIZEOF_VAR(Dem_MapDtcIdToJ1939NodeId_DTC_PowerCycle)/DEM_SIZEOF_VAR(Dem_MapDtcIdToJ1939NodeId_DTC_PowerCycle[0])) \
   } \
   ,{ \
      &Dem_MapDtcIdToJ1939NodeId_DTC_DrivingCycle[0], \
      (uint16)(DEM_SIZEOF_VAR(Dem_MapDtcIdToJ1939NodeId_DTC_DrivingCycle)/DEM_SIZEOF_VAR(Dem_MapDtcIdToJ1939NodeId_DTC_DrivingCycle[0])) \
   } \
   ,{ \
      &Dem_MapDtcIdToJ1939NodeId_DTC_IgnitionCycle[0], \
      (uint16)(DEM_SIZEOF_VAR(Dem_MapDtcIdToJ1939NodeId_DTC_IgnitionCycle)/DEM_SIZEOF_VAR(Dem_MapDtcIdToJ1939NodeId_DTC_IgnitionCycle[0])) \
   } \
   ,{ \
      &Dem_MapDtcIdToJ1939NodeId_DTC_5[0], \
      (uint16)(DEM_SIZEOF_VAR(Dem_MapDtcIdToJ1939NodeId_DTC_5)/DEM_SIZEOF_VAR(Dem_MapDtcIdToJ1939NodeId_DTC_5[0])) \
   } \
   ,{ \
      &Dem_MapDtcIdToJ1939NodeId_DTC_1[0], \
      (uint16)(DEM_SIZEOF_VAR(Dem_MapDtcIdToJ1939NodeId_DTC_1)/DEM_SIZEOF_VAR(Dem_MapDtcIdToJ1939NodeId_DTC_1[0])) \
   } \
   ,{ \
      &Dem_MapDtcIdToJ1939NodeId_DTC_2[0], \
      (uint16)(DEM_SIZEOF_VAR(Dem_MapDtcIdToJ1939NodeId_DTC_2)/DEM_SIZEOF_VAR(Dem_MapDtcIdToJ1939NodeId_DTC_2[0])) \
   } \
   ,{ \
      &Dem_MapDtcIdToJ1939NodeId_DTC_3[0], \
      (uint16)(DEM_SIZEOF_VAR(Dem_MapDtcIdToJ1939NodeId_DTC_3)/DEM_SIZEOF_VAR(Dem_MapDtcIdToJ1939NodeId_DTC_3[0])) \
   } \
   ,{ \
      &Dem_MapDtcIdToJ1939NodeId_DTC_4[0], \
      (uint16)(DEM_SIZEOF_VAR(Dem_MapDtcIdToJ1939NodeId_DTC_4)/DEM_SIZEOF_VAR(Dem_MapDtcIdToJ1939NodeId_DTC_4[0])) \
   } \
};


#endif

