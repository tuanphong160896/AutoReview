/*****************************************************************************/
/*                            Cantata Test Script                            */
/*****************************************************************************/
/*
 *    Filename: test_Dem_Deb_Header_Var1.c
 *    Author: EUD1HC
 *    Generated on: 06-Aug-2018 13:15:44
 *    Generated from: Dem_Deb.c
 */
/*****************************************************************************/
/* Environment Definition                                                    */
/*****************************************************************************/

#define TEST_SCRIPT_GENERATOR 2

/* Include files from software under test */
#include "Dem.h"
#include "Rte_Dem.h"
#include "Dem_Deb.h"
#include "Dem_DebArTime.h"
#include "Dem_DebMonInternal.h"
#include "Dem_DebCtrBaseClass.h"
#include "Dem_EvMemGen.h"
#include "Dem_DTCs.h"
#include "Dem_OperationCycle.h"
#include "Dem_EventFHandling.h"
#include "Dem_Cfg_ExtPrototypes.h"
#include "Dem_DTCGroup.h"
#define DEM_START_SEC_ROM_CODE
#include "Dem_Cfg_MemMap.h"

#define CANTATA_DEFAULT_VALUE 0 /* Default value of variables & stub returns */

#include <cantpp.h>  /* Cantata Directives */
/* pragma qas cantata testscript start */
/*****************************************************************************/
/* Global Data Definitions                                                   */
/*****************************************************************************/

/* Global Functions */
void * rba_BswSrv_MemCopy(void * xDest_pv, const void * xSrc_pcv, uint32 numBytes_s32);
void * rba_BswSrv_MemSet(void * xDest_pv, sint32 xPattern_u32, uint32 numBytes_s32);
sint32 rba_BswSrv_MemCompare(const void * xSrc1_pcv, const void * xSrc2_pcv, uint32 numBytes_s32);
Std_ReturnType NvM_GetErrorStatus(NvM_BlockIdType BlockId, NvM_RequestResultType * RequestResultPtr);
void DI();
void EI();
const Dem_EventAttributeType * Dem_getEventUserAttributes(Dem_EventIdType EventId);
Dem_boolean_least Dem_EvtIsRecoverable(Dem_EventIdType EventId);
boolean Dem_IsInitMonitorForEventRequested(Dem_EventIdType EventId, Dem_InitMonitorReasonType * InitMonitorReason);
Dem_boolean_least Dem_EvBuffIsEventPending(Dem_EventIdType EventId);
void Dem_SetEventSuspicion_Internal(Dem_EventIdType EventId, boolean suspicion);
Dem_boolean_least Dem_EvBuffInsert(uint8 eventType, Dem_EventIdType eventId);
Dem_ClientType * Dem_Client_getClient(Dem_ClientIdType ClientId);
uint8 Dem_DtcStatusByteRetrieve(Dem_DtcIdType dtcId);
void Dem_EvMemSetEventFailed(Dem_EventIdType EventId, uint16_least MemId, const uint8 * EnvData);
void Dem_EvMemSetEventPassed(Dem_EventIdType EventId, uint16_least MemId, const uint8 * EnvData);
void Dem_EvMemSetEventUnRobust(Dem_EventIdType EventId, uint16_least MemId, const uint8 * EnvData);
void Dem_EvMemStartOperationCycle(Dem_OperationCycleList operationCycleList, uint16_least MemId);
void Dem_EvMemClearEvent(Dem_EventIdType EventId, uint16_least MemId);
uint16_least Dem_EvMemGetEventMemoryStatusOfDtc(Dem_DtcIdType DtcId, uint16_least MemId);
uint16_least Dem_EvMemGetEventMemoryStatusOfEvent(Dem_EventIdType EventId, uint16_least MemId);
uint16_least Dem_EvMemGetEventMemoryLocIdOfEvent(Dem_EventIdType EventId, uint16_least MemId);
Std_ReturnType Dem_EvMemGetReaderCopyOfEvent(Dem_EvMemEventMemoryType * ReaderCopy, Dem_EventIdType EventId, uint16_least MemId);
uint16_least Dem_EvMemGetMemoryLocIdOfDtcAndOriginWithVisibility(Dem_DtcIdType DtcId, Dem_DTCOriginType DTCOrigin, Dem_boolean_least ShadowEntriesVisible);
uint16_least Dem_EvMemGetEventMemoryLocIdOfDtcWithVisibility(Dem_DtcIdType DtcId, uint16_least MemId, Dem_boolean_least ShadowEntriesVisible);
Dem_boolean_least Dem_IsEventEnabledByDtcSetting(Dem_EventIdType EventId);
void Dem_DistMemReportPassed(Dem_EventIdType EventId);
void Dem_EvtProcessPassedAndFailed(Dem_EventIdType EventId, Dem_EventStatusType EventStatus);
void Dem_DistMemReportFailed(Dem_EventIdType EventId);
extern Dem_DebouncedActionType ACCESS_FUNCTION_Dem_Deb_Dem_DebCallFilter(Dem_EventIdType EventId, Dem_EventStatusType * status);
/* Tester define */
uint8_least fnc_funcPointer_Filter(Dem_EventIdType EventId, Dem_EventStatusType* status, const void* paramSet, uint16 paramIndex DEM_DEB_LOCAL_CALC_PARAMS);
extern Dem_boolean_least ACCESS_FUNCTION_Dem_Deb_Dem_DebHandleDebounceAction__processBits(Dem_EventIdType EventId, Dem_DebouncedActionType debAction);
extern void ACCESS_FUNCTION_Dem_Deb_Dem_DebHandleDebounceAction(Dem_EventIdType EventId, Dem_DebouncedActionType debAction, Dem_DebugDataType debug0, Dem_DebugDataType debug1);
extern Dem_boolean_least ACCESS_FUNCTION_Dem_Deb_Dem_DebHandleDebounceAction_4_TimeBasedDeb(Dem_EventIdType EventId, Dem_DebouncedActionType debAction);
extern void ACCESS_FUNCTION_Dem_Deb_Dem_TimeBasedDebounceInternMainFunction();
void fnc_funcPointer_Cyclic(Dem_EventIdType EventId, const void* paramSet, uint16 paramIndex DEM_DEB_LOCAL_CALC_PARAMS);

/* Global data */
Dem_DebClass Dem_Cfg_DebClasses[3];
Dem_OpMoStateType Dem_OpMoState;
Dem_EventStatusType status_entity;
uint8 paramSet_entity;

/* Expected variables for global data */
Dem_DebClass expected_Dem_Cfg_DebClasses[3];
Dem_OpMoStateType expected_Dem_OpMoState;

/* This function initialises global data to default values. This function       */
/* is called by every test case so must not contain test case specific settings */
static void initialise_global_data(){
    INITIALISE(Dem_Cfg_DebClasses);
    INITIALISE(Dem_OpMoState);
}

/* This function copies the global data settings into expected variables for */
/* use in check_global_data(). It is called by every test case so must not   */
/* contain test case specific settings.                                      */
static void initialise_expected_global_data(){
    COPY_TO_EXPECTED(Dem_Cfg_DebClasses, expected_Dem_Cfg_DebClasses);
    COPY_TO_EXPECTED(Dem_OpMoState, expected_Dem_OpMoState);
}

/* This function checks global data against the expected values. */
static void check_global_data(){
    CHECK_MEMORY("Dem_Cfg_DebClasses", Dem_Cfg_DebClasses, expected_Dem_Cfg_DebClasses, sizeof(expected_Dem_Cfg_DebClasses));
    CHECK_U_CHAR(Dem_OpMoState, expected_Dem_OpMoState);
}

/* Prototypes for test functions */
void run_tests();
void test_Dem_DebCallFilter_Status_PREPASSED(int);
void test_Dem_DebCallFilter_Status_PREFAILED(int);
void test_Dem_DebCallFilter_Status_FDC_THRESHOLD_REACHED(int);
void test_Dem_DebCallFilter_Status_PASSED(int);
void test_Dem_DebCallFilter_EvtGetDebounceMethodIndex_Not_MONINTERNAL(int);
void test_Dem_DebHandleDebounceAction__processBits_StoCoAreAllFulfilled_True(int);
void test_Dem_DebHandleDebounceAction__processBits_StoCoAreAllFulfilled_False(int);
void test_Dem_DebHandleDebounceAction__processBits_OpMoIsInitialized_False(int);
void test_Dem_DebHandleDebounceAction__processBits_ThresholdReachedTOC_True(int);
void test_Dem_DebHandleDebounceAction__processBits_DebAction_THRESHOLDREACHED(int);
void test_Dem_DebHandleDebounceAction__processBits_DebAction_Not_THRESHOLDREACHED(int);
void test_Dem_DebHandleDebounceAction_UnrobustToEvBuffer_True(int);
void test_Dem_DebHandleDebounceAction_UnrobustToEvBuffer_False(int);
void test_Dem_DebHandleDebounceAction_4_TimeBasedDeb_ProcessBits_Invoked(int);
void test_Dem_TimeBasedDebounceInternMainFunction_FuncPoint_Not_Null(int);
void test_Dem_TimeBasedDebounceInternMainFunction_FuncPoint_Null(int);

/*****************************************************************************/
/* Coverage Analysis                                                         */
/*****************************************************************************/
/* Coverage Rule Set: Report all Metrics */
static void rule_set(char* cppca_sut,
                     char* cppca_context)
{
    START_TEST("COVERAGE RULE SET",
               "Report all Metrics");
#ifdef CANTPP_SUBSET_DEFERRED_ANALYSIS
    TEST_SCRIPT_WARNING("Coverage Rule Set ignored in deferred analysis mode\n");
#elif CANTPP_COVERAGE_INSTRUMENTATION_DISABLED
    TEST_SCRIPT_WARNING("Coverage Instrumentation has been disabled\n");
#elif CANTPP_INSTRUMENTATION_DISABLED
    TEST_SCRIPT_WARNING("Instrumentation has been disabled\n");
#else
    REPORT_COVERAGE(cppca_entrypoint_cov|
                    cppca_statement_cov|
                    cppca_basicblock_cov|
                    cppca_callreturn_cov|
                    cppca_decision_cov|
                    cppca_relational_cov|
                    cppca_loop_cov|
                    cppca_booloper_cov|
                    cppca_booleff_cov,
                    cppca_sut,
                    cppca_all_details|cppca_include_catch,
                    cppca_context);
#endif
    END_TEST();
}

/*****************************************************************************/
/* Program Entry Point                                                       */
/*****************************************************************************/
int main()
{
    CONFIGURE_COVERAGE("cov:boolcomb:yes");
    OPEN_LOG("test_Dem_Deb_Header_Var1.ctr", false, 100);
    START_SCRIPT("Dem_Deb", true);

    run_tests();

    return !END_SCRIPT(true);
}

/*****************************************************************************/
/* Test Control                                                              */
/*****************************************************************************/
/* run_tests() contains calls to the individual test cases, you can turn test*/
/* cases off by adding comments*/
void run_tests()
{
    test_Dem_DebCallFilter_Status_PREPASSED(1);
    test_Dem_DebCallFilter_Status_PREFAILED(1);
    test_Dem_DebCallFilter_Status_FDC_THRESHOLD_REACHED(1);
    test_Dem_DebCallFilter_Status_PASSED(1);
    test_Dem_DebCallFilter_EvtGetDebounceMethodIndex_Not_MONINTERNAL(1);
    test_Dem_DebHandleDebounceAction__processBits_StoCoAreAllFulfilled_True(1);
    test_Dem_DebHandleDebounceAction__processBits_StoCoAreAllFulfilled_False(1);
    test_Dem_DebHandleDebounceAction__processBits_OpMoIsInitialized_False(1);
    test_Dem_DebHandleDebounceAction__processBits_ThresholdReachedTOC_True(1);
    test_Dem_DebHandleDebounceAction__processBits_DebAction_THRESHOLDREACHED(1);
    test_Dem_DebHandleDebounceAction__processBits_DebAction_Not_THRESHOLDREACHED(1);
    test_Dem_DebHandleDebounceAction_UnrobustToEvBuffer_True(1);
    test_Dem_DebHandleDebounceAction_UnrobustToEvBuffer_False(1);
    test_Dem_DebHandleDebounceAction_4_TimeBasedDeb_ProcessBits_Invoked(1);
    test_Dem_TimeBasedDebounceInternMainFunction_FuncPoint_Not_Null(1);
    test_Dem_TimeBasedDebounceInternMainFunction_FuncPoint_Null(1);

    rule_set("*", "*");
    EXPORT_COVERAGE("test_Dem_Deb_Header_Var1.cov", cppca_export_replace);
}

