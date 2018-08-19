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


#ifndef DEM_CFG_NODEID_H
#define DEM_CFG_NODEID_H


#define DEM_NODEID_INVALID             0
#define DEM_NODEID_COUNT               6u
#define DEM_NODEID_ARRAYLENGTH         (DEM_NODEID_COUNT+1u)

#define DemConf_DemNode_rootnode 1
#define DemConf_DemNode_node_a_l1 2
#define DemConf_DemNode_node_b_l1 3
#define DemConf_DemNode_node_c_l2 4
#define DemConf_DemNode_node_e_l2 5
#define DemConf_DemNode_node_d_l3 6




#if (DEM_NODEID_ARRAYLENGTH > 255)
#error Number of specified nodes exceeds supported limit of 255.
#endif




#endif

