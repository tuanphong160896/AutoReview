
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


#ifndef DEMTEST_NODEFAILEDCALLBACK_H
#define DEMTEST_NODEFAILEDCALLBACK_H




boolean DemTest_Rte_Call_Dem_CBStatusComp_rootnode_ComponentStatusChanged_check(boolean *testFailed);
boolean DemTest_Rte_Call_Dem_CBStatusComp_node_e_l2_ComponentStatusChanged_check(boolean *testFailed);
boolean DemTest_Rte_Call_Dem_CBStatusComp_node_c_l2_ComponentStatusChanged_check(boolean *testFailed);
boolean DemTest_Rte_Call_Dem_CBStatusComp_node_d_l3_ComponentStatusChanged_check(boolean *testFailed);
boolean DemTest_Rte_Call_Dem_CBStatusComp_node_a_l1_ComponentStatusChanged_check(boolean *testFailed);
boolean DemTest_Rte_Call_Dem_CBStatusComp_node_b_l1_ComponentStatusChanged_check(boolean *testFailed);

boolean DemTest_AnyNodeFailedCallbackCalled(void);
void DemTest_ResetNodeFailedCallbackCalled(void);


#endif
