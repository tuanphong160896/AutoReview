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


#ifndef DEM_CFG_DEB_H
#define DEM_CFG_DEB_H


#include "Std_Types.h"

/* ---------------------------------------- */
/* DEM_CFG_DEBMONINTBASE                    */
/* ---------------------------------------- */
#define DEM_CFG_DEBMONINTERNAL_OFF  STD_OFF
#define DEM_CFG_DEBMONINTERNAL_ON   STD_ON
#define DEM_CFG_DEBMONINTERNAL  DEM_CFG_DEBMONINTERNAL_ON

#define DEM_CFG_DEBMONINTERNAL_LENGTH 12
#define DEM_CFG_DEBMONINTERNAL_PARAMSET \
{ \
/*  DemCallbackGetFDCFnc */ \
  { &Rte_Call_CBFaultDetectCtr_Monitoring_01_GetFaultDetectionCounter}, /* Event_Monitoring_01 */ \
  { &CB_DemGetFaultDetectionCounter_Monitoring_08}, /* Event_Monitoring_08 */ \
  { &CB_DemGetFaultDetectionCounter_Monitoring_13}, /* Event_Monitoring_13 */ \
  { &CB_DemGetFaultDetectionCounter_Monitoring_14}, /* Event_Monitoring_14 */ \
  { &CB_DemGetFaultDetectionCounter_Monitoring_16}, /* Event_Monitoring_16 */ \
  { &CB_DemGetFaultDetectionCounter_Monitoring_17}, /* Event_Monitoring_17 */ \
  { &CB_DemGetFaultDetectionCounter_Monitoring_22}, /* Event_Monitoring_22 */ \
  { &CB_DemGetFaultDetectionCounter_Monitoring_24}, /* Event_Monitoring_24 */ \
  { &CB_DemGetFaultDetectionCounter_Monitoring_25}, /* Event_Monitoring_25 */ \
  { &CB_DemGetFaultDetectionCounter_Monitoring_27}, /* Event_Monitoring_27 */ \
  { &Rte_Call_CBFaultDetectCtr_Monitoring_29_GetFaultDetectionCounter}, /* Event_Monitoring_29 */ \
  { &CB_DemGetFaultDetectionCounter_Monitoring_31}, /* Event_Monitoring_31 */ \
}

#define DEM_DEBPARAM_IDX_MONITORING_01                  0
#define DEM_DEBPARAM_IDX_MONITORING_08                  1
#define DEM_DEBPARAM_IDX_MONITORING_13                  2
#define DEM_DEBPARAM_IDX_MONITORING_14                  3
#define DEM_DEBPARAM_IDX_MONITORING_16                  4
#define DEM_DEBPARAM_IDX_MONITORING_17                  5
#define DEM_DEBPARAM_IDX_MONITORING_22                  6
#define DEM_DEBPARAM_IDX_MONITORING_24                  7
#define DEM_DEBPARAM_IDX_MONITORING_25                  8
#define DEM_DEBPARAM_IDX_MONITORING_27                  9
#define DEM_DEBPARAM_IDX_MONITORING_29                  10
#define DEM_DEBPARAM_IDX_MONITORING_31                  11





/* ---------------------------------------- */
/* DEM_CFG_DEBARTIMEBASE                    */
/* ---------------------------------------- */
#define DEM_CFG_DEBARTIMEBASE_OFF  STD_OFF
#define DEM_CFG_DEBARTIMEBASE_ON   STD_ON
#define DEM_CFG_DEBARTIMEBASE  DEM_CFG_DEBARTIMEBASE_ON

#define DEM_CFG_DEBARTIME_PARAMSET1_LENGTH 5
#define DEM_CFG_DEBARTIME_PARAMSET1 \
{ \
/*  FAIL, PASS, FDCTHRESHOLD, SUSPICIOUS_THRESHOLD */ \
   { 20, -100, 20, DEM_MAXSINT16}, /* Event_Monitoring_11 */ \
   { 50, -40, 50, DEM_MAXSINT16}, /* Event_Monitoring_12 */ \
   { 1200, -500, 1200, DEM_MAXSINT16}, /* Event_Monitoring_19 */ \
   { 155, -145, 155, DEM_MAXSINT16}, /* Event_Monitoring_26 */ \
   { 300, -327, 300, DEM_MAXSINT16}, /* Event_Monitoring_30 */ \
}


