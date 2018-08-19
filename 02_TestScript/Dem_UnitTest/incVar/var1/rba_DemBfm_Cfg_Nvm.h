
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


#ifndef RBA_DEMBFM_CFG_NVM_H
#define RBA_DEMBFM_CFG_NVM_H

#include "rba_DemBfm_Cfg.h"

#include "Dem_Cfg_Nvm.h"



#define RBA_DEMBFM_NVM_RECORDS \
		DEM_NVM_ID_BFM_RECORD_0,\
		DEM_NVM_ID_BFM_RECORD_1,\
		DEM_NVM_ID_BFM_RECORD_2,\
		DEM_NVM_ID_BFM_RECORD_3,\
		DEM_NVM_ID_BFM_RECORD_4,\
		DEM_NVM_ID_BFM_RECORD_5,\
		DEM_NVM_ID_BFM_RECORD_6,\
		DEM_NVM_ID_BFM_RECORD_7,\
		DEM_NVM_ID_BFM_RECORD_8,\
		DEM_NVM_ID_BFM_RECORD_9,\
		DEM_NVM_ID_BFM_RECORD_10,\
		DEM_NVM_ID_BFM_RECORD_11,\
		DEM_NVM_ID_BFM_RECORD_12,\
		DEM_NVM_ID_BFM_RECORD_13,\
		DEM_NVM_ID_BFM_RECORD_14,\
		DEM_NVM_ID_BFM_RECORD_15,\
		DEM_NVM_ID_BFM_RECORD_16,\
		DEM_NVM_ID_BFM_RECORD_17,\
		DEM_NVM_ID_BFM_RECORD_18,\
		DEM_NVM_ID_BFM_RECORD_19

#define RBA_DEMBFM_AMOUNT_NVM_RECORDS  20u

#define RBA_DEMBFM_AMOUNT_NVM_COUNTERS  1u
#define RBA_DEMBFM_AMOUNT_NVM_MANAGEMENT_DATA  1u


//For Extended debug data Record


#define RBA_DEMBFM_EXT_NVM_RECORDS \
		DEM_NVM_ID_BFM_EXT_RECORD_0,\
		DEM_NVM_ID_BFM_EXT_RECORD_1,\
		DEM_NVM_ID_BFM_EXT_RECORD_2,\
		DEM_NVM_ID_BFM_EXT_RECORD_3,\
		DEM_NVM_ID_BFM_EXT_RECORD_4

#define RBA_DEMBFM_AMOUNT_NVM_EXT_RECORDS  5u




