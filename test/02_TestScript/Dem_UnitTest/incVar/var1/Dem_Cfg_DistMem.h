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


#ifndef DEM_CFG_DISTMEM_H
#define DEM_CFG_DISTMEM_H

/* ---------------------------------------- */
/* DEM_DISTURBANCE_MEMORY_SUPPORT           */
/* ---------------------------------------- */

#define DEM_CFG_DISTURBANCE_MEMORY_ON   STD_ON
#define DEM_CFG_DISTURBANCE_MEMORY_OFF  STD_OFF
#define DEM_CFG_DISTURBANCE_MEMORY  DEM_CFG_DISTURBANCE_MEMORY_ON


#define DEM_CFG_DIST_MEM_CALLBACK_ON_DISTURBANCE_ON  STD_ON
#define DEM_CFG_DIST_MEM_CALLBACK_ON_DISTURBANCE_OFF  STD_OFF
#define DEM_CFG_DIST_MEM_CALLBACK_ON_DISTURBANCE   DEM_CFG_DIST_MEM_CALLBACK_ON_DISTURBANCE_ON

#define  DEM_CFG_DISTURBANCE_MEMORY_SIZE       		    (14)
#define  DEM_CFG_DISTURBANCE_MEMORY_ARRAYLENGTH		    (DEM_CFG_DISTURBANCE_MEMORY_SIZE+1)

#define  DEM_CFG_DIST_MEM_EXTENDED_DATA_USED            (STD_ON)



#endif