#define DEM_DEBPARAM_IDX_MONITORING_11                  0
#define DEM_DEBPARAM_IDX_MONITORING_12                  1
#define DEM_DEBPARAM_IDX_MONITORING_19                  2
#define DEM_DEBPARAM_IDX_MONITORING_26                  3
#define DEM_DEBPARAM_IDX_MONITORING_30                  4



/* ---------------------------------------- */
/* DEM_CFG_DEBCOUNTERBASEDCLASS             */
/* ---------------------------------------- */
#define DEM_CFG_DEBCOUNTERBASECLASS_OFF  STD_OFF
#define DEM_CFG_DEBCOUNTERBASECLASS_ON   STD_ON
#define DEM_CFG_DEBCOUNTERBASECLASS  DEM_CFG_DEBCOUNTERBASECLASS_ON

#define DEM_CFG_LIMIT_RELEVANTFOR_JUMPING_OFF  STD_OFF
#define DEM_CFG_LIMIT_RELEVANTFOR_JUMPING_ON   STD_ON
#define DEM_CFG_LIMIT_RELEVANTFOR_JUMPING DEM_CFG_LIMIT_RELEVANTFOR_JUMPING_ON

#define DEM_CFG_DEFAULT_DEBCOUNTERCLASS_MAXLIMIT 32767
#define DEM_CFG_DEFAULT_DEBCOUNTERCLASS_MINLIMIT -32768
#define DEM_CFG_DEFAULT_DEBCOUNTERCLASS_JUMPUP_ENABLED TRUE
#define DEM_CFG_DEFAULT_DEBCOUNTERCLASS_JUMPUP_VALUE 0
#define DEM_CFG_DEFAULT_DEBCOUNTERCLASS_JUMPDOWN_ENABLED TRUE
#define DEM_CFG_DEFAULT_DEBCOUNTERCLASS_JUMPDOWN_VALUE 0

#define DEM_CFG_DEBCOUNTERBASECLASS_MINTHRESHOLD_OFF  STD_OFF
#define DEM_CFG_DEBCOUNTERBASECLASS_MINTHRESHOLD_ON   STD_ON
#define DEM_CFG_DEBCOUNTERBASECLASS_MINTHRESHOLD  DEM_CFG_DEBCOUNTERBASECLASS_MINTHRESHOLD_ON

#define DEM_CFG_DEBCOUNTERBASECLASS_MAXTHRESHOLD_OFF  STD_OFF
#define DEM_CFG_DEBCOUNTERBASECLASS_MAXTHRESHOLD_ON   STD_ON
#define DEM_CFG_DEBCOUNTERBASECLASS_MAXTHRESHOLD  DEM_CFG_DEBCOUNTERBASECLASS_MAXTHRESHOLD_ON

#define DEM_CFG_DEBCOUNTERBASECLASS_JUMPUPVALUE_OFF  STD_OFF
#define DEM_CFG_DEBCOUNTERBASECLASS_JUMPUPVALUE_ON   STD_ON
#define DEM_CFG_DEBCOUNTERBASECLASS_JUMPUPVALUE  DEM_CFG_DEBCOUNTERBASECLASS_JUMPUPVALUE_ON

#define DEM_CFG_DEBCOUNTERBASECLASS_JUMPDOWNVALUE_OFF  STD_OFF
#define DEM_CFG_DEBCOUNTERBASECLASS_JUMPDOWNVALUE_ON   STD_ON
#define DEM_CFG_DEBCOUNTERBASECLASS_JUMPDOWNVALUE  DEM_CFG_DEBCOUNTERBASECLASS_JUMPDOWNVALUE_ON

