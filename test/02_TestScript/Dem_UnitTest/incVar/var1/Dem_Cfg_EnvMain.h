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


#ifndef DEM_CFG_ENVMAIN_H
#define DEM_CFG_ENVMAIN_H


/* min number of bytes required for storing any eventIds ExtendedData and one FreezeFrame (=> EvBuff) */
#define DEM_CFG_ENVMINSIZE_OF_RAWENVDATA           (56u + 0u + 19u)

/* min number of bytes required for storing any eventIds ExtendedData and multiple FreezeFrame (=> EvMem) */
#define DEM_CFG_ENVMINSIZE_OF_MULTIPLE_RAWENVDATA   (451u + 0u + 19u)

/*min number of bytes required for OBD related data - This is generated for getting Offset for handling J1939 data*/
#define DEM_CFG_OFFSET_OBDRAWENVDATA         0u


/* Extended data set used for disturbence memory and the size required to store a data block (size of each diturbance memory location) */
#define  DEM_CFG_DIST_MEM_EXTENDED_DATA_ID				DEM_EXTDATA_ED_SET1
#define  DEM_CFG_DIST_MEM_EXT_DATA_SIZE                 (36u)



#define DEM_CFG_ENVEVENTID2ENVDATA \
{ \
   { 0u,0u }                                                      /* DEM_EVENTID_INVALID */ \
   ,{  DEM_EXTDATA_ED_SET2, DEM_FREEZEFRAME_FF_SET2 }              /* Monitoring_01 */ \
   ,{  DEM_EXTDATA_ED_SET2, DEM_FREEZEFRAME_FF_SET2 }              /* Monitoring_02 */ \
   ,{  DEM_EXTDATA_ED_SET1, DEM_FREEZEFRAME_FF_SET3 }              /* Monitoring_03 */ \
   ,{  DEM_EXTDATA_ED_SET3, DEM_FREEZEFRAME_FF_SET2 }              /* Monitoring_04 */ \
   ,{  DEM_EXTDATA_ED_SET4, DEM_FREEZEFRAME_FF_SET1 }              /* Monitoring_05 */ \
   ,{  0u, 0u }                                                    /* Monitoring_06 */ \
   ,{  DEM_EXTDATA_ED_SET4, DEM_FREEZEFRAME_FF_SET3 }              /* Monitoring_07 */ \
   ,{  DEM_EXTDATA_ED_SET3, DEM_FREEZEFRAME_FF_SET3 }              /* Monitoring_08 */ \
   ,{  DEM_EXTDATA_ED_SET2, DEM_FREEZEFRAME_FF_SET1 }              /* Monitoring_09 */ \
   ,{  0u, 0u }                                                    /* Monitoring_10 */ \
   ,{  0u, 0u }                                                    /* Monitoring_11 */ \
   ,{  0u, 0u }                                                    /* Monitoring_12 */ \
   ,{  0u, 0u }                                                    /* Monitoring_13 */ \
   ,{  0u, 0u }                                                    /* Monitoring_14 */ \
   ,{  0u, 0u }                                                    /* Monitoring_15 */ \
   ,{  0u, 0u }                                                    /* Monitoring_16 */ \
   ,{  0u, 0u }                                                    /* Monitoring_17 */ \
   ,{  0u, 0u }                                                    /* Monitoring_18 */ \
   ,{  0u, 0u }                                                    /* Monitoring_19 */ \
   ,{  0u, 0u }                                                    /* Monitoring_20 */ \
   ,{  0u, 0u }                                                    /* Monitoring_21 */ \
   ,{  DEM_EXTDATA_ED_SET3, DEM_FREEZEFRAME_FF_SET3 }              /* Monitoring_22 */ \
   ,{  0u, 0u }                                                    /* Monitoring_23 */ \
   ,{  0u, 0u }                                                    /* Monitoring_24 */ \
   ,{  DEM_EXTDATA_ED_SET2, DEM_FREEZEFRAME_FF_SET2 }              /* Monitoring_25 */ \
   ,{  0u, 0u }                                                    /* Monitoring_26 */ \
   ,{  0u, 0u }                                                    /* Monitoring_27 */ \
   ,{  0u, 0u }                                                    /* Monitoring_28 */ \
   ,{  DEM_EXTDATA_ED_SET3, DEM_FREEZEFRAME_FF_SET3 }              /* Monitoring_29 */ \
   ,{  0u, 0u }                                                    /* Monitoring_30 */ \
   ,{  0u, 0u }                                                    /* Monitoring_31 */ \
   ,{  0u, 0u }                                                    /* Monitoring_32 */ \
}

