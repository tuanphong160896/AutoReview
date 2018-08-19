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

#ifndef DLT_H
#define DLT_H

#include "DemTest_StatusChangeCollector.h"

LOCAL_INLINE void Dlt_DemTriggerOnEventStatus ( Dem_EventIdType EventId, Dem_UdsStatusByteType EventStatusOld, Dem_UdsStatusByteType EventStatusNew )
{
#ifdef __cplusplus /* to void aborts with CCHECKER */
    DemTest_EvtStatusChangeCollector.AddFncCall ("Dlt_DemTriggerOnEventStatus", (uint32)EventId, EventStatusOld, EventStatusNew);
#else
    (void)EventId;
    (void)EventStatusOld;
    (void)EventStatusNew;
#endif
}

#endif

/*<BASDKey>
**********************************************************************************************************************
* $History___:$
**********************************************************************************************************************
</BASDKey>*/
