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


#ifndef DEM_CFG_SCHM_H
#define DEM_CFG_SCHM_H


#include "SchM_Default.h"


/* This lock is always required, as the monitorings are usually runing in different tasks as DEM and
 * therefore may interrupt the processing of DEM at any time.
 */
#define SchM_Enter_Dem_Monitoring()		do { SCHM_ENTER_DEFAULT(); } while (0)
#define SchM_Exit_Dem_Monitoring()		do { SCHM_EXIT_DEFAULT(); } while (0)

/* This lock is required if DEM and NVM may interrupt each other, e.g. if both components
 * are running in different tasks on a single CPU
 */
#define SchM_Enter_Dem_Nvm()      		do { SCHM_ENTER_DEFAULT(); } while (0)
#define SchM_Exit_Dem_Nvm()       		do { SCHM_EXIT_DEFAULT(); } while (0)

/* This lock is required if DEM and DCM may interrupt each other, e.g. if both components
 * are running in different tasks on a single CPU
 */
#define SchM_Enter_Dem_Dcm()      		do { SCHM_ENTER_DEFAULT(); } while (0)
#define SchM_Exit_Dem_Dcm()       		do { SCHM_EXIT_DEFAULT(); } while (0)


#endif


/*<BASDKey>
**********************************************************************************************************************
* $History___:$
**********************************************************************************************************************
</BASDKey>*/

