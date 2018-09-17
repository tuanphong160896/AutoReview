
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


#ifndef RBA_DEMBFM_CFG_H
#define RBA_DEMBFM_CFG_H

#include "Std_Types.h"
#include "Dem_Cfg.h"
#include "Dem_Cfg_Main.h"




#define RBA_DEMBFM_TASK                      DEM_MAIN_CYCLETIME
#define RBA_DEMBFM_AMOUNT_RECORDS            20u


#define RBA_DEMBFM_BUFFER_DATA_ELEMENTS_AMOUNT 11u

//{uint8 envDataElementIndex, uint16 offset}
#define RBA_DEMBFM_BUFFER_DATA_ELEMENTS_CONFIGURATION \
		{DEM_DATAELEM_BFM_ABSOLUTEOPERATINGTIME, 0u},\
		{DEM_DATAELEM_BFM_OPERATIONCYCLE, 4u},\
		{DEM_DATAELEM_BFM_RELATIVEOPERATINGTIME, 8u},\
		{DEM_DATAELEM_BFM_UNIQUEEVENTID, 12u},\
		{DEM_DATAELEM_DEBUG0, 14u},\
		{DEM_DATAELEM_DEBUG1, 18u},\
		{DEM_DATAELEM_DEMEVENTSTATUS, 22u},\
		{DEM_DATAELEM_MILAGE, 23u},\
		{DEM_DATAELEM_STUBBED_ENGINETEMPERATURE, 26u},\
		{DEM_DATAELEM_STUBBED_TORQUE, 27u},\
		{DEM_DATAELEM_STUBBED_VEHICLESPEED, 32u}

#define RBA_DEMBFM_BUFFER_DATA_ELEMENTS_SIZE  35u



#define RBA_DEMBFM_CUSTOM_DATA_AMOUNT 14u

//{uint8 bufferIndex, uint16 offset}
#define RBA_DEMBFM_CUSTOM_DATA_CONFIGURATION \
		{4u, 0u} /*DEM_DATAELEM_DEBUG0*/,\
		{5u, 4u} /*DEM_DATAELEM_DEBUG1*/,\
		{1u, 8u} /*DEM_DATAELEM_BFM_OPERATIONCYCLE*/,\
		{1u, 12u} /*DEM_DATAELEM_BFM_OPERATIONCYCLE*/,\
		{0u, 16u} /*DEM_DATAELEM_BFM_ABSOLUTEOPERATINGTIME*/,\
		{2u, 20u} /*DEM_DATAELEM_BFM_RELATIVEOPERATINGTIME*/,\
		{3u, 24u} /*DEM_DATAELEM_BFM_UNIQUEEVENTID*/,\
		{7u, 26u} /*DEM_DATAELEM_MILAGE*/,\
		{10u, 29u} /*DEM_DATAELEM_STUBBED_VEHICLESPEED*/,\
		{10u, 32u} /*DEM_DATAELEM_STUBBED_VEHICLESPEED*/,\
		{8u, 35u} /*DEM_DATAELEM_STUBBED_ENGINETEMPERATURE*/,\
		{8u, 36u} /*DEM_DATAELEM_STUBBED_ENGINETEMPERATURE*/,\
		{9u, 37u} /*DEM_DATAELEM_STUBBED_TORQUE*/,\
		{6u, 42u} /*DEM_DATAELEM_DEMEVENTSTATUS*/

#define RBA_DEMBFM_CUSTOM_DATA_SIZE  43u


#define	RBA_DEMBFM_IS_OPERATIONCYCLE_REFERENCED DEM_BFM_ON
#define RBA_DEMBFM_AMOUNT_OPERATIONCYCLE_ELEMENTS 2u
#define RBA_DEMBFM_OPERATIONCYCLE_ELEMENTS_CONFIGURATION \
{2u,3u}


#define	RBA_DEMBFM_IS_ABS_OPERATINGTIME_REFERENCED DEM_BFM_ON
#define RBA_DEMBFM_AMOUNT_ABSOLUTE_OPERATINGTIME_ELEMENTS 1u
#define RBA_DEMBFM_ABSOLUTE_OPERATINGTIME_ELEMENTS_CONFIGURATION \
{4u}