//provide callback functions for readAll/writeAll NvM with BFM records array
#define DEM_START_SEC_ROM_CODE
#include "Dem_Cfg_MemMap.h"
//DEM_NVM_ID_BFM_RECORD_0
Std_ReturnType rba_DemBfm_NvmReadRamBlockFromNvmCallback0(void* NvMBuffer);
Std_ReturnType rba_DemBfm_NvmWriteRamBlockToNvmCallback0(void* NvMBuffer);
//DEM_NVM_ID_BFM_RECORD_1
Std_ReturnType rba_DemBfm_NvmReadRamBlockFromNvmCallback1(void* NvMBuffer);
Std_ReturnType rba_DemBfm_NvmWriteRamBlockToNvmCallback1(void* NvMBuffer);
//DEM_NVM_ID_BFM_RECORD_10
Std_ReturnType rba_DemBfm_NvmReadRamBlockFromNvmCallback2(void* NvMBuffer);
Std_ReturnType rba_DemBfm_NvmWriteRamBlockToNvmCallback2(void* NvMBuffer);
//DEM_NVM_ID_BFM_RECORD_11
Std_ReturnType rba_DemBfm_NvmReadRamBlockFromNvmCallback3(void* NvMBuffer);
Std_ReturnType rba_DemBfm_NvmWriteRamBlockToNvmCallback3(void* NvMBuffer);
//DEM_NVM_ID_BFM_RECORD_12
Std_ReturnType rba_DemBfm_NvmReadRamBlockFromNvmCallback4(void* NvMBuffer);
Std_ReturnType rba_DemBfm_NvmWriteRamBlockToNvmCallback4(void* NvMBuffer);
//DEM_NVM_ID_BFM_RECORD_13
Std_ReturnType rba_DemBfm_NvmReadRamBlockFromNvmCallback5(void* NvMBuffer);
Std_ReturnType rba_DemBfm_NvmWriteRamBlockToNvmCallback5(void* NvMBuffer);
//DEM_NVM_ID_BFM_RECORD_14
Std_ReturnType rba_DemBfm_NvmReadRamBlockFromNvmCallback6(void* NvMBuffer);
Std_ReturnType rba_DemBfm_NvmWriteRamBlockToNvmCallback6(void* NvMBuffer);
//DEM_NVM_ID_BFM_RECORD_15
Std_ReturnType rba_DemBfm_NvmReadRamBlockFromNvmCallback7(void* NvMBuffer);
Std_ReturnType rba_DemBfm_NvmWriteRamBlockToNvmCallback7(void* NvMBuffer);
//DEM_NVM_ID_BFM_RECORD_16
Std_ReturnType rba_DemBfm_NvmReadRamBlockFromNvmCallback8(void* NvMBuffer);
Std_ReturnType rba_DemBfm_NvmWriteRamBlockToNvmCallback8(void* NvMBuffer);
//DEM_NVM_ID_BFM_RECORD_17
Std_ReturnType rba_DemBfm_NvmReadRamBlockFromNvmCallback9(void* NvMBuffer);
Std_ReturnType rba_DemBfm_NvmWriteRamBlockToNvmCallback9(void* NvMBuffer);
//DEM_NVM_ID_BFM_RECORD_18
Std_ReturnType rba_DemBfm_NvmReadRamBlockFromNvmCallback10(void* NvMBuffer);
Std_ReturnType rba_DemBfm_NvmWriteRamBlockToNvmCallback10(void* NvMBuffer);
//DEM_NVM_ID_BFM_RECORD_19
Std_ReturnType rba_DemBfm_NvmReadRamBlockFromNvmCallback11(void* NvMBuffer);
Std_ReturnType rba_DemBfm_NvmWriteRamBlockToNvmCallback11(void* NvMBuffer);
//DEM_NVM_ID_BFM_RECORD_2
Std_ReturnType rba_DemBfm_NvmReadRamBlockFromNvmCallback12(void* NvMBuffer);
Std_ReturnType rba_DemBfm_NvmWriteRamBlockToNvmCallback12(void* NvMBuffer);
//DEM_NVM_ID_BFM_RECORD_3
Std_ReturnType rba_DemBfm_NvmReadRamBlockFromNvmCallback13(void* NvMBuffer);
Std_ReturnType rba_DemBfm_NvmWriteRamBlockToNvmCallback13(void* NvMBuffer);
//DEM_NVM_ID_BFM_RECORD_4
Std_ReturnType rba_DemBfm_NvmReadRamBlockFromNvmCallback14(void* NvMBuffer);
Std_ReturnType rba_DemBfm_NvmWriteRamBlockToNvmCallback14(void* NvMBuffer);
//DEM_NVM_ID_BFM_RECORD_5
Std_ReturnType rba_DemBfm_NvmReadRamBlockFromNvmCallback15(void* NvMBuffer);
Std_ReturnType rba_DemBfm_NvmWriteRamBlockToNvmCallback15(void* NvMBuffer);
//DEM_NVM_ID_BFM_RECORD_6
Std_ReturnType rba_DemBfm_NvmReadRamBlockFromNvmCallback16(void* NvMBuffer);
Std_ReturnType rba_DemBfm_NvmWriteRamBlockToNvmCallback16(void* NvMBuffer);
//DEM_NVM_ID_BFM_RECORD_7
Std_ReturnType rba_DemBfm_NvmReadRamBlockFromNvmCallback17(void* NvMBuffer);
Std_ReturnType rba_DemBfm_NvmWriteRamBlockToNvmCallback17(void* NvMBuffer);
//DEM_NVM_ID_BFM_RECORD_8
Std_ReturnType rba_DemBfm_NvmReadRamBlockFromNvmCallback18(void* NvMBuffer);
Std_ReturnType rba_DemBfm_NvmWriteRamBlockToNvmCallback18(void* NvMBuffer);
//DEM_NVM_ID_BFM_RECORD_9
Std_ReturnType rba_DemBfm_NvmReadRamBlockFromNvmCallback19(void* NvMBuffer);
Std_ReturnType rba_DemBfm_NvmWriteRamBlockToNvmCallback19(void* NvMBuffer);



