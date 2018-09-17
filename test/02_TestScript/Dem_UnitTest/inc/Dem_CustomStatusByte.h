/* BASDKey_start */
/*<BASDKey>
**********************************************************************************************************************
*
* COPYRIGHT RESERVED, Robert Bosch GmbH, 2012. All rights reserved.
* The reproduction, distribution and utilization of this document as well as the communication of its contents to
* others without explicit authorization is prohibited. Offenders will be held liable for the payment of damages.
* All rights reserved in the event of the grant of a patent, utility model or design.
*
**********************************************************************************************************************/
/* BASDKey_end */
/* Administrative Information (automatically filled in)
* $Domain____:$
* $Namespace_:$
* $Class_____:$
* $Name______:$
* $Variant___:$
* $Revision__:$
**********************************************************************************************************************
</BASDKey>*/

#ifndef DEM_CUSTOMSTATUSBYTE_H
#define DEM_CUSTOMSTATUSBYTE_H


#include "Dem_Events.h"
#include "Dem_Dtcs.h"
#include "Dem_ISO14229Byte.h"


#if (DEM_CFG_CUSTOMIZABLEDTCSTATUSBYTE)


#define DEM_CUSTBYTE_EVENT_UNAVAILABLE                   (0x00u)
#define DEM_CUSTBYTE_NEW_OPERATIONCYCLE_SETMASK          (DEM_ISO14229_BM_TESTNOTCOMPLETE_TOC)
#define DEM_CUSTBYTE_NEW_OPERATIONCYCLE_CLEARMASK        (DEM_ISO14229_BM_TESTFAILED_TOC)


DEM_INLINE void Dem_EvtSt_CustomInitialization (Dem_EventIdType EventId, Dem_UdsStatusByteType *statusByte)
{
    DEM_UNUSED_PARAM(EventId);
    *statusByte = (Dem_UdsStatusByteType)DEM_ISO14229BYTE_INITVALUE;
}


DEM_INLINE void Dem_EvtSt_CustomFailed(Dem_EventIdType EventId, Dem_UdsStatusByteType *statusByte)
{
    if (Dem_IsEventEnabledByDtcSetting(EventId))
    {
        Dem_ISO14229ByteSetTestFailed (statusByte, TRUE);
        Dem_ISO14229ByteSetTestFailedTOC (statusByte, TRUE);
        Dem_ISO14229ByteSetTestFailedSLC (statusByte, TRUE);
        Dem_ISO14229ByteSetTestCompleteTOC (statusByte, TRUE);
        Dem_ISO14229ByteSetTestCompleteSLC (statusByte, TRUE);
        Dem_ISO14229ByteSetPendingDTC (statusByte, TRUE);
    }
}

DEM_INLINE void Dem_EvtSt_CustomPassed(Dem_EventIdType EventId, Dem_UdsStatusByteType *statusByte)
{
    if (Dem_IsEventEnabledByDtcSetting(EventId))
    {
        Dem_ISO14229ByteSetTestFailed (statusByte, FALSE);
        Dem_ISO14229ByteSetTestCompleteTOC (statusByte, TRUE);
        Dem_ISO14229ByteSetTestCompleteSLC (statusByte, TRUE);
    }
}

DEM_INLINE void Dem_EvtSt_CustomResetEventStatus(Dem_EventIdType EventId, Dem_UdsStatusByteType *statusByte)
{
    if (Dem_IsEventEnabledByDtcSetting(EventId))
    {
        Dem_ISO14229ByteSetTestFailed(statusByte, FALSE);
    }
}

DEM_INLINE void Dem_EvtSt_CustomEvtAvailable(Dem_EventIdType EventId, Dem_UdsStatusByteType *statusByte)
{
    DEM_UNUSED_PARAM(EventId);
    DEM_UNUSED_PARAM(statusByte);
    Dem_AllEventsStatusByteCust[EventId] = DEM_ISO14229BYTE_INITVALUE;
}

DEM_INLINE void Dem_EvtSt_CustomEvtNotAvailable(Dem_EventIdType EventId, Dem_UdsStatusByteType *statusByte)
{
    DEM_UNUSED_PARAM(EventId);
    DEM_UNUSED_PARAM(statusByte);
    *statusByte = DEM_CUSTBYTE_EVENT_UNAVAILABLE;
}

DEM_INLINE void Dem_EvtSt_CustomClear(Dem_EventIdType EventId, Dem_UdsStatusByteType *statusByte)
{
    *statusByte = (Dem_UdsStatusByteType)DEM_ISO14229BYTE_INITVALUE;
    if (!Dem_IsEventEnabledByDtcSetting(EventId))
    {
        Dem_ISO14229ByteSetWarningIndicatorRequested(statusByte,Dem_ISO14229ByteIsWarningIndicatorRequested(Dem_EvtGetIsoByte(EventId)));
    }
}

