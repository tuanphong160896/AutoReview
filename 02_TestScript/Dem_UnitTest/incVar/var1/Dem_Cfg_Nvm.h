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


#ifndef DEM_CFG_NVM_H
#define DEM_CFG_NVM_H


#define  DEM_NVM_ID_BFM_COUNTERS                  0u
#define  DEM_NVM_ID_BFM_EXT_RECORD_0              1u
#define  DEM_NVM_ID_BFM_EXT_RECORD_1              2u
#define  DEM_NVM_ID_BFM_EXT_RECORD_2              3u
#define  DEM_NVM_ID_BFM_EXT_RECORD_3              4u
#define  DEM_NVM_ID_BFM_EXT_RECORD_4              5u
#define  DEM_NVM_ID_BFM_MANAGEMENT_DATA           6u
#define  DEM_NVM_ID_BFM_RECORD_0                  7u
#define  DEM_NVM_ID_BFM_RECORD_1                  8u
#define  DEM_NVM_ID_BFM_RECORD_10                 9u
#define  DEM_NVM_ID_BFM_RECORD_11                 10u
#define  DEM_NVM_ID_BFM_RECORD_12                 11u
#define  DEM_NVM_ID_BFM_RECORD_13                 12u
#define  DEM_NVM_ID_BFM_RECORD_14                 13u
#define  DEM_NVM_ID_BFM_RECORD_15                 14u
#define  DEM_NVM_ID_BFM_RECORD_16                 15u
#define  DEM_NVM_ID_BFM_RECORD_17                 16u
#define  DEM_NVM_ID_BFM_RECORD_18                 17u
#define  DEM_NVM_ID_BFM_RECORD_19                 18u
#define  DEM_NVM_ID_BFM_RECORD_2                  19u
#define  DEM_NVM_ID_BFM_RECORD_3                  20u
#define  DEM_NVM_ID_BFM_RECORD_4                  21u
#define  DEM_NVM_ID_BFM_RECORD_5                  22u
#define  DEM_NVM_ID_BFM_RECORD_6                  23u
#define  DEM_NVM_ID_BFM_RECORD_7                  24u
#define  DEM_NVM_ID_BFM_RECORD_8                  25u
#define  DEM_NVM_ID_BFM_RECORD_9                  26u
#define  DEM_NVM_ID_DEM_GENERIC_NV_DATA           27u
#define  DEM_NVM_ID_EVMEM_LOC_0                   28u
#define  DEM_NVM_ID_EVMEM_LOC_1                   29u
#define  DEM_NVM_ID_EVMEM_LOC_10                  30u
#define  DEM_NVM_ID_EVMEM_LOC_11                  31u
#define  DEM_NVM_ID_EVMEM_LOC_2                   32u
#define  DEM_NVM_ID_EVMEM_LOC_3                   33u
#define  DEM_NVM_ID_EVMEM_LOC_4                   34u
#define  DEM_NVM_ID_EVMEM_LOC_5                   35u
#define  DEM_NVM_ID_EVMEM_LOC_6                   36u
#define  DEM_NVM_ID_EVMEM_LOC_7                   37u
#define  DEM_NVM_ID_EVMEM_LOC_8                   38u
#define  DEM_NVM_ID_EVMEM_LOC_9                   39u
#define  DEM_NVM_ID_INDICATOR_ATTRIBUTES          40u
#define  DEM_NVM_ID_DEM_HASH_ID                   41u
#define  DEM_NVM_ID_DISTURBANCE_MEMORY            42u
#define  DEM_NVM_ID_HISTORY_STATUS_BYTE           43u
#define  DEM_NVM_ID_EVT_STATUSBYTE                44u

#define  DEM_NVM_CFG_BLOCKID_TYPE                 uint8
#define  DEM_NVM_CFG_NUM_BLOCKS_TOTAL             45
#define  DEM_NVM_CFG_NUM_BLOCKS_EXTENDED          40