#if(RBA_DEMBFM_EXTENDED_DEBUG_DATA_SUPPORTED == DEM_BFM_ON)

//DEM_NVM_ID_BFM_EXT_RECORD_0
Std_ReturnType rba_DemBfm_NvmWriteExtDbgDataRamBlockToNvmCallback0( void* NvMBuffer);
Std_ReturnType rba_DemBfm_NvmReadExtDbgDataRamBlockFromNvmCallback0(void* NvMBuffer);
//DEM_NVM_ID_BFM_EXT_RECORD_1
Std_ReturnType rba_DemBfm_NvmWriteExtDbgDataRamBlockToNvmCallback1( void* NvMBuffer);
Std_ReturnType rba_DemBfm_NvmReadExtDbgDataRamBlockFromNvmCallback1(void* NvMBuffer);
//DEM_NVM_ID_BFM_EXT_RECORD_2
Std_ReturnType rba_DemBfm_NvmWriteExtDbgDataRamBlockToNvmCallback2( void* NvMBuffer);
Std_ReturnType rba_DemBfm_NvmReadExtDbgDataRamBlockFromNvmCallback2(void* NvMBuffer);
//DEM_NVM_ID_BFM_EXT_RECORD_3
Std_ReturnType rba_DemBfm_NvmWriteExtDbgDataRamBlockToNvmCallback3( void* NvMBuffer);
Std_ReturnType rba_DemBfm_NvmReadExtDbgDataRamBlockFromNvmCallback3(void* NvMBuffer);
//DEM_NVM_ID_BFM_EXT_RECORD_4
Std_ReturnType rba_DemBfm_NvmWriteExtDbgDataRamBlockToNvmCallback4( void* NvMBuffer);
Std_ReturnType rba_DemBfm_NvmReadExtDbgDataRamBlockFromNvmCallback4(void* NvMBuffer);

#endif


#define DEM_STOP_SEC_ROM_CODE
#include "Dem_Cfg_MemMap.h"

#ifdef DEM_TESTSUITE