/*------         Freeze frame        ,         Expanded Freeze frame -------------*/
#define DEM_CFG_J1939_ENVEVENTID2ENVDATA \
{ \
   { 0u,0u }                                                      /* DEM_EVENTID_INVALID */ \
   ,{  DEM_J1939_FREEZEFRAME_DEMJ1939FREEZEFRAMECLASS_SPNS, DEM_J1939_FREEZEFRAME_DEMJ1939FREEZEFRAMECLASS_1 }  /* Monitoring_01 */ \
   ,{  DEM_J1939_FREEZEFRAME_DEMJ1939FREEZEFRAMECLASS_SPNS, DEM_J1939_FREEZEFRAME_DEMJ1939FREEZEFRAMECLASS_1 }  /* Monitoring_02 */ \
   ,{  DEM_J1939_FREEZEFRAME_DEMJ1939FREEZEFRAMECLASS_SPNS, DEM_J1939_FREEZEFRAME_DEMJ1939FREEZEFRAMECLASS_1 }  /* Monitoring_03 */ \
   ,{  DEM_J1939_FREEZEFRAME_DEMJ1939FREEZEFRAMECLASS_SPNS, DEM_J1939_FREEZEFRAME_DEMJ1939FREEZEFRAMECLASS_1 }  /* Monitoring_04 */ \
   ,{  DEM_J1939_FREEZEFRAME_DEMJ1939FREEZEFRAMECLASS_SPNS, DEM_J1939_FREEZEFRAME_DEMJ1939FREEZEFRAMECLASS_1 }  /* Monitoring_05 */ \
   ,{  0u, 0u }                                                    /* Monitoring_06 */ \
   ,{  DEM_J1939_FREEZEFRAME_DEMJ1939FREEZEFRAMECLASS_SPNS, DEM_J1939_FREEZEFRAME_DEMJ1939FREEZEFRAMECLASS_1 }  /* Monitoring_07 */ \
   ,{  DEM_J1939_FREEZEFRAME_DEMJ1939FREEZEFRAMECLASS_SPNS, DEM_J1939_FREEZEFRAME_DEMJ1939FREEZEFRAMECLASS_1 }  /* Monitoring_08 */ \
   ,{  0u, 0u }                                                    /* Monitoring_09 */ \
   ,{  0u, 0u }                                                    /* Monitoring_10 */ \
   ,{  0u, 0u }                                                    /* Monitoring_11 */ \
   ,{  0u, 0u }                                                    /* Monitoring_12 */ \
   ,{  0u, 0u }                                                    /* Monitoring_13 */ \
   ,{  0u, 0u }                                                    /* Monitoring_14 */ \
   ,{  0u, 0u }                                                    /* Monitoring_15 */ \
   ,{  0u, 0u }                                                    /* Monitoring_16 */ \
   ,{  0u, 0u }                                                    /* Monitoring_17 */ \
   ,{  0u, 0u }                                                    /* Monitoring_18 */ \
   ,{  0u, 0u }                                                    /* Monitoring_19 */ \
   ,{  0u, 0u }                                                    /* Monitoring_20 */ \
   ,{  0u, 0u }                                                    /* Monitoring_21 */ \
   ,{  DEM_J1939_FREEZEFRAME_DEMJ1939FREEZEFRAMECLASS_SPNS, DEM_J1939_FREEZEFRAME_DEMJ1939FREEZEFRAMECLASS_1 }  /* Monitoring_22 */ \
   ,{  0u, 0u }                                                    /* Monitoring_23 */ \
   ,{  0u, 0u }                                                    /* Monitoring_24 */ \
   ,{  DEM_J1939_FREEZEFRAME_DEMJ1939FREEZEFRAMECLASS_SPNS, DEM_J1939_FREEZEFRAME_DEMJ1939FREEZEFRAMECLASS_1 }  /* Monitoring_25 */ \
   ,{  0u, 0u }                                                    /* Monitoring_26 */ \
   ,{  0u, 0u }                                                    /* Monitoring_27 */ \
   ,{  0u, 0u }                                                    /* Monitoring_28 */ \
   ,{  DEM_J1939_FREEZEFRAME_DEMJ1939FREEZEFRAMECLASS_SPNS, DEM_J1939_FREEZEFRAME_DEMJ1939FREEZEFRAMECLASS_1 }  /* Monitoring_29 */ \
   ,{  0u, 0u }                                                    /* Monitoring_30 */ \
   ,{  0u, 0u }                                                    /* Monitoring_31 */ \
   ,{  0u, 0u }                                                    /* Monitoring_32 */ \
}

#endif