#define  DEM_NVM_CFG_NVM_BLOCK_IDS                \
{\
    NvMConf_NvMBlockDescriptor_NVM_ID_BFM_COUNTERS,\
    NvMConf_NvMBlockDescriptor_NVM_ID_BFM_EXT_RECORD_0,\
    NvMConf_NvMBlockDescriptor_NVM_ID_BFM_EXT_RECORD_1,\
    NvMConf_NvMBlockDescriptor_NVM_ID_BFM_EXT_RECORD_2,\
    NvMConf_NvMBlockDescriptor_NVM_ID_BFM_EXT_RECORD_3,\
    NvMConf_NvMBlockDescriptor_NVM_ID_BFM_EXT_RECORD_4,\
    NvMConf_NvMBlockDescriptor_NVM_ID_BFM_MANAGEMENT_DATA,\
    NvMConf_NvMBlockDescriptor_NVM_ID_BFM_RECORD_0,\
    NvMConf_NvMBlockDescriptor_NVM_ID_BFM_RECORD_1,\
    NvMConf_NvMBlockDescriptor_NVM_ID_BFM_RECORD_10,\
    NvMConf_NvMBlockDescriptor_NVM_ID_BFM_RECORD_11,\
    NvMConf_NvMBlockDescriptor_NVM_ID_BFM_RECORD_12,\
    NvMConf_NvMBlockDescriptor_NVM_ID_BFM_RECORD_13,\
    NvMConf_NvMBlockDescriptor_NVM_ID_BFM_RECORD_14,\
    NvMConf_NvMBlockDescriptor_NVM_ID_BFM_RECORD_15,\
    NvMConf_NvMBlockDescriptor_NVM_ID_BFM_RECORD_16,\
    NvMConf_NvMBlockDescriptor_NVM_ID_BFM_RECORD_17,\
    NvMConf_NvMBlockDescriptor_NVM_ID_BFM_RECORD_18,\
    NvMConf_NvMBlockDescriptor_NVM_ID_BFM_RECORD_19,\
    NvMConf_NvMBlockDescriptor_NVM_ID_BFM_RECORD_2,\
    NvMConf_NvMBlockDescriptor_NVM_ID_BFM_RECORD_3,\
    NvMConf_NvMBlockDescriptor_NVM_ID_BFM_RECORD_4,\
    NvMConf_NvMBlockDescriptor_NVM_ID_BFM_RECORD_5,\
    NvMConf_NvMBlockDescriptor_NVM_ID_BFM_RECORD_6,\
    NvMConf_NvMBlockDescriptor_NVM_ID_BFM_RECORD_7,\
    NvMConf_NvMBlockDescriptor_NVM_ID_BFM_RECORD_8,\
    NvMConf_NvMBlockDescriptor_NVM_ID_BFM_RECORD_9,\
    NvMConf_NvMBlockDescriptor_NVM_ID_DEM_GENERIC_NV_DATA,\
    NvMConf_NvMBlockDescriptor_NVM_ID_EVMEM_LOC_0,\
    NvMConf_NvMBlockDescriptor_NVM_ID_EVMEM_LOC_1,\
    NvMConf_NvMBlockDescriptor_NVM_ID_EVMEM_LOC_10,\
    NvMConf_NvMBlockDescriptor_NVM_ID_EVMEM_LOC_11,\
    NvMConf_NvMBlockDescriptor_NVM_ID_EVMEM_LOC_2,\
    NvMConf_NvMBlockDescriptor_NVM_ID_EVMEM_LOC_3,\
    NvMConf_NvMBlockDescriptor_NVM_ID_EVMEM_LOC_4,\
    NvMConf_NvMBlockDescriptor_NVM_ID_EVMEM_LOC_5,\
    NvMConf_NvMBlockDescriptor_NVM_ID_EVMEM_LOC_6,\
    NvMConf_NvMBlockDescriptor_NVM_ID_EVMEM_LOC_7,\
    NvMConf_NvMBlockDescriptor_NVM_ID_EVMEM_LOC_8,\
    NvMConf_NvMBlockDescriptor_NVM_ID_EVMEM_LOC_9,\
    NvMConf_NvMBlockDescriptor_NVM_ID_INDICATOR_ATTRIBUTES,\
    NvMConf_NvMBlockDescriptor_NVM_ID_DEM_HASH_ID,\
    NvMConf_NvMBlockDescriptor_NVM_ID_DISTURBANCE_MEMORY,\
    NvMConf_NvMBlockDescriptor_NVM_ID_HISTORY_STATUS_BYTE,\
    NvMConf_NvMBlockDescriptor_NVM_ID_EVT_STATUSBYTE\
}