/*****************************************************************************/
/* Test Cases                                                                */
/*****************************************************************************/

void test_Dem_DebCallFilter_Status_PREPASSED(int doIt){
if (doIt) {
    /* Compilation flag
     * Define DEM_CFG_CHECKAPICONSISTENCY as FALSE;
     * Define DEM_CFG_DEBMONINTERNAL as DEM_CFG_DEBMONINTERNAL_ON;
     * Define DEM_CFG_SUPPORT_EVENT_FDCTHRESHOLDREACHED as TRUE;
     * Define DEM_CFG_SUPPORTEVENTMEMORYENTRY_ONFDCTHRESHOLD as DEM_CFG_SUPPORTEVENTMEMORYENTRY_ONFDCTHRESHOLD_ON;
     * Define DEM_CFG_SUSPICIOUS_SUPPORT as TRUE;
     * Define DEM_CFG_ALTERNATIVEDEBDEFINED as TRUE;
     * Define DEM_CFG_DEBARTIMEBASE as DEM_CFG_DEBARTIMEBASE_ON;
     */
    /* Test method - EP */
    /* Tester define */
    INITIALISE(status_entity);

    /* Test case data declarations */
    Dem_EventIdType EventId = 0;
    Dem_EventStatusType * status = &status_entity;
    status_entity = DEM_EVENT_STATUS_PREPASSED;
    Dem_DebouncedActionType expected_returnValue = DEM_DEBACTION_NOOP;
    Dem_DebouncedActionType returnValue;

    /* Set global data */
    initialise_global_data();

    /* Set expected values for global data checks */
    initialise_expected_global_data();


    START_TEST("test_Dem_DebCallFilter_Status_PREPASSED",
               " Check if: "
               " - The Det_ReportError() function is invoked "
               " - The function returns is DEM_DEBACTION_NOOP "
               " In case: "
               " - The returned value of Dem_EvtGetDebounceMethodIndex() function is DEM_DEBMETH_IDX_MONINTERNAL (line 47) "
               " - The status is set to DEM_EVENT_STATUS_PREPASSED (line 49, line 61) ");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_EvtGetDebounceMethodIndex#DEM_DEBMETH_IDX_MONINTERNAL;"
                       "Det_ReportError#Zero");

            /* Call SUT */
            returnValue = ACCESS_FUNCTION(Dem_Deb, Dem_DebCallFilter)(EventId, status);

            /* Test case checks */
            /* Expected result
             * - The Det_ReportError() function is invoked;
             * - The function returns is DEM_DEBACTION_NOOP;
             */
            CHECK_U_INT(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
            /* GUID
             * - {0334841A-388A-48fc-BD64-528B7C8502F3};
             * - {0E3B0420-5456-4380-9F2B-DE1E2DC1EA07};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_DebCallFilter_Status_PREFAILED(int doIt){
if (doIt) {
    /* Test method - EP */
    /* Tester define */
    INITIALISE(status_entity);

    /* Test case data declarations */
    Dem_EventIdType EventId = 0;
    Dem_EventStatusType * status = &status_entity;
    status_entity = DEM_EVENT_STATUS_PREFAILED;
    Dem_DebouncedActionType expected_returnValue = DEM_DEBACTION_NOOP;
    Dem_DebouncedActionType returnValue;

    /* Set global data */
    initialise_global_data();

    /* Set expected values for global data checks */
    initialise_expected_global_data();


    START_TEST("test_Dem_DebCallFilter_Status_PREFAILED",
               " Check if: "
               " - The Det_ReportError() function is invoked "
               " - DEM_DEBACTION_NOOP is returned "
               " In case: "
               " - The returned value of Dem_EvtGetDebounceMethodIndex() function is DEM_DEBMETH_IDX_MONINTERNAL (line 47) "
               " - The status is set to DEM_EVENT_STATUS_PREFAILED (line 50, line 61) ");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_EvtGetDebounceMethodIndex#DEM_DEBMETH_IDX_MONINTERNAL;"
                       "Det_ReportError#One;");

            /* Call SUT */
            returnValue = ACCESS_FUNCTION(Dem_Deb, Dem_DebCallFilter)(EventId, status);

            /* Test case checks */
            /* Expected result
             * - The Det_ReportError() function is invoked;
             * - The function returns is DEM_DEBACTION_NOOP;
             */
            CHECK_U_INT(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
            /* GUID
             * - {0E3B0420-5456-4380-9F2B-DE1E2DC1EA07};
             * - {0334841A-388A-48fc-BD64-528B7C8502F3}; */
        END_CALLS();
    END_TEST();
}}

void test_Dem_DebCallFilter_Status_FDC_THRESHOLD_REACHED(int doIt){
if (doIt) {
    /* Test method - EP */
    /* Tester define */
    INITIALISE(status_entity);

    /* Test case data declarations */
    Dem_EventIdType EventId = 0;
    Dem_EventStatusType * status = &status_entity;
    status_entity = DEM_EVENT_STATUS_FDC_THRESHOLD_REACHED;
    Dem_DebouncedActionType expected_returnValue = 3;
    Dem_DebouncedActionType returnValue;

    /* Set global data */
    initialise_global_data();

    /* Set expected values for global data checks */
    initialise_expected_global_data();


    START_TEST("test_Dem_DebCallFilter_Status_FDC_THRESHOLD_REACHED",
               " Check if the debAction is updated with DEM_DEBACTION_ALLOW_BUFFER_INSERT|DEM_DEBACTION_SETFDCTHRESHOLDREACHED "
               " In case: "
               " - The returned value of Dem_EvtGetDebounceMethodIndex() function is DEM_DEBMETH_IDX_MONINTERNAL (line 47) "
               " - The status is set to DEM_EVENT_STATUS_FDC_THRESHOLD_REACHED (line 53, line 67) ");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_EvtGetDebounceMethodIndex#DEM_DEBMETH_IDX_MONINTERNAL;");

            /* Call SUT */
            returnValue = ACCESS_FUNCTION(Dem_Deb, Dem_DebCallFilter)(EventId, status);

            /* Test case checks */
            /* Expected result - The debAction is updated as DEM_DEBACTION_ALLOW_BUFFER_INSERT|DEM_DEBACTION_SETFDCTHRESHOLDREACHED */
            CHECK_U_INT(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
            /* GUID
             * - {48521655-164D-4958-98BA-97E853543225};
             * - {27478DD9-4588-4264-9884-F52ABDEBF15E};
             * - {0334841A-388A-48fc-BD64-528B7C8502F3}; */
        END_CALLS();
    END_TEST();
}}

void test_Dem_DebCallFilter_Status_PASSED(int doIt){
if (doIt) {
    /* Test method - EP */
    /* Tester define */
    INITIALISE(status_entity);

    /* Test case data declarations */
    Dem_EventIdType EventId = 0;
    Dem_EventStatusType * status = &status_entity;
    status_entity = DEM_EVENT_STATUS_PASSED;
    Dem_DebouncedActionType expected_returnValue = DEM_DEBACTION_RESETFDCTHRESHOLDREACHED;
    Dem_DebouncedActionType returnValue;

    /* Set global data */
    initialise_global_data();

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_DebCallFilter_Status_PASSED",
               " Check if the debAction is is updated with DEM_DEBACTION_RESETFDCTHRESHOLDREACHED "
               " In case: "
               " - The returned value of Dem_EvtGetDebounceMethodIndex() function is DEM_DEBMETH_IDX_MONINTERNAL (line 47) "
               " - The status is set to DEM_EVENT_STATUS_PASSED (line 57) ");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_EvtGetDebounceMethodIndex#DEM_DEBMETH_IDX_MONINTERNAL;");

            /* Call SUT */
            returnValue = ACCESS_FUNCTION(Dem_Deb, Dem_DebCallFilter)(EventId, status);

            /* Test case checks */
            /* Expected result - The debAction is updated with DEM_DEBACTION_RESETFDCTHRESHOLDREACHED */
            CHECK_U_INT(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
            /* GUID - {008776C4-E8BF-4d7f-94C7-0C6E0C75F2BB} */
        END_CALLS();
    END_TEST();
}}

void test_Dem_DebCallFilter_EvtGetDebounceMethodIndex_Not_MONINTERNAL(int doIt){
if (doIt) {
    /* Test method - EP */
    /* Tester define */
    INITIALISE(paramSet_entity);

    /* Test case data declarations */
    Dem_EventIdType EventId = 0;
    Dem_EventStatusType * status = &status_entity;
    status_entity = DEM_EVENT_STATUS_PASSED;
    Dem_DebouncedActionType expected_returnValue = 0;
    Dem_DebouncedActionType returnValue;

    /* Set global data */
    initialise_global_data();
    Dem_Cfg_DebClasses[0].funcPointer_Filter = &fnc_funcPointer_Filter;
    Dem_Cfg_DebClasses[0].paramSet = &paramSet_entity;
    Dem_Cfg_DebClasses[0].paramCount = 1;

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_DebCallFilter_EvtGetDebounceMethodIndex_Not_MONINTERNAL",
               " Check if: "
               " - The Det_ReportError() function is invoked "
               " - The returned value of the correct Filter function is returned "
               " In case: "
               " - The returned value of Dem_EvtGetDebounceMethodIndex() function is not DEM_DEBMETH_IDX_MONINTERNAL (line 47) "
               " - The returned value of Dem_EvtGetDebounceParamSetIndex() function is greater than the param count (line 103) ");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_EvtGetDebounceMethodIndex#DEM_DEBMETH_IDX_ARTIME;"
                       "Dem_EvtGetDebounceMethodIndex#default;"
                       "Dem_EvtGetDebounceMethodIndex#default;"
                       "Dem_EvtGetDebounceParamSetIndex#default;"
                       "Dem_EvtGetDebounceMethodIndex#default;"
                       "Det_ReportError#DEM_DET_APIID_DEBCALLFILTER;"
                       "Dem_EvtGetDebounceParamSetIndex#default;"
                       "fnc_funcPointer_Filter#default;");

            /* Call SUT */
            returnValue = ACCESS_FUNCTION(Dem_Deb, Dem_DebCallFilter)(EventId, status);

            /* Test case checks */
            /* Expected result
             * - The Det_ReportError() function is invoked;
             * - The returned value of the correct Filter function is returned; */
            CHECK_U_INT(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
            /* GUID - {2F623C76-9F04-4186-944F-E35468F7E14E} */
        END_CALLS();
    END_TEST();
}}

void test_Dem_DebHandleDebounceAction__processBits_StoCoAreAllFulfilled_True(int doIt){
if (doIt) {
    /* Test method - EP */
    /* Tester define */

    /* Test case data declarations */
    Dem_EventIdType EventId = 0;
    Dem_DebouncedActionType debAction = 7;
    Dem_boolean_least expected_returnValue = TRUE;
    Dem_boolean_least returnValue;

    /* Set global data */
    initialise_global_data();

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_DebHandleDebounceAction__processBits_StoCoAreAllFulfilled_True",
               " Check if: "
               " - The function returns True "
               " - The Dem_SetEventSuspicion_Internal() function is invoked "
               " In case: "
               " - The returned value of Dem_StoCoAreAllFulfilled() function is True (line 131) "
               " - The Deb Action and DEM_DEBACTION_SETSUSPICIOUS macro is not zero, and the returned value of Dem_EvtIsSuspicious() function is False (line 152) ");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_EvtGetFDCThresholdReachedTOC#FALSE;"
                       "Dem_EvtSetFDCThresholdReachedTOC#TRUE;"
                       "Dem_OpMoIsInitialized#TRUE;"
                       "Dem_EvtGetStorageConditions#default;"
                       "Dem_StoCoAreAllFulfilled#TRUE;"
                       "Dem_EvtSetFDCThresholdReached#TRUE;"
                       "Dem_EvtIsSuspicious#FALSE;"
                       "Dem_SetEventSuspicion_Internal#TRUE;");

            /* Call SUT */
            returnValue = ACCESS_FUNCTION(Dem_Deb, Dem_DebHandleDebounceAction__processBits)(EventId, debAction);

            /* Test case checks */
            /* Expected result
             * - The function returns True;
             * - The Dem_SetEventSuspicion_Internal() function is invoked;
             */
            CHECK_BOOLEAN(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
            /* GUID - Not Applicable */
        END_CALLS();
    END_TEST();
}}

