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


#ifndef DEM_CFG_VERSION_H
#define DEM_CFG_VERSION_H

/**
 * @ingroup DEM_VERSION_H
 *
 * Vendor Id refers to a unique ID assigned by Autosar to every Member of Autosar Consortium, used to indicate the vendor during the call of Det_ReportError()\n
 */
#define     DEM_VENDOR_ID                              6

/**
 * @ingroup DEM_VERSION_H
 *
 * Module Id refers to a unique ID assigned by Autosar to every Module/Component within the Autosar BSW, used to indicate that module which is reporting the error during the call of Det_ReportError()\n
 */
#define     DEM_MODULE_ID                              54

/**
 * @ingroup DEM_VERSION_H
 * 
 * Instance Id refers to an ID assigned by Autosar to identify every unique instance of one Module/Component, used to indicate that module instance which is reporting the error during the call of Det_ReportError()\n
 */
#define     DEM_INSTANCE_ID                            0

/**
 * @ingroup DEM_VERSION_H
 *
 * Used to declare the Major Release Number of Autosar Main Baseline under which this Component Dem is delivered
 */
#define     DEM_AR_RELEASE_MAJOR_VERSION               4

/**
 * @ingroup DEM_VERSION_H
 *
 * Used to declare the Minor Release Number of Autosar Main Baseline under which this Component Dem is delivered
 */
#define     DEM_AR_RELEASE_MINOR_VERSION               2

/**
 * @ingroup DEM_VERSION_H
 *
 * Used to declare the Revision Release Number of Autosar Main Baseline under which this Component Dem is delivered
 */
#define     DEM_AR_RELEASE_REVISION_VERSION            2

/**
 * @ingroup DEM_VERSION_H
 *
 * Used to declare Software Major Version number of Component Dem, used during the call of Dem_GetVersionInfo()
 */
#define     DEM_SW_MAJOR_VERSION                       4

/**
 * @ingroup DEM_VERSION_H
 *
 * Used to declare Software Minor Version number of Component Dem, used during the call of Dem_GetVersionInfo()
 */
#define     DEM_SW_MINOR_VERSION                       0

/**
 * @ingroup DEM_VERSION_H
 *
 * Used to declare Software Patch Version number of Component Dem, used during the call of Dem_GetVersionInfo()
 */
#define     DEM_SW_PATCH_VERSION                       0

#endif
