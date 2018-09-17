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


#ifndef DEM_CFG_DTCS_H
#define DEM_CFG_DTCS_H


#include "Std_Types.h"


/* ---------------------------------------- */
/* DEM_CFG_STOREWAITINGFORMONITORINGEVENT     */
/* ---------------------------------------- */
#define DEM_CFG_STOREWAITINGFORMONITORINGEVENT  FALSE

/* ---------------------------------------- */
/* DEM_CFG_DTCFILTER_EXTERNALPROCESSING     */
/* ---------------------------------------- */
#define DEM_CFG_DTCFILTER_EXTERNALPROCESSING_OFF  STD_OFF
#define DEM_CFG_DTCFILTER_EXTERNALPROCESSING_ON   STD_ON
#define DEM_CFG_DTCFILTER_EXTERNALPROCESSING      DEM_CFG_DTCFILTER_EXTERNALPROCESSING_OFF

/* --------------------------------------------------- */
/* DEM_CFG_REPORT_CHRONOLOGICAL_ORDER_HOOKS_ENABLED    */
/* --------------------------------------------------- */
#define DEM_CFG_REPORT_CHRONOLOGICAL_ORDER_HOOKS_ENABLED   FALSE


#define DEM_CFG_DTCSTATUS_AVAILABILITYMASK     0xFFu
#define DEM_CFG_DTC_TRANSLATION_TYPE           DEM_DTC_TRANSLATION_SAEJ1939_73


#define DEM_CFG_DTCSTATEMANGER_DTCS_PER_CYCLE   5u

/* --------------------------------------------------- */
/* DEM DTC STATE BITPOSITION                         */
/* --------------------------------------------------- */

#define DEM_DTC_BP_STATE_SUPPRESSED             0u
#define DEM_DTC_BP_GROUP_DTCSETTING_DISABLED    1u

typedef uint8 Dem_DtcStateType;
#define DEM_DTCSTATE_ISBITSET                    rba_DiagLib_Bit8IsBitSet
#define DEM_DTCSTATE_OVERWRITEBIT                rba_DiagLib_Bit8OverwriteBit
#define DEM_DTCSTATE_CLEARBIT                    rba_DiagLib_Bit8ClearBit
#define DEM_DTCSTATE_SETBIT                      rba_DiagLib_Bit8SetBit

/**
 * Selects a group of DTCs.
*/

#define DEM_DTC_GROUP_DemGroupOfDTC_0_DTCS           0xFA0u
#define DEM_DTC_GROUP_DemGroupOfDTC_1_DTCS           0x1388u




/* Defines for Alternative Dtc table Index */
#define DEM_ALTERNATIVEDTC_INDEX_DTC_POWERCYCLE                  0u
#define DEM_ALTERNATIVEDTC_INDEX_DTC_DRIVINGCYCLE                1u
#define DEM_ALTERNATIVEDTC_INDEX_DTC_IGNITIONCYCLE               2u
#define DEM_ALTERNATIVEDTC_INDEX_DTC_5                           3u
#define DEM_ALTERNATIVEDTC_INDEX_DTC_1                           4u
#define DEM_ALTERNATIVEDTC_INDEX_DTC_2                           5u
#define DEM_ALTERNATIVEDTC_INDEX_DTC_3                           6u
#define DEM_ALTERNATIVEDTC_INDEX_DTC_4                           7u


#define DEM_CFG_ALTERNATIVE_DTCPARAMS \
{ \
/*   ALTERNATIVE_DTCCODE, STANDARD_DTCCODE*/ \
    {0x1B5Bu , 0xFA1u} /* DTC: DTC_POWERCYCLE */ ,\
    {0x1F41u , 0xFA2u} /* DTC: DTC_DRIVINGCYCLE */ ,\
    {0xFA2u , 0xFA3u} /* DTC: DTC_IGNITIONCYCLE */ ,\
    {0x1F49u , 0xFA4u} /* DTC: DTC_5 */ ,\
    {0x1F45u , 0x1389u} /* DTC: DTC_1 */ ,\
    {0x1B58u , 0x138Au} /* DTC: DTC_2 */ ,\
    {0x1F46u , 0x138Bu} /* DTC: DTC_3 */ ,\
    {0x1770u , 0x138Cu} /* DTC: DTC_4 */  \
}






/*                KIND                               SEVERITY                           NV-STORAGE  FUNC_UNIT                DTCCODE_IS_INDEX          */