#define RBA_DEMBFM_NVM_READALL_WRITEALL_CALLBACK_FUNCTIONS \
    {rba_DemBfm_NvmReadRamBlockFromNvmCallback0,rba_DemBfm_NvmWriteRamBlockToNvmCallback0},\
    {rba_DemBfm_NvmReadRamBlockFromNvmCallback1,rba_DemBfm_NvmWriteRamBlockToNvmCallback1},\
    {rba_DemBfm_NvmReadRamBlockFromNvmCallback2,rba_DemBfm_NvmWriteRamBlockToNvmCallback2},\
    {rba_DemBfm_NvmReadRamBlockFromNvmCallback3,rba_DemBfm_NvmWriteRamBlockToNvmCallback3},\
    {rba_DemBfm_NvmReadRamBlockFromNvmCallback4,rba_DemBfm_NvmWriteRamBlockToNvmCallback4},\
    {rba_DemBfm_NvmReadRamBlockFromNvmCallback5,rba_DemBfm_NvmWriteRamBlockToNvmCallback5},\
    {rba_DemBfm_NvmReadRamBlockFromNvmCallback6,rba_DemBfm_NvmWriteRamBlockToNvmCallback6},\
    {rba_DemBfm_NvmReadRamBlockFromNvmCallback7,rba_DemBfm_NvmWriteRamBlockToNvmCallback7},\
    {rba_DemBfm_NvmReadRamBlockFromNvmCallback8,rba_DemBfm_NvmWriteRamBlockToNvmCallback8},\
    {rba_DemBfm_NvmReadRamBlockFromNvmCallback9,rba_DemBfm_NvmWriteRamBlockToNvmCallback9},\
    {rba_DemBfm_NvmReadRamBlockFromNvmCallback10,rba_DemBfm_NvmWriteRamBlockToNvmCallback10},\
    {rba_DemBfm_NvmReadRamBlockFromNvmCallback11,rba_DemBfm_NvmWriteRamBlockToNvmCallback11},\
    {rba_DemBfm_NvmReadRamBlockFromNvmCallback12,rba_DemBfm_NvmWriteRamBlockToNvmCallback12},\
    {rba_DemBfm_NvmReadRamBlockFromNvmCallback13,rba_DemBfm_NvmWriteRamBlockToNvmCallback13},\
    {rba_DemBfm_NvmReadRamBlockFromNvmCallback14,rba_DemBfm_NvmWriteRamBlockToNvmCallback14},\
    {rba_DemBfm_NvmReadRamBlockFromNvmCallback15,rba_DemBfm_NvmWriteRamBlockToNvmCallback15},\
    {rba_DemBfm_NvmReadRamBlockFromNvmCallback16,rba_DemBfm_NvmWriteRamBlockToNvmCallback16},\
    {rba_DemBfm_NvmReadRamBlockFromNvmCallback17,rba_DemBfm_NvmWriteRamBlockToNvmCallback17},\
    {rba_DemBfm_NvmReadRamBlockFromNvmCallback18,rba_DemBfm_NvmWriteRamBlockToNvmCallback18},\
    {rba_DemBfm_NvmReadRamBlockFromNvmCallback19,rba_DemBfm_NvmWriteRamBlockToNvmCallback19},\\
    {rba_DemBfm_NvmReadManagementDataRamBlockFromNvmCallback,rba_DemBfm_NvmWriteManagementDataRamBlockToNvmCallback},\\
    {rba_DemBfm_NvmReadCounterDataRamBlockFromNvmCallback,rba_DemBfm_NvmWriteCounterDataRamBlockToNvmCallback}\\



#if(RBA_DEMBFM_EXTENDED_DEBUG_DATA_SUPPORTED == DEM_BFM_ON)
#define RBA_DEMBFM_NVM_EXTENDED_READALL_WRITEALL_CALLBACK_FUNCTIONS \
	{rba_DemBfm_NvmReadExtDbgDataRamBlockFromNvmCallback0,rba_DemBfm_NvmWriteExtDbgDataRamBlockToNvmCallback0},\
	{rba_DemBfm_NvmReadExtDbgDataRamBlockFromNvmCallback1,rba_DemBfm_NvmWriteExtDbgDataRamBlockToNvmCallback1},\
	{rba_DemBfm_NvmReadExtDbgDataRamBlockFromNvmCallback2,rba_DemBfm_NvmWriteExtDbgDataRamBlockToNvmCallback2},\
	{rba_DemBfm_NvmReadExtDbgDataRamBlockFromNvmCallback3,rba_DemBfm_NvmWriteExtDbgDataRamBlockToNvmCallback3},\
	{rba_DemBfm_NvmReadExtDbgDataRamBlockFromNvmCallback4,rba_DemBfm_NvmWriteExtDbgDataRamBlockToNvmCallback4}
#endif

#endif


#endif