void test_Dem_DebHandleDebounceAction__processBits_StoCoAreAllFulfilled_False(int doIt){
if (doIt) {
    /* Test method - EP */

    /* Tester define */

    /* Test case data declarations */
    Dem_EventIdType EventId = 0;
    Dem_DebouncedActionType debAction = 11;
    Dem_boolean_least expected_returnValue = FALSE;
    Dem_boolean_least returnValue;

    /* Set global data */
    initialise_global_data();

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_DebHandleDebounceAction__processBits_StoCoAreAllFulfilled_False",
               " Check if: "
               " - The function returns False "
               " - The Dem_SetEventSuspicion_Internal() function is invoked "
               " In case: "
               " - The returned value of Dem_StoCoAreAllFulfilled() function is False (line 131) "
               " - The Deb Action and DEM_DEBACTION_RESETSUSPICIOUS macro is not zero, and the returned value of Dem_EvtIsSuspicious() function is True (line 158) ");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_EvtGetFDCThresholdReachedTOC#FALSE;"
                       "Dem_EvtSetFDCThresholdReachedTOC#TRUE;"
                       "Dem_OpMoIsInitialized#TRUE;"
                       "Dem_EvtGetStorageConditions#default;"
                       "Dem_StoCoAreAllFulfilled#FALSE;"
                       "Dem_EvtSetFDCThresholdReached#TRUE;"
                       "Dem_EvtIsSuspicious#TRUE;"
                       "Dem_SetEventSuspicion_Internal#FALSE;");

            /* Call SUT */
            returnValue = ACCESS_FUNCTION(Dem_Deb, Dem_DebHandleDebounceAction__processBits)(EventId, debAction);

            /* Test case checks */
            /* Expected result
             * - The function returns False;
             * - The Dem_SetEventSuspicion_Internal() function is invoked;
             */
            CHECK_BOOLEAN(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
            /* GUID - Not Applicable */
        END_CALLS();
    END_TEST();
}}

void test_Dem_DebHandleDebounceAction__processBits_OpMoIsInitialized_False(int doIt){
if (doIt) {
    /* Test method - EP */

    /* Tester define */

    /* Test case data declarations */
    Dem_EventIdType EventId = 0;
    Dem_DebouncedActionType debAction = DEM_DEBACTION_SETFDCTHRESHOLDREACHED;
    Dem_boolean_least expected_returnValue = FALSE;
    Dem_boolean_least returnValue;

    /* Set global data */
    initialise_global_data();

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_DebHandleDebounceAction__processBits_OpMoIsInitialized_False",
               " Check if: "
               " - The function returns False "
               " - The Dem_SetEventSuspicion_Internal() function is not invoked "
               " In case: "
               " - The returned value of Dem_OpMoIsInitialized() function is False (line 128) "
               " - The Deb Action and DEM_DEBACTION_RESETSUSPICIOUS macro is zero (line 158) ");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_EvtGetFDCThresholdReachedTOC#FALSE;"
                       "Dem_EvtSetFDCThresholdReachedTOC#TRUE;"
                       "Dem_OpMoIsInitialized#FALSE;"
                       "Dem_EvtSetFDCThresholdReached#TRUE;");

            /* Call SUT */
            returnValue = ACCESS_FUNCTION(Dem_Deb, Dem_DebHandleDebounceAction__processBits)(EventId, debAction);

            /* Test case checks */
            /* Expected result
             * - The function returns False;
             * - The Dem_SetEventSuspicion_Internal() function is not invoked;
             */
            CHECK_BOOLEAN(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
            /* GUID - Not Applicable */
        END_CALLS();
    END_TEST();
}}

void test_Dem_DebHandleDebounceAction__processBits_ThresholdReachedTOC_True(int doIt){
if (doIt) {
    /* Test method - EP */

    /* Tester define */

    /* Test case data declarations */
    Dem_EventIdType EventId = 0;
    Dem_DebouncedActionType debAction = DEM_DEBACTION_SETFDCTHRESHOLDREACHED;
    Dem_boolean_least expected_returnValue = FALSE;
    Dem_boolean_least returnValue;

    /* Set global data */
    initialise_global_data();

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_DebHandleDebounceAction__processBits_ThresholdReachedTOC_True",
               " Check if: "
               " - The function returns False "
               " - The Dem_SetEventSuspicion_Internal() function is not invoked "
               " In case: "
               " - The returned value of Dem_EvtGetFDCThresholdReachedTOC() function is True (line 123) "
               " - The Deb Action and DEM_DEBACTION_RESETSUSPICIOUS macro is zero (line 158) ");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_EvtGetFDCThresholdReachedTOC#TRUE;"
                       "Dem_EvtSetFDCThresholdReached#TRUE;");

            /* Call SUT */
            returnValue = ACCESS_FUNCTION(Dem_Deb, Dem_DebHandleDebounceAction__processBits)(EventId, debAction);

            /* Test case checks */
            /* Expected result
             * - The function returns False;
             * - The Dem_SetEventSuspicion_Internal() function is not invoked;
             */
            CHECK_BOOLEAN(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
            /* GUID - Not Applicable */
        END_CALLS();
    END_TEST();
}}

void test_Dem_DebHandleDebounceAction__processBits_DebAction_THRESHOLDREACHED(int doIt){
if (doIt) {
    /* Test method - EP */

    /* Tester define */

    /* Test case data declarations */
    Dem_EventIdType EventId = 0;
    Dem_DebouncedActionType debAction = DEM_DEBACTION_RESETFDCTHRESHOLDREACHED;
    Dem_boolean_least expected_returnValue = FALSE;
    Dem_boolean_least returnValue;

    /* Set global data */
    initialise_global_data();

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_DebHandleDebounceAction__processBits_DebAction_THRESHOLDREACHED",
               " Check if: "
               " - The function returns False "
               " - The Dem_SetEventSuspicion_Internal() function is invoked "
               " In case: The Deb Action and DEM_DEBACTION_RESETFDCTHRESHOLDREACHED macro is not zero (line 143) ");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_EvtSetFDCThresholdReached#FALSE;");

            /* Call SUT */
            returnValue = ACCESS_FUNCTION(Dem_Deb, Dem_DebHandleDebounceAction__processBits)(EventId, debAction);

            /* Test case checks */
            /* Expected result
             * - The function returns False;
             * - The Dem_SetEventSuspicion_Internal() function is invoked;
             */
            CHECK_BOOLEAN(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
            /* GUID - Not Applicable */
        END_CALLS();
    END_TEST();
}}

void test_Dem_DebHandleDebounceAction__processBits_DebAction_Not_THRESHOLDREACHED(int doIt){
if (doIt) {
    /* Test method - EP */

    /* Tester define */

    /* Test case data declarations */
    Dem_EventIdType EventId = 0;
    Dem_DebouncedActionType debAction = DEM_DEBACTION_NOOP;
    Dem_boolean_least expected_returnValue = FALSE;
    Dem_boolean_least returnValue;

    /* Set global data */
    initialise_global_data();

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_DebHandleDebounceAction__processBits_DebAction_Not_THRESHOLDREACHED",
               " Check if: "
               " - The function returns False "
               " - The Dem_SetEventSuspicion_Internal() function is not invoked "
               " In case: The Deb Action and DEM_DEBACTION_RESETFDCTHRESHOLDREACHED macro is zero (line 143) ");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = ACCESS_FUNCTION(Dem_Deb, Dem_DebHandleDebounceAction__processBits)(EventId, debAction);

            /* Test case checks */
            /* Expected result
             * - The function returns False;
             * - The Dem_SetEventSuspicion_Internal() function is not invoked;
             */
            CHECK_BOOLEAN(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
            /* GUID - Not Applicable */
        END_CALLS();
    END_TEST();
}}

void test_Dem_DebHandleDebounceAction_UnrobustToEvBuffer_True(int doIt){
if (doIt) {
    /* Test method - EP */

    /* Tester define */

    /* Test case data declarations */
    Dem_EventIdType EventId = 0;
    Dem_DebouncedActionType debAction = DEM_DEBACTION_NOOP;
    Dem_DebugDataType debug0 = 0;
    Dem_DebugDataType debug1 = 0;

    /* Set global data */
    initialise_global_data();

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_DebHandleDebounceAction_UnrobustToEvBuffer_True",
               " Check if the Dem_EvBuffInsert() function is invoked "
               " In case: The returned value of insertUnrobustToEvBuffer() function is True (line 176) ");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("DI#default;"
                       "Dem_DebHandleDebounceAction__processBits#TRUE;"
                       "EI#default;"
                       "Dem_EvBuffInsert#default;");

            /* Call SUT */
            ACCESS_FUNCTION(Dem_Deb, Dem_DebHandleDebounceAction)(EventId, debAction, debug0, debug1);

            /* Test case checks */
            /* Expected result - The Dem_EvBuffInsert() function is invoked  */
            /* Checks on global data */
            check_global_data();
            /* GUID
             * - {50CC7C6F-42A2-429a-8C2B-831E859EB068};
             * - {B9492061-3B63-48b0-86FE-99D8261054E1};
             * - {B174587F-C247-4b8d-982D-FE498807247F};
             * - {C046F821-DDD2-4ef6-9DBC-2AFAA789273C};
             * - {0D511B8B-4ED4-4daa-87DF-158DB86D51B2}; */
        END_CALLS();
    END_TEST();
}}

void test_Dem_DebHandleDebounceAction_UnrobustToEvBuffer_False(int doIt){
if (doIt) {
    /* Test method - EP */

    /* Tester define */

    /* Test case data declarations */
    Dem_EventIdType EventId = 0;
    Dem_DebouncedActionType debAction = DEM_DEBACTION_RESETSUSPICIOUS;
    Dem_DebugDataType debug0 = 0;
    Dem_DebugDataType debug1 = 0;

    /* Set global data */
    initialise_global_data();

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_DebHandleDebounceAction_UnrobustToEvBuffer_False",
               " Check if the Dem_EvBuffInsert() function is not invoked "
               " In case: The returned value of insertUnrobustToEvBuffer() function is False (line 180) ");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("DI#default;"
                       "Dem_DebHandleDebounceAction__processBits#FALSE;"
                       "EI#default;");

            /* Call SUT */
            ACCESS_FUNCTION(Dem_Deb, Dem_DebHandleDebounceAction)(EventId, debAction, debug0, debug1);

            /* Test case checks */
            /* Expected result - The Dem_EvBuffInsert() function is not invoked  */
            /* Checks on global data */
            check_global_data();
            /* GUID - {4901E22A-7081-4e77-9B7F-13BA3CB1BED2} */
        END_CALLS();
    END_TEST();
}}

void test_Dem_DebHandleDebounceAction_4_TimeBasedDeb_ProcessBits_Invoked(int doIt){
if (doIt) {
    /* Test method - EP */

    /* Tester define */

    /* Test case data declarations */
    Dem_EventIdType EventId = 0;
    Dem_DebouncedActionType debAction = DEM_DEBACTION_NOOP;
    Dem_boolean_least expected_returnValue = TRUE;
    Dem_boolean_least returnValue;

    /* Set global data */
    initialise_global_data();

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_DebHandleDebounceAction_4_TimeBasedDeb_ProcessBits_Invoked",
               " Check if the returned value of Dem_DebHandleDebounceAction__processBits() is returned "
               " In case: The Dem_DebHandleDebounceAction_4_TimeBasedDeb() function is invoked (line 187) ");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_DebHandleDebounceAction__processBits#TRUE;");

            /* Call SUT */
            returnValue = ACCESS_FUNCTION(Dem_Deb, Dem_DebHandleDebounceAction_4_TimeBasedDeb)(EventId, debAction);

            /* Test case checks */
            /* Expected result - The returned value of Dem_DebHandleDebounceAction__processBits() is returned */
            CHECK_BOOLEAN(returnValue, expected_returnValue);
            /* Checks on global data */
            check_global_data();
            /* GUID - Not Applicable */
        END_CALLS();
    END_TEST();
}}

