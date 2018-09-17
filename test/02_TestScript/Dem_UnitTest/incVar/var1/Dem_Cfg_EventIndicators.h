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


#ifndef DEM_CFG_EVENTINDICATORS_H
#define DEM_CFG_EVENTINDICATORS_H

#define DEM_CFG_EVT_INDICATOR_OFF                0u
#define DEM_CFG_EVT_INDICATOR_ON                 1u
#define DEM_CFG_EVT_INDICATOR_PROJECTSPECIFIC    2u
#define DEM_CFG_EVT_INDICATOR                    DEM_CFG_EVT_INDICATOR_ON
/*********************************Indicator*********************************************************************/
#define DEM_INDICATORID_INVALID                                      0u
#define DEM_INDICATORID_COUNT                                        3u
#define DEM_INDICATORID_ARRAYLENGTH                                  (DEM_INDICATORID_COUNT + 2u)
#define DEM_INDICATOR_ID_REQUIRED_BIT_SIZE                           2u

#define DemConf_DemIndicator_AmberWarningLamp                        1u
#define DemConf_DemIndicator_ESP_Lamp1                               2u
#define DemConf_DemIndicator_ESP_Lamp                                3u


/*****************************Indicator Attributes*************************************************************/

#define DEM_INDICATOR_ATTRIBUTE_INVALID                              0u

#define DEM_CFG_EVTINDICATOR_IS_COMMON_FAILURETHRESHOLD_USED FALSE
#define DEM_CFG_EVTINDICATOR_IS_COMMON_HEALINGTHRESHOLD_USED FALSE
#define DEM_CFG_EVTINDICATOR_IS_COMMON_BEHAVIOUR_USED FALSE

#define DEM_CFG_EVTINDICATOR_FAILURETHRESHOLD_OFF  STD_OFF
#define DEM_CFG_EVTINDICATOR_FAILURETHRESHOLD_ON   STD_ON
#define DEM_CFG_EVTINDICATOR_FAILURETHRESHOLD DEM_CFG_EVTINDICATOR_FAILURETHRESHOLD_ON

#define DEM_CFG_EVTINDICATOR_HEALINGTHRESHOLD_OFF  STD_OFF
#define DEM_CFG_EVTINDICATOR_HEALINGTHRESHOLD_ON   STD_ON
#define DEM_CFG_EVTINDICATOR_HEALINGTHRESHOLD DEM_CFG_EVTINDICATOR_HEALINGTHRESHOLD_ON


#define DEM_INDICATOR_ATTRIBUTE_MAX_PER_EVENT              	3u
#define DEM_INDICATOR_ATTRIBUTE_COUNT            			(DEM_EVENTID_COUNT * DEM_INDICATOR_ATTRIBUTE_MAX_PER_EVENT)
#define DEM_INDICATOR_ATTRIBUTE_ARRAYLENGTH           		(DEM_INDICATOR_ATTRIBUTE_COUNT)

#define DEM_INDICATOR_FAILURE_THRESHOLD_REQUIRED_BIT_SIZE             3u
#define DEM_INDICATOR_HEALING_THRESHOLD_REQUIRED_BIT_SIZE             3u
#define DEM_CFG_DEFAULT_FAILURE_THRESHOLD                            0x00u
#define DEM_CFG_DEFAULT_HEALING_THRESHOLD                            0x00u
#define DEM_INDICATOR_ATTRIBUTE_REQUIRED_BIT_SIZE                    0x03u
#define DEM_ALL_INDICATORS_USING_SAME_BEHAVIOUR                      0x00u

/* --------------------------------------------------- */
/* DEM INDICATOR STATE BITPOSITION                         */
/* --------------------------------------------------- */

#define DEM_EVTINDICATOR_BP_PARAM_APICONTROL                 0u
#define DEM_EVTINDICATOR_PARAMINI_APICONTROL(X)              ((Dem_EvtIndicatorParamType)(X)<<DEM_EVTINDICATOR_BP_PARAM_APICONTROL)

#define DEM_EVTINDICATOR_BP_PARAM_BEHAVIOUR                  1u
#define DEM_EVTINDICATOR_PARAMINI_BEHAVIOUR(X)               ((Dem_EvtIndicatorParamType)(X)<<DEM_EVTINDICATOR_BP_PARAM_BEHAVIOUR)


#define DEM_EVTINDICATOR_BP_PARAM_FAILTHRESHOLD              4u
#define DEM_EVTINDICATOR_PARAMINI_FAILTHRESHOLD(X)           ((Dem_EvtIndicatorParamType)(X)<<DEM_EVTINDICATOR_BP_PARAM_FAILTHRESHOLD)



#define DEM_EVTINDICATOR_BP_PARAM_HEALTHRESHOLD              7u
#define DEM_EVTINDICATOR_PARAMINI_HEALTHRESHOLD(X)           ((Dem_EvtIndicatorParamType)(X)<<DEM_EVTINDICATOR_BP_PARAM_HEALTHRESHOLD)


