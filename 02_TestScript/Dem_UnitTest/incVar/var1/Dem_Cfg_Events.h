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


#ifndef DEM_CFG_EVENTS_H
#define DEM_CFG_EVENTS_H

#include "Dem_Cfg_EventId.h"


/* ---------------------------------------- */
/* DEM_CFG_EVTDISABLESTATUSUPDATE           */
/* ---------------------------------------- */
#define DEM_CFG_EVTDISABLESTATUSUPDATE_OFF  STD_OFF
#define DEM_CFG_EVTDISABLESTATUSUPDATE_ON   STD_ON
#define DEM_CFG_EVTDISABLESTATUSUPDATE  DEM_CFG_EVTDISABLESTATUSUPDATE_OFF


/* ---------------------------------------- */
/* DEM_CFG_TRIGGERFIMREPORTS                */
/* ---------------------------------------- */
#define DEM_CFG_TRIGGERFIMREPORTS_OFF  STD_OFF
#define DEM_CFG_TRIGGERFIMREPORTS_ON   STD_ON
#define DEM_CFG_TRIGGERFIMREPORTS  DEM_CFG_TRIGGERFIMREPORTS_OFF

#define DEM_CFG_FIM_OFF STD_OFF
#define DEM_CFG_FIM_ON  STD_ON
#define DEM_CFG_FIM_USED DEM_CFG_FIM_OFF
/* ---------------------------------------- */
/* DEM_CFG_TRIGGERDLTREPORTS                */
/* ---------------------------------------- */
#define DEM_CFG_TRIGGERDLTREPORTS_OFF  STD_OFF
#define DEM_CFG_TRIGGERDLTREPORTS_ON   STD_ON
#define DEM_CFG_TRIGGERDLTREPORTS  DEM_CFG_TRIGGERDLTREPORTS_ON
/* ---------------------------------------- */
/* DEM_CFG_ALLOW_HISTORY            		*/
/* ---------------------------------------- */
#define DEM_CFG_ALLOW_HISTORY_ON   STD_ON
#define DEM_CFG_ALLOW_HISTORY_OFF  STD_OFF
#define DEM_CFG_ALLOW_HISTORY  DEM_CFG_ALLOW_HISTORY_ON

/* ---------------------------------------- */
/* DEM_CFG_LOCK_ALLFAILUREINFO            	*/
/* ---------------------------------------- */
#define DEM_CFG_LOCK_ALLFAILUREINFO_ON   STD_ON
#define DEM_CFG_LOCK_ALLFAILUREINFO_OFF  STD_OFF
#define DEM_CFG_LOCK_ALLFAILUREINFO  DEM_CFG_LOCK_ALLFAILUREINFO_ON

/* ---------------------------------------- */
/* DEM_CFG_EVENTMEMORYENTRY_ONFDCTHRESHOLD  */
/* ---------------------------------------- */
#define DEM_CFG_SUPPORTEVENTMEMORYENTRY_ONFDCTHRESHOLD_ON   STD_ON
#define DEM_CFG_SUPPORTEVENTMEMORYENTRY_ONFDCTHRESHOLD_OFF  STD_OFF
#define DEM_CFG_SUPPORTEVENTMEMORYENTRY_ONFDCTHRESHOLD  DEM_CFG_SUPPORTEVENTMEMORYENTRY_ONFDCTHRESHOLD_ON
/* ----------------------------------------- */
/* DEM_CFG_SUPPORT_EVENT_FDCTHRESHOLDREACHED */
/* ----------------------------------------- */
#define DEM_CFG_SUPPORT_EVENT_FDCTHRESHOLDREACHED   TRUE
/* ---------------------------------------- */
/* DEM_CFG_SETEVENTSTATUSCALLNOTIFICATION   */
/* ---------------------------------------- */
#define DEM_CFG_SETEVENTSTATUSCALLNOTIFICATION_OFF  STD_OFF
#define DEM_CFG_SETEVENTSTATUSCALLNOTIFICATION_ON   STD_ON

#if (defined DEM_SETEVENTSTATUSCALLNOTIFICATION)
   #define DEM_CFG_SETEVENTSTATUSCALLNOTIFICATION  DEM_CFG_SETEVENTSTATUSCALLNOTIFICATION_ON
#else
   #define DEM_CFG_SETEVENTSTATUSCALLNOTIFICATION  DEM_CFG_SETEVENTSTATUSCALLNOTIFICATION_OFF
#endif

/* ---------------------------------------- */
/* DEM_CFG_SETEVENTSTATUSALLOWEDCALLBACK    */
/* ---------------------------------------- */
#define DEM_CFG_SETEVENTSTATUSALLOWEDCALLBACK_OFF  STD_OFF
#define DEM_CFG_SETEVENTSTATUSALLOWEDCALLBACK_ON   STD_ON
#define DEM_CFG_SETEVENTSTATUSALLOWEDCALLBACK  DEM_CFG_SETEVENTSTATUSALLOWEDCALLBACK_OFF

/* ---------------------------------------- */
/* BOOLEAN configuration switches           */
/* ---------------------------------------- */
#define DEM_CFG_CUSTOMIZABLEDTCSTATUSBYTE                   TRUE
#define DEM_CFG_CLEARDTCCLEARSALLBITS                       FALSE
#define DEM_CFG_DTCSETTINGBLOCKSREPORTING                   FALSE
#define DEM_CFG_PRJSPECIFICEVENTSTATUSHANDLING              FALSE
#define DEM_CFG_SUPPORT_AGINGCNTR_ONLY_WHEN_AGING_ALLOWED   TRUE

/* ---------------------------------------- */
/* DEM_CFG_DTC_STATUSCHANGEDCALLBACK        */
/* ---------------------------------------- */
#define DEM_CFG_DTC_STATUSCHANGEDCALLBACK_OFF	STD_OFF
#define DEM_CFG_DTC_STATUSCHANGEDCALLBACK_ON	STD_ON
#define DEM_CFG_DTC_STATUSCHANGEDCALLBACK       DEM_CFG_DTC_STATUSCHANGEDCALLBACK_ON
/* ---------------------------------------- */
/* DEM_CFG_EVT_CLEARALLOWEDCALLBACK        */
/* ---------------------------------------- */
#define DEM_CFG_EVT_CLEARALLOWEDCALLBACK_OFF	STD_OFF
#define DEM_CFG_EVT_CLEARALLOWEDCALLBACK_ON		STD_ON
#define DEM_CFG_EVT_CLEARALLOWEDCALLBACK       	DEM_CFG_EVT_CLEARALLOWEDCALLBACK_ON
/* ---------------------------------------- */
/* DEM_CFG_EVT_GLOBALCLEARALLOWEDCALLBACK        */
/* ---------------------------------------- */
#define DEM_CFG_EVT_GLOBALCLEARALLOWEDCALLBACK_OFF		STD_OFF
#define DEM_CFG_EVT_GLOBALCLEARALLOWEDCALLBACK_ON		STD_ON
#define DEM_CFG_EVT_GLOBALCLEARALLOWEDCALLBACK       	DEM_CFG_EVT_GLOBALCLEARALLOWEDCALLBACK_ON

