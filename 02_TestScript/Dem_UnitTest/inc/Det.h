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

/*
 * Det.h
 *
 *  Created on: 17.10.2011
 *      Author: clh2si
 */

#ifndef DET_H
#define DET_H

#include <iostream>
#include <stdlib.h>

#include "Dem_Types.h"

inline Std_ReturnType Det_ReportError(uint16 ModuleId, uint8 InstanceId, uint8 ApiId, uint8 ErrorId)
{
	/* Required for future implementation*/
	DEM_UNUSED_PARAM(ModuleId);
	DEM_UNUSED_PARAM(InstanceId);
	DEM_UNUSED_PARAM(ApiId);
	DEM_UNUSED_PARAM(ErrorId);
//	uint32* p = 0;
//	*p = 0;
	return E_OK;
}

#endif

/*<BASDKey>
**********************************************************************************************************************
* $History___:$
**********************************************************************************************************************
</BASDKey>*/
