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


#ifndef DEM_CFG_NODES_H
#define DEM_CFG_NODES_H


/* ---------------------------------------- */
/* DEM_CFG_DEPDEGRADATIONREASONRECOVERABLE  */
/* ---------------------------------------- */
#define DEM_CFG_DEPDEGRADATIONREASONRECOVERABLE_OFF  STD_OFF
#define DEM_CFG_DEPDEGRADATIONREASONRECOVERABLE_ON   STD_ON
#define DEM_CFG_DEPDEGRADATIONREASONRECOVERABLE  DEM_CFG_DEPDEGRADATIONREASONRECOVERABLE_OFF


/* ---------------------------------------- */
/* DEM_CFG_DEPRECOVERYLIMIT                 */
/* ---------------------------------------- */
#define DEM_CFG_DEPRECOVERYLIMIT_OFF  STD_OFF
#define DEM_CFG_DEPRECOVERYLIMIT_ON   STD_ON
#define DEM_CFG_DEPRECOVERYLIMIT  DEM_CFG_DEPRECOVERYLIMIT_OFF



#define DEM_CFG_DEPENDENCY_PENDING_ON             FALSE


#define DEM_CFG_FAILUREDEPENDENCY_RECHECK_LIMIT  80u




/*                  ALLOWEDRECOVERIES             IGNORESPRIO    FAILEDCALLBACK_IDX                       */

#define DEM_CFG_NODEPARAMS \
{ \
    DEM_NODES_INIT (DEM_NODE_INFINITE_RECOVERIES, 0,             0                                       ) \
   ,DEM_NODES_INIT (2,                            0,             DEM_CFG_Rte_Call_Dem_CBStatusComp_rootnode_ComponentStatusChanged_IDX) \
   ,DEM_NODES_INIT (255,                          0,             DEM_CFG_Rte_Call_Dem_CBStatusComp_node_a_l1_ComponentStatusChanged_IDX) \
   ,DEM_NODES_INIT (255,                          0,             DEM_CFG_Rte_Call_Dem_CBStatusComp_node_b_l1_ComponentStatusChanged_IDX) \
   ,DEM_NODES_INIT (4,                            0,             DEM_CFG_Rte_Call_Dem_CBStatusComp_node_c_l2_ComponentStatusChanged_IDX) \
   ,DEM_NODES_INIT (5,                            0,             DEM_CFG_Rte_Call_Dem_CBStatusComp_node_e_l2_ComponentStatusChanged_IDX) \
   ,DEM_NODES_INIT (3,                            0,             DEM_CFG_Rte_Call_Dem_CBStatusComp_node_d_l3_ComponentStatusChanged_IDX) \
}



#define  DEM_CFG_Rte_Call_Dem_CBStatusComp_rootnode_ComponentStatusChanged_IDX    1
#define  DEM_CFG_Rte_Call_Dem_CBStatusComp_node_e_l2_ComponentStatusChanged_IDX    2
#define  DEM_CFG_Rte_Call_Dem_CBStatusComp_node_c_l2_ComponentStatusChanged_IDX    3
#define  DEM_CFG_Rte_Call_Dem_CBStatusComp_node_d_l3_ComponentStatusChanged_IDX    4
#define  DEM_CFG_Rte_Call_Dem_CBStatusComp_node_a_l1_ComponentStatusChanged_IDX    5
#define  DEM_CFG_Rte_Call_Dem_CBStatusComp_node_b_l1_ComponentStatusChanged_IDX    6


#define  DEM_CFG_NODEFAILEDCALLBACK_COUNT  6
#define  DEM_CFG_NODEFAILEDCALLBACK_ARRAYLENGTH  (DEM_CFG_NODEFAILEDCALLBACK_COUNT+1)


#define DEM_CFG_NODEFAILEDCALLBACKS \
{ \
	NULL_PTR \
    ,&Rte_Call_Dem_CBStatusComp_rootnode_ComponentStatusChanged \
    ,&Rte_Call_Dem_CBStatusComp_node_e_l2_ComponentStatusChanged \
    ,&Rte_Call_Dem_CBStatusComp_node_c_l2_ComponentStatusChanged \
    ,&Rte_Call_Dem_CBStatusComp_node_d_l3_ComponentStatusChanged \
    ,&Rte_Call_Dem_CBStatusComp_node_a_l1_ComponentStatusChanged \
    ,&Rte_Call_Dem_CBStatusComp_node_b_l1_ComponentStatusChanged \
}





#endif