#define DEM_EVTINDICATOR_BP_PARAM_INDICATORID                10u
#define DEM_EVTINDICATOR_PARAMINI_INDICATORID(X)             ((Dem_EvtIndicatorParamType)(X)<<DEM_EVTINDICATOR_BP_PARAM_INDICATORID)


typedef uint16 Dem_EvtIndicatorParamType;
#define DEM_EVTINDICATORPARAM_ISBITSET                        rba_DiagLib_Bit16IsBitSet
#define DEM_EVTINDICATORPARAM_GETBITS                         rba_DiagLib_Bit16GetBits


/*******************************************************/



/*                 BEHAVIOUR                     FAILURE_THRESHOLD             HEALING_THRESHOLD             INDICATOR_ID                                                                                        APICONTROL                     */
#define DEM_CFG_EVENT_INDICATOR_ATTRIBUTE_PARAMS \
{ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (DEM_INDICATOR_CONTINUOUS,     0,                            1,                            DemConf_DemIndicator_AmberWarningLamp,                                                              0                             ), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_01 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (DEM_INDICATOR_CONTINUOUS,     3,                            4,                            DemConf_DemIndicator_AmberWarningLamp,                                                              0                             ), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_01 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (DEM_INDICATOR_CONTINUOUS,     1,                            3,                            DemConf_DemIndicator_AmberWarningLamp,                                                              0                             ), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_01 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (0,0,0,0,0), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_02 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (0,0,0,0,0), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_02 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (0,0,0,0,0), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_02 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (DEM_INDICATOR_FAST_FLASH,     2,                            1,                            DemConf_DemIndicator_AmberWarningLamp,                                                              0                             ), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_03 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (DEM_INDICATOR_SLOW_FLASH,     3,                            4,                            DemConf_DemIndicator_AmberWarningLamp,                                                              0                             ), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_03 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (DEM_INDICATOR_CONTINUOUS,     4,                            3,                            DemConf_DemIndicator_AmberWarningLamp,                                                              0                             ), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_03 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (0,0,0,0,0), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_04 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (0,0,0,0,0), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_04 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (0,0,0,0,0), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_04 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (DEM_INDICATOR_CONTINUOUS,     1,                            0,                            DemConf_DemIndicator_AmberWarningLamp,                                                              0                             ), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_05 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (DEM_INDICATOR_CONTINUOUS,     3,                            1,                            DemConf_DemIndicator_AmberWarningLamp,                                                              0                             ), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_05 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (0,0,0,0,0), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_05 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (0,0,0,0,0), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_06 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (0,0,0,0,0), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_06 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (0,0,0,0,0), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_06 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (DEM_INDICATOR_SLOW_FLASH,     0,                            3,                            DemConf_DemIndicator_AmberWarningLamp,                                                              0                             ), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_07 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (DEM_INDICATOR_CONTINUOUS,     2,                            3,                            DemConf_DemIndicator_AmberWarningLamp,                                                              0                             ), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_07 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (0,0,0,0,0), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_07 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (DEM_INDICATOR_FAST_FLASH,     0,                            2,                            DemConf_DemIndicator_AmberWarningLamp,                                                              0                             ), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_08 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (DEM_INDICATOR_CONTINUOUS,     4,                            3,                            DemConf_DemIndicator_AmberWarningLamp,                                                              0                             ), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_08 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (DEM_INDICATOR_SLOW_FLASH,     2,                            3,                            DemConf_DemIndicator_AmberWarningLamp,                                                              0                             ), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_08 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (DEM_INDICATOR_CONTINUOUS,     0,                            2,                            DemConf_DemIndicator_ESP_Lamp,                                                                      0                             ), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_09 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (DEM_INDICATOR_CONTINUOUS,     1,                            2,                            DemConf_DemIndicator_ESP_Lamp1,                                                                     0                             ), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_09 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (0,0,0,0,0), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_09 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (DEM_INDICATOR_BLINK_CONT,     0,                            0,                            DemConf_DemIndicator_ESP_Lamp,                                                                      0                             ), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_10 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (DEM_INDICATOR_BLINK_CONT,     1,                            3,                            DemConf_DemIndicator_ESP_Lamp1,                                                                     0                             ), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_10 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (0,0,0,0,0), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_10 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (0,0,0,0,0), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_11 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (0,0,0,0,0), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_11 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (0,0,0,0,0), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_11 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (DEM_INDICATOR_BLINKING,       1,                            5,                            DemConf_DemIndicator_ESP_Lamp,                                                                      0                             ), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_12 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (DEM_INDICATOR_CONTINUOUS,     2,                            4,                            DemConf_DemIndicator_ESP_Lamp,                                                                      0                             ), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_12 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (DEM_INDICATOR_BLINK_CONT,     5,                            5,                            DemConf_DemIndicator_ESP_Lamp1,                                                                     0                             ), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_12 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (0,0,0,0,0), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_13 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (0,0,0,0,0), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_13 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (0,0,0,0,0), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_13 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (0,0,0,0,0), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_14 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (0,0,0,0,0), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_14 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (0,0,0,0,0), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_14 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (DEM_INDICATOR_BLINKING,       0,                            0,                            DemConf_DemIndicator_ESP_Lamp,                                                                      0                             ), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_15 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (0,0,0,0,0), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_15 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (0,0,0,0,0), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_15 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (0,0,0,0,0), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_16 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (0,0,0,0,0), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_16 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (0,0,0,0,0), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_16 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (0,0,0,0,0), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_17 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (0,0,0,0,0), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_17 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (0,0,0,0,0), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_17 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (DEM_INDICATOR_CONTINUOUS,     1,                            1,                            DemConf_DemIndicator_ESP_Lamp,                                                                      0                             ), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_18 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (DEM_INDICATOR_CONTINUOUS,     0,                            1,                            DemConf_DemIndicator_ESP_Lamp,                                                                      0                             ), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_18 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (DEM_INDICATOR_CONTINUOUS,     3,                            1,                            DemConf_DemIndicator_ESP_Lamp,                                                                      0                             ), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_18 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (DEM_INDICATOR_CONTINUOUS,     1,                            1,                            DemConf_DemIndicator_ESP_Lamp,                                                                      0                             ), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_19 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (DEM_INDICATOR_BLINK_CONT,     2,                            1,                            DemConf_DemIndicator_ESP_Lamp,                                                                      0                             ), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_19 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (0,0,0,0,0), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_19 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (DEM_INDICATOR_CONTINUOUS,     2,                            3,                            DemConf_DemIndicator_ESP_Lamp1,                                                                     0                             ), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_20 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (0,0,0,0,0), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_20 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (0,0,0,0,0), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_20 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (0,0,0,0,0), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_21 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (0,0,0,0,0), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_21 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (0,0,0,0,0), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_21 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (DEM_INDICATOR_FAST_FLASH,     1,                            1,                            DemConf_DemIndicator_AmberWarningLamp,                                                              0                             ), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_22 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (DEM_INDICATOR_FAST_FLASH,     1,                            2,                            DemConf_DemIndicator_AmberWarningLamp,                                                              0                             ), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_22 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (DEM_INDICATOR_FAST_FLASH,     0,                            3,                            DemConf_DemIndicator_AmberWarningLamp,                                                              0                             ), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_22 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (DEM_INDICATOR_CONTINUOUS,     6,                            5,                            DemConf_DemIndicator_ESP_Lamp1,                                                                     0                             ), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_23 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (0,0,0,0,0), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_23 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (0,0,0,0,0), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_23 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (DEM_INDICATOR_BLINKING,       1,                            3,                            DemConf_DemIndicator_ESP_Lamp1,                                                                     0                             ), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_24 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (DEM_INDICATOR_BLINK_CONT,     1,                            2,                            DemConf_DemIndicator_ESP_Lamp1,                                                                     0                             ), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_24 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (0,0,0,0,0), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_24 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (0,0,0,0,0), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_25 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (0,0,0,0,0), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_25 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (0,0,0,0,0), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_25 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (DEM_INDICATOR_BLINK_CONT,     0,                            0,                            DemConf_DemIndicator_ESP_Lamp,                                                                      0                             ), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_26 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (0,0,0,0,0), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_26 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (0,0,0,0,0), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_26 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (0,0,0,0,0), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_27 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (0,0,0,0,0), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_27 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (0,0,0,0,0), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_27 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (0,0,0,0,0), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_28 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (0,0,0,0,0), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_28 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (0,0,0,0,0), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_28 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (DEM_INDICATOR_SLOW_FLASH,     0,                            2,                            DemConf_DemIndicator_AmberWarningLamp,                                                              0                             ), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_29 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (0,0,0,0,0), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_29 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (0,0,0,0,0), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_29 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (DEM_INDICATOR_BLINKING,       3,                            0,                            DemConf_DemIndicator_ESP_Lamp,                                                                      0                             ), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_30 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (DEM_INDICATOR_BLINKING,       1,                            0,                            DemConf_DemIndicator_ESP_Lamp1,                                                                     0                             ), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_30 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (0,0,0,0,0), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_30 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (0,0,0,0,0), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_31 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (0,0,0,0,0), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_31 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (0,0,0,0,0), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_31 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (0,0,0,0,0), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_32 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (0,0,0,0,0), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_32 */ \
DEM_EVTS_INDICATOR_ATTRIBUTE_INIT (0,0,0,0,0), /* DEM_INDICATOR_ATTRIBUTE_MONITORING_32 */ \
}

#endif