#define DEM_CFG_EVT_GLOBALCLEARALLOWEDCALLBACKFNC 		SWC_GlobalClearEventAllowedCheck

/* ---------------------------------------- */
/* DEM_CFG_EVT_DATACHANGEDCALLBACK          */
/* ---------------------------------------- */
#define DEM_CFG_EVT_DATACHANGEDCALLBACK_OFF    STD_OFF
#define DEM_CFG_EVT_DATACHANGEDCALLBACK_ON     STD_ON
#define DEM_CFG_EVT_DATACHANGEDCALLBACK        DEM_CFG_EVT_DATACHANGEDCALLBACK_ON
#define DEM_CFG_EVT_DATACHANGEDCALLBACK_FUNC  Rte_Call_Dem_GeneralCBDataEvt_EventDataChanged



#define DEM_CFG_EVT_PROJECT_EXTENSION  TRUE


/* ---------------------------------------- */
#define DEM_CFG_BSWERRORBUFFERSIZE  20u

#define DEM_CFG_EVT_STATUS_CHANGE_NUM_CALLBACKS 	6u


/* --------------------------------------------------- */
/* Reset of TestFailedSinceLastClear bit               */
/* --------------------------------------------------- */
#define DEM_CFG_TFSLC_RESET_AFTER_AGING_AND_DISPLACEMENT       TRUE


#define RECOV    (1uL)
#define NOTREC   (0uL)

#define DEM_DEBOUNCE_RESET    (1uL)
#define DEM_DEBOUNCE_FREEZE   (0uL)

#define NO_TF_RESET   (1uL)
#define TF_RESET      (0uL)

#define GC_SUPP    (1u)
#define NO_GC      (0u)

#define ONLY_THIS_CYCLE_AND_READINESS   (1u)
#define NO_STATUS_BYTE_CHANGE           (0u)



#define DEM_CFG_EVT_ATTRIBUTE_OFF  STD_OFF
#define DEM_CFG_EVT_ATTRIBUTE_ON  STD_ON
#define DEM_CFG_EVT_ATTRIBUTE DEM_CFG_EVT_ATTRIBUTE_ON

/* --------------------------------------------------- */
/* DEM EVENT STATE BITPOSITION                         */
/* --------------------------------------------------- */
#define DEM_EVT_BP_STATE_CAUSALFAULT            0u

#define DEM_EVT_BP_STATE_SUSPICIONLEVEL         1u
#define DEM_EVT_BP_STATE_NOTAVAILABLE           2u
#define DEM_EVT_BP_STATE_INITMONITORING         3u
#define DEM_EVT_BP_STATE_INITMONITORING_MASK    (0x07u)
#define DEM_EVT_BP_STATE_INITMONITORING_SIZE    3u
#define DEM_EVT_BP_STATE_WIRSTATUS_EXTERNAL     6u
#define DEM_EVT_BP_STATE_DEBCOUNTER_RESET_REQUESTED  7
#define DEM_EVT_BP_STATE_FDCTHRESHOLDREACHEDTOC    8u
#define DEM_EVT_BP_STATE_FDCTHRESHOLDREACHED    9u
#define DEM_EVT_BP_STATE_ISSTORAGEFILTERED      10u
#define DEM_EVT_BP_STATE_IS_STORAGEFILTERED_EVENT_REPORTED      11u
#define DEM_EVT_BP_STATE_DIST_MEM_IDX           12u
#define DEM_EVT_BP_STATE_DIST_MEM_IDX_SIZE      4u
#define DEM_EVT_BP_STATE_DIST_MEM_IDX_MASK      (0x0Fu)

#define DEM_EVT_BP_STATE_NXT_REPORT_IS_RELEVANT      16u

typedef uint32 Dem_EvtStateType;
#define DEM_EVTSTATE_ISBITSET      rba_DiagLib_Bit32IsBitSet
#define DEM_EVTSTATE_OVERWRITEBIT  rba_DiagLib_Bit32OverwriteBit
#define DEM_EVTSTATE_OVERWRITEBITS rba_DiagLib_Bit32OverwriteBits
#define DEM_EVTSTATE_CLEARBIT      rba_DiagLib_Bit32ClearBit
#define DEM_EVTSTATE_SETBIT        rba_DiagLib_Bit32SetBit
#define DEM_EVTSTATE_GETBITS       rba_DiagLib_Bit32GetBits
#define DEM_EVTSTATE_CLEARBITS     rba_DiagLib_Bit32ClearBits

/* --------------------------------------------------- */
/* DEM EVENT PARAM BITPOSITION                         */
/* --------------------------------------------------- */
#define DEM_EVT_BP_PARAM_ISRECOVERABLE            0u
#define DEM_EVT_PARAMINI_ISRECOVERABLE(X)         ((X)<<DEM_EVT_BP_PARAM_ISRECOVERABLE)
#define DEM_EVT_BP_PARAM_STOREFAILURETONEXTOC     1u
#define DEM_EVT_PARAMINI_STOREFAILURETONEXTOC(X)  ((X)<<DEM_EVT_BP_PARAM_STOREFAILURETONEXTOC)
#define DEM_EVT_BP_PARAM_WARNINGINDICATOR         2u
#define DEM_EVT_PARAMINI_WARNINGINDICATOR(X)      ((X)<<DEM_EVT_BP_PARAM_WARNINGINDICATOR)
#define DEM_EVT_BP_PARAM_EVTDEST_PRIMARY          3u
#define DEM_EVT_PARAMINI_EVTDEST_PRIMARY(X)       ((X)<<DEM_EVT_BP_PARAM_EVTDEST_PRIMARY)
#define DEM_EVT_BP_PARAM_EVTDEST_SECONDARY        4u
#define DEM_EVT_PARAMINI_EVTDEST_SECONDARY(X)     ((X)<<DEM_EVT_BP_PARAM_EVTDEST_SECONDARY)
#define DEM_EVT_BP_PARAM_EVTDEST_MIRROR           5u
#define DEM_EVT_PARAMINI_EVTDEST_MIRROR(X)        ((X)<<DEM_EVT_BP_PARAM_EVTDEST_MIRROR)
#define DEM_EVT_BP_PARAM_AGING_ALLOWED            6u
#define DEM_EVT_PARAMINI_AGING_ALLOWED(X)         ((X)<<DEM_EVT_BP_PARAM_AGING_ALLOWED)
#define DEM_EVT_PARAMINI_ISEVENTHAS_GLOBALFDCCALLBACK(X)
#define DEM_EVT_BP_PARAM_EVENTHAS_DATACHANGEDCALLBACK         7
#define DEM_EVT_PARAMINI_ISEVENTHAS_DATACHANGEDCALLBACK(X)      ((X)<<DEM_EVT_BP_PARAM_EVENTHAS_DATACHANGEDCALLBACK)
#define DEM_EVT_BP_PARAM_SIGNIFICANCE             8u
#define DEM_EVT_PARAMINI_SIGNIFICANCE(X)          ((X)<<DEM_EVT_BP_PARAM_SIGNIFICANCE)
#define DEM_EVT_BP_PARAM_SUPPRESSIONINIT          9u
#define DEM_EVT_PARAMINI_SUPPRESSIONINIT(X)       ((X)<<DEM_EVT_BP_PARAM_SUPPRESSIONINIT)
#define DEM_EVT_BP_PARAM_DEBOUNCEBEHAVIOR         10u
#define DEM_EVT_PARAMINI_DEBOUNCEBEHAVIOR(X)      ((X)<<DEM_EVT_BP_PARAM_DEBOUNCEBEHAVIOR)
#define DEM_EVT_BP_PARAM_OPERATIONCYCLEID         11u
#define DEM_EVT_BP_PARAM_OPERATIONCYCLEID_SIZE    3u
#define DEM_EVT_PARAMINI_OPERATIONCYCLEID(X)      ((X)<<DEM_EVT_BP_PARAM_OPERATIONCYCLEID)
#define DEM_EVT_BP_PARAM_AGINGCYCLEID             14u
#define DEM_EVT_BP_PARAM_AGINGCYCLEID_SIZE        3u
#define DEM_EVT_PARAMINI_AGINGCYCLEID(X)          ((X)<<DEM_EVT_BP_PARAM_AGINGCYCLEID)
#define DEM_EVT_BP_PARAM_FAILURECYCLEID           17u
#define DEM_EVT_BP_PARAM_FAILURECYCLEID_SIZE      3u
#define DEM_EVT_PARAMINI_FAILURECYCLEID(X)        ((X)<<DEM_EVT_BP_PARAM_FAILURECYCLEID)
#define DEM_EVT_BP_PARAM_MONITORING_CATEGORY      20u
#define DEM_EVT_BP_PARAM_MONITORING_CATEGORY_SIZE 4u
#define DEM_EVT_PARAMINI_MONITORING_CATEGORY(X)   ((X)<<DEM_EVT_BP_PARAM_MONITORING_CATEGORY)