void test_Dem_TimeBasedDebounceInternMainFunction_FuncPoint_Not_Null(int doIt){
if (doIt) {
    /* Test method - EP */

    /* Tester define */
    INITIALISE(paramSet_entity);

    /* Test case data declarations */

    /* Set global data */
    initialise_global_data();
    Dem_Cfg_DebClasses[0].funcPointer_Cyclic = &fnc_funcPointer_Cyclic;
    Dem_Cfg_DebClasses[0].paramSet = &paramSet_entity;
    Dem_Cfg_DebClasses[0].paramCount = 0;

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_TimeBasedDebounceInternMainFunction_FuncPoint_Not_Null",
               " Check if: "
               " - The Det_ReportError() function is invoked "
               " - The fnc_funcPointer_Cyclic() function is invoked "
               " In case: "
               " - The fnc_funcPointer_Cyclic() is not Null (line 211) "
               " - The returned value of Dem_EvtGetDebounceParamSetIndex() function is greater than param count (line 213) ");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_EventIdIteratorNew#default;"
                       "Dem_EventIdIteratorIsValid#TRUE;"
                       "Dem_EventIdIteratorCurrent#default;"
                       "Dem_EvtGetDebounceMethodIndex#default;"
                       "Dem_EvtGetDebounceMethodIndex#default;"
                       "Dem_EvtGetDebounceParamSetIndex#default;"
                       "Dem_EvtGetDebounceMethodIndex#default;"
                       "Det_ReportError#DEM_DET_APIID_DEBMAINFUNCTION;"
                       "Dem_EvtGetDebounceParamSetIndex#default;"
                       "fnc_funcPointer_Cyclic#default;"
                       "Dem_EventIdIteratorNext#default;"
                       "Dem_EventIdIteratorIsValid#TRUE;"
                       "Dem_EventIdIteratorCurrent#default;"
                       "Dem_EvtGetDebounceMethodIndex#default;"
                       "Dem_EvtGetDebounceMethodIndex#default;"
                       "Dem_EvtGetDebounceParamSetIndex#default;"
                       "Dem_EvtGetDebounceMethodIndex#default;"
                       "Det_ReportError#DEM_DET_APIID_DEBMAINFUNCTION;"
                       "Dem_EvtGetDebounceParamSetIndex#default;"
                       "fnc_funcPointer_Cyclic#default;"
                       "Dem_EventIdIteratorNext#default;"
                       "Dem_EventIdIteratorIsValid#FALSE;");

            /* Call SUT */
            ACCESS_FUNCTION(Dem_Deb, Dem_TimeBasedDebounceInternMainFunction)();

            /* Test case checks */
            /* Expected result
             * - The Det_ReportError() function is invoked;
             * - The fnc_funcPointer_Cyclic() function is invoked;
             */
            /* Checks on global data */
            check_global_data();
            /* GUID - {53E7FB9F-96B9-4ae3-8FAA-B7C280C0A60A} */
        END_CALLS();
    END_TEST();
}}

void test_Dem_TimeBasedDebounceInternMainFunction_FuncPoint_Null(int doIt){
if (doIt) {
    /* Test method - EP */

    /* Tester define */
    INITIALISE(paramSet_entity);

    /* Test case data declarations */

    /* Set global data */
    initialise_global_data();
    Dem_Cfg_DebClasses[0].funcPointer_Cyclic = NULL;
    Dem_Cfg_DebClasses[0].paramSet = &paramSet_entity;
    Dem_Cfg_DebClasses[0].paramCount = 0;

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_TimeBasedDebounceInternMainFunction_FuncPoint_Null",
               " Check if: "
               " - The Det_ReportError() function is not invoked "
               " - The fnc_funcPointer_Cyclic() function is not invoked "
               " In case: The fnc_funcPointer_Cyclic() is Null (line 211) ");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_EventIdIteratorNew#default;"
                       "Dem_EventIdIteratorIsValid#TRUE;"
                       "Dem_EventIdIteratorCurrent#default;"
                       "Dem_EvtGetDebounceMethodIndex#default;"
                       "Dem_EvtGetDebounceMethodIndex#default;"
                       "Dem_EventIdIteratorNext#default;"
                       "Dem_EventIdIteratorIsValid#TRUE;"
                       "Dem_EventIdIteratorCurrent#default;"
                       "Dem_EvtGetDebounceMethodIndex#default;"
                       "Dem_EvtGetDebounceMethodIndex#default;"
                       "Dem_EventIdIteratorNext#default;"
                       "Dem_EventIdIteratorIsValid#FALSE;");

            /* Call SUT */
            ACCESS_FUNCTION(Dem_Deb, Dem_TimeBasedDebounceInternMainFunction)();

            /* Test case checks */
            /* Expected result
             * - The Det_ReportError() function is not invoked;
             * - The fnc_funcPointer_Cyclic() function is not invoked;
             */
            /* Checks on global data */
            check_global_data();
            /* GUID - Not Applicable */
        END_CALLS();
    END_TEST();
}}

/*****************************************************************************/
/* Call Interface Control                                                    */
/*****************************************************************************/