#define DEM_CFG_DEBCOUNTERBASECLASS_ISJUMPDOWN_OFF  STD_OFF
#define DEM_CFG_DEBCOUNTERBASECLASS_ISJUMPDOWN_ON   STD_ON
#define DEM_CFG_DEBCOUNTERBASECLASS_ISJUMPDOWN  DEM_CFG_DEBCOUNTERBASECLASS_ISJUMPDOWN_ON

#define DEM_CFG_DEBCOUNTERBASECLASS_ISJUMPUP_OFF  STD_OFF
#define DEM_CFG_DEBCOUNTERBASECLASS_ISJUMPUP_ON   STD_ON
#define DEM_CFG_DEBCOUNTERBASECLASS_ISJUMPUP  DEM_CFG_DEBCOUNTERBASECLASS_ISJUMPUP_ON

#define DEMRB_DEBOUNCECOUNTERSETS_SIZE                                 2
/** Offset of the CounterSet Id where the custom counter sets start */
#define DEMRB_DEBOUNCECOUNTERSETS_CUSTOMSETSOFFSET                     2

#define DemConf_DemRbDebounceCounterSet_Standard                       0
#define DemConf_DemRbDebounceCounterSet_Alternative                    1

#define DEM_CFG_DEBCOUNTERBASECLASS_PARAMSET_LENGTH 6

#define DEM_CFG_ALTERNATIVEDEBDEFINED                    TRUE



/*                 				ISJDOWN             ISJUP               MINLIMIT                      MAXLIMIT                      JDOWNValue          JUPValue            FDC_THRESHOLD       SUSPICIOUS_THRESHOLD STEPUP             STEPDOWN             */

#define DEM_CFG_DEBCOUNTERCLASS_PARAMSETS \
{ \
  { /* Default Debouncing Parameters */ \
   DEM_DEBCOUNTERBASECLASS_INIT (DEM_CFG_DEFAULT_DEBCOUNTERCLASS_JUMPDOWN_ENABLED,DEM_CFG_DEFAULT_DEBCOUNTERCLASS_JUMPUP_ENABLED,DEM_CFG_DEFAULT_DEBCOUNTERCLASS_MINLIMIT,DEM_CFG_DEFAULT_DEBCOUNTERCLASS_MAXLIMIT,0,7,5,DEM_MAXSINT16,500,-200              ), \
   DEM_DEBCOUNTERBASECLASS_INIT (DEM_CFG_DEFAULT_DEBCOUNTERCLASS_JUMPDOWN_ENABLED,DEM_CFG_DEFAULT_DEBCOUNTERCLASS_JUMPUP_ENABLED,DEM_CFG_DEFAULT_DEBCOUNTERCLASS_MINLIMIT,DEM_CFG_DEFAULT_DEBCOUNTERCLASS_MAXLIMIT,0,0,50,DEM_MAXSINT16,100,-100             ), \
   DEM_DEBCOUNTERBASECLASS_INIT (FALSE,              TRUE,               -1000,                        5,                            0,                  0,                  4,                  DEM_MAXSINT16,      1,                  -1                  ), \
   DEM_DEBCOUNTERBASECLASS_INIT (FALSE,              TRUE,               -55,                          40,                           0,                  15,                 20,                 DEM_MAXSINT16,      3,                  -2                  ), \
   DEM_DEBCOUNTERBASECLASS_INIT (FALSE,              TRUE,               -35,                          5,                            0,                  1,                  4,                  DEM_MAXSINT16,      3,                  -3                  ), \
   DEM_DEBCOUNTERBASECLASS_INIT (TRUE,               FALSE,              -80,                          30,                           -25,                0,                  10,                 DEM_MAXSINT16,      6,                  -5                  ), \
}, \
  { /* Alternative Debouncing Parameters */  \
   DEM_DEBCOUNTERBASECLASS_INIT (TRUE,               DEM_CFG_DEFAULT_DEBCOUNTERCLASS_JUMPUP_ENABLED,DEM_CFG_DEFAULT_DEBCOUNTERCLASS_MINLIMIT,DEM_CFG_DEFAULT_DEBCOUNTERCLASS_MAXLIMIT,0,7,5,     DEM_MAXSINT16,      500,                -200                ), \
   DEM_DEBCOUNTERBASECLASS_INIT (DEM_CFG_DEFAULT_DEBCOUNTERCLASS_JUMPDOWN_ENABLED,DEM_CFG_DEFAULT_DEBCOUNTERCLASS_JUMPUP_ENABLED,DEM_CFG_DEFAULT_DEBCOUNTERCLASS_MINLIMIT,DEM_CFG_DEFAULT_DEBCOUNTERCLASS_MAXLIMIT,10,0,50,DEM_MAXSINT16,100,-100            ), \
   DEM_DEBCOUNTERBASECLASS_INIT (FALSE,              TRUE,               -1000,                        5,                            0,                  1,                  4,                  DEM_MAXSINT16,      1,                  -1                  ), \
   DEM_DEBCOUNTERBASECLASS_INIT (FALSE,              TRUE,               -55,                          40,                           0,                  15,                 20,                 DEM_MAXSINT16,      3,                  -2                  ), \
   DEM_DEBCOUNTERBASECLASS_INIT (FALSE,              TRUE,               -35,                          5,                            0,                  1,                  4,                  DEM_MAXSINT16,      3,                  -3                  ), \
   DEM_DEBCOUNTERBASECLASS_INIT (TRUE,               FALSE,              -80,                          30,                           -25,                0,                  10,                 DEM_MAXSINT16,      6,                  -5                  ), \
  }, \
}