#define RBA_DEMBFM_CUSTOM_DATA_DemBfmRecordStructure_00  0u
#define RBA_DEMBFM_CUSTOM_DATA_DemBfmRecordStructure_01  4u
#define RBA_DEMBFM_CUSTOM_DATA_DemBfmRecordStructure_02  8u
#define RBA_DEMBFM_CUSTOM_DATA_DemBfmRecordStructure_03  12u
#define RBA_DEMBFM_CUSTOM_DATA_DemBfmRecordStructure_04  16u
#define RBA_DEMBFM_CUSTOM_DATA_DemBfmRecordStructure_05  20u
#define RBA_DEMBFM_CUSTOM_DATA_DemBfmRecordStructure_06  24u
#define RBA_DEMBFM_CUSTOM_DATA_DemBfmRecordStructure_07  26u
#define RBA_DEMBFM_CUSTOM_DATA_DemBfmRecordStructure_08  29u
#define RBA_DEMBFM_CUSTOM_DATA_DemBfmRecordStructure_09  32u
#define RBA_DEMBFM_CUSTOM_DATA_DemBfmRecordStructure_10  35u
#define RBA_DEMBFM_CUSTOM_DATA_DemBfmRecordStructure_11  36u
#define RBA_DEMBFM_CUSTOM_DATA_DemBfmRecordStructure_12  37u
#define RBA_DEMBFM_CUSTOM_DATA_DemBfmRecordStructure_13  42u




#define RBA_DEMBFM_OPERATION_CYCLE_TYPE DemConf_DemOperationCycle_PowerCycle




#define RBA_DEMBFM_CALLBACK_DELETE_RECORD  DEM_BFM_OFF
#define RBA_DEMBFM_CALLBACK_FUNCTION_DELETE_ALLOWED  NULL_PTR





#define RBA_DEMBFM_CALLBACK_MODIFY_LOCKED  DEM_BFM_OFF
#define RBA_DEMBFM_CALLBACK_FUNCTION_MODIFY_LOCKED_ALLOWED  NULL_PTR





#define RBA_DEMBFM_CALLBACK_REPLACE_RECORD  DEM_BFM_OFF
#define RBA_DEMBFM_CALLBACK_FUNCTION_REPLACE_RECORD_LOGIC  NULL_PTR



#define RBA_DEMBFM_ENABLE_DIRECT_ACCESS_INTERFACE  DEM_BFM_ON

#define RBA_DEMBFM_OCCURRENCE_COUNTER DEM_BFM_ON

#define RBA_DEMBFM_EVENTCATEGORY_PRIORITY_SUPPORTED DEM_CATPRIO_OFF

#define RBA_DEMBFM_COUNTER_IN_NVM_ENABLED DEM_BFM_ON

#define RBA_DEMBFM_BFMRECORD_IMMEDIATE_STORAGE_LIMIT_SUPPORTED  DEM_BFM_OFF

#define RBA_DEMBFM_BFMRECORD_IMMEDIATE_STORAGE_LIMIT  0

#define RBA_DEMBFM_UPDATE_NVM_ONLY_ON_DATA_CHANGE             DEM_BFM_ON



#define RBA_DEMBFM_UNIQUEID  DEM_BFM_ON
#define RBA_DEMBFM_UNIQUEID_SIZE  2u
#define RBA_DEMBFM_UNIQUEID_MAX   0xFFFFu

#define RBA_DEMBFM_EVENT_UNIQUE_ID_MAPPING \
		{DemConf_DemEventParameter_Monitoring_10, (rba_DemBfm_UniqueIdDataType)2069u },\
		{DemConf_DemEventParameter_Monitoring_20, (rba_DemBfm_UniqueIdDataType)17185u }

#define RBA_DEMBFM_EVENT_UNIQUE_ID_MAPPING_SIZE 2u


//Extended debug data record
#define RBA_DEMBFM_EXTENDED_DEBUG_DATA_SUPPORTED  DEM_BFM_ON
#define RBA_DEMBFM_EXTENDED_DEBUG_DATA_AMOUNT_RECORDS  5u
#define RBA_DEMBFM_EXTENDED_DEBUG_DATA_ELEMENT_CALLBACK_FUNCTION  Rte_Call_CBReadData_VehicleSpeed_i_ReadData /*DEM_DATAELEM_VEHICLESPEED_A*/
#define RBA_DEMBFM_EXTENDED_DEBUG_DATA_ELEMENT_SIZE  1u





#endif