typedef uint32 Dem_EvtParamType;
#define DEM_EVTPARAM_ISBITSET      rba_DiagLib_Bit32IsBitSet
#define DEM_EVTPARAM_GETBITS       rba_DiagLib_Bit32GetBits



/*                 DEBOUNCE_METHODINDEX                              DEBOUNCE_PARAMSETINDEX                                                          SFB                 AgingThreshold      AgingThresholdForTFSLC        FailureThreshold    Priority            MaxNumOfFF          STORAGECONDITION                                                                ENABLECONDITION                                                                 CALLBACKEVENTSTATUSCHANGED                                                      CALLBACKCLEARALLOWED                                                            ClearAllowedBehavior                                                             */

#define DEM_CFG_EVENTPARAMS \
{ \
 DEM_EVTS_INIT (0,                                                0,                                                                              0,                  0,                  0,                            0,                  0,                  0,                  0,                                                                              0,                                                                              0,                                                                              NULL_PTR,                                                                       NO_STATUS_BYTE_CHANGE                                                           ) \
,DEM_EVTS_INIT (DEM_DEBMETH_IDX_MONINTERNAL,                      DEM_DEBPARAM_IDX_MONITORING_01,                                                 1,                  10,                 0,                            1,                  22,                 2,                  DEM_STOCO_Monitoring_01,                                                        DEM_ENCO_Monitoring_01,                                                         DEM_EVT_ST_CH_DemCallbackEventStatusChangedRB_1_IDX,                            &Rte_Call_Dem_CBClrEvt_Monitoring_01_ClearEventAllowed,                         NO_STATUS_BYTE_CHANGE                                                           ) \
,DEM_EVTS_INIT (DEM_DEBMETH_IDX_ARCTRBASECLASS,                   DEM_DEBPARAM_IDX_MONITORING_02,                                                 2,                  10,                 0,                            1,                  22,                 2,                  DEM_STOCO_Monitoring_02,                                                        DEM_ENCO_Monitoring_02,                                                         DEM_EVT_ST_CH_DemCallbackEventStatusChangedRB_0_IDX,                            &SWC_ClearAllowed_Mon2,                                                         NO_STATUS_BYTE_CHANGE                                                           ) \
,DEM_EVTS_INIT (DEM_DEBMETH_IDX_ARCTRBASECLASS,                   DEM_DEBPARAM_IDX_MONITORING_03,                                                 3,                  3,                  0,                            1,                  1,                  3,                  DEM_STOCO_Monitoring_03,                                                        DEM_ENCO_Monitoring_03,                                                         DEM_EVT_ST_CH_DemCallbackEventStatusChangedRB_0_IDX,                            NULL_PTR,                                                                       NO_STATUS_BYTE_CHANGE                                                           ) \
,DEM_EVTS_INIT (DEM_DEBMETH_IDX_ARCTRBASECLASS,                   DEM_DEBPARAM_IDX_MONITORING_04,                                                 4,                  1,                  0,                            1,                  5,                  50,                 DEM_STOCO_Monitoring_04,                                                        DEM_ENCO_Monitoring_04,                                                         DEM_EVT_ST_CH_DemCallbackEventStatusChangedRB_0_IDX,                            NULL_PTR,                                                                       NO_STATUS_BYTE_CHANGE                                                           ) \
,DEM_EVTS_INIT (DEM_DEBMETH_IDX_ARCTRBASECLASS,                   DEM_DEBPARAM_IDX_MONITORING_05,                                                 0,                  3,                  0,                            10,                 1,                  3,                  DEM_STOCO_Monitoring_05,                                                        DEM_ENCO_Monitoring_05,                                                         DEM_EVT_ST_CH_DemCallbackEventStatusChangedRB_0_IDX,                            NULL_PTR,                                                                       NO_STATUS_BYTE_CHANGE                                                           ) \
,DEM_EVTS_INIT (DEM_DEBMETH_IDX_ARCTRBASECLASS,                   DEM_DEBPARAM_IDX_MONITORING_06,                                                 3,                  255,                0,                            1,                  255,                0,                  DEM_STOCO_Monitoring_06,                                                        DEM_ENCO_Monitoring_06,                                                         DEM_EVT_ST_CH_DemCallbackEventStatusChangedRB_0_IDX,                            NULL_PTR,                                                                       NO_STATUS_BYTE_CHANGE                                                           ) \
,DEM_EVTS_INIT (DEM_DEBMETH_IDX_ARCTRBASECLASS,                   DEM_DEBPARAM_IDX_MONITORING_07,                                                 2,                  5,                  0,                            1,                  20,                 3,                  DEM_STOCO_Monitoring_07,                                                        DEM_ENCO_Monitoring_07,                                                         DEM_EVT_ST_CH_DemCallbackEventStatusChangedRB_0_IDX,                            NULL_PTR,                                                                       NO_STATUS_BYTE_CHANGE                                                           ) \
,DEM_EVTS_INIT (DEM_DEBMETH_IDX_MONINTERNAL,                      DEM_DEBPARAM_IDX_MONITORING_08,                                                 0,                  5,                  0,                            1,                  10,                 3,                  DEM_STOCO_Monitoring_08,                                                        DEM_ENCO_Monitoring_08,                                                         DEM_EVT_ST_CH_DemCallbackEventStatusChangedRB_0_IDX,                            NULL_PTR,                                                                       NO_STATUS_BYTE_CHANGE                                                           ) \
,DEM_EVTS_INIT (DEM_DEBMETH_IDX_ARCTRBASECLASS,                   DEM_DEBPARAM_IDX_MONITORING_09,                                                 1,                  5,                  0,                            3,                  15,                 1,                  DEM_STOCO_Monitoring_09,                                                        DEM_ENCO_Monitoring_09,                                                         0,                                                                              &SWC_ClearAllowed_Mon9,                                                         ONLY_THIS_CYCLE_AND_READINESS                                                   ) \
,DEM_EVTS_INIT (DEM_DEBMETH_IDX_ARCTRBASECLASS,                   DEM_DEBPARAM_IDX_MONITORING_10,                                                 1,                  255,                0,                            1,                  255,                0,                  DEM_STOCO_Monitoring_10,                                                        DEM_ENCO_Monitoring_10,                                                         0,                                                                              NULL_PTR,                                                                       NO_STATUS_BYTE_CHANGE                                                           ) \
,DEM_EVTS_INIT (DEM_DEBMETH_IDX_ARTIME,                           DEM_DEBPARAM_IDX_MONITORING_11,                                                 2,                  255,                0,                            1,                  255,                0,                  DEM_STOCO_Monitoring_11,                                                        DEM_ENCO_Monitoring_11,                                                         0,                                                                              NULL_PTR,                                                                       NO_STATUS_BYTE_CHANGE                                                           ) \
,DEM_EVTS_INIT (DEM_DEBMETH_IDX_ARTIME,                           DEM_DEBPARAM_IDX_MONITORING_12,                                                 4,                  255,                0,                            1,                  255,                0,                  DEM_STOCO_Monitoring_12,                                                        DEM_ENCO_Monitoring_12,                                                         0,                                                                              NULL_PTR,                                                                       NO_STATUS_BYTE_CHANGE                                                           ) \
,DEM_EVTS_INIT (DEM_DEBMETH_IDX_MONINTERNAL,                      DEM_DEBPARAM_IDX_MONITORING_13,                                                 0,                  255,                0,                            1,                  255,                0,                  DEM_STOCO_Monitoring_13,                                                        DEM_ENCO_Monitoring_13,                                                         0,                                                                              NULL_PTR,                                                                       NO_STATUS_BYTE_CHANGE                                                           ) \
,DEM_EVTS_INIT (DEM_DEBMETH_IDX_MONINTERNAL,                      DEM_DEBPARAM_IDX_MONITORING_14,                                                 1,                  255,                0,                            1,                  255,                0,                  DEM_STOCO_Monitoring_14,                                                        DEM_ENCO_Monitoring_14,                                                         0,                                                                              NULL_PTR,                                                                       NO_STATUS_BYTE_CHANGE                                                           ) \
,DEM_EVTS_INIT (DEM_DEBMETH_IDX_ARCTRBASECLASS,                   DEM_DEBPARAM_IDX_MONITORING_15,                                                 4,                  255,                0,                            1,                  255,                0,                  DEM_STOCO_Monitoring_15,                                                        DEM_ENCO_Monitoring_15,                                                         0,                                                                              NULL_PTR,                                                                       NO_STATUS_BYTE_CHANGE                                                           ) \
,DEM_EVTS_INIT (DEM_DEBMETH_IDX_MONINTERNAL,                      DEM_DEBPARAM_IDX_MONITORING_16,                                                 0,                  255,                0,                            1,                  255,                0,                  DEM_STOCO_Monitoring_16,                                                        DEM_ENCO_Monitoring_16,                                                         0,                                                                              NULL_PTR,                                                                       NO_STATUS_BYTE_CHANGE                                                           ) \
,DEM_EVTS_INIT (DEM_DEBMETH_IDX_MONINTERNAL,                      DEM_DEBPARAM_IDX_MONITORING_17,                                                 0,                  255,                0,                            1,                  255,                0,                  DEM_STOCO_Monitoring_17,                                                        DEM_ENCO_Monitoring_17,                                                         DEM_EVT_ST_CH_DemCallbackEventStatusChangedRB_2_IDX,                            NULL_PTR,                                                                       NO_STATUS_BYTE_CHANGE                                                           ) \
,DEM_EVTS_INIT (DEM_DEBMETH_IDX_ARCTRBASECLASS,                   DEM_DEBPARAM_IDX_MONITORING_18,                                                 0,                  255,                0,                            1,                  255,                0,                  DEM_STOCO_Monitoring_18,                                                        DEM_ENCO_Monitoring_18,                                                         DEM_EVT_ST_CH_DemCallbackEventStatusChangedRB_2_IDX,                            NULL_PTR,                                                                       NO_STATUS_BYTE_CHANGE                                                           ) \
,DEM_EVTS_INIT (DEM_DEBMETH_IDX_ARTIME,                           DEM_DEBPARAM_IDX_MONITORING_19,                                                 0,                  255,                0,                            1,                  255,                0,                  DEM_STOCO_Monitoring_19,                                                        DEM_ENCO_Monitoring_19,                                                         DEM_EVT_ST_CH_DemCallbackEventStatusChangedRB_2_IDX,                            NULL_PTR,                                                                       NO_STATUS_BYTE_CHANGE                                                           ) \
,DEM_EVTS_INIT (DEM_DEBMETH_IDX_ARCTRBASECLASS,                   DEM_DEBPARAM_IDX_MONITORING_20,                                                 1,                  255,                0,                            1,                  255,                0,                  DEM_STOCO_Monitoring_20,                                                        DEM_ENCO_Monitoring_20,                                                         DEM_EVT_ST_CH_DemCallbackEventStatusChangedRB_2_IDX,                            NULL_PTR,                                                                       NO_STATUS_BYTE_CHANGE                                                           ) \
,DEM_EVTS_INIT (DEM_DEBMETH_IDX_ARCTRBASECLASS,                   DEM_DEBPARAM_IDX_MONITORING_21,                                                 4,                  255,                0,                            1,                  255,                0,                  DEM_STOCO_Monitoring_21,                                                        DEM_ENCO_Monitoring_21,                                                         DEM_EVT_ST_CH_DemCallbackEventStatusChangedRB_2_IDX,                            NULL_PTR,                                                                       NO_STATUS_BYTE_CHANGE                                                           ) \
,DEM_EVTS_INIT (DEM_DEBMETH_IDX_MONINTERNAL,                      DEM_DEBPARAM_IDX_MONITORING_22,                                                 3,                  5,                  0,                            1,                  10,                 3,                  DEM_STOCO_Monitoring_22,                                                        DEM_ENCO_Monitoring_22,                                                         DEM_EVT_ST_CH_DemCallbackEventStatusChangedRB_2_IDX,                            NULL_PTR,                                                                       NO_STATUS_BYTE_CHANGE                                                           ) \
,DEM_EVTS_INIT (DEM_DEBMETH_IDX_ARCTRBASECLASS,                   DEM_DEBPARAM_IDX_MONITORING_23,                                                 2,                  255,                0,                            1,                  255,                0,                  DEM_STOCO_Monitoring_23,                                                        DEM_ENCO_Monitoring_23,                                                         DEM_EVT_ST_CH_DemCallbackEventStatusChangedRB_2_IDX,                            NULL_PTR,                                                                       NO_STATUS_BYTE_CHANGE                                                           ) \
,DEM_EVTS_INIT (DEM_DEBMETH_IDX_MONINTERNAL,                      DEM_DEBPARAM_IDX_MONITORING_24,                                                 4,                  255,                0,                            1,                  255,                0,                  DEM_STOCO_Monitoring_24,                                                        DEM_ENCO_Monitoring_24,                                                         0,                                                                              NULL_PTR,                                                                       NO_STATUS_BYTE_CHANGE                                                           ) \
,DEM_EVTS_INIT (DEM_DEBMETH_IDX_MONINTERNAL,                      DEM_DEBPARAM_IDX_MONITORING_25,                                                 3,                  1,                  0,                            1,                  5,                  3,                  DEM_STOCO_Monitoring_25,                                                        DEM_ENCO_Monitoring_25,                                                         0,                                                                              NULL_PTR,                                                                       NO_STATUS_BYTE_CHANGE                                                           ) \
,DEM_EVTS_INIT (DEM_DEBMETH_IDX_ARTIME,                           DEM_DEBPARAM_IDX_MONITORING_26,                                                 1,                  255,                0,                            1,                  255,                0,                  DEM_STOCO_Monitoring_26,                                                        DEM_ENCO_Monitoring_26,                                                         0,                                                                              NULL_PTR,                                                                       NO_STATUS_BYTE_CHANGE                                                           ) \
,DEM_EVTS_INIT (DEM_DEBMETH_IDX_MONINTERNAL,                      DEM_DEBPARAM_IDX_MONITORING_27,                                                 2,                  255,                0,                            1,                  255,                0,                  DEM_STOCO_Monitoring_27,                                                        DEM_ENCO_Monitoring_27,                                                         DEM_EVT_ST_CH_DemCallbackEventStatusChangedRB_3_IDX,                            &SWC_ClearAllowed_Mon27,                                                        NO_STATUS_BYTE_CHANGE                                                           ) \
,DEM_EVTS_INIT (DEM_DEBMETH_IDX_ARCTRBASECLASS,                   DEM_DEBPARAM_IDX_MONITORING_28,                                                 0,                  255,                0,                            1,                  255,                0,                  DEM_STOCO_Monitoring_28,                                                        DEM_ENCO_Monitoring_28,                                                         0,                                                                              NULL_PTR,                                                                       NO_STATUS_BYTE_CHANGE                                                           ) \
,DEM_EVTS_INIT (DEM_DEBMETH_IDX_MONINTERNAL,                      DEM_DEBPARAM_IDX_MONITORING_29,                                                 0,                  5,                  0,                            1,                  10,                 3,                  DEM_STOCO_Monitoring_29,                                                        DEM_ENCO_Monitoring_29,                                                         DEM_EVT_ST_CH_DemCallbackEventStatusChangedRB_4_IDX,                            &Rte_Call_Dem_CBClrEvt_Monitoring_29_ClearEventAllowed,                         NO_STATUS_BYTE_CHANGE                                                           ) \
,DEM_EVTS_INIT (DEM_DEBMETH_IDX_ARTIME,                           DEM_DEBPARAM_IDX_MONITORING_30,                                                 4,                  255,                0,                            1,                  255,                0,                  DEM_STOCO_Monitoring_30,                                                        DEM_ENCO_Monitoring_30,                                                         0,                                                                              NULL_PTR,                                                                       NO_STATUS_BYTE_CHANGE                                                           ) \
,DEM_EVTS_INIT (DEM_DEBMETH_IDX_MONINTERNAL,                      DEM_DEBPARAM_IDX_MONITORING_31,                                                 1,                  255,                0,                            1,                  255,                0,                  DEM_STOCO_Monitoring_31,                                                        DEM_ENCO_Monitoring_31,                                                         0,                                                                              NULL_PTR,                                                                       NO_STATUS_BYTE_CHANGE                                                           ) \
,DEM_EVTS_INIT (DEM_DEBMETH_IDX_ARCTRBASECLASS,                   DEM_DEBPARAM_IDX_MONITORING_32,                                                 2,                  255,                0,                            1,                  255,                0,                  DEM_STOCO_Monitoring_32,                                                        DEM_ENCO_Monitoring_32,                                                         0,                                                                              NULL_PTR,                                                                       NO_STATUS_BYTE_CHANGE                                                           ) \
}