#define DEM_DEBPARAMCLASS_IDX_DEMDEBOUNCECOUNTERBASEDCLASS_0  0
#define DEM_DEBPARAMCLASS_IDX_DEMDEBOUNCECOUNTERBASEDCLASS_1  1
#define DEM_DEBPARAMCLASS_IDX_DEMDEBOUNCECOUNTERBASEDCLASS_2  2
#define DEM_DEBPARAMCLASS_IDX_DEMDEBOUNCECOUNTERBASEDCLASS_3  3
#define DEM_DEBPARAMCLASS_IDX_DEMDEBOUNCECOUNTERBASEDCLASS_4  4
#define DEM_DEBPARAMCLASS_IDX_DEMDEBOUNCECOUNTERBASEDCLASS_5  5


#define DEM_DEBPARAM_IDX_MONITORING_02                  DEM_DEBPARAMCLASS_IDX_DEMDEBOUNCECOUNTERBASEDCLASS_1
#define DEM_DEBPARAM_IDX_MONITORING_03                  DEM_DEBPARAMCLASS_IDX_DEMDEBOUNCECOUNTERBASEDCLASS_0
#define DEM_DEBPARAM_IDX_MONITORING_04                  DEM_DEBPARAMCLASS_IDX_DEMDEBOUNCECOUNTERBASEDCLASS_1
#define DEM_DEBPARAM_IDX_MONITORING_05                  DEM_DEBPARAMCLASS_IDX_DEMDEBOUNCECOUNTERBASEDCLASS_0
#define DEM_DEBPARAM_IDX_MONITORING_06                  DEM_DEBPARAMCLASS_IDX_DEMDEBOUNCECOUNTERBASEDCLASS_0
#define DEM_DEBPARAM_IDX_MONITORING_07                  DEM_DEBPARAMCLASS_IDX_DEMDEBOUNCECOUNTERBASEDCLASS_0
#define DEM_DEBPARAM_IDX_MONITORING_09                  DEM_DEBPARAMCLASS_IDX_DEMDEBOUNCECOUNTERBASEDCLASS_0
#define DEM_DEBPARAM_IDX_MONITORING_10                  DEM_DEBPARAMCLASS_IDX_DEMDEBOUNCECOUNTERBASEDCLASS_2
#define DEM_DEBPARAM_IDX_MONITORING_15                  DEM_DEBPARAMCLASS_IDX_DEMDEBOUNCECOUNTERBASEDCLASS_3
#define DEM_DEBPARAM_IDX_MONITORING_18                  DEM_DEBPARAMCLASS_IDX_DEMDEBOUNCECOUNTERBASEDCLASS_0
#define DEM_DEBPARAM_IDX_MONITORING_20                  DEM_DEBPARAMCLASS_IDX_DEMDEBOUNCECOUNTERBASEDCLASS_3
#define DEM_DEBPARAM_IDX_MONITORING_21                  DEM_DEBPARAMCLASS_IDX_DEMDEBOUNCECOUNTERBASEDCLASS_4
#define DEM_DEBPARAM_IDX_MONITORING_23                  DEM_DEBPARAMCLASS_IDX_DEMDEBOUNCECOUNTERBASEDCLASS_0
#define DEM_DEBPARAM_IDX_MONITORING_28                  DEM_DEBPARAMCLASS_IDX_DEMDEBOUNCECOUNTERBASEDCLASS_5
#define DEM_DEBPARAM_IDX_MONITORING_32                  DEM_DEBPARAMCLASS_IDX_DEMDEBOUNCECOUNTERBASEDCLASS_0