#define  DEM_NVM_CFG_BLOCKS_EXTENDED              \
{\
    {&rba_DemBfm_CounterValuesNvm, DEM_SIZEOF_TYPE(rba_DemBfm_CounterNvm), DEM_CFG_COPY_FCT_ID_BFM_CNT},\
    {&mbfmExtDbgDataRam[0], DEM_SIZEOF_TYPE(rba_DemBfm_ExtendedDebugDataRecord), DEM_CFG_COPY_FCT_ID_MEMCOPY},\
    {&mbfmExtDbgDataRam[1], DEM_SIZEOF_TYPE(rba_DemBfm_ExtendedDebugDataRecord), DEM_CFG_COPY_FCT_ID_MEMCOPY},\
    {&mbfmExtDbgDataRam[2], DEM_SIZEOF_TYPE(rba_DemBfm_ExtendedDebugDataRecord), DEM_CFG_COPY_FCT_ID_MEMCOPY},\
    {&mbfmExtDbgDataRam[3], DEM_SIZEOF_TYPE(rba_DemBfm_ExtendedDebugDataRecord), DEM_CFG_COPY_FCT_ID_MEMCOPY},\
    {&mbfmExtDbgDataRam[4], DEM_SIZEOF_TYPE(rba_DemBfm_ExtendedDebugDataRecord), DEM_CFG_COPY_FCT_ID_MEMCOPY},\
    {&rba_DemBfm_RecordManagementDataValuesNvm, DEM_SIZEOF_TYPE(rba_DemBfm_RecordManagementDataNvm), DEM_CFG_COPY_FCT_ID_MEMCOPY},\
    {&mBfmRecords[0], DEM_SIZEOF_TYPE(rba_DemBfm_Record), DEM_CFG_COPY_FCT_ID_BFM_RC},\
    {&mBfmRecords[1], DEM_SIZEOF_TYPE(rba_DemBfm_Record), DEM_CFG_COPY_FCT_ID_BFM_RC},\
    {&mBfmRecords[10], DEM_SIZEOF_TYPE(rba_DemBfm_Record), DEM_CFG_COPY_FCT_ID_BFM_RC},\
    {&mBfmRecords[11], DEM_SIZEOF_TYPE(rba_DemBfm_Record), DEM_CFG_COPY_FCT_ID_BFM_RC},\
    {&mBfmRecords[12], DEM_SIZEOF_TYPE(rba_DemBfm_Record), DEM_CFG_COPY_FCT_ID_BFM_RC},\
    {&mBfmRecords[13], DEM_SIZEOF_TYPE(rba_DemBfm_Record), DEM_CFG_COPY_FCT_ID_BFM_RC},\
    {&mBfmRecords[14], DEM_SIZEOF_TYPE(rba_DemBfm_Record), DEM_CFG_COPY_FCT_ID_BFM_RC},\
    {&mBfmRecords[15], DEM_SIZEOF_TYPE(rba_DemBfm_Record), DEM_CFG_COPY_FCT_ID_BFM_RC},\
    {&mBfmRecords[16], DEM_SIZEOF_TYPE(rba_DemBfm_Record), DEM_CFG_COPY_FCT_ID_BFM_RC},\
    {&mBfmRecords[17], DEM_SIZEOF_TYPE(rba_DemBfm_Record), DEM_CFG_COPY_FCT_ID_BFM_RC},\
    {&mBfmRecords[18], DEM_SIZEOF_TYPE(rba_DemBfm_Record), DEM_CFG_COPY_FCT_ID_BFM_RC},\
    {&mBfmRecords[19], DEM_SIZEOF_TYPE(rba_DemBfm_Record), DEM_CFG_COPY_FCT_ID_BFM_RC},\
    {&mBfmRecords[2], DEM_SIZEOF_TYPE(rba_DemBfm_Record), DEM_CFG_COPY_FCT_ID_BFM_RC},\
    {&mBfmRecords[3], DEM_SIZEOF_TYPE(rba_DemBfm_Record), DEM_CFG_COPY_FCT_ID_BFM_RC},\
    {&mBfmRecords[4], DEM_SIZEOF_TYPE(rba_DemBfm_Record), DEM_CFG_COPY_FCT_ID_BFM_RC},\
    {&mBfmRecords[5], DEM_SIZEOF_TYPE(rba_DemBfm_Record), DEM_CFG_COPY_FCT_ID_BFM_RC},\
    {&mBfmRecords[6], DEM_SIZEOF_TYPE(rba_DemBfm_Record), DEM_CFG_COPY_FCT_ID_BFM_RC},\
    {&mBfmRecords[7], DEM_SIZEOF_TYPE(rba_DemBfm_Record), DEM_CFG_COPY_FCT_ID_BFM_RC},\
    {&mBfmRecords[8], DEM_SIZEOF_TYPE(rba_DemBfm_Record), DEM_CFG_COPY_FCT_ID_BFM_RC},\
    {&mBfmRecords[9], DEM_SIZEOF_TYPE(rba_DemBfm_Record), DEM_CFG_COPY_FCT_ID_BFM_RC},\
    {&Dem_GenericNvData, DEM_SIZEOF_VAR(Dem_GenericNvData), DEM_CFG_COPY_FCT_ID_MEMCOPY},\
    {&Dem_EvMemEventMemory[0], DEM_SIZEOF_TYPE(Dem_EvMemEventMemoryType), DEM_CFG_COPY_FCT_ID_MEMCOPY},\
    {&Dem_EvMemEventMemory[1], DEM_SIZEOF_TYPE(Dem_EvMemEventMemoryType), DEM_CFG_COPY_FCT_ID_MEMCOPY},\
    {&Dem_EvMemEventMemory[10], DEM_SIZEOF_TYPE(Dem_EvMemEventMemoryType), DEM_CFG_COPY_FCT_ID_MEMCOPY},\
    {&Dem_EvMemEventMemory[11], DEM_SIZEOF_TYPE(Dem_EvMemEventMemoryType), DEM_CFG_COPY_FCT_ID_MEMCOPY},\
    {&Dem_EvMemEventMemory[2], DEM_SIZEOF_TYPE(Dem_EvMemEventMemoryType), DEM_CFG_COPY_FCT_ID_MEMCOPY},\
    {&Dem_EvMemEventMemory[3], DEM_SIZEOF_TYPE(Dem_EvMemEventMemoryType), DEM_CFG_COPY_FCT_ID_MEMCOPY},\
    {&Dem_EvMemEventMemory[4], DEM_SIZEOF_TYPE(Dem_EvMemEventMemoryType), DEM_CFG_COPY_FCT_ID_MEMCOPY},\
    {&Dem_EvMemEventMemory[5], DEM_SIZEOF_TYPE(Dem_EvMemEventMemoryType), DEM_CFG_COPY_FCT_ID_MEMCOPY},\
    {&Dem_EvMemEventMemory[6], DEM_SIZEOF_TYPE(Dem_EvMemEventMemoryType), DEM_CFG_COPY_FCT_ID_MEMCOPY},\
    {&Dem_EvMemEventMemory[7], DEM_SIZEOF_TYPE(Dem_EvMemEventMemoryType), DEM_CFG_COPY_FCT_ID_MEMCOPY},\
    {&Dem_EvMemEventMemory[8], DEM_SIZEOF_TYPE(Dem_EvMemEventMemoryType), DEM_CFG_COPY_FCT_ID_MEMCOPY},\
    {&Dem_EvMemEventMemory[9], DEM_SIZEOF_TYPE(Dem_EvMemEventMemoryType), DEM_CFG_COPY_FCT_ID_MEMCOPY}\
}