/*                 DEBOUNCE_BEHAVIOR                                 RECOVER             DRIVECYCLE          WARNINDIC           CATEGORY                                          EVENT_DEST_PRIM     EVENT_DEST_SEC      EVENT_DEST_MIRR     AgingAllowed        ISEVENTHAS_GLOBALFDCCALLBACK ISEVENTHAS_DATACHANGEDCALLBACK SIGNIFICANCE OPCYCLE                              AGINGCYCLE                                        FAILURECYCLE                                      SUPPRESSED           */

#define DEM_CFG_EVENTPARAMS_FLAGS \
{ \
 DEM_EVTS_INIT_FLAGS (0uL,                                              NOTREC,             NO_TF_RESET,        0uL,                DemConf_DemEventCategory_INVALIDCATEGORY,         0uL,                0uL,                0uL,                0uL,                0uL,                0uL,                0uL,                0uL,                                              0uL,                                              0uL,                                              0uL                 ) \
,DEM_EVTS_INIT_FLAGS (DEM_DEBOUNCE_FREEZE,                              RECOV,              NO_TF_RESET,        1uL,                DemConf_DemEventCategory_ExternalFault,           1uL,                0uL,                0uL,                1uL,                0uL,                0uL,                1uL,                DemConf_DemOperationCycle_IgnitionCycle,          DemConf_DemOperationCycle_PowerCycle,             DemConf_DemOperationCycle_IgnitionCycle,          1uL                 ) /* Event_Monitoring_01 */  \
,DEM_EVTS_INIT_FLAGS (DEM_DEBOUNCE_RESET,                               RECOV,              NO_TF_RESET,        0uL,                DemConf_DemEventCategory_ExternalFault,           1uL,                0uL,                0uL,                1uL,                0uL,                1uL,                1uL,                DemConf_DemOperationCycle_IgnitionCycle,          DemConf_DemOperationCycle_PowerCycle,             DemConf_DemOperationCycle_IgnitionCycle,          0uL                 ) /* Event_Monitoring_02 */  \
,DEM_EVTS_INIT_FLAGS (DEM_DEBOUNCE_RESET,                               RECOV,              NO_TF_RESET,        1uL,                DemConf_DemEventCategory_ExternalFault,           1uL,                0uL,                0uL,                0uL,                0uL,                1uL,                1uL,                DemConf_DemOperationCycle_OtherCycle,             DemConf_DemOperationCycle_OtherCycle,             DemConf_DemOperationCycle_OtherCycle,             1uL                 ) /* Event_Monitoring_03 */  \
,DEM_EVTS_INIT_FLAGS (DEM_DEBOUNCE_RESET,                               RECOV,              NO_TF_RESET,        0uL,                DemConf_DemEventCategory_AttachedEcu,             1uL,                0uL,                1uL,                0uL,                0uL,                1uL,                1uL,                DemConf_DemOperationCycle_OtherCycle,             DemConf_DemOperationCycle_PowerCycle,             DemConf_DemOperationCycle_OtherCycle,             0uL                 ) /* Event_Monitoring_04 */  \
,DEM_EVTS_INIT_FLAGS (DEM_DEBOUNCE_RESET,                               RECOV,              NO_TF_RESET,        1uL,                DemConf_DemEventCategory_ExternalFault,           1uL,                0uL,                0uL,                1uL,                0uL,                0uL,                1uL,                DemConf_DemOperationCycle_PowerCycle,             DemConf_DemOperationCycle_PowerCycle,             DemConf_DemOperationCycle_PowerCycle,             0uL                 ) /* Event_Monitoring_05 */  \
,DEM_EVTS_INIT_FLAGS (DEM_DEBOUNCE_RESET,                               RECOV,              NO_TF_RESET,        0uL,                DemConf_DemEventCategory_EcuInternal,             0uL,                0uL,                0uL,                0uL,                0uL,                0uL,                0uL,                DemConf_DemOperationCycle_PowerCycle,             DemConf_DemOperationCycle_PowerCycle,             DemConf_DemOperationCycle_PowerCycle,             0uL                 ) /* Event_Monitoring_06 */  \
,DEM_EVTS_INIT_FLAGS (DEM_DEBOUNCE_RESET,                               RECOV,              NO_TF_RESET,        1uL,                DemConf_DemEventCategory_ExternalFault,           1uL,                0uL,                1uL,                0uL,                0uL,                0uL,                0uL,                DemConf_DemOperationCycle_PowerCycle,             DemConf_DemOperationCycle_PowerCycle,             DemConf_DemOperationCycle_PowerCycle,             1uL                 ) /* Event_Monitoring_07 */  \
,DEM_EVTS_INIT_FLAGS (DEM_DEBOUNCE_FREEZE,                              RECOV,              NO_TF_RESET,        1uL,                DemConf_DemEventCategory_ExternalFault,           1uL,                0uL,                1uL,                0uL,                0uL,                0uL,                1uL,                DemConf_DemOperationCycle_PowerCycle,             DemConf_DemOperationCycle_PowerCycle,             DemConf_DemOperationCycle_PowerCycle,             0uL                 ) /* Event_Monitoring_08 */  \
,DEM_EVTS_INIT_FLAGS (DEM_DEBOUNCE_RESET,                               RECOV,              NO_TF_RESET,        1uL,                DemConf_DemEventCategory_ExternalFault,           0uL,                1uL,                1uL,                0uL,                0uL,                0uL,                1uL,                DemConf_DemOperationCycle_PowerCycle,             DemConf_DemOperationCycle_PowerCycle,             DemConf_DemOperationCycle_PowerCycle,             0uL                 ) /* Event_Monitoring_09 */  \
,DEM_EVTS_INIT_FLAGS (DEM_DEBOUNCE_FREEZE,                              RECOV,              NO_TF_RESET,        1uL,                DemConf_DemEventCategory_ExternalFault,           0uL,                0uL,                0uL,                0uL,                0uL,                0uL,                0uL,                DemConf_DemOperationCycle_PowerCycle,             DemConf_DemOperationCycle_PowerCycle,             DemConf_DemOperationCycle_PowerCycle,             0uL                 ) /* Event_Monitoring_10 */  \
,DEM_EVTS_INIT_FLAGS (DEM_DEBOUNCE_FREEZE,                              RECOV,              NO_TF_RESET,        0uL,                DemConf_DemEventCategory_ExternalFault,           0uL,                0uL,                0uL,                0uL,                0uL,                0uL,                0uL,                DemConf_DemOperationCycle_PowerCycle,             DemConf_DemOperationCycle_PowerCycle,             DemConf_DemOperationCycle_PowerCycle,             1uL                 ) /* Event_Monitoring_11 */  \
,DEM_EVTS_INIT_FLAGS (DEM_DEBOUNCE_FREEZE,                              RECOV,              NO_TF_RESET,        1uL,                DemConf_DemEventCategory_ExternalFault,           0uL,                0uL,                0uL,                0uL,                0uL,                0uL,                0uL,                DemConf_DemOperationCycle_PowerCycle,             DemConf_DemOperationCycle_PowerCycle,             DemConf_DemOperationCycle_PowerCycle,             0uL                 ) /* Event_Monitoring_12 */  \
,DEM_EVTS_INIT_FLAGS (DEM_DEBOUNCE_FREEZE,                              RECOV,              NO_TF_RESET,        0uL,                DemConf_DemEventCategory_AttachedEcu,             0uL,                0uL,                0uL,                0uL,                0uL,                0uL,                0uL,                DemConf_DemOperationCycle_PowerCycle,             DemConf_DemOperationCycle_PowerCycle,             DemConf_DemOperationCycle_PowerCycle,             0uL                 ) /* Event_Monitoring_13 */  \
,DEM_EVTS_INIT_FLAGS (DEM_DEBOUNCE_FREEZE,                              RECOV,              NO_TF_RESET,        0uL,                DemConf_DemEventCategory_ExternalFault,           0uL,                0uL,                0uL,                0uL,                0uL,                0uL,                0uL,                DemConf_DemOperationCycle_PowerCycle,             DemConf_DemOperationCycle_PowerCycle,             DemConf_DemOperationCycle_PowerCycle,             0uL                 ) /* Event_Monitoring_14 */  \
,DEM_EVTS_INIT_FLAGS (DEM_DEBOUNCE_RESET,                               RECOV,              NO_TF_RESET,        1uL,                DemConf_DemEventCategory_EcuInternal,             0uL,                0uL,                0uL,                0uL,                0uL,                0uL,                0uL,                DemConf_DemOperationCycle_PowerCycle,             DemConf_DemOperationCycle_PowerCycle,             DemConf_DemOperationCycle_PowerCycle,             0uL                 ) /* Event_Monitoring_15 */  \
,DEM_EVTS_INIT_FLAGS (DEM_DEBOUNCE_FREEZE,                              NOTREC,             NO_TF_RESET,        0uL,                DemConf_DemEventCategory_ExternalFault,           0uL,                0uL,                0uL,                0uL,                0uL,                0uL,                0uL,                DemConf_DemOperationCycle_PowerCycle,             DemConf_DemOperationCycle_PowerCycle,             DemConf_DemOperationCycle_PowerCycle,             0uL                 ) /* Event_Monitoring_16 */  \
,DEM_EVTS_INIT_FLAGS (DEM_DEBOUNCE_FREEZE,                              NOTREC,             NO_TF_RESET,        0uL,                DemConf_DemEventCategory_TransientFaultState,     0uL,                0uL,                0uL,                0uL,                0uL,                0uL,                0uL,                DemConf_DemOperationCycle_PowerCycle,             DemConf_DemOperationCycle_PowerCycle,             DemConf_DemOperationCycle_PowerCycle,             0uL                 ) /* Event_Monitoring_17 */  \
,DEM_EVTS_INIT_FLAGS (DEM_DEBOUNCE_RESET,                               RECOV,              NO_TF_RESET,        1uL,                DemConf_DemEventCategory_WssFault,                0uL,                0uL,                0uL,                0uL,                0uL,                0uL,                0uL,                DemConf_DemOperationCycle_PowerCycle,             DemConf_DemOperationCycle_PowerCycle,             DemConf_DemOperationCycle_PowerCycle,             0uL                 ) /* Event_Monitoring_18 */  \
,DEM_EVTS_INIT_FLAGS (DEM_DEBOUNCE_RESET,                               RECOV,              NO_TF_RESET,        1uL,                DemConf_DemEventCategory_ExternalFault,           0uL,                0uL,                0uL,                0uL,                0uL,                0uL,                0uL,                DemConf_DemOperationCycle_PowerCycle,             DemConf_DemOperationCycle_PowerCycle,             DemConf_DemOperationCycle_PowerCycle,             0uL                 ) /* Event_Monitoring_19 */  \
,DEM_EVTS_INIT_FLAGS (DEM_DEBOUNCE_RESET,                               RECOV,              NO_TF_RESET,        1uL,                DemConf_DemEventCategory_EcuInternal,             0uL,                0uL,                0uL,                0uL,                0uL,                0uL,                0uL,                DemConf_DemOperationCycle_OtherCycle,             DemConf_DemOperationCycle_OtherCycle,             DemConf_DemOperationCycle_OtherCycle,             0uL                 ) /* Event_Monitoring_20 */  \
,DEM_EVTS_INIT_FLAGS (DEM_DEBOUNCE_RESET,                               RECOV,              NO_TF_RESET,        0uL,                DemConf_DemEventCategory_ExternalFault,           0uL,                0uL,                0uL,                0uL,                0uL,                0uL,                0uL,                DemConf_DemOperationCycle_OtherCycle,             DemConf_DemOperationCycle_OtherCycle,             DemConf_DemOperationCycle_OtherCycle,             0uL                 ) /* Event_Monitoring_21 */  \
,DEM_EVTS_INIT_FLAGS (DEM_DEBOUNCE_FREEZE,                              RECOV,              NO_TF_RESET,        1uL,                DemConf_DemEventCategory_ExternalFault,           1uL,                0uL,                1uL,                0uL,                0uL,                0uL,                1uL,                DemConf_DemOperationCycle_PowerCycle,             DemConf_DemOperationCycle_PowerCycle,             DemConf_DemOperationCycle_PowerCycle,             0uL                 ) /* Event_Monitoring_22 */  \
,DEM_EVTS_INIT_FLAGS (DEM_DEBOUNCE_RESET,                               RECOV,              NO_TF_RESET,        1uL,                DemConf_DemEventCategory_ExternalFault,           0uL,                0uL,                0uL,                0uL,                0uL,                0uL,                0uL,                DemConf_DemOperationCycle_PowerCycle,             DemConf_DemOperationCycle_PowerCycle,             DemConf_DemOperationCycle_PowerCycle,             0uL                 ) /* Event_Monitoring_23 */  \
,DEM_EVTS_INIT_FLAGS (DEM_DEBOUNCE_FREEZE,                              RECOV,              NO_TF_RESET,        1uL,                DemConf_DemEventCategory_TransientFaultState,     0uL,                0uL,                0uL,                0uL,                0uL,                0uL,                0uL,                DemConf_DemOperationCycle_PowerCycle,             DemConf_DemOperationCycle_PowerCycle,             DemConf_DemOperationCycle_PowerCycle,             0uL                 ) /* Event_Monitoring_24 */  \
,DEM_EVTS_INIT_FLAGS (DEM_DEBOUNCE_FREEZE,                              RECOV,              NO_TF_RESET,        0uL,                DemConf_DemEventCategory_ExternalFault,           1uL,                0uL,                0uL,                0uL,                0uL,                0uL,                1uL,                DemConf_DemOperationCycle_PowerCycle,             DemConf_DemOperationCycle_PowerCycle,             DemConf_DemOperationCycle_PowerCycle,             0uL                 ) /* Event_Monitoring_25 */  \
,DEM_EVTS_INIT_FLAGS (DEM_DEBOUNCE_RESET,                               RECOV,              NO_TF_RESET,        1uL,                DemConf_DemEventCategory_WssFault,                0uL,                0uL,                0uL,                0uL,                0uL,                0uL,                0uL,                DemConf_DemOperationCycle_PowerCycle,             DemConf_DemOperationCycle_PowerCycle,             DemConf_DemOperationCycle_PowerCycle,             0uL                 ) /* Event_Monitoring_26 */  \
,DEM_EVTS_INIT_FLAGS (DEM_DEBOUNCE_FREEZE,                              RECOV,              NO_TF_RESET,        0uL,                DemConf_DemEventCategory_WssFault,                0uL,                0uL,                0uL,                0uL,                0uL,                0uL,                0uL,                DemConf_DemOperationCycle_PowerCycle,             DemConf_DemOperationCycle_PowerCycle,             DemConf_DemOperationCycle_PowerCycle,             0uL                 ) /* Event_Monitoring_27 */  \
,DEM_EVTS_INIT_FLAGS (DEM_DEBOUNCE_FREEZE,                              RECOV,              NO_TF_RESET,        0uL,                DemConf_DemEventCategory_ExternalFault,           0uL,                0uL,                0uL,                0uL,                0uL,                0uL,                0uL,                DemConf_DemOperationCycle_PowerCycle,             DemConf_DemOperationCycle_PowerCycle,             DemConf_DemOperationCycle_PowerCycle,             0uL                 ) /* Event_Monitoring_28 */  \
,DEM_EVTS_INIT_FLAGS (DEM_DEBOUNCE_FREEZE,                              RECOV,              NO_TF_RESET,        1uL,                DemConf_DemEventCategory_AttachedEcu,             1uL,                0uL,                1uL,                0uL,                0uL,                0uL,                1uL,                DemConf_DemOperationCycle_PowerCycle,             DemConf_DemOperationCycle_PowerCycle,             DemConf_DemOperationCycle_PowerCycle,             0uL                 ) /* Event_Monitoring_29 */  \
,DEM_EVTS_INIT_FLAGS (DEM_DEBOUNCE_FREEZE,                              RECOV,              NO_TF_RESET,        1uL,                DemConf_DemEventCategory_TransientFaultState,     0uL,                0uL,                0uL,                0uL,                0uL,                0uL,                0uL,                DemConf_DemOperationCycle_OtherCycle,             DemConf_DemOperationCycle_OtherCycle,             DemConf_DemOperationCycle_OtherCycle,             0uL                 ) /* Event_Monitoring_30 */  \
,DEM_EVTS_INIT_FLAGS (DEM_DEBOUNCE_FREEZE,                              RECOV,              NO_TF_RESET,        0uL,                DemConf_DemEventCategory_ExternalFault,           0uL,                0uL,                0uL,                0uL,                0uL,                0uL,                0uL,                DemConf_DemOperationCycle_OtherCycle,             DemConf_DemOperationCycle_OtherCycle,             DemConf_DemOperationCycle_OtherCycle,             0uL                 ) /* Event_Monitoring_31 */  \
,DEM_EVTS_INIT_FLAGS (DEM_DEBOUNCE_RESET,                               RECOV,              NO_TF_RESET,        0uL,                DemConf_DemEventCategory_ExternalFault,           0uL,                0uL,                0uL,                0uL,                0uL,                0uL,                0uL,                DemConf_DemOperationCycle_IgnitionCycle,          DemConf_DemOperationCycle_IgnitionCycle,          DemConf_DemOperationCycle_IgnitionCycle,          0uL                 ) /* Event_Monitoring_32 */  \
}