#define DEM_CFG_DEB_DEFINE_ALL_PARAMSETS \
static const Dem_DebArTime_ParamSet    Dem_Cfg_DebArTime_Paramset1[DEM_CFG_DEBARTIME_PARAMSET1_LENGTH] = DEM_CFG_DEBARTIME_PARAMSET1; \
static const Dem_DebounceMonitorInternal Dem_Cfg_DebMonInternal_Paramset[DEM_CFG_DEBMONINTERNAL_LENGTH] = DEM_CFG_DEBMONINTERNAL_PARAMSET;\
static const Dem_DebCounterBaseClass_ParamSet  Dem_Cfg_DebCounterBaseClass_Paramsets[DEMRB_DEBOUNCECOUNTERSETS_SIZE][DEM_CFG_DEBCOUNTERBASECLASS_PARAMSET_LENGTH] = DEM_CFG_DEBCOUNTERCLASS_PARAMSETS; \


#define  DEM_CFG_DEB_CLASSES \
{ \
   { \
      NULL_PTR, \
      NULL_PTR, \
      &Dem_Cfg_DebMonInternal_Paramset, \
      DEM_CFG_DEBMONINTERNAL_LENGTH, \
      NULL_PTR \
   } \
   ,{ \
      &Dem_DebArTime_GetLimits, \
      &Dem_DebArTime_Cyclic, \
      &Dem_Cfg_DebArTime_Paramset1, \
      DEM_CFG_DEBARTIME_PARAMSET1_LENGTH, \
      &Dem_DebArTime_Filter \
   } \
   ,{ \
      &Dem_DebCounterBaseClass_GetLimits, \
      NULL_PTR, \
      &Dem_Cfg_DebCounterBaseClass_Paramsets[DemConf_DemRbDebounceCounterSet_Standard], \
      DEM_CFG_DEBCOUNTERBASECLASS_PARAMSET_LENGTH, \
      &Dem_DebCounterBaseClass_Filter \
   } \
}

#define  DEM_CFG_DEB_NUMBEROFCLASSES  3

#define DEM_DEBMETH_IDX_MONINTERNAL      (0)
#define DEM_DEBMETH_IDX_ARTIME      (1)
#define DEM_DEBMETH_IDX_ARCTRBASECLASS      (2)





/* Support Debouncer Reset After StorageCondition */
#define DEM_CFG_SUPPORT_DEB_RESET_AFTER_STOCO_OFF                                    0u
#define DEM_CFG_SUPPORT_DEB_RESET_AFTER_STOCO_ACCORDING_DEBOUNCEBEHAVIOR             1u

#define DEM_CFG_SUPPORT_DEB_RESET_AFTER_STOCO           DEM_CFG_SUPPORT_DEB_RESET_AFTER_STOCO_ACCORDING_DEBOUNCEBEHAVIOR


#endif


