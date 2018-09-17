/*<BASDKey>
 **********************************************************************************************************************
 *
 * COPYRIGHT RESERVED, Robert Bosch GmbH, 2012. All rights reserved.
 * The reproduction, distribution and utilization of this document as well as the communication of its contents to
 * others without explicit authorization is prohibited. Offenders will be held liable for the payment of damages.
 * All rights reserved in the event of the grant of a patent, utility model or design.
 *
 **********************************************************************************************************************
 * Administrative Information (automatically filled in)
 * $Domain____:$
 * $Namespace_:$
 * $Class_____:$
 * $Name______:$
 * $Variant___:$
 * $Revision__:$
 **********************************************************************************************************************
</BASDKey>*/


#ifndef NVM_H
#define NVM_H


#include "std_types.h"

typedef uint16 NvM_BlockIdType;
typedef uint8  NvM_RequestResultType;


#define NvMConf_NvMBlockDescriptor_NVM_BLOCKDESCRIPTOR_TFSLC                   1
#define NvMConf_NvMBlockDescriptor_NVM_BLOCKDESCRIPTOR_TCSLC                   2
#define NvMConf_NvMBlockDescriptor_NVM_BLOCKDESCRIPTOR_FLMR                    3
#define NvMConf_NvMBlockDescriptor_NVM_BLOCKDESCRIPTOR_EVT_TFSLC               300
#define NvMConf_NvMBlockDescriptor_NVM_BLOCKDESCRIPTOR_EVT_STATUSBYTE          301
#define NvMConf_NvMBlockDescriptor_NVM_BLOCKDESCRIPTOR_FAILURESTATESTORAGE     4
#define NvMConf_NvMBlockDescriptor_NVM_ID_EVMEM_LOC_0                          5
#define NvMConf_NvMBlockDescriptor_NVM_ID_EVMEM_LOC_1                          6
#define NvMConf_NvMBlockDescriptor_NVM_ID_EVMEM_LOC_2                          7
#define NvMConf_NvMBlockDescriptor_NVM_ID_EVMEM_LOC_3                          8
#define NvMConf_NvMBlockDescriptor_NVM_ID_EVMEM_LOC_4                          9
#define NvMConf_NvMBlockDescriptor_NVM_ID_EVMEM_LOC_5                          10
#define NvMConf_NvMBlockDescriptor_NVM_ID_EVMEM_LOC_6                          11
#define NvMConf_NvMBlockDescriptor_NVM_ID_EVMEM_LOC_7                          12
#define NvMConf_NvMBlockDescriptor_NVM_ID_EVMEM_LOC_8                          13
#define NvMConf_NvMBlockDescriptor_NVM_ID_EVMEM_LOC_9                          14
#define NvMConf_NvMBlockDescriptor_NVM_ID_EVMEM_LOC_10                         15
#define NvMConf_NvMBlockDescriptor_NVM_ID_EVMEM_LOC_11                         16
#define NvMConf_NvMBlockDescriptor_NVM_ID_EVMEM_LOC_12                         17
#define NvMConf_NvMBlockDescriptor_NVM_ID_EVMEM_LOC_13                         18
#define NvMConf_NvMBlockDescriptor_NVM_ID_EVMEM_LOC_14                         19
#define NvMConf_NvMBlockDescriptor_NVM_ID_EVMEM_LOC_15                         20
#define NvMConf_NvMBlockDescriptor_NVM_ID_EVMEM_LOC_16                         21
#define NvMConf_NvMBlockDescriptor_NVM_ID_EVMEM_LOC_17                         22
#define NvMConf_NvMBlockDescriptor_NVM_ID_EVMEM_LOC_18                         23
#define NvMConf_NvMBlockDescriptor_NVM_ID_EVMEM_LOC_19                         24
#define NvMConf_NvMBlockDescriptor_NVM_ID_EVMEM_LOC_20                         25
#define NvMConf_NvMBlockDescriptor_NVM_ID_EVMEM_LOC_21                         26
#define NvMConf_NvMBlockDescriptor_NVM_ID_EVMEM_LOC_22                         27
#define NvMConf_NvMBlockDescriptor_NVM_ID_EVMEM_LOC_23                         28
#define NvMConf_NvMBlockDescriptor_NVM_ID_EVMEM_LOC_24                         29
#define NvMConf_NvMBlockDescriptor_NVM_ID_EVMEM_LOC_25                         30
#define NvMConf_NvMBlockDescriptor_NVM_ID_EVMEM_LOC_26                         31
#define NvMConf_NvMBlockDescriptor_NVM_ID_EVMEM_LOC_27                         32
#define NvMConf_NvMBlockDescriptor_NVM_ID_EVMEM_LOC_28                         33
#define NvMConf_NvMBlockDescriptor_NVM_ID_EVMEM_LOC_29                         34
#define NvMConf_NvMBlockDescriptor_NVM_ID_DISTURBANCE_MEMORY                   35
#define NvMConf_NvMBlockDescriptor_NVM_ID_EVT_STATUSBYTE                       36
#define NvMConf_NvMBlockDescriptor_NVM_ID_OBD_PERMANENT_MEMORY                 37
#define NvMConf_NvMBlockDescriptor_NVM_ID_DEM_GENERIC_NV_DATA                  38
#define NvMConf_NvMBlockDescriptor_NVM_ID_HISTORY_STATUS_BYTE                  39
#define NvMConf_NvMBlockDescriptor_NVM_ID_INDICATOR_ATTRIBUTES                 40
#define NvMConf_NvMBlockDescriptor_NVM_ID_PRESTORED_FREEZEFRAME_LOC_0          41
#define NvMConf_NvMBlockDescriptor_NVM_ID_PRESTORED_FREEZEFRAME_LOC_1          42
#define NvMConf_NvMBlockDescriptor_NVM_ID_OBDIUMPR_DATA                        43
#define NvMConf_NvMBlockDescriptor_NVM_ID_DEM_HASH_ID                          44

