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


#ifndef DEM_CFG_H
#define DEM_CFG_H

/* ---------------------------------------- */
/* OBD and BFM switches included for
   COMASSO Configuration                    */
/* ---------------------------------------- */

/* ----------------------------------------------------------------------------
   OBD switch
   ----------------------------------------------------------------------------
*/

#define DEM_CFG_OBD_OFF 	0                /* OBD not supported */
#define DEM_CFG_OBD_ON  	1                /* OBD supported */
#define DEM_CFG_OBD        DEM_CFG_OBD_OFF


/* ----------------------------------------------------------------------------
   J1939DCM switch
   ----------------------------------------------------------------------------
*/

#define DEM_CFG_J1939DCM_OFF     0                /* J1939DCM not supported */
#define DEM_CFG_J1939DCM_ON      1                /* J1939DCM supported */
#define DEM_CFG_J1939DCM       DEM_CFG_J1939DCM_ON

#define DEM_CFG_J1939DCM_CLEAR_SUPPORT                     DEM_CFG_J1939DCM_ON

#define DEM_CFG_J1939DCM_READ_DTC_SUPPORT    		   TRUE

#define DEM_CFG_J1939DCM_DM31_SUPPORT        TRUE

#define DEM_CFG_J1939DCM_FREEZEFRAME_SUPPORT               TRUE
#define DEM_CFG_J1939DCM_EXPANDED_FREEZEFRAME_SUPPORT      TRUE
/* ----------------------------------------------------------------------------
   BFM switch
   ----------------------------------------------------------------------------
*/
#ifndef DEM_BFM_ON
#define DEM_BFM_ON 1                    /* BFM supported */
#endif
#ifndef DEM_BFM_OFF                     /* BFM not supported */
#define DEM_BFM_OFF 0
#endif

#ifndef DEM_CATPRIO_ON
#define DEM_CATPRIO_ON   1              /*Event category priority supported*/
#endif
#ifndef DEM_CATPRIO_OFF
#define DEM_CATPRIO_OFF  0              /*Event category priority not supported*/
#endif


#define DEM_BFM_ENABLED  DEM_BFM_ON

#ifndef DEM_BFM_ENABLED
#define DEM_BFM_ENABLED  DEM_BFM_OFF
#endif

/* ---------------------------------------- */
/* Dem API Features                         */
/* ---------------------------------------- */
/* Only define switches here that enable or disable the availability of an API */

#define DEM_CFG_TRIGGER_TO_STORE_NVM_SUPPORTED            TRUE
#define DEM_CFG_SUSPICIOUS_SUPPORT                        TRUE
#define DEM_CFG_DEBTIMEBASED_CONFIGURED_CYCLICTASKTIME    TRUE
#define DEM_CFG_EVMEMGENERIC_SUPPORTED                    TRUE

#define DEM_CFG_VERSION_INFO_API_OFF          STD_OFF
#define DEM_CFG_VERSION_INFO_API_ON           STD_ON
#define DEM_CFG_VERSION_INFO_API              DEM_CFG_VERSION_INFO_API_ON

#define DEM_CFG_ALTERNATIVEDTC_OFF                   STD_OFF
#define DEM_CFG_ALTERNATIVEDTC_ON                    STD_ON
#define DEM_CFG_ALTERNATIVEDTC  DEM_CFG_ALTERNATIVEDTC_ON

#define DEM_CFG_ERASE_ALL_OFF                           0u
#define DEM_CFG_ERASE_ALL_WITHOUT_HASHID_CHECK          1u
#define DEM_CFG_ERASE_ALL_WITH_HASHID_CHECK             2u
#define DEM_CFG_ERASE_ALL_DATA_SUPPORTED                DEM_CFG_ERASE_ALL_WITH_HASHID_CHECK

#define DEM_CFG_DEPENDENCY_OFF         STD_OFF
#define DEM_CFG_DEPENDENCY_ON          STD_ON
#define DEM_CFG_DEPENDENCY             DEM_CFG_DEPENDENCY_OFF

#define DEM_CFG_TESTMODE_SUPPORT_ON       STD_ON
#define DEM_CFG_TESTMODE_SUPPORT_OFF      STD_OFF

#define DEM_CFG_TESTMODE_SUPPORT          DEM_CFG_TESTMODE_SUPPORT_ON


/* ---------------------------------------- */
/* Check Consistency between RTE and C API  */
/* ---------------------------------------- */
#define DEM_CFG_CHECKAPICONSISTENCY    FALSE

/* ---------------------------------------- */
/* DEM_CFG_DEBUGDATA                        */
/* ---------------------------------------- */
#define DEM_CFG_DEBUGDATA_OFF     0
#define DEM_CFG_DEBUGDATA_8BIT    (0+1)
#define DEM_CFG_DEBUGDATA_32BIT   (0+4)
#define DEM_CFG_DEBUGDATA         DEM_CFG_DEBUGDATA_OFF


#if (DEM_CFG_DEBUGDATA != DEM_CFG_DEBUGDATA_OFF)
/* MR12 RULE 20.7 VIOLATION: Macro parameter may not be enclosed in (). */
#define DEM_DEBUGDATA_PARAM(A,B)    ,A,B
#else
#define DEM_DEBUGDATA_PARAM(A,B)
#endif


#endif