/* Stub for function rba_BswSrv_MemCopy */
void * rba_BswSrv_MemCopy(void * xDest_pv,
                          const void * xSrc_pcv,
                          uint32 numBytes_s32){
    REGISTER_CALL("rba_BswSrv_MemCopy");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Stub for function rba_BswSrv_MemSet */
void * rba_BswSrv_MemSet(void * xDest_pv,
                         sint32 xPattern_u32,
                         uint32 numBytes_s32){
    REGISTER_CALL("rba_BswSrv_MemSet");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Stub for function rba_BswSrv_MemCompare */
sint32 rba_BswSrv_MemCompare(const void * xSrc1_pcv,
                             const void * xSrc2_pcv,
                             uint32 numBytes_s32){
    REGISTER_CALL("rba_BswSrv_MemCompare");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Stub for function NvM_GetErrorStatus */
Std_ReturnType NvM_GetErrorStatus(NvM_BlockIdType BlockId,
                                  NvM_RequestResultType * RequestResultPtr){
    REGISTER_CALL("NvM_GetErrorStatus");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Stub for function DI */
void DI(){
    REGISTER_CALL("DI");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Stub for function EI */
void EI(){
    REGISTER_CALL("EI");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Stub for function Dem_getEventUserAttributes */
const Dem_EventAttributeType * Dem_getEventUserAttributes(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_getEventUserAttributes");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Stub for function Dem_EvtIsRecoverable */
Dem_boolean_least Dem_EvtIsRecoverable(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtIsRecoverable");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Stub for function Dem_IsInitMonitorForEventRequested */
boolean Dem_IsInitMonitorForEventRequested(Dem_EventIdType EventId,
                                           Dem_InitMonitorReasonType * InitMonitorReason){
    REGISTER_CALL("Dem_IsInitMonitorForEventRequested");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Stub for function Dem_EvBuffIsEventPending */
Dem_boolean_least Dem_EvBuffIsEventPending(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvBuffIsEventPending");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Stub for function Dem_SetEventSuspicion_Internal */
void Dem_SetEventSuspicion_Internal(Dem_EventIdType EventId,
                                    boolean suspicion){
    REGISTER_CALL("Dem_SetEventSuspicion_Internal");

    IF_INSTANCE("TRUE") {
        CHECK_U_INT(EventId, 0);
        CHECK_BOOLEAN(suspicion, TRUE);
        return;
    }
    IF_INSTANCE("FALSE") {
        CHECK_U_INT(EventId, 0);
        CHECK_BOOLEAN(suspicion, FALSE);
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Stub for function Dem_EvBuffInsert */
Dem_boolean_least Dem_EvBuffInsert(uint8 eventType,
                                   Dem_EventIdType eventId){
    REGISTER_CALL("Dem_EvBuffInsert");

    IF_INSTANCE("default") {
        CHECK_U_INT(eventType, C_EVENTTYPE_UNROBUST);
        CHECK_U_INT(eventId, 0);
        return TRUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Stub for function Dem_Client_getClient */
Dem_ClientType * Dem_Client_getClient(Dem_ClientIdType ClientId){
    REGISTER_CALL("Dem_Client_getClient");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Stub for function Dem_DtcStatusByteRetrieve */
uint8 Dem_DtcStatusByteRetrieve(Dem_DtcIdType dtcId){
    REGISTER_CALL("Dem_DtcStatusByteRetrieve");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Stub for function Dem_EvMemSetEventFailed */
void Dem_EvMemSetEventFailed(Dem_EventIdType EventId,
                             uint16_least MemId,
                             const uint8 * EnvData){
    REGISTER_CALL("Dem_EvMemSetEventFailed");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Stub for function Dem_EvMemSetEventPassed */
void Dem_EvMemSetEventPassed(Dem_EventIdType EventId,
                             uint16_least MemId,
                             const uint8 * EnvData){
    REGISTER_CALL("Dem_EvMemSetEventPassed");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Stub for function Dem_EvMemSetEventUnRobust */
void Dem_EvMemSetEventUnRobust(Dem_EventIdType EventId,
                               uint16_least MemId,
                               const uint8 * EnvData){
    REGISTER_CALL("Dem_EvMemSetEventUnRobust");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Stub for function Dem_EvMemStartOperationCycle */
void Dem_EvMemStartOperationCycle(Dem_OperationCycleList operationCycleList,
                                  uint16_least MemId){
    REGISTER_CALL("Dem_EvMemStartOperationCycle");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Stub for function Dem_EvMemClearEvent */
void Dem_EvMemClearEvent(Dem_EventIdType EventId,
                         uint16_least MemId){
    REGISTER_CALL("Dem_EvMemClearEvent");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Stub for function Dem_EvMemGetEventMemoryStatusOfDtc */
uint16_least Dem_EvMemGetEventMemoryStatusOfDtc(Dem_DtcIdType DtcId,
                                                uint16_least MemId){
    REGISTER_CALL("Dem_EvMemGetEventMemoryStatusOfDtc");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Stub for function Dem_EvMemGetEventMemoryStatusOfEvent */
uint16_least Dem_EvMemGetEventMemoryStatusOfEvent(Dem_EventIdType EventId,
                                                  uint16_least MemId){
    REGISTER_CALL("Dem_EvMemGetEventMemoryStatusOfEvent");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Stub for function Dem_EvMemGetEventMemoryLocIdOfEvent */
uint16_least Dem_EvMemGetEventMemoryLocIdOfEvent(Dem_EventIdType EventId,
                                                 uint16_least MemId){
    REGISTER_CALL("Dem_EvMemGetEventMemoryLocIdOfEvent");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Stub for function Dem_EvMemGetReaderCopyOfEvent */
Std_ReturnType Dem_EvMemGetReaderCopyOfEvent(Dem_EvMemEventMemoryType * ReaderCopy,
                                             Dem_EventIdType EventId,
                                             uint16_least MemId){
    REGISTER_CALL("Dem_EvMemGetReaderCopyOfEvent");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Stub for function Dem_EvMemGetMemoryLocIdOfDtcAndOriginWithVisibility */
uint16_least Dem_EvMemGetMemoryLocIdOfDtcAndOriginWithVisibility(Dem_DtcIdType DtcId,
                                                                 Dem_DTCOriginType DTCOrigin,
                                                                 Dem_boolean_least ShadowEntriesVisible){
    REGISTER_CALL("Dem_EvMemGetMemoryLocIdOfDtcAndOriginWithVisibility");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Stub for function Dem_EvMemGetEventMemoryLocIdOfDtcWithVisibility */
uint16_least Dem_EvMemGetEventMemoryLocIdOfDtcWithVisibility(Dem_DtcIdType DtcId,
                                                             uint16_least MemId,
                                                             Dem_boolean_least ShadowEntriesVisible){
    REGISTER_CALL("Dem_EvMemGetEventMemoryLocIdOfDtcWithVisibility");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Stub for function Dem_IsEventEnabledByDtcSetting */
Dem_boolean_least Dem_IsEventEnabledByDtcSetting(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_IsEventEnabledByDtcSetting");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Stub for function Dem_DistMemReportPassed */
void Dem_DistMemReportPassed(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_DistMemReportPassed");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Stub for function Dem_EvtProcessPassedAndFailed */
void Dem_EvtProcessPassedAndFailed(Dem_EventIdType EventId,
                                   Dem_EventStatusType EventStatus){
    REGISTER_CALL("Dem_EvtProcessPassedAndFailed");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Stub for function Dem_DistMemReportFailed */
void Dem_DistMemReportFailed(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_DistMemReportFailed");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function rba_DiagLib_Bit8SetBit */
void ISOLATE_Dem_Deb_rba_DiagLib_Bit8SetBit(uint8 * buffer,
                                            uint8 bit_position){
    REGISTER_CALL("rba_DiagLib_Bit8SetBit");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function rba_DiagLib_Bit8ClearBit */
void ISOLATE_Dem_Deb_rba_DiagLib_Bit8ClearBit(uint8 * buffer,
                                              uint8 bit_position){
    REGISTER_CALL("rba_DiagLib_Bit8ClearBit");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function rba_DiagLib_Bit8ClearBits */
void ISOLATE_Dem_Deb_rba_DiagLib_Bit8ClearBits(uint8 * value,
                                               uint8 bit_position,
                                               uint8 number_of_bits){
    REGISTER_CALL("rba_DiagLib_Bit8ClearBits");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function rba_DiagLib_Bit16SetBit */
void ISOLATE_Dem_Deb_rba_DiagLib_Bit16SetBit(uint16 * buffer,
                                             uint8 bit_position){
    REGISTER_CALL("rba_DiagLib_Bit16SetBit");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function rba_DiagLib_Bit16ClearBit */
void ISOLATE_Dem_Deb_rba_DiagLib_Bit16ClearBit(uint16 * buffer,
                                               uint8 bit_position){
    REGISTER_CALL("rba_DiagLib_Bit16ClearBit");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function rba_DiagLib_Bit16ClearBits */
void ISOLATE_Dem_Deb_rba_DiagLib_Bit16ClearBits(uint16 * value,
                                                uint8 bit_position,
                                                uint8 number_of_bits){
    REGISTER_CALL("rba_DiagLib_Bit16ClearBits");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function rba_DiagLib_Bit32SetBit */
void ISOLATE_Dem_Deb_rba_DiagLib_Bit32SetBit(uint32 * buffer,
                                             uint8 bit_position){
    REGISTER_CALL("rba_DiagLib_Bit32SetBit");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function rba_DiagLib_Bit32ClearBit */
void ISOLATE_Dem_Deb_rba_DiagLib_Bit32ClearBit(uint32 * buffer,
                                               uint8 bit_position){
    REGISTER_CALL("rba_DiagLib_Bit32ClearBit");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function rba_DiagLib_Bit32ClearBits */
void ISOLATE_Dem_Deb_rba_DiagLib_Bit32ClearBits(uint32 * value,
                                                uint8 bit_position,
                                                uint8 number_of_bits){
    REGISTER_CALL("rba_DiagLib_Bit32ClearBits");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_isDtcIdValid */
Dem_boolean_least ISOLATE_Dem_Deb_Dem_isDtcIdValid(Dem_DtcIdType id){
    REGISTER_CALL("Dem_isDtcIdValid");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Det_ReportError */
Std_ReturnType ISOLATE_Det_ReportError(uint16 ModuleId,
                                       uint8 InstanceId,
                                       uint8 ApiId,
                                       uint8 ErrorId){
    REGISTER_CALL("Det_ReportError");

    IF_INSTANCE("Zero") {
        CHECK_U_INT(ModuleId, DEM_MODULE_ID);
        CHECK_U_INT(InstanceId, DEM_INSTANCE_ID);
        CHECK_U_INT(ApiId, DEM_DET_APIID_DEBCALLFILTER);
        CHECK_U_INT(ErrorId, 0);
        return E_NOT_OK;
    }
    IF_INSTANCE("One") {
        CHECK_U_INT(ModuleId, DEM_MODULE_ID);
        CHECK_U_INT(InstanceId, DEM_INSTANCE_ID);
        CHECK_U_INT(ApiId, DEM_DET_APIID_DEBCALLFILTER);
        CHECK_U_INT(ErrorId, 1);
        return E_NOT_OK;
    }
    IF_INSTANCE("DEM_DET_APIID_DEBCALLFILTER") {
        CHECK_U_INT(ModuleId, DEM_MODULE_ID);
        CHECK_U_INT(InstanceId, DEM_INSTANCE_ID);
        CHECK_U_INT(ApiId, DEM_DET_APIID_DEBCALLFILTER);
        CHECK_U_INT(ErrorId, 2);
        return E_NOT_OK;
    }
    IF_INSTANCE("DEM_DET_APIID_DEBMAINFUNCTION") {
        CHECK_U_INT(ModuleId, DEM_MODULE_ID);
        CHECK_U_INT(InstanceId, DEM_INSTANCE_ID);
        CHECK_U_INT(ApiId, DEM_DET_APIID_DEBMAINFUNCTION);
        CHECK_U_INT(ErrorId, 0);
        return E_NOT_OK;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_DtcGroupIdIsValid */
Dem_boolean_least ISOLATE_Dem_Deb_Dem_DtcGroupIdIsValid(Dem_DTCGroupIdType dtcGroupID){
    REGISTER_CALL("Dem_DtcGroupIdIsValid");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_J1939IsNodeIdValid */
Dem_boolean_least ISOLATE_Dem_Deb_Dem_J1939IsNodeIdValid(Dem_J1939NodeIdType nodeId){
    REGISTER_CALL("Dem_J1939IsNodeIdValid");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_BitArraySetBit */
void ISOLATE_Dem_Deb_Dem_BitArraySetBit(uint32 * buffer,
                                        uint32 bit_position){
    REGISTER_CALL("Dem_BitArraySetBit");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_BitArrayClearBit */
void ISOLATE_Dem_Deb_Dem_BitArrayClearBit(uint32 * buffer,
                                          uint32 bit_position){
    REGISTER_CALL("Dem_BitArrayClearBit");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function rba_DiagLib_Bit8IsBitSet */
boolean ISOLATE_Dem_Deb_rba_DiagLib_Bit8IsBitSet(uint8 value,
                                                 uint8 bit_position){
    REGISTER_CALL("rba_DiagLib_Bit8IsBitSet");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function rba_DiagLib_Bit8OverwriteBit */
void ISOLATE_Dem_Deb_rba_DiagLib_Bit8OverwriteBit(uint8 * buffer,
                                                  uint8 bit_position,
                                                  boolean will_bit_be_set){
    REGISTER_CALL("rba_DiagLib_Bit8OverwriteBit");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EnCoAreAllFulfilled */
Dem_boolean_least ISOLATE_Dem_Deb_Dem_EnCoAreAllFulfilled(Dem_EnCoList enableConditionList){
    REGISTER_CALL("Dem_EnCoAreAllFulfilled");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_NvMGetNvMBlocKId */
NvM_BlockIdType ISOLATE_Dem_Deb_Dem_NvMGetNvMBlocKId(Dem_NvmBlockIdType id){
    REGISTER_CALL("Dem_NvMGetNvMBlocKId");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_IndicatorGetBlinkingCounter */
uint16 ISOLATE_Dem_Deb_Dem_IndicatorGetBlinkingCounter(uint8 indicatorId){
    REGISTER_CALL("Dem_IndicatorGetBlinkingCounter");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_IndicatorGetContinuousCounter */
uint16 ISOLATE_Dem_Deb_Dem_IndicatorGetContinuousCounter(uint8 indicatorId){
    REGISTER_CALL("Dem_IndicatorGetContinuousCounter");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_IndicatorGetFastFlashCtr */
uint16 ISOLATE_Dem_Deb_Dem_IndicatorGetFastFlashCtr(uint8 indicatorId){
    REGISTER_CALL("Dem_IndicatorGetFastFlashCtr");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_IndicatorGetSlowFlashCtr */
uint16 ISOLATE_Dem_Deb_Dem_IndicatorGetSlowFlashCtr(uint8 indicatorId){
    REGISTER_CALL("Dem_IndicatorGetSlowFlashCtr");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_IndicatorSetContinuousCtr */
void ISOLATE_Dem_Deb_Dem_IndicatorSetContinuousCtr(uint8 indicatorId,
                                                   uint16 continuousCtr){
    REGISTER_CALL("Dem_IndicatorSetContinuousCtr");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_IndicatorSetBlinkingCtr */
void ISOLATE_Dem_Deb_Dem_IndicatorSetBlinkingCtr(uint8 indicatorId,
                                                 uint16 blinkingCtr){
    REGISTER_CALL("Dem_IndicatorSetBlinkingCtr");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_IndicatorSetFastFlashCtr */
void ISOLATE_Dem_Deb_Dem_IndicatorSetFastFlashCtr(uint8 indicatorId,
                                                  uint16 fastFlashCtr){
    REGISTER_CALL("Dem_IndicatorSetFastFlashCtr");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_IndicatorSetSlowFlashCtr */
void ISOLATE_Dem_Deb_Dem_IndicatorSetSlowFlashCtr(uint8 indicatorId,
                                                  uint16 slowFlashCtr){
    REGISTER_CALL("Dem_IndicatorSetSlowFlashCtr");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function rba_DiagLib_Bit16GetBits */
uint16 ISOLATE_Dem_Deb_rba_DiagLib_Bit16GetBits(uint16 value,
                                                uint8 bit_position,
                                                uint8 number_of_bits){
    REGISTER_CALL("rba_DiagLib_Bit16GetBits");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function rba_DiagLib_Bit16IsBitSet */
boolean ISOLATE_Dem_Deb_rba_DiagLib_Bit16IsBitSet(uint16 value,
                                                  uint8 bit_position){
    REGISTER_CALL("rba_DiagLib_Bit16IsBitSet");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_NvMWriteBlockOnShutdown */
void ISOLATE_Dem_Deb_Dem_NvMWriteBlockOnShutdown(Dem_NvmBlockIdType id){
    REGISTER_CALL("Dem_NvMWriteBlockOnShutdown");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_ISO14229ByteIsWarningIndicatorRequested */
Dem_boolean_least ISOLATE_Dem_Deb_Dem_ISO14229ByteIsWarningIndicatorRequested(uint8 self){
    REGISTER_CALL("Dem_ISO14229ByteIsWarningIndicatorRequested");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EventIndicatorAttributeIteratorNew */
void ISOLATE_Dem_Deb_Dem_EventIndicatorAttributeIteratorNew(Dem_EventIdType EventId,
                                                            Dem_EventIndicatorAttributeIterator * it){
    REGISTER_CALL("Dem_EventIndicatorAttributeIteratorNew");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EventIndicatorAttributeIsValid */
Dem_boolean_least ISOLATE_Dem_Deb_Dem_EventIndicatorAttributeIsValid(Dem_EventIdType EventId,
                                                                     const Dem_EventIndicatorAttributeIterator * it){
    REGISTER_CALL("Dem_EventIndicatorAttributeIsValid");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EventIndicatorAttributeNext */
void ISOLATE_Dem_Deb_Dem_EventIndicatorAttributeNext(Dem_EventIndicatorAttributeIterator * it){
    REGISTER_CALL("Dem_EventIndicatorAttributeNext");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EventIndicatorAttributeCurrent */
uint16_least ISOLATE_Dem_Deb_Dem_EventIndicatorAttributeCurrent(const Dem_EventIndicatorAttributeIterator * it){
    REGISTER_CALL("Dem_EventIndicatorAttributeCurrent");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_IsIndicatorAttributeValid */
Dem_boolean_least ISOLATE_Dem_Deb_Dem_IsIndicatorAttributeValid(uint16_least indicatorIndex){
    REGISTER_CALL("Dem_IsIndicatorAttributeValid");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_IndicatorAttrib_GetIndicatorId */
uint8 ISOLATE_Dem_Deb_Dem_IndicatorAttrib_GetIndicatorId(uint16_least indicatorIndex){
    REGISTER_CALL("Dem_IndicatorAttrib_GetIndicatorId");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_IndicatorAttrib_GetBehaviour */
uint8 ISOLATE_Dem_Deb_Dem_IndicatorAttrib_GetBehaviour(uint16_least indicatorIndex){
    REGISTER_CALL("Dem_IndicatorAttrib_GetBehaviour");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_IndicatorAttribGetFailureCycCtr */
uint8 ISOLATE_Dem_Deb_Dem_IndicatorAttribGetFailureCycCtr(uint16_least indicatorIndex){
    REGISTER_CALL("Dem_IndicatorAttribGetFailureCycCtr");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_IndicatorDecrementBehaviourCounter */
void ISOLATE_Dem_Deb_Dem_IndicatorDecrementBehaviourCounter(uint8 indicatorId,
                                                            uint8 indicatorBehaviour){
    REGISTER_CALL("Dem_IndicatorDecrementBehaviourCounter");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_IndicatorAttribSetFailureCycCtr */
void ISOLATE_Dem_Deb_Dem_IndicatorAttribSetFailureCycCtr(uint16_least indicatorIndex,
                                                         uint8 failureCtr){
    REGISTER_CALL("Dem_IndicatorAttribSetFailureCycCtr");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_IndicatorAttribSetHealingCycCtr */
void ISOLATE_Dem_Deb_Dem_IndicatorAttribSetHealingCycCtr(uint16_least indicatorIndex,
                                                         uint8 healingCtr){
    REGISTER_CALL("Dem_IndicatorAttribSetHealingCycCtr");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_BitArrayIsBitSet */
Dem_boolean_least ISOLATE_Dem_Deb_Dem_BitArrayIsBitSet(const uint32 * buffer,
                                                       uint32 bit_position){
    REGISTER_CALL("Dem_BitArrayIsBitSet");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_BitArrayOverwriteBit */
void ISOLATE_Dem_Deb_Dem_BitArrayOverwriteBit(uint32 * buffer,
                                              uint32 bit_position,
                                              Dem_boolean_least will_bit_be_set){
    REGISTER_CALL("Dem_BitArrayOverwriteBit");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function rba_DiagLib_Bit32IsBitSet */
boolean ISOLATE_Dem_Deb_rba_DiagLib_Bit32IsBitSet(uint32 value,
                                                  uint8 bit_position){
    REGISTER_CALL("rba_DiagLib_Bit32IsBitSet");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function rba_DiagLib_Bit32OverwriteBit */
void ISOLATE_Dem_Deb_rba_DiagLib_Bit32OverwriteBit(uint32 * buffer,
                                                   uint8 bit_position,
                                                   boolean will_bit_be_set){
    REGISTER_CALL("rba_DiagLib_Bit32OverwriteBit");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_NvMIsInvalidateAllNVMBlocksRequested */
Dem_boolean_least ISOLATE_Dem_Deb_Dem_NvMIsInvalidateAllNVMBlocksRequested(){
    REGISTER_CALL("Dem_NvMIsInvalidateAllNVMBlocksRequested");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function rba_DiagLib_MemUtils_MemSet */
void ISOLATE_Dem_Deb_rba_DiagLib_MemUtils_MemSet(uint8 * xDest_pv,
                                                 sint32 xPattern_u32,
                                                 uint32 numBytes_s32){
    REGISTER_CALL("rba_DiagLib_MemUtils_MemSet");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_NvMClearBlockByInvalidate */
void ISOLATE_Dem_Deb_Dem_NvMClearBlockByInvalidate(Dem_NvmBlockIdType id){
    REGISTER_CALL("Dem_NvMClearBlockByInvalidate");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_NvmGetStatus */
Dem_NvmResultType ISOLATE_Dem_Deb_Dem_NvmGetStatus(Dem_NvmBlockIdType id){
    REGISTER_CALL("Dem_NvmGetStatus");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function rba_DiagLib_Bit32GetBits */
uint32 ISOLATE_Dem_Deb_rba_DiagLib_Bit32GetBits(uint32 value,
                                                uint8 bit_position,
                                                uint8 number_of_bits){
    REGISTER_CALL("rba_DiagLib_Bit32GetBits");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvtGetEnableConditions */
Dem_EnCoList ISOLATE_Dem_Deb_Dem_EvtGetEnableConditions(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtGetEnableConditions");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function rba_DiagLib_Bit32OverwriteBits */
void ISOLATE_Dem_Deb_rba_DiagLib_Bit32OverwriteBits(uint32 * value,
                                                    uint8 bit_position,
                                                    uint8 number_of_bits,
                                                    uint32 newValue){
    REGISTER_CALL("rba_DiagLib_Bit32OverwriteBits");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtIncreaseGlobalInitMonitoringCounter */
void ISOLATE_Dem_Deb_Dem_EvtIncreaseGlobalInitMonitoringCounter(){
    REGISTER_CALL("Dem_EvtIncreaseGlobalInitMonitoringCounter");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtSetAnyInitMonitoring */
void ISOLATE_Dem_Deb_Dem_EvtSetAnyInitMonitoring(Dem_InitMonitorReasonType reason){
    REGISTER_CALL("Dem_EvtSetAnyInitMonitoring");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtIsAnyInitMonitoringRequested */
boolean ISOLATE_Dem_Deb_Dem_EvtIsAnyInitMonitoringRequested(){
    REGISTER_CALL("Dem_EvtIsAnyInitMonitoringRequested");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvtResetAnyInitMonitoring */
void ISOLATE_Dem_Deb_Dem_EvtResetAnyInitMonitoring(){
    REGISTER_CALL("Dem_EvtResetAnyInitMonitoring");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtGetOperationCycleId */
uint8 ISOLATE_Dem_Deb_Dem_EvtGetOperationCycleId(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtGetOperationCycleId");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvtGetAgingCycleId */
uint8 ISOLATE_Dem_Deb_Dem_EvtGetAgingCycleId(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtGetAgingCycleId");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvtGetFailureCycleId */
uint8 ISOLATE_Dem_Deb_Dem_EvtGetFailureCycleId(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtGetFailureCycleId");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function rba_DiagLib_MemUtils_MemCpy */
void ISOLATE_Dem_Deb_rba_DiagLib_MemUtils_MemCpy(uint8 * xDest_p,
                                                 const uint8 * xSrc_pc,
                                                 uint32 numBytes_s32){
    REGISTER_CALL("rba_DiagLib_MemUtils_MemCpy");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtIsEventStoredInDistMem */
Dem_boolean_least ISOLATE_Dem_Deb_Dem_EvtIsEventStoredInDistMem(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtIsEventStoredInDistMem");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_DistMemIsFull */
Dem_boolean_least ISOLATE_Dem_Deb_Dem_DistMemIsFull(){
    REGISTER_CALL("Dem_DistMemIsFull");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvtGetDebounceMethodIndex */
uint8 ISOLATE_Dem_Deb_Dem_EvtGetDebounceMethodIndex(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtGetDebounceMethodIndex");

    IF_INSTANCE("DEM_DEBMETH_IDX_MONINTERNAL") {
        CHECK_U_INT(EventId, 0);
        return DEM_DEBMETH_IDX_MONINTERNAL;
    }
    IF_INSTANCE("DEM_DEBMETH_IDX_ARTIME") {
        CHECK_U_INT(EventId, 0);
        return DEM_DEBMETH_IDX_ARTIME;
    }
    IF_INSTANCE("default") {
        CHECK_U_INT(EventId, 0);
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvtGetDebounceParamSetIndex */
uint16 ISOLATE_Dem_Deb_Dem_EvtGetDebounceParamSetIndex(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtGetDebounceParamSetIndex");

    IF_INSTANCE("default") {
        CHECK_U_INT(EventId, 0);
        return 2;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvtGetFDCThresholdReachedTOC */
Dem_boolean_least ISOLATE_Dem_Deb_Dem_EvtGetFDCThresholdReachedTOC(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtGetFDCThresholdReachedTOC");

    IF_INSTANCE("FALSE") {
        CHECK_U_INT(EventId, 0);
        return FALSE;
    }
    IF_INSTANCE("TRUE") {
        CHECK_U_INT(EventId, 0);
        return TRUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvtSetFDCThresholdReachedTOC */
void ISOLATE_Dem_Deb_Dem_EvtSetFDCThresholdReachedTOC(Dem_EventIdType EventId,
                                                      Dem_boolean_least setBit){
    REGISTER_CALL("Dem_EvtSetFDCThresholdReachedTOC");

    IF_INSTANCE("TRUE") {
        CHECK_U_INT(EventId, 0);
        CHECK_BOOLEAN(setBit, TRUE);
        return;
    }
    IF_INSTANCE("FALSE") {
        CHECK_U_INT(EventId, 0);
        CHECK_BOOLEAN(setBit, FALSE);
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_OpMoIsInitialized */
Dem_boolean_least ISOLATE_Dem_Deb_Dem_OpMoIsInitialized(){
    REGISTER_CALL("Dem_OpMoIsInitialized");

    IF_INSTANCE("TRUE") {
        return TRUE;
    }
    IF_INSTANCE("FALSE") {
        return FALSE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_StoCoAreAllFulfilled */
boolean ISOLATE_Dem_Deb_Dem_StoCoAreAllFulfilled(Dem_StoCoList storageConditionList){
    REGISTER_CALL("Dem_StoCoAreAllFulfilled");

    IF_INSTANCE("TRUE") {
        CHECK_U_INT(storageConditionList, 0);
        return TRUE;
    }
    IF_INSTANCE("FALSE") {
        CHECK_U_INT(storageConditionList, 0);
        return FALSE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvtGetStorageConditions */
Dem_StoCoList ISOLATE_Dem_Deb_Dem_EvtGetStorageConditions(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtGetStorageConditions");

    IF_INSTANCE("default") {
        CHECK_U_INT(EventId, 0);
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvtSetFDCThresholdReached */
void ISOLATE_Dem_Deb_Dem_EvtSetFDCThresholdReached(Dem_EventIdType EventId,
                                                   Dem_boolean_least setBit){
    REGISTER_CALL("Dem_EvtSetFDCThresholdReached");

    IF_INSTANCE("TRUE") {
        CHECK_U_INT(EventId, 0);
        CHECK_BOOLEAN(setBit, TRUE);
        return;
    }
    IF_INSTANCE("FALSE") {
        CHECK_U_INT(EventId, 0);
        CHECK_BOOLEAN(setBit, FALSE);
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtIsSuspicious */
Dem_boolean_least ISOLATE_Dem_Deb_Dem_EvtIsSuspicious(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtIsSuspicious");

    IF_INSTANCE("FALSE") {
        CHECK_U_INT(EventId, 0);
        return FALSE;
    }

    IF_INSTANCE("TRUE") {
        CHECK_U_INT(EventId, 0);
        return TRUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_DebHandleDebounceAction__processBits */
Dem_boolean_least ISOLATE_Dem_Deb_Dem_DebHandleDebounceAction__processBits(Dem_EventIdType EventId,
                                                                           Dem_DebouncedActionType debAction){
    REGISTER_CALL("Dem_DebHandleDebounceAction__processBits");

    IF_INSTANCE("TRUE") {
        CHECK_U_INT(EventId, 0);
        CHECK_U_INT(debAction, DEM_DEBACTION_NOOP);
        return TRUE;
    }
    IF_INSTANCE("FALSE") {
        CHECK_U_INT(EventId, 0);
        CHECK_U_INT(debAction, DEM_DEBACTION_RESETSUSPICIOUS);
        return FALSE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EventIdIteratorNew */
void ISOLATE_Dem_Deb_Dem_EventIdIteratorNew(Dem_EventIdIterator * it){
    REGISTER_CALL("Dem_EventIdIteratorNew");

    IF_INSTANCE("default") {
        * it = 1;
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EventIdIteratorIsValid */
Dem_boolean_least ISOLATE_Dem_Deb_Dem_EventIdIteratorIsValid(const Dem_EventIdIterator * it){
    REGISTER_CALL("Dem_EventIdIteratorIsValid");

    IF_INSTANCE("TRUE") {
        return TRUE;
    }
    IF_INSTANCE("FALSE") {
        return FALSE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EventIdIteratorNext */
void ISOLATE_Dem_Deb_Dem_EventIdIteratorNext(Dem_EventIdIterator * it){
    REGISTER_CALL("Dem_EventIdIteratorNext");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EventIdIteratorCurrent */
Dem_EventIdType ISOLATE_Dem_Deb_Dem_EventIdIteratorCurrent(const Dem_EventIdIterator * it){
    REGISTER_CALL("Dem_EventIdIteratorCurrent");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EnvIsAnyTriggerSet */
Dem_boolean_least ISOLATE_Dem_Deb_Dem_EnvIsAnyTriggerSet(Dem_TriggerType trigger2test){
    REGISTER_CALL("Dem_EnvIsAnyTriggerSet");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_ClientSelectionType_invalidateSelectionResult */
void ISOLATE_Dem_Deb_Dem_ClientSelectionType_invalidateSelectionResult(Dem_ClientSelectionType * selection){
    REGISTER_CALL("Dem_ClientSelectionType_invalidateSelectionResult");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_ClientClearMachine_SetMachineActiveClient */
void ISOLATE_Dem_Deb_Dem_ClientClearMachine_SetMachineActiveClient(Dem_ClientIdType ClientId){
    REGISTER_CALL("Dem_ClientClearMachine_SetMachineActiveClient");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_ClientClearMachine_SetMachineState */
void ISOLATE_Dem_Deb_Dem_ClientClearMachine_SetMachineState(uint8 state){
    REGISTER_CALL("Dem_ClientClearMachine_SetMachineState");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_NvMStartClear */
void ISOLATE_Dem_Deb_Dem_NvMStartClear(){
    REGISTER_CALL("Dem_NvMStartClear");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvMemIsEventMemLocIdValid */
Dem_boolean_least ISOLATE_Dem_Deb_Dem_EvMemIsEventMemLocIdValid(uint16_least LocId){
    REGISTER_CALL("Dem_EvMemIsEventMemLocIdValid");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemGetEventMemStatusByPtr */
uint16_least ISOLATE_Dem_Deb_Dem_EvMemGetEventMemStatusByPtr(const Dem_EvMemEventMemoryType * EventMemory){
    REGISTER_CALL("Dem_EvMemGetEventMemStatusByPtr");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemGetEventMemEventIdByPtr */
Dem_EventIdType ISOLATE_Dem_Deb_Dem_EvMemGetEventMemEventIdByPtr(const Dem_EvMemEventMemoryType * EventMemory){
    REGISTER_CALL("Dem_EvMemGetEventMemEventIdByPtr");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemGetEventMemTimeIdByPtr */
uint32 ISOLATE_Dem_Deb_Dem_EvMemGetEventMemTimeIdByPtr(const Dem_EvMemEventMemoryType * EventMemory){
    REGISTER_CALL("Dem_EvMemGetEventMemTimeIdByPtr");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemGetEventMemDtcStatusByPtr */
uint8 ISOLATE_Dem_Deb_Dem_EvMemGetEventMemDtcStatusByPtr(const Dem_EvMemEventMemoryType * EventMemory){
    REGISTER_CALL("Dem_EvMemGetEventMemDtcStatusByPtr");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemGetEventMemFailureCounterByPtr */
uint8_least ISOLATE_Dem_Deb_Dem_EvMemGetEventMemFailureCounterByPtr(const Dem_EvMemEventMemoryType * EventMemory){
    REGISTER_CALL("Dem_EvMemGetEventMemFailureCounterByPtr");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemGetEventMemOccurrenceCounterByPtr */
uint16_least ISOLATE_Dem_Deb_Dem_EvMemGetEventMemOccurrenceCounterByPtr(const Dem_EvMemEventMemoryType * EventMemory){
    REGISTER_CALL("Dem_EvMemGetEventMemOccurrenceCounterByPtr");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemGetEventMemAgingCounterByPtr */
uint16_least ISOLATE_Dem_Deb_Dem_EvMemGetEventMemAgingCounterByPtr(const Dem_EvMemEventMemoryType * EventMemory){
    REGISTER_CALL("Dem_EvMemGetEventMemAgingCounterByPtr");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemGetEventMemAgingCounterForTFSLCByPtr */
uint16_least ISOLATE_Dem_Deb_Dem_EvMemGetEventMemAgingCounterForTFSLCByPtr(const Dem_EvMemEventMemoryType * EventMemory){
    REGISTER_CALL("Dem_EvMemGetEventMemAgingCounterForTFSLCByPtr");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemSetMaxFdcDuringCurrentCycleByPtr */
void ISOLATE_Dem_Deb_Dem_EvMemSetMaxFdcDuringCurrentCycleByPtr(Dem_EvMemEventMemoryType * EventMemory,
                                                               sint8 fdc){
    REGISTER_CALL("Dem_EvMemSetMaxFdcDuringCurrentCycleByPtr");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvMemSetMaxFdcSinceLastClearByPtr */
void ISOLATE_Dem_Deb_Dem_EvMemSetMaxFdcSinceLastClearByPtr(Dem_EvMemEventMemoryType * EventMemory,
                                                           sint8 fdc){
    REGISTER_CALL("Dem_EvMemSetMaxFdcSinceLastClearByPtr");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvMemGetMaxFdcDuringCurrentCycleByPtr */
sint8 ISOLATE_Dem_Deb_Dem_EvMemGetMaxFdcDuringCurrentCycleByPtr(const Dem_EvMemEventMemoryType * EventMemory){
    REGISTER_CALL("Dem_EvMemGetMaxFdcDuringCurrentCycleByPtr");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemGetMaxFdcSinceLastClearByPtr */
sint8 ISOLATE_Dem_Deb_Dem_EvMemGetMaxFdcSinceLastClearByPtr(const Dem_EvMemEventMemoryType * EventMemory){
    REGISTER_CALL("Dem_EvMemGetMaxFdcSinceLastClearByPtr");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemGetEventMemFreezeFrameCounterByPtr */
uint16_least ISOLATE_Dem_Deb_Dem_EvMemGetEventMemFreezeFrameCounterByPtr(const Dem_EvMemEventMemoryType * EventMemory){
    REGISTER_CALL("Dem_EvMemGetEventMemFreezeFrameCounterByPtr");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemGetEventMemTriggerByPtr */
Dem_TriggerType ISOLATE_Dem_Deb_Dem_EvMemGetEventMemTriggerByPtr(const Dem_EvMemEventMemoryType * EventMemory){
    REGISTER_CALL("Dem_EvMemGetEventMemTriggerByPtr");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemGetEventMemDataByPtr */
uint8 * ISOLATE_Dem_Deb_Dem_EvMemGetEventMemDataByPtr(Dem_EvMemEventMemoryType * EventMemory){
    REGISTER_CALL("Dem_EvMemGetEventMemDataByPtr");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EvMemSetToEmpty */
uint16_least ISOLATE_Dem_Deb_Dem_EvMemSetToEmpty(){
    REGISTER_CALL("Dem_EvMemSetToEmpty");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemIsStored */
Dem_boolean_least ISOLATE_Dem_Deb_Dem_EvMemIsStored(uint16_least Status){
    REGISTER_CALL("Dem_EvMemIsStored");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemIsEmpty */
Dem_boolean_least ISOLATE_Dem_Deb_Dem_EvMemIsEmpty(uint16_least Status){
    REGISTER_CALL("Dem_EvMemIsEmpty");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemGetShadowVisibility */
Dem_boolean_least ISOLATE_Dem_Deb_Dem_EvMemGetShadowVisibility(){
    REGISTER_CALL("Dem_EvMemGetShadowVisibility");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemGetEventMemStartLocId */
uint16_least ISOLATE_Dem_Deb_Dem_EvMemGetEventMemStartLocId(uint16_least MemId){
    REGISTER_CALL("Dem_EvMemGetEventMemStartLocId");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemGetEventMemEndLocId */
uint16_least ISOLATE_Dem_Deb_Dem_EvMemGetEventMemEndLocId(uint16_least MemId){
    REGISTER_CALL("Dem_EvMemGetEventMemEndLocId");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemEventMemoryIteratorNew */
void ISOLATE_Dem_Deb_Dem_EvMemEventMemoryIteratorNew(uint16_least * MemId){
    REGISTER_CALL("Dem_EvMemEventMemoryIteratorNew");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvMemEventMemoryIteratorIsValid */
Dem_boolean_least ISOLATE_Dem_Deb_Dem_EvMemEventMemoryIteratorIsValid(const uint16_least * MemId){
    REGISTER_CALL("Dem_EvMemEventMemoryIteratorIsValid");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemEventMemoryIteratorNext */
void ISOLATE_Dem_Deb_Dem_EvMemEventMemoryIteratorNext(uint16_least * MemId){
    REGISTER_CALL("Dem_EvMemEventMemoryIteratorNext");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_LibGetParamBool */
boolean ISOLATE_Dem_Deb_Dem_LibGetParamBool(boolean parameter){
    REGISTER_CALL("Dem_LibGetParamBool");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_DtcIdFromEventId */
Dem_DtcIdType ISOLATE_Dem_Deb_Dem_DtcIdFromEventId(Dem_EventIdType id){
    REGISTER_CALL("Dem_DtcIdFromEventId");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_ISO14229ByteIsTestFailed */
Dem_boolean_least ISOLATE_Dem_Deb_Dem_ISO14229ByteIsTestFailed(uint8 self){
    REGISTER_CALL("Dem_ISO14229ByteIsTestFailed");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemIsEdgeTrigger */
Dem_boolean_least ISOLATE_Dem_Deb_Dem_EvMemIsEdgeTrigger(uint16_least StatusOld,
                                                         uint16_least StatusNew,
                                                         uint16_least Trigger){
    REGISTER_CALL("Dem_EvMemIsEdgeTrigger");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EnvSetTrigger */
void ISOLATE_Dem_Deb_Dem_EnvSetTrigger(Dem_TriggerType * trigger,
                                       Dem_TriggerType trigger2set){
    REGISTER_CALL("Dem_EnvSetTrigger");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtStoreTestFailedToNextOC */
Dem_boolean_least ISOLATE_Dem_Deb_Dem_EvtStoreTestFailedToNextOC(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtStoreTestFailedToNextOC");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_LibGetParamUI8 */
uint8 ISOLATE_Dem_Deb_Dem_LibGetParamUI8(uint8 parameter){
    REGISTER_CALL("Dem_LibGetParamUI8");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemGetRamStsMask */
uint16_least ISOLATE_Dem_Deb_Dem_EvMemGetRamStsMask(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvMemGetRamStsMask");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvtGetAgingThreshold */
uint8 ISOLATE_Dem_Deb_Dem_EvtGetAgingThreshold(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtGetAgingThreshold");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemGetCurrentAgingCycleCounterInt */
uint16_least ISOLATE_Dem_Deb_Dem_EvMemGetCurrentAgingCycleCounterInt(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvMemGetCurrentAgingCycleCounterInt");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemIsAged */
Dem_boolean_least ISOLATE_Dem_Deb_Dem_EvMemIsAged(Dem_EventIdType EventId,
                                                  uint16_least LocId,
                                                  uint16_least StatusNew){
    REGISTER_CALL("Dem_EvMemIsAged");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemGetEventMemAgingCounter */
uint16_least ISOLATE_Dem_Deb_Dem_EvMemGetEventMemAgingCounter(uint16_least LocId){
    REGISTER_CALL("Dem_EvMemGetEventMemAgingCounter");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemSetEventMemAgingCounter */
void ISOLATE_Dem_Deb_Dem_EvMemSetEventMemAgingCounter(uint16_least LocId,
                                                      uint16_least AgingCounter){
    REGISTER_CALL("Dem_EvMemSetEventMemAgingCounter");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvMemGetEventMemAgingCounterForTFSLC */
uint16_least ISOLATE_Dem_Deb_Dem_EvMemGetEventMemAgingCounterForTFSLC(uint16_least LocId){
    REGISTER_CALL("Dem_EvMemGetEventMemAgingCounterForTFSLC");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvtGetAgingThresholdForTFSLC */
uint8 ISOLATE_Dem_Deb_Dem_EvtGetAgingThresholdForTFSLC(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtGetAgingThresholdForTFSLC");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemSetEventMemAgingCounterForTFSLC */
void ISOLATE_Dem_Deb_Dem_EvMemSetEventMemAgingCounterForTFSLC(uint16_least LocId,
                                                              uint16_least AgingCounterForTFSLC){
    REGISTER_CALL("Dem_EvMemSetEventMemAgingCounterForTFSLC");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtIsAgingAllowed */
Dem_boolean_least ISOLATE_Dem_Deb_Dem_EvtIsAgingAllowed(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtIsAgingAllowed");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemGetEventMemStatus */
uint16_least ISOLATE_Dem_Deb_Dem_EvMemGetEventMemStatus(uint16_least LocId){
    REGISTER_CALL("Dem_EvMemGetEventMemStatus");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvtIsDestPrimaryMemory */
Dem_boolean_least ISOLATE_Dem_Deb_Dem_EvtIsDestPrimaryMemory(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtIsDestPrimaryMemory");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvtIsDestSecondaryMemory */
Dem_boolean_least ISOLATE_Dem_Deb_Dem_EvtIsDestSecondaryMemory(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtIsDestSecondaryMemory");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemGetMemIdForDTCOrigin */
uint16_least ISOLATE_Dem_Deb_Dem_EvMemGetMemIdForDTCOrigin(Dem_DTCOriginType DTCOrigin){
    REGISTER_CALL("Dem_EvMemGetMemIdForDTCOrigin");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemIsMemIdValid */
Dem_boolean_least ISOLATE_Dem_Deb_Dem_EvMemIsMemIdValid(uint16_least MemId){
    REGISTER_CALL("Dem_EvMemIsMemIdValid");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemGetMemIdForEvent */
uint16_least ISOLATE_Dem_Deb_Dem_EvMemGetMemIdForEvent(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvMemGetMemIdForEvent");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_DtcIsSuppressed */
Dem_boolean_least ISOLATE_Dem_Deb_Dem_DtcIsSuppressed(Dem_DtcIdType dtcId){
    REGISTER_CALL("Dem_DtcIsSuppressed");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_DtcIsSuppressedDirectly */
Dem_boolean_least ISOLATE_Dem_Deb_Dem_DtcIsSuppressedDirectly(Dem_DtcIdType dtcId){
    REGISTER_CALL("Dem_DtcIsSuppressedDirectly");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EventIdListIteratorNewFromDtcId */
void ISOLATE_Dem_Deb_Dem_EventIdListIteratorNewFromDtcId(Dem_EventIdListIterator * it,
                                                         Dem_DtcIdType dtcid){
    REGISTER_CALL("Dem_EventIdListIteratorNewFromDtcId");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EventIdListIteratorIsValid */
Dem_boolean_least ISOLATE_Dem_Deb_Dem_EventIdListIteratorIsValid(const Dem_EventIdListIterator * it){
    REGISTER_CALL("Dem_EventIdListIteratorIsValid");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EventIdListIteratorNext */
void ISOLATE_Dem_Deb_Dem_EventIdListIteratorNext(Dem_EventIdListIterator * it){
    REGISTER_CALL("Dem_EventIdListIteratorNext");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtIsSuppressed */
Dem_boolean_least ISOLATE_Dem_Deb_Dem_EvtIsSuppressed(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtIsSuppressed");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EventIdListIteratorCurrent */
Dem_EventIdType ISOLATE_Dem_Deb_Dem_EventIdListIteratorCurrent(const Dem_EventIdListIterator * it){
    REGISTER_CALL("Dem_EventIdListIteratorCurrent");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_DtcHasAlternativeDTCConfigured */
Dem_boolean_least ISOLATE_Dem_Deb_Dem_DtcHasAlternativeDTCConfigured(Dem_DtcIdType dtcId){
    REGISTER_CALL("Dem_DtcHasAlternativeDTCConfigured");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvtIsDestMirrorMemory */
Dem_boolean_least ISOLATE_Dem_Deb_Dem_EvtIsDestMirrorMemory(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtIsDestMirrorMemory");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_DtcIdGetFirstEventId */
Dem_EventIdType ISOLATE_Dem_Deb_Dem_DtcIdGetFirstEventId(Dem_DtcIdType dtcid){
    REGISTER_CALL("Dem_DtcIdGetFirstEventId");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EventUsesOrigin */
Dem_boolean_least ISOLATE_Dem_Deb_Dem_EventUsesOrigin(Dem_EventIdType eventId,
                                                      Dem_DTCOriginType origin){
    REGISTER_CALL("Dem_EventUsesOrigin");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemGenGetDtcIdByOccIndex */
Dem_DtcIdType ISOLATE_Dem_Deb_Dem_EvMemGenGetDtcIdByOccIndex(uint32 OccIndex){
    REGISTER_CALL("Dem_EvMemGenGetDtcIdByOccIndex");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemGenSetDtcByOccIndex */
void ISOLATE_Dem_Deb_Dem_EvMemGenSetDtcByOccIndex(Dem_DtcIdType DtcId,
                                                  uint32 OccIndex){
    REGISTER_CALL("Dem_EvMemGenSetDtcByOccIndex");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_GetEvMemLockInternal */
boolean ISOLATE_Dem_Deb_Dem_GetEvMemLockInternal(){
    REGISTER_CALL("Dem_GetEvMemLockInternal");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemGenReportEvent */
void ISOLATE_Dem_Deb_Dem_EvMemGenReportEvent(Dem_EventIdType EventId,
                                             uint32 FirstOccIndex,
                                             uint32 RecntOccIndex){
    REGISTER_CALL("Dem_EvMemGenReportEvent");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_NvMClearBlockByWrite */
void ISOLATE_Dem_Deb_Dem_NvMClearBlockByWrite(Dem_NvmBlockIdType id){
    REGISTER_CALL("Dem_NvMClearBlockByWrite");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvMemGenIsOverflow */
boolean ISOLATE_Dem_Deb_Dem_EvMemGenIsOverflow(Dem_DTCOriginType DtcOrigin){
    REGISTER_CALL("Dem_EvMemGenIsOverflow");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemGenSetOverflow */
void ISOLATE_Dem_Deb_Dem_EvMemGenSetOverflow(Dem_DTCOriginType DtcOrigin){
    REGISTER_CALL("Dem_EvMemGenSetOverflow");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtIsResetFailureFilterRequested */
Dem_boolean_least ISOLATE_Dem_Deb_Dem_EvtIsResetFailureFilterRequested(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtIsResetFailureFilterRequested");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvtIsResetFailureFilterRequestedAfterDtcSetting */
Dem_boolean_least ISOLATE_Dem_Deb_Dem_EvtIsResetFailureFilterRequestedAfterDtcSetting(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtIsResetFailureFilterRequestedAfterDtcSetting");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvtGetDebounceLevel */
sint16 ISOLATE_Dem_Deb_Dem_EvtGetDebounceLevel(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtGetDebounceLevel");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_isEventIdValid */
Dem_boolean_least ISOLATE_Dem_Deb_Dem_isEventIdValid(Dem_EventIdType checkID){
    REGISTER_CALL("Dem_isEventIdValid");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_DebGetDebounceCounter4Calculation */
Std_ReturnType ISOLATE_Dem_DebGetDebounceCounter4Calculation(Dem_EventIdType EventId,
                                                             sint16 * debounceCounter){
    REGISTER_CALL("Dem_DebGetDebounceCounter4Calculation");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_DebCalculateFaultDetectionCounter */
sint8 ISOLATE_Dem_DebCalculateFaultDetectionCounter(Dem_EventIdType EventId,
                                                    sint16 debounceCounter){
    REGISTER_CALL("Dem_DebCalculateFaultDetectionCounter");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_GetFaultDetectionCounter */
Std_ReturnType ISOLATE_Dem_GetFaultDetectionCounter(Dem_EventIdType EventId,
                                                    sint8 * FaultDetectionCounter){
    REGISTER_CALL("Dem_GetFaultDetectionCounter");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvtSetLastReportedEvent */
void ISOLATE_Dem_Deb_Dem_EvtSetLastReportedEvent(Dem_EventIdType EventId,
                                                 Dem_EventStatusType EventStatus){
    REGISTER_CALL("Dem_EvtSetLastReportedEvent");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtSetDebounceLevel */
void ISOLATE_Dem_Deb_Dem_EvtSetDebounceLevel(Dem_EventIdType EventId,
                                             sint16 debounceLevel){
    REGISTER_CALL("Dem_EvtSetDebounceLevel");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtAllEnableConditionsFulfilled */
Dem_boolean_least ISOLATE_Dem_Deb_Dem_EvtAllEnableConditionsFulfilled(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtAllEnableConditionsFulfilled");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_IsOperationCycleStarted */
boolean ISOLATE_Dem_Deb_Dem_IsOperationCycleStarted(Dem_OperationCycleIdType OperationCycleId){
    REGISTER_CALL("Dem_IsOperationCycleStarted");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_IsEventReportingEnabledByDtcSetting */
Dem_boolean_least ISOLATE_Dem_Deb_Dem_IsEventReportingEnabledByDtcSetting(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_IsEventReportingEnabledByDtcSetting");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_getDebCtrBaseClassPassedThreshold */
sint16 ISOLATE_Dem_Deb_Dem_getDebCtrBaseClassPassedThreshold(const void * paramSet,
                                                             uint16 paramIndex){
    REGISTER_CALL("Dem_getDebCtrBaseClassPassedThreshold");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_getDebCtrBaseClassFailedThreshold */
sint16 ISOLATE_Dem_Deb_Dem_getDebCtrBaseClassFailedThreshold(const void * paramSet,
                                                             uint16 paramIndex){
    REGISTER_CALL("Dem_getDebCtrBaseClassFailedThreshold");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_getDebCtrBaseClassJumpDownValue */
sint16 ISOLATE_Dem_Deb_Dem_getDebCtrBaseClassJumpDownValue(const void * paramSet,
                                                           uint16 paramIndex){
    REGISTER_CALL("Dem_getDebCtrBaseClassJumpDownValue");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_getDebCtrBaseClassJumpUpValue */
sint16 ISOLATE_Dem_Deb_Dem_getDebCtrBaseClassJumpUpValue(const void * paramSet,
                                                         uint16 paramIndex){
    REGISTER_CALL("Dem_getDebCtrBaseClassJumpUpValue");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_getDebCtrBaseClassIsJumpDown */
boolean ISOLATE_Dem_Deb_Dem_getDebCtrBaseClassIsJumpDown(const void * paramSet,
                                                         uint16 paramIndex){
    REGISTER_CALL("Dem_getDebCtrBaseClassIsJumpDown");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_getDebCtrBaseClassIsJumpUp */
boolean ISOLATE_Dem_Deb_Dem_getDebCtrBaseClassIsJumpUp(const void * paramSet,
                                                       uint16 paramIndex){
    REGISTER_CALL("Dem_getDebCtrBaseClassIsJumpUp");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvtRequestResetFailureFilter */
void ISOLATE_Dem_Deb_Dem_EvtRequestResetFailureFilter(Dem_EventIdType EventId,
                                                      Dem_boolean_least setBit){
    REGISTER_CALL("Dem_EvtRequestResetFailureFilter");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtGetLastReportedEvent */
Dem_EventStatusType ISOLATE_Dem_Deb_Dem_EvtGetLastReportedEvent(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtGetLastReportedEvent");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_DebHandleDebounceAction */
void ISOLATE_Dem_Deb_Dem_DebHandleDebounceAction(Dem_EventIdType EventId,
                                                 Dem_DebouncedActionType debAction,
                                                 Dem_DebugDataType debug0,
                                                 Dem_DebugDataType debug1){
    REGISTER_CALL("Dem_DebHandleDebounceAction");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_DistMemIsReportFailedNecessary */
Dem_boolean_least ISOLATE_Dem_Deb_Dem_DistMemIsReportFailedNecessary(Dem_EventIdType eventId,
                                                                     Dem_EventStatusType eventStatus){
    REGISTER_CALL("Dem_DistMemIsReportFailedNecessary");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemGenReportFailedEvent */
void ISOLATE_Dem_Deb_Dem_EvMemGenReportFailedEvent(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvMemGenReportFailedEvent");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_IsAnyDtcGroupSettingDisabled */
Dem_boolean_least ISOLATE_Dem_Deb_Dem_IsAnyDtcGroupSettingDisabled(){
    REGISTER_CALL("Dem_IsAnyDtcGroupSettingDisabled");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_IsEvtDebBehaviorReset */
Dem_boolean_least ISOLATE_Dem_Deb_Dem_IsEvtDebBehaviorReset(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_IsEvtDebBehaviorReset");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvtRequestResetFailureFilterAfterDtcSetting */
void ISOLATE_Dem_Deb_Dem_EvtRequestResetFailureFilterAfterDtcSetting(Dem_EventIdType EventId,
                                                                     Dem_boolean_least setBit){
    REGISTER_CALL("Dem_EvtRequestResetFailureFilterAfterDtcSetting");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtIsResetFailureFilterRequestedAfterStorageCondition */
Dem_boolean_least ISOLATE_Dem_Deb_Dem_EvtIsResetFailureFilterRequestedAfterStorageCondition(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtIsResetFailureFilterRequestedAfterStorageCondition");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvtRequestResetFailureFilterAfterStorageCondition */
void ISOLATE_Dem_Deb_Dem_EvtRequestResetFailureFilterAfterStorageCondition(Dem_EventIdType EventId,
                                                                           Dem_boolean_least setBit){
    REGISTER_CALL("Dem_EvtRequestResetFailureFilterAfterStorageCondition");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_getEventDebouncing */
uint8 ISOLATE_Dem_Deb_Dem_getEventDebouncing(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_getEventDebouncing");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_GetDebouncingOfEvent */
Std_ReturnType ISOLATE_Dem_GetDebouncingOfEvent(Dem_EventIdType EventId,
                                                Dem_DebouncingStateType * DebouncingState){
    REGISTER_CALL("Dem_GetDebouncingOfEvent");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_TimeBasedDebounceInternMainFunction */
void ISOLATE_Dem_Deb_Dem_TimeBasedDebounceInternMainFunction(){
    REGISTER_CALL("Dem_TimeBasedDebounceInternMainFunction");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Tester define */

/* Stub for function fnc_funcPointer_Filter */
uint8_least fnc_funcPointer_Filter(Dem_EventIdType EventId,
                                   Dem_EventStatusType* status,
                                   const void* paramSet,
                                   uint16 paramIndex DEM_DEB_LOCAL_CALC_PARAMS){
    REGISTER_CALL("fnc_funcPointer_Filter");

    IF_INSTANCE("default") {
        CHECK_U_INT(EventId, 0);
        CHECK_ADDRESS(status, &status_entity);
        CHECK_ADDRESS(paramSet, &paramSet_entity);
        CHECK_U_INT(paramIndex, 2);
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Stub for function fnc_funcPointer_Cyclic */
void fnc_funcPointer_Cyclic(Dem_EventIdType EventId,
                                   const void* paramSet,
                                   uint16 paramIndex DEM_DEB_LOCAL_CALC_PARAMS){
    REGISTER_CALL("fnc_funcPointer_Cyclic");

    IF_INSTANCE("default") {
        CHECK_U_INT(EventId, 0);
        CHECK_ADDRESS(paramSet, &paramSet_entity);
        CHECK_U_INT(paramIndex, 2);
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* pragma qas cantata testscript end */
/*****************************************************************************/
/* End of test script                                                        */
/*****************************************************************************/