#define NvMConf_NvMBlockDescriptor_NVM_ID_BFM_RECORD_0          101
#define NvMConf_NvMBlockDescriptor_NVM_ID_BFM_RECORD_1          102
#define NvMConf_NvMBlockDescriptor_NVM_ID_BFM_RECORD_2          103
#define NvMConf_NvMBlockDescriptor_NVM_ID_BFM_RECORD_3          104
#define NvMConf_NvMBlockDescriptor_NVM_ID_BFM_RECORD_4          105
#define NvMConf_NvMBlockDescriptor_NVM_ID_BFM_RECORD_5          106
#define NvMConf_NvMBlockDescriptor_NVM_ID_BFM_RECORD_6          107
#define NvMConf_NvMBlockDescriptor_NVM_ID_BFM_RECORD_7          108
#define NvMConf_NvMBlockDescriptor_NVM_ID_BFM_RECORD_8          109
#define NvMConf_NvMBlockDescriptor_NVM_ID_BFM_RECORD_9          110
#define NvMConf_NvMBlockDescriptor_NVM_ID_BFM_RECORD_10         111
#define NvMConf_NvMBlockDescriptor_NVM_ID_BFM_RECORD_11         112
#define NvMConf_NvMBlockDescriptor_NVM_ID_BFM_RECORD_12         113
#define NvMConf_NvMBlockDescriptor_NVM_ID_BFM_RECORD_13         114
#define NvMConf_NvMBlockDescriptor_NVM_ID_BFM_RECORD_14         115
#define NvMConf_NvMBlockDescriptor_NVM_ID_BFM_RECORD_15         116
#define NvMConf_NvMBlockDescriptor_NVM_ID_BFM_RECORD_16         117
#define NvMConf_NvMBlockDescriptor_NVM_ID_BFM_RECORD_17         118
#define NvMConf_NvMBlockDescriptor_NVM_ID_BFM_RECORD_18         119
#define NvMConf_NvMBlockDescriptor_NVM_ID_BFM_RECORD_19         120
#define NvMConf_NvMBlockDescriptor_NVM_ID_BFM_COUNTERS          121
#define NvMConf_NvMBlockDescriptor_NVM_ID_BFM_MANAGEMENT_DATA   122
#define NvMConf_NvMBlockDescriptor_NVM_ID_BFM_EXT_RECORD_0      123
#define NvMConf_NvMBlockDescriptor_NVM_ID_BFM_EXT_RECORD_1      124
#define NvMConf_NvMBlockDescriptor_NVM_ID_BFM_EXT_RECORD_2      126
#define NvMConf_NvMBlockDescriptor_NVM_ID_BFM_EXT_RECORD_3      127
#define NvMConf_NvMBlockDescriptor_NVM_ID_BFM_EXT_RECORD_4      128

#define NVM_REQ_NOT_OK              0x01u
#define NVM_REQ_NV_INVALIDATED      0x05u
#define NVM_REQ_OK                  0x00u
#define NVM_REQ_PENDING             0x02u
#define NVM_REQ_REDUNDANCY_FAILED   0x07u
#define NVM_REQ_RESTORED_FROM_ROM   0x08u
#define NVM_REQ_BLOCK_SKIPPED       0x04u
#define NVM_REQ_CANCELED            0x06u
#define NVM_REQ_INTEGRITY_FAILED    0x03u

Std_ReturnType NvM_ReadBlock( NvM_BlockIdType BlockId, void* NvM_DstPtr );
Std_ReturnType NvM_WriteBlock (NvM_BlockIdType BlockId, void* NvM_SrcPtr);
Std_ReturnType NvM_EraseNvBlock( NvM_BlockIdType BlockId );
Std_ReturnType NvM_InvalidateNvBlock( NvM_BlockIdType BlockId );
Std_ReturnType NvM_SetRamBlockStatus (NvM_BlockIdType BlockId, boolean BlockChanged);
Std_ReturnType NvM_GetErrorStatus (NvM_BlockIdType BlockId, NvM_RequestResultType* RequestResultPtr);
Std_ReturnType NvM_Rb_SetWriteAllTrigger( NvM_BlockIdType BlockId, boolean BlockChanged );

#endif

/*<BASDKey>
 **********************************************************************************************************************
 * $History___:$
 **********************************************************************************************************************
</BASDKey>*/