#define DEM_CFG_EVTUSERATTRIBUTES \
{ \
DEM_EVTS_USERATTRIBUTES_INIT(20)  /* Invalid ID -> Event_Monitoring_00 */ \
,DEM_EVTS_USERATTRIBUTES_INIT(25) /* Event_Monitoring_01 */ \
,DEM_EVTS_USERATTRIBUTES_INIT(20) /* Event_Monitoring_02 */ \
,DEM_EVTS_USERATTRIBUTES_INIT(20) /* Event_Monitoring_03 */ \
,DEM_EVTS_USERATTRIBUTES_INIT(20) /* Event_Monitoring_04 */ \
,DEM_EVTS_USERATTRIBUTES_INIT(20) /* Event_Monitoring_05 */ \
,DEM_EVTS_USERATTRIBUTES_INIT(20) /* Event_Monitoring_06 */ \
,DEM_EVTS_USERATTRIBUTES_INIT(20) /* Event_Monitoring_07 */ \
,DEM_EVTS_USERATTRIBUTES_INIT(20) /* Event_Monitoring_08 */ \
,DEM_EVTS_USERATTRIBUTES_INIT(20) /* Event_Monitoring_09 */ \
,DEM_EVTS_USERATTRIBUTES_INIT(20) /* Event_Monitoring_10 */ \
,DEM_EVTS_USERATTRIBUTES_INIT(20) /* Event_Monitoring_11 */ \
,DEM_EVTS_USERATTRIBUTES_INIT(20) /* Event_Monitoring_12 */ \
,DEM_EVTS_USERATTRIBUTES_INIT(20) /* Event_Monitoring_13 */ \
,DEM_EVTS_USERATTRIBUTES_INIT(20) /* Event_Monitoring_14 */ \
,DEM_EVTS_USERATTRIBUTES_INIT(20) /* Event_Monitoring_15 */ \
,DEM_EVTS_USERATTRIBUTES_INIT(20) /* Event_Monitoring_16 */ \
,DEM_EVTS_USERATTRIBUTES_INIT(20) /* Event_Monitoring_17 */ \
,DEM_EVTS_USERATTRIBUTES_INIT(20) /* Event_Monitoring_18 */ \
,DEM_EVTS_USERATTRIBUTES_INIT(20) /* Event_Monitoring_19 */ \
,DEM_EVTS_USERATTRIBUTES_INIT(20) /* Event_Monitoring_20 */ \
,DEM_EVTS_USERATTRIBUTES_INIT(20) /* Event_Monitoring_21 */ \
,DEM_EVTS_USERATTRIBUTES_INIT(20) /* Event_Monitoring_22 */ \
,DEM_EVTS_USERATTRIBUTES_INIT(20) /* Event_Monitoring_23 */ \
,DEM_EVTS_USERATTRIBUTES_INIT(20) /* Event_Monitoring_24 */ \
,DEM_EVTS_USERATTRIBUTES_INIT(20) /* Event_Monitoring_25 */ \
,DEM_EVTS_USERATTRIBUTES_INIT(20) /* Event_Monitoring_26 */ \
,DEM_EVTS_USERATTRIBUTES_INIT(20) /* Event_Monitoring_27 */ \
,DEM_EVTS_USERATTRIBUTES_INIT(20) /* Event_Monitoring_28 */ \
,DEM_EVTS_USERATTRIBUTES_INIT(20) /* Event_Monitoring_29 */ \
,DEM_EVTS_USERATTRIBUTES_INIT(20) /* Event_Monitoring_30 */ \
,DEM_EVTS_USERATTRIBUTES_INIT(20) /* Event_Monitoring_31 */ \
,DEM_EVTS_USERATTRIBUTES_INIT(20) /* Event_Monitoring_32 */ \
}


#define DEM_CFG_TRIGGERMONITORINITBEFORECLEAROK  TRUE

#define DEM_CFG_CALLBACK_INIT_MON_FOR_EVENT_SUPPORTED   TRUE

#define DEM_CFG_CALLBACK_INITMFORE_LISTLENGTH  5u
#define DEM_CFG_CALLBACK_INITMFORE_LIST \
{ \
   { DemConf_DemEventParameter_Monitoring_01, &Rte_Call_Dem_CBInitEvt_Monitoring_01_InitMonitorForEvent } \
   ,{ DemConf_DemEventParameter_Monitoring_04, &Monitoring04_InitMForE_callback } \
   ,{ DemConf_DemEventParameter_Monitoring_15, &Rte_Call_Dem_CBInitEvt_Monitoring_15_InitMonitorForEvent } \
   ,{ DemConf_DemEventParameter_Monitoring_16, &Rte_Call_Dem_CBInitEvt_Monitoring_16_InitMonitorForEvent } \
   ,{ DemConf_DemEventParameter_Monitoring_20, &Monitoring20_InitMForE_callback } \
}


#endif