#define DEM_CFG_DTCPARAMS8 \
{ \
    DEM_DTCS_INIT8(0u,                                0u,                                0u,         0u,                      FALSE                    )/* No DTC Assigned */ \
    ,DEM_DTCS_INIT8(DEM_DTC_KIND_ALL_DTCS,             DEM_SEVERITY_CHECK_IMMEDIATELY,    0u,         0x0u,                    TRUE                     )/*DTC_PowerCycle*/ \
    ,DEM_DTCS_INIT8(DEM_DTC_KIND_ALL_DTCS,             DEM_SEVERITY_MAINTENANCE_ONLY,     1u,         0x0u,                    TRUE                     )/*DTC_DrivingCycle*/ \
    ,DEM_DTCS_INIT8(DEM_DTC_KIND_ALL_DTCS,             DEM_SEVERITY_CHECK_AT_NEXT_HALT,   1u,         0x0u,                    TRUE                     )/*DTC_IgnitionCycle*/ \
    ,DEM_DTCS_INIT8(DEM_DTC_KIND_ALL_DTCS,             DEM_SEVERITY_NO_SEVERITY,          1u,         0x0u,                    TRUE                     )/*DTC_5*/ \
    ,DEM_DTCS_INIT8(DEM_DTC_KIND_ALL_DTCS,             DEM_SEVERITY_NO_SEVERITY,          0u,         0x0u,                    TRUE                     )/*DTC_1*/ \
    ,DEM_DTCS_INIT8(DEM_DTC_KIND_ALL_DTCS,             DEM_SEVERITY_MAINTENANCE_ONLY,     1u,         0x0u,                    TRUE                     )/*DTC_2*/ \
    ,DEM_DTCS_INIT8(DEM_DTC_KIND_ALL_DTCS,             DEM_SEVERITY_CHECK_AT_NEXT_HALT,   0u,         0x0u,                    TRUE                     )/*DTC_3*/ \
    ,DEM_DTCS_INIT8(DEM_DTC_KIND_ALL_DTCS,             DEM_SEVERITY_NO_SEVERITY,          1u,         0x0u,                    TRUE                     )/*DTC_4*/ \
}









#define DEM_CFG_DTCPARAMS32 \
{ \
    DEM_DTCS_INIT32(0              )/* No DTC Assigned */ \
    ,DEM_DTCS_INIT32(DEM_ALTERNATIVEDTC_INDEX_DTC_POWERCYCLE)/*DTC_PowerCycle*/ \
    ,DEM_DTCS_INIT32(DEM_ALTERNATIVEDTC_INDEX_DTC_DRIVINGCYCLE)/*DTC_DrivingCycle*/ \
    ,DEM_DTCS_INIT32(DEM_ALTERNATIVEDTC_INDEX_DTC_IGNITIONCYCLE)/*DTC_IgnitionCycle*/ \
    ,DEM_DTCS_INIT32(DEM_ALTERNATIVEDTC_INDEX_DTC_5)/*DTC_5*/ \
    ,DEM_DTCS_INIT32(DEM_ALTERNATIVEDTC_INDEX_DTC_1)/*DTC_1*/ \
    ,DEM_DTCS_INIT32(DEM_ALTERNATIVEDTC_INDEX_DTC_2)/*DTC_2*/ \
    ,DEM_DTCS_INIT32(DEM_ALTERNATIVEDTC_INDEX_DTC_3)/*DTC_3*/ \
    ,DEM_DTCS_INIT32(DEM_ALTERNATIVEDTC_INDEX_DTC_4)/*DTC_4*/ \
}






#define DEM_CFG_J1939DTCPARAMS32 \
{ \
    DEM_DTCS_INIT32(0              )/* No DTC Assigned */ \
    ,DEM_DTCS_INIT32(0xFA5          )/*DTC_PowerCycle*/ \
    ,DEM_DTCS_INIT32(0x00           )/*DTC_DrivingCycle*/ \
    ,DEM_DTCS_INIT32(0x138F         )/*DTC_IgnitionCycle*/ \
    ,DEM_DTCS_INIT32(0xFA8          )/*DTC_5*/ \
    ,DEM_DTCS_INIT32(0xFA7          )/*DTC_1*/ \
    ,DEM_DTCS_INIT32(0x138D         )/*DTC_2*/ \
    ,DEM_DTCS_INIT32(0x138D         )/*DTC_3*/ \
    ,DEM_DTCS_INIT32(0x138E         )/*DTC_4*/ \
}









/*                DTCGROUPCODE  */

#define DEM_CFG_DTCGROUPPARAMS \
{ \
    DEM_DTCGROUPS_INIT(0       )/* No DTCGROUP Assigned */ \
     ,DEM_DTCGROUPS_INIT(0xFA0u  )/*DemGroupOfDTC_0*/ \
     ,DEM_DTCGROUPS_INIT(0x1388u )/*DemGroupOfDTC_1*/ \
,DEM_DTCGROUPS_INIT(DEM_DTC_GROUP_ALL_DTCS) /* DEM_DTC_GROUP_ALL_DTCS */\
}





#define DEM_DTC_FILTER_NUMBER_OF_EVENTS_PER_CYCLE    25u
#define DEM_DTC_FILTER_RETRIEVE_NUMBER_OF_DTCS       25u

#define DEM_NUMBER_OF_DTCS_TO_PROCESS_PER_LOCK    5u

#define DEM_DTC_DTCSETTING_CALLBACK_SUPPORTED_OFF STD_OFF
#define DEM_DTC_DTCSETTING_CALLBACK_SUPPORTED_ON STD_ON

#define DEM_DTC_DTCSETTING_CALLBACK_SUPPORTED DEM_DTC_DTCSETTING_CALLBACK_SUPPORTED_OFF


#endif