DEM_INLINE void Dem_EvtSt_CustomClear_OnlyThisCycleAndReadiness(Dem_EventIdType EventId, Dem_UdsStatusByteType *statusByte)
{
    Dem_ISO14229ByteSetTestFailedTOC (statusByte, FALSE);
    Dem_ISO14229ByteSetTestFailedSLC (statusByte, FALSE);
    Dem_ISO14229ByteSetTestCompleteTOC (statusByte, FALSE);
    Dem_ISO14229ByteSetTestCompleteSLC (statusByte, FALSE);

    DEM_UNUSED_PARAM(EventId);
}

DEM_INLINE void Dem_EvtSt_CustomNewOperationCycle(Dem_EventIdType EventId, Dem_UdsStatusByteType *statusByte)
{
    if (Dem_IsEventEnabledByDtcSetting(EventId))
    {
        if (Dem_ISO14229ByteIsTestCompleteTOC(*statusByte) && !Dem_ISO14229ByteIsTestFailedTOC(*statusByte))
        {
            Dem_ISO14229ByteSetPendingDTC(statusByte, FALSE);
        }

        Dem_ISO14229ByteSetTestFailedTOC (statusByte, FALSE);
        Dem_ISO14229ByteSetTestCompleteTOC (statusByte, FALSE);
    }
}

DEM_INLINE void Dem_EvtSt_CustomIndicatorOn(Dem_EventIdType EventId, Dem_UdsStatusByteType *statusByte)
{
    if (Dem_IsEventEnabledByDtcSetting(EventId))
    {
        Dem_ISO14229ByteSetWarningIndicatorRequested(statusByte, TRUE);
    }
}

DEM_INLINE void Dem_EvtSt_CustomIndicatorOff(Dem_EventIdType EventId, Dem_UdsStatusByteType *statusByte)
{
    if (Dem_IsEventEnabledByDtcSetting(EventId))
    {
        Dem_ISO14229ByteSetWarningIndicatorRequested(statusByte, FALSE);
    }
}

DEM_INLINE void Dem_EvtSt_CustomDTCSettingOn(Dem_EventIdType EventId, Dem_UdsStatusByteType *statusByte)
{
    Dem_ISO14229ByteSetWarningIndicatorRequested(statusByte,Dem_ISO14229ByteIsWarningIndicatorRequested(Dem_EvtGetIsoByte(EventId)));
}


DEM_INLINE void Dem_EvtSt_CustomConfirmation(Dem_EventIdType EventId, Dem_UdsStatusByteType *statusByte)
{
    if (Dem_IsEventEnabledByDtcSetting(EventId))
    {
        Dem_ISO14229ByteSetConfirmedDTC(statusByte, TRUE);
    }
}

DEM_INLINE void Dem_EvtSt_CustomAging(Dem_EventIdType EventId, Dem_UdsStatusByteType *statusByte)
{
    DEM_UNUSED_PARAM(EventId);
    Dem_ISO14229ByteSetConfirmedDTC(statusByte, FALSE);
    //Dem_ISO14229ByteSetPendingDTC(statusByte, FALSE);
}


/* MR12 RULE 16.7 VIOLATION: changing value might be needed in cutomer project */
DEM_INLINE void Dem_EvtSt_CustomSetImmediateAging(Dem_EventIdType EventId, Dem_UdsStatusByteType *statusByte)
{
    DEM_UNUSED_PARAM(EventId);
    DEM_UNUSED_PARAM(statusByte);
    //Dem_ISO14229ByteSetConfirmedDTC(statusByte, FALSE);
    //Dem_ISO14229ByteSetPendingDTC(statusByte, FALSE);
}


/* MR12 RULE 16.7 VIOLATION: changing value might be needed in cutomer project */
DEM_INLINE void Dem_EvtSt_CustomDisplacement(Dem_EventIdType EventId, Dem_UdsStatusByteType *statusByte)
{
    DEM_UNUSED_PARAM(EventId);
    DEM_UNUSED_PARAM(statusByte);
    /* no bit-change: keep confirmed on displacement */
}

DEM_INLINE void Dem_EvtSt_CustomEvCombinationReplacement(Dem_EventIdType EventId, Dem_UdsStatusByteType *statusByte)
{
    /* this function is used for event combination "on storage" for the event of a dtc, which is replaced by another event of the same dtc */
    DEM_UNUSED_PARAM(EventId);
    Dem_ISO14229ByteSetConfirmedDTC(statusByte, FALSE);
}


DEM_INLINE void Dem_EvtSt_CustomSetPending(Dem_EventIdType EventId, Dem_UdsStatusByteType *statusByte, Dem_boolean_least newValue)
{
    /* this function is used for setting pending flag */
    if (Dem_IsEventEnabledByDtcSetting(EventId))
    {
        Dem_ISO14229ByteSetPendingDTC(statusByte, newValue);
    }
}


#endif

#endif /* INCLUDE_PROTECTION */

/* FC_VariationPoint_START */
/*<BASDKey>
**********************************************************************************************************************
* $History___:$
**********************************************************************************************************************
</BASDKey>*/
/* FC_VariationPoint_END */