#define  DEM_NVM_CFG_NUM_STORAGEBUFFER            10

#define  DEM_NVM_HASH_ID_SIZE                     20

#define  DEM_HASH_ID_ROM                          \
{\
    0xff,\
    0x88,\
    0xb0,\
    0x9e,\
    0x04,\
    0xa2,\
    0x75,\
    0x3d,\
    0xbb,\
    0x8c,\
    0x41,\
    0xc2,\
    0x4f,\
    0x89,\
    0x8d,\
    0x21,\
    0xc1,\
    0xa9,\
    0xf9,\
    0xd3\
}

/* 2 block types supported: normal Dem and Bfm Record */
#define DEM_CFG_COPY_FCT_ID_MEMCOPY           0   /* normal mem copy*/
#define DEM_CFG_COPY_FCT_ID_BFM_RC            1   /* bfm record encoding copy  */
#define DEM_CFG_COPY_FCT_ID_BFM_CNT           2   /* bfm counter encoding copy */



#define DEM_NVM_CFG_COPYFCT_NUM  3 

#define DEM_NVM_CFG_COPYFCT_INIT  { (&Dem_NvMNormalMemCopy) ,(&rba_DemBfm_RecordEncodeBytes_MemCpySyntax),(&rba_DemBfm_CounterEncodeBytes_MemCpySyntax)  }




#endif


