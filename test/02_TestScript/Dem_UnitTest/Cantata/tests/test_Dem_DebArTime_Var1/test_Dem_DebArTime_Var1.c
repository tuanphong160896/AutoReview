/*****************************************************************************/
/*                            Cantata Test Script                            */
/*****************************************************************************/
/*
 *    Filename: test_Dem_DebArTime_Var1.c
 *    Author: hiu81hc
 *    Generated on: 01-Aug-2018 11:28:39
 *    Generated from: Dem_DebArTime.c
 */
/*****************************************************************************/
/* Environment Definition                                                    */
/*****************************************************************************/

#define TEST_SCRIPT_GENERATOR 2

/* Include files from software under test */
#include "Dem_DebArTime.h"
#include "Dem_Deb.h"
#include "Dem_Events.h"
#include "Dem_EventStatus.h"
#include "Dem_EventFHandling.h"
#include "Dem_DisturbanceMemory.h"
#include "Dem_DTCs.h"
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
boolean Dem_DebHandleResetConditions(Dem_EventIdType EventId);
void Dem_DistMemReportFailed(Dem_EventIdType EventId);
void Dem_EvtProcessPassedAndFailed(Dem_EventIdType EventId, Dem_EventStatusType EventStatus);
extern void Dem_DebArTime_GetLimits(const void * paramSet, uint16 paramIndex, sint16_least * MinThreshold, sint16_least * MaxThreshold);
extern uint8_least Dem_DebArTime_Filter(Dem_EventIdType EventId, Dem_EventStatusType * status, const void * paramSet, uint16 paramIndex);
extern void Dem_DebArTime_Cyclic(Dem_EventIdType EventId, const void * paramSet, uint16 paramIndex);

/* Global data */
/* None */

/* Expected variables for global data */
/* None */

/* This function initialises global data to default values. This function       */
/* is called by every test case so must not contain test case specific settings */
static void initialise_global_data(){
    /* No global data */
}

/* This function copies the global data settings into expected variables for */
/* use in check_global_data(). It is called by every test case so must not   */
/* contain test case specific settings.                                      */
static void initialise_expected_global_data(){
    /* No global data */
}

/* This function checks global data against the expected values. */
static void check_global_data(){
    /* No global data */
}

/* Prototypes for test functions */
void run_tests();
void test_Dem_DebArTime_GetLimits_Min_and_Max_Threshold_are_updated(int);
void test_Dem_DebArTime_Filter_debAction_is_updated(int);
void test_Dem_DebArTime_Filter_SusThreshold_equal_DEM_MAXSINT16(int);
void test_Dem_DebArTime_Filter_status_is_DEM_EVENT_STATUS_FAILED(int);
void test_Dem_DebArTime_Filter_status_is_not_PASSED_or_FAILED(int);
void test_Dem_DebArTime_Cyclic_STATUS_PASSED_EventId_Greater_Timepassed(int);
void test_Dem_DebArTime_Cyclic_not_STATUS_PASSED_EventId_Greater_Timepassed(int);
void test_Dem_DebArTime_Cyclic_STATUS_PASSED_EventId_less_Timepassed(int);
void test_Dem_DebArTime_Cyclic_not_STATUS_PASSED_EventId_less_Timepassed(int);
void test_Dem_DebArTime_Cyclic_STATUS_FAILED_EventId_greater_Timefailed(int);
void test_Dem_DebArTime_Cyclic_not_STATUS_FAILED_EventId_greater_Timefailed(int);
void test_Dem_DebArTime_Cyclic_DEM_MAXSINT16_EventId_greater_Timefailed(int);
void test_Dem_DebArTime_Cyclic_STATUS_FAILED_EventId_less_Timefailed(int);
void test_Dem_DebArTime_Cyclic_STATUS_FAILED_EventId_Greater_FailedThreshold(int);
void test_Dem_DebArTime_Cyclic_not_STATUS_FAILED_EventId_Greater_FailedThreshold(int);
void test_Dem_DebArTime_Cyclic_STATUS_PASSED_debAction_RESETSUSPICIOUS(int);
void test_Dem_DebArTime_Cyclic_not_STATUS_PASSED_debAction_not_RESETSUSPICIOUS(int);
void test_Dem_DebArTime_Cyclic_STATUS_FAILED(int);
void test_Dem_DebArTime_Cyclic_not_STATUS_FAILED(int);
void test_Dem_DebArTime_Cyclic_default(int);
void test_Dem_DebArTime_Cyclic_Dem_EvtIsSuppressed_Returns_TRUE(int);

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
    OPEN_LOG("test_Dem_DebArTime_Var1.ctr", false, 100);
    START_SCRIPT("Dem_DebArTime", true);

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
    test_Dem_DebArTime_GetLimits_Min_and_Max_Threshold_are_updated(1);
    test_Dem_DebArTime_Filter_debAction_is_updated(1);
    test_Dem_DebArTime_Filter_SusThreshold_equal_DEM_MAXSINT16(1);
    test_Dem_DebArTime_Filter_status_is_DEM_EVENT_STATUS_FAILED(1);
    test_Dem_DebArTime_Filter_status_is_not_PASSED_or_FAILED(1);
    test_Dem_DebArTime_Cyclic_STATUS_PASSED_EventId_Greater_Timepassed(1);
    test_Dem_DebArTime_Cyclic_not_STATUS_PASSED_EventId_Greater_Timepassed(1);
    test_Dem_DebArTime_Cyclic_STATUS_PASSED_EventId_less_Timepassed(1);
    test_Dem_DebArTime_Cyclic_not_STATUS_PASSED_EventId_less_Timepassed(1);
    test_Dem_DebArTime_Cyclic_STATUS_FAILED_EventId_greater_Timefailed(1);
    test_Dem_DebArTime_Cyclic_not_STATUS_FAILED_EventId_greater_Timefailed(1);
    test_Dem_DebArTime_Cyclic_DEM_MAXSINT16_EventId_greater_Timefailed(1);
    test_Dem_DebArTime_Cyclic_STATUS_FAILED_EventId_less_Timefailed(1);
    test_Dem_DebArTime_Cyclic_STATUS_FAILED_EventId_Greater_FailedThreshold(1);
    test_Dem_DebArTime_Cyclic_not_STATUS_FAILED_EventId_Greater_FailedThreshold(1);
    test_Dem_DebArTime_Cyclic_STATUS_PASSED_debAction_RESETSUSPICIOUS(1);
    test_Dem_DebArTime_Cyclic_not_STATUS_PASSED_debAction_not_RESETSUSPICIOUS(1);
    test_Dem_DebArTime_Cyclic_STATUS_FAILED(1);
    test_Dem_DebArTime_Cyclic_not_STATUS_FAILED(1);
    test_Dem_DebArTime_Cyclic_default(1);
    test_Dem_DebArTime_Cyclic_Dem_EvtIsSuppressed_Returns_TRUE(1);

    rule_set("*", "*");
    EXPORT_COVERAGE("test_Dem_DebArTime_Var1.cov", cppca_export_replace);
}

/*****************************************************************************/
/* Test Cases                                                                */
/*****************************************************************************/

void test_Dem_DebArTime_GetLimits_Min_and_Max_Threshold_are_updated(int doIt){
if (doIt) {
    /* Compilation Flag
     * - Define DEM_CFG_DEBARTIMEBASE as DEM_CFG_DEBARTIMEBASE_ON;
     * - Define DEM_CFG_SUSPICIOUS_SUPPORT as TRUE;
     * - Define DEM_CFG_SUPPORT_EVENT_FDCTHRESHOLDREACHED as TRUE;
     * - Define DEM_CFG_DISTURBANCE_MEMORY as DEM_CFG_DISTURBANCE_MEMORY_ON;
     * - Define DEM_CFG_SUPPORTEVENTMEMORYENTRY_ONFDCTHRESHOLD as DEM_CFG_SUPPORTEVENTMEMORYENTRY_ONFDCTHRESHOLD_ON
     */

    /* Test method - EP */
    /* Tester define */

    Dem_DebArTime_ParamSet paramSet_entity[3];
    INITIALISE(paramSet_entity);

    sint16_least MinThreshold_entity;
    INITIALISE(MinThreshold_entity);

    sint16_least MaxThreshold_entity;
    INITIALISE(MaxThreshold_entity);

    /* Test case data declarations */
    const void * paramSet = &paramSet_entity[0];
    uint16 paramIndex = 0;
    sint16_least * MinThreshold = &MinThreshold_entity;
    sint16_least * MaxThreshold = &MaxThreshold_entity;

    /* Set global data */
    initialise_global_data();

    paramSet_entity[0].TimePassedThreshold = 1;
    paramSet_entity[0].TimeFailedThreshold = 0;

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_DebArTime_GetLimits_Min_and_Max_Threshold_are_updated",
               "Check that:"
               "- MinThreshould is updated"
               "- MaxThreshould is updated");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            Dem_DebArTime_GetLimits(paramSet, paramIndex, MinThreshold, MaxThreshold);

            /* Test case checks */
            /* Expected result
             * - MinThreshould is updated;
             * - MaxThreshould is updated;
             */
            /* Checks on global data */
            check_global_data();
            CHECK_U_INT(* MinThreshold, 1);
            CHECK_U_INT(* MaxThreshold, 0);
            /* GUID
             * {D5B8C2B6-1250-4600-865F-32BA2D2B633D};
             * {68782C08-6CE4-413f-8CAB-BFC0731119A9};
            */
        END_CALLS();
    END_TEST();
}}

void test_Dem_DebArTime_Filter_debAction_is_updated(int doIt){
if (doIt) {
    /* Test method - EP */
    /* Tester define */

    Dem_EventStatusType status_entity;
    INITIALISE(status_entity);

    Dem_DebArTime_ParamSet paramSet_entity[5];
    INITIALISE(paramSet_entity);

    /* Test case data declarations */
    Dem_EventIdType EventId = 3;
    Dem_EventStatusType * status = &status_entity;
    const void * paramSet = &paramSet_entity[0];
    uint16 paramIndex = 1;
    uint8_least expected_returnValue = 40;
    uint8_least returnValue;

    * status = DEM_EVENT_STATUS_PASSED;

    /* Set global data */
    initialise_global_data();

    paramSet_entity[1].TimeFailedThreshold = 2;
    paramSet_entity[1].TimePassedThreshold = 2;
    paramSet_entity[1].SuspiciousThreshold = 2;

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_DebArTime_Filter_debAction_is_updated",
               "Check that:"
               "- Function Dem_DistMemReportPassed() is invoked"
               "- Function DEM_ENTERLOCK_MON() is invoked"
               "- Time passed threshold is updated"
               "- Time failed threshold is updated"
               "- Function Dem_EvtSetDebounceLevel() is invoked"
               "- Function Dem_EvtRequestResetFailureFilterAfterDtcSetting() is invoked"
               "- Function Dem_EvtRequestResetFailureFilter() is invoked"
               "- Function DEM_EXITLOCK_MON() is invoked"
               "In case:"
               "- The value of status variable is set as DEM_EVENT_STATUS_PASSED at line 47"
               "- The value of suspicious threshold is different DEM_MAXSINT16 at line 79");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_EvtGetDebounceLevel#01;"
                       "Dem_EvtGetLastReportedEvent#DEM_EVENT_STATUS_PREFAILED;"
                       "Dem_DistMemReportPassed#default;"
                       "DI#default;"
                       "Dem_EvtSetDebounceLevel#passed;"
                       "Dem_EvtRequestResetFailureFilterAfterDtcSetting#default;"
                       "Dem_EvtRequestResetFailureFilter#default;"
                       "EI#default;");

            /* Call SUT */
            returnValue = Dem_DebArTime_Filter(EventId, status, paramSet, paramIndex);

            /* Test case checks */
            CHECK_U_INT(returnValue, expected_returnValue);
            /* Expected result
             * - Function Dem_DistMemReportPassed() is invoked;
             * - Function Dem_EvtSetDebounceLevel() is invoked;
             * - Function Dem_EvtRequestResetFailureFilterAfterDtcSetting() is invoked;
             * - Function Dem_EvtRequestResetFailureFilter() is invoked;
             */
            /* Checks on global data */
            check_global_data();

            CHECK_U_INT(* status, DEM_EVENT_STATUS_PASSED);

            /* GUID
             * - {A78229B6-367F-4e89-85FF-F5F477019B69};
             * - {F34CEA3B-ED80-44a0-B70E-EB61CE977F85};
             * - {E71AB778-1DC2-4afd-A9D4-B79D09868388};
             * - {7C68A58C-DCBD-4573-895D-42A972EDF404};
             * - {3E4FC806-D1CA-4dea-BBD6-01940C6E145E};
             * - {CBB3FB9E-B16E-461b-8F7C-4A47D8B9CF36};
             * - {3D7B569B-2F0A-4947-800E-2BE6D9FE36E2};
             * - {5B1820A2-937D-4a84-8771-FB1F935BB7D2};
             * - {83BE4F2C-04E8-4090-8171-060F6BE7519B};
             * - {B50F7712-7B42-4047-89DE-C7D0F29B22EC};
             * - {7A28347D-C475-4d6a-A3F2-88C5C245691C};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_DebArTime_Filter_SusThreshold_equal_DEM_MAXSINT16(int doIt){
if (doIt) {
    /* Test method - EP */
    /* Tester define */

    Dem_EventStatusType status_entity;
    INITIALISE(status_entity);

    Dem_DebArTime_ParamSet paramSet_entity[5];
    INITIALISE(paramSet_entity);

    /* Test case data declarations */
    Dem_EventIdType EventId = 3;
    Dem_EventStatusType * status = &status_entity;
    const void * paramSet = &paramSet_entity[0];
    uint16 paramIndex = 1;
    uint8_least expected_returnValue = 32;
    uint8_least returnValue;

    * status = DEM_EVENT_STATUS_PASSED;

    /* Set global data */
    initialise_global_data();

    paramSet_entity[1].TimeFailedThreshold = 0;
    paramSet_entity[1].TimePassedThreshold = 2;
    paramSet_entity[1].SuspiciousThreshold = DEM_MAXSINT16;

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_DebArTime_Filter_SusThreshold_equal_DEM_MAXSINT16",
               "Check that:"
               "- Function DEM_ENTERLOCK_MON() is invoked"
               "- Time passed threshold is updated"
               "- Time failed threshold is updated"
               "- Function Dem_EvtSetDebounceLevel() is invoked"
               "- Function Dem_EvtRequestResetFailureFilterAfterDtcSetting() is invoked"
               "- Function Dem_EvtRequestResetFailureFilter() is invoked"
               "- Function DEM_EXITLOCK_MON() is invoked"
               "In case:"
               "- The value of status variable is set as DEM_EVENT_STATUS_PASSED at line 47"
               "- The value of suspicious threshold is equal DEM_MAXSINT16 at line 79");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_EvtGetDebounceLevel#01;"
                       "DI#default;"
                       "Dem_EvtSetDebounceLevel#passed;"
                       "Dem_EvtRequestResetFailureFilterAfterDtcSetting#default;"
                       "Dem_EvtRequestResetFailureFilter#default;"
                       "EI#default;");

            /* Call SUT */
            returnValue = Dem_DebArTime_Filter(EventId, status, paramSet, paramIndex);

            /* Test case checks */
            CHECK_U_INT(returnValue, expected_returnValue);
            /* Expected result
             * - Function Dem_EvtSetDebounceLevel() is invoked;
             * - Function Dem_EvtRequestResetFailureFilterAfterDtcSetting() is invoked;
             * - Function Dem_EvtRequestResetFailureFilter() is invoked;
             */
            /* Checks on global data */
            check_global_data();

            CHECK_U_INT(* status, DEM_EVENT_STATUS_PASSED);

            /* GUID
             * - {A78229B6-367F-4e89-85FF-F5F477019B69};
             * - {F34CEA3B-ED80-44a0-B70E-EB61CE977F85};
             * - {E71AB778-1DC2-4afd-A9D4-B79D09868388};
             * - {7C68A58C-DCBD-4573-895D-42A972EDF404};
             * - {3E4FC806-D1CA-4dea-BBD6-01940C6E145E};
             * - {CBB3FB9E-B16E-461b-8F7C-4A47D8B9CF36};
             * - {3D7B569B-2F0A-4947-800E-2BE6D9FE36E2};
             * - {5B1820A2-937D-4a84-8771-FB1F935BB7D2};
             * - {83BE4F2C-04E8-4090-8171-060F6BE7519B};
             * - {B50F7712-7B42-4047-89DE-C7D0F29B22EC};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_DebArTime_Filter_status_is_DEM_EVENT_STATUS_FAILED(int doIt){
if (doIt) {
    /* Test method - EP */
    /* Tester define */

    Dem_EventStatusType status_entity;
    INITIALISE(status_entity);

    Dem_DebArTime_ParamSet paramSet_entity[5];
    INITIALISE(paramSet_entity);

    /* Test case data declarations */
    Dem_EventIdType EventId = 3;
    Dem_EventStatusType * status = &status_entity;
    const void * paramSet = &paramSet_entity[0];
    uint16 paramIndex = 1;
    uint8_least expected_returnValue = DEM_DEBACTION_SETFDCTHRESHOLDREACHED;
    uint8_least returnValue;

    * status = DEM_EVENT_STATUS_FAILED;

    /* Set global data */
    initialise_global_data();

    paramSet_entity[1].SuspiciousThreshold = 2;
    paramSet_entity[1].TimeFailedThreshold = 2;

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_DebArTime_Filter_status_is_DEM_EVENT_STATUS_FAILED",
               "Check that:"
               "- Function DEM_ENTERLOCK_MON() is invoked"
               "- Time failed threshold is updated"
               "- Function Dem_EvtRequestResetFailureFilterAfterDtcSetting() is invoked"
               "- Function Dem_EvtRequestResetFailureFilter() is invoked"
               "- Function DEM_EXITLOCK_MON() is invoked"
               "In case:"
               "- The value of status variable is set as DEM_EVENT_STATUS_FAILED at line 47");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("DI#default;"
                       "Dem_EvtSetDebounceLevel#failed;"
                       "Dem_EvtRequestResetFailureFilterAfterDtcSetting#default;"
                       "Dem_EvtRequestResetFailureFilter#default;"
                       "EI#default;");

            /* Call SUT */
            returnValue = Dem_DebArTime_Filter(EventId, status, paramSet, paramIndex);

            /* Test case checks */
            CHECK_U_INT(returnValue, expected_returnValue);
            /* Expected result
             * - Function Dem_DistMemReportPassed() is invoked;
             * - Function Dem_EvtRequestResetFailureFilterAfterDtcSetting() is invoked;
             * - Function Dem_EvtRequestResetFailureFilter() is invoked;
             */
            /* Checks on global data */
            check_global_data();

            CHECK_U_INT(* status, DEM_EVENT_STATUS_FAILED);

            /* GUID
             * - {A78229B6-367F-4e89-85FF-F5F477019B69};
             * - {F34CEA3B-ED80-44a0-B70E-EB61CE977F85};
             * - {A8B1FBDC-0BCE-40a5-943E-6FBD7D8A7DCB};
             * - {7C68A58C-DCBD-4573-895D-42A972EDF404};
             * - {3E4FC806-D1CA-4dea-BBD6-01940C6E145E};
             * - {CBB3FB9E-B16E-461b-8F7C-4A47D8B9CF36};
             * - {3D7B569B-2F0A-4947-800E-2BE6D9FE36E2};
             * - {5B1820A2-937D-4a84-8771-FB1F935BB7D2};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_DebArTime_Filter_status_is_not_PASSED_or_FAILED(int doIt){
if (doIt) {
    /* Test method - EP */
    /* Tester define */

    Dem_EventStatusType status_entity;
    INITIALISE(status_entity);

    Dem_DebArTime_ParamSet paramSet_entity[5];
    INITIALISE(paramSet_entity);

    /* Test case data declarations */
    Dem_EventIdType EventId = 3;
    Dem_EventStatusType * status = &status_entity;
    const void * paramSet = &paramSet_entity[0];
    uint16 paramIndex = 1;
    uint8_least expected_returnValue = DEM_DEBACTION_NOOP;
    uint8_least returnValue;

    * status = DEM_EVENT_STATUS_PREFAILED;

    /* Set global data */
    initialise_global_data();

    paramSet_entity[1].SuspiciousThreshold = 2;

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_DebArTime_Filter_status_is_not_PASSED_or_FAILED",
               "Check that: Function returns DEM_DEBACTION_NOOP"
               "In case:"
               "The value of status variable is not set as neither DEM_EVENT_STATUS_PASSED nor DEM_EVENT_STATUS_FAILED at line 63");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = Dem_DebArTime_Filter(EventId, status, paramSet, paramIndex);

            /* Test case checks */
            CHECK_U_INT(returnValue, expected_returnValue);
            /* Expected result
             * - Function returns DEM_DEBACTION_NOOP;
             */
            /* Checks on global data */
            check_global_data();

            CHECK_U_INT(* status, DEM_EVENT_STATUS_PREFAILED);

            /* GUID
             * - {3E4FC806-D1CA-4dea-BBD6-01940C6E145E};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_DebArTime_Cyclic_STATUS_PASSED_EventId_Greater_Timepassed(int doIt){
if (doIt) {
    /* Test method - EP */
    /* Tester define */

    Dem_DebArTime_ParamSet paramSet_entity[3];
    INITIALISE(paramSet_entity);

    /* Test case data declarations */
    Dem_EventIdType EventId = 3;
    const void * paramSet = &paramSet_entity;
    uint16 paramIndex = 1;
    /* Set global data */
    initialise_global_data();

    paramSet_entity[1].TimePassedThreshold = 0;
    paramSet_entity[1].SuspiciousThreshold = 0;

    /* Set expected values for global data checks */
    initialise_expected_global_data();


    START_TEST("test_Dem_DebArTime_Cyclic_STATUS_PASSED_EventId_Greater_Timepassed",
               "Check that:"
               "- Function Dem_EvtSetDebounceLevel() is invoked"
               "- The value of status2report variable is set as DEM_EVENT_STATUS_PASSED"
               "- debAction variable is updated"
               "- Function Dem_DistMemReportFailed() is invoked"
               "- Function Dem_EvtProcessPassedAndFailed() is invoked"
               "- Function DI() is invoked"
               "- Function EI() is invoked"
               "In case:"
               "- Function Dem_EvtIsSuppressed() returns FALSE at line 137"
               "- Function Dem_EvtGetLastReportedEvent() returns DEM_EVENT_STATUS_PREPASSED at line 148"
               "- The returned value of Function Dem_EvtGetDebounceLevel() is greater than the value of TimePassedThreshold at line 157"
               "- The returned value of Function Dem_EvtGetDebounceLevel() is greater than 0 at line 159"
               "- The returned value of Function Dem_EvtGetDebounceLevel() is equal the value of TimePassedThreshold at line 166 "
               "- The value of SuspiciousThreshold variable is different DEM_MAXSINT16 at line 182"
               "- The value of insertUnrobustToEvBuffer variable is TRUE at line 313"
               "- Function Dem_DistMemIsReportFailedNecessary() returns TRUE at line 320");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_EvtIsSuppressed#false;"
                       "DI#default;"
                       "Dem_DebHandleResetConditions#default;"
                       "Dem_EvtGetLastReportedEvent#DEM_EVENT_STATUS_PREPASSED;"
                       "Dem_EvtGetDebounceLevel#01;"
                       "Dem_EvtGetDebounceLevel#01;"
                       "Dem_EvtSetDebounceLevel#default;"
                       "Dem_EvtDecDebounceLevel#default;"
                       "Dem_EvtGetDebounceLevel#default;"
                       "Dem_DebHandleDebounceAction_4_TimeBasedDeb#true;"
                       "EI#default;"
                       "Dem_EvBuffInsert#default;"
                       "Dem_DistMemIsReportFailedNecessary#true;"
                       "Dem_DistMemReportFailed#default;"
                       "Dem_EvtProcessPassedAndFailed#PASSED;");

            /* Call SUT */
            Dem_DebArTime_Cyclic(EventId, paramSet, paramIndex);

            /* Test case checks */
            /* Expected result
             * - Function Dem_EvtSetDebounceLevel() is invoked;
               - Function Dem_DistMemReportFailed() is invoked;
               - Function Dem_EvtProcessPassedAndFailed() is invoked;
             */
            /* Checks on global data */
            check_global_data();
            /* GUID
             * - {BB185AC8-8209-4bf6-B526-33A8246F50F6};
             * - {5AAF4B38-088D-4d97-8B5D-4434A961F626};
             * - {81350721-8BB2-4fa5-B82B-22A010DD1049};
             * - {925C3675-1EEF-4df1-9474-12BA6A0248B2};
             * - {9E8E1E18-5AFB-4348-A2E2-227A4A7BF30D};
             * - {F84B112D-7761-4bbb-98E6-4694BCF28E4A};
             * - {2683299A-A586-41a0-AB04-94B8276E9655};
             * - {9B876386-AE2B-4ce3-BD2E-E3C117F20BCD};
             * - {D0DD847E-04B7-43e5-B3B0-6D53CF846DF6};
             * - {DBD42C5C-7C59-4d09-BBA7-7971A040B49C};
             * - {7771CB64-11E8-4b7a-A7C2-01AFCBDD44E7};
             * - {AF6FA9A1-17DC-4002-B37E-4D0E097BEE8D};
             * - {DED2C058-E0B4-4744-89FC-CA136368CED5};
             * - {9EFCB995-094D-4ddb-8DE3-DD3347DD13B5};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_DebArTime_Cyclic_not_STATUS_PASSED_EventId_Greater_Timepassed(int doIt){
if (doIt) {
    /* Test method - EP */
    /* Tester define */

    Dem_DebArTime_ParamSet paramSet_entity[3];
    INITIALISE(paramSet_entity);

    /* Test case data declarations */
    Dem_EventIdType EventId = 3;
    const void * paramSet = &paramSet_entity;
    uint16 paramIndex = 1;
    /* Set global data */
    initialise_global_data();

    paramSet_entity[1].TimePassedThreshold = 0;
    paramSet_entity[1].SuspiciousThreshold = DEM_MAXSINT16;

    /* Set expected values for global data checks */
    initialise_expected_global_data();


    START_TEST("test_Dem_DebArTime_Cyclic_not_STATUS_PASSED_EventId_Greater_Timepassed",
               "Check that:"
               "- Function Dem_EvtSetDebounceLevel() is invoked"
               "- The value of status2report variable is set as DEM_EVENT_STATUS_PASSED"
               "- debAction variable is updated"
               "- Function Dem_EvtDecDebounceLevel() is invoked"
               "- Function DI() is invoked"
               "- Function EI() is invoked"
               "In case:"
               "- Function Dem_EvtIsSuppressed() returns FALSE at line 137"
               "- Function Dem_EvtGetLastReportedEvent() returns DEM_EVENT_STATUS_PREPASSED at line 148"
               "- The returned value of Function Dem_EvtGetDebounceLevel() is greater than the value of TimePassedThreshold at line 157"
               "- The returned value of Function Dem_EvtGetDebounceLevel() is not greater than 0 at line 159"
               "- The returned value of Function Dem_EvtGetDebounceLevel() is not equal the value of TimePassedThreshold at line 166 "
               "- The value of SuspiciousThreshold variable is equal DEM_MAXSINT16 at line 182"
               "- The value of insertUnrobustToEvBuffer variable is FALSE at line 313"
               "- Function Dem_DistMemIsReportFailedNecessary() returns FALSE at line 320");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_EvtIsSuppressed#false;"
                       "DI#default;"
                       "Dem_DebHandleResetConditions#default;"
                       "Dem_EvtGetLastReportedEvent#DEM_EVENT_STATUS_PREPASSED;"
                       "Dem_EvtGetDebounceLevel#01;"
                       "Dem_EvtGetDebounceLevel#default;"
                       "Dem_EvtDecDebounceLevel#default;"
                       "Dem_EvtGetDebounceLevel#01;"
                       "Dem_DebHandleDebounceAction_4_TimeBasedDeb#false;"
                       "EI#default;"
                       "Dem_DistMemIsReportFailedNecessary#false;");

            /* Call SUT */
            Dem_DebArTime_Cyclic(EventId, paramSet, paramIndex);

            /* Test case checks */
            /* Expected result
               * - Function Dem_EvtSetDebounceLevel() is invoked;
               * - Function Dem_EvtDecDebounceLevel() is invoked;
             */
            /* Checks on global data */
            check_global_data();
            /* GUID
             * - {BB185AC8-8209-4bf6-B526-33A8246F50F6};
             * - {5AAF4B38-088D-4d97-8B5D-4434A961F626};
             * - {81350721-8BB2-4fa5-B82B-22A010DD1049};
             * - {925C3675-1EEF-4df1-9474-12BA6A0248B2};
             * - {9E8E1E18-5AFB-4348-A2E2-227A4A7BF30D};
             * - {F84B112D-7761-4bbb-98E6-4694BCF28E4A};
             * - {2683299A-A586-41a0-AB04-94B8276E9655};
             * - {7771CB64-11E8-4b7a-A7C2-01AFCBDD44E7};
             * - {AF6FA9A1-17DC-4002-B37E-4D0E097BEE8D};
             * - {DED2C058-E0B4-4744-89FC-CA136368CED5};
             * - {9EFCB995-094D-4ddb-8DE3-DD3347DD13B5};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_DebArTime_Cyclic_STATUS_PASSED_EventId_less_Timepassed(int doIt){
if (doIt) {
    /* Test method - EP */
    /* Tester define */

    Dem_DebArTime_ParamSet paramSet_entity[3];
    INITIALISE(paramSet_entity);

    /* Test case data declarations */
    Dem_EventIdType EventId = 3;
    const void * paramSet = &paramSet_entity;
    uint16 paramIndex = 1;
    /* Set global data */
    initialise_global_data();

    paramSet_entity[1].TimePassedThreshold = 2;

    /* Set expected values for global data checks */
    initialise_expected_global_data();


    START_TEST("test_Dem_DebArTime_Cyclic_STATUS_PASSED_EventId_less_Timepassed",
               "Check that:"
               "- Function Dem_EvtSetDebounceLevel() is invoked"
               "- The value of status2report variable is set as DEM_EVENT_STATUS_PASSED"
               "- debAction variable is updated"
               "- Function Dem_EvtDecDebounceLevel() is invoked"
               "- Function Dem_EvtProcessPassedAndFailed() is invoked"
               "- Function Dem_DistMemReportFailed() is invoked"
               "- Function DI() is invoked"
               "- Function EI() is invoked"
               "In case:"
               "- Function Dem_EvtIsSuppressed() returns FALSE at line 137"
               "- Function Dem_EvtGetLastReportedEvent() returns DEM_EVENT_STATUS_PREPASSED at line 171"
               "- The returned value of Function Dem_EvtGetDebounceLevel() is less than the value of TimePassedThreshold at line 157"
               "- Function Dem_EvtSt_GetTestCompleteTOC() returns FALSE at line 173"
               "- The value of insertUnrobustToEvBuffer variable is TRUE at line 313"
               "- Function Dem_DistMemIsReportFailedNecessary() returns TRUE at line 320");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_EvtIsSuppressed#false;"
                       "DI#default;"
                       "Dem_DebHandleResetConditions#default;"
                       "Dem_EvtGetLastReportedEvent#DEM_EVENT_STATUS_PREPASSED;"
                       "Dem_EvtGetDebounceLevel#default;"
                       "Dem_EvtSt_GetTestCompleteTOC#false;"
                       "Dem_DebHandleDebounceAction_4_TimeBasedDeb#true;"
                       "EI#default;"
                       "Dem_EvBuffInsert#default;"
                       "Dem_DistMemIsReportFailedNecessary#true;"
                       "Dem_DistMemReportFailed#default;"
                       "Dem_EvtProcessPassedAndFailed#PASSED;");

            /* Call SUT */
            Dem_DebArTime_Cyclic(EventId, paramSet, paramIndex);

            /* Test case checks */
            /* Expected result
               * - Function Dem_EvtSetDebounceLevel() is invoked;
               * - Function Dem_EvtDecDebounceLevel() is invoked;
               * - Function Dem_DistMemReportFailed() is invoked;
               * - Function Dem_EvtProcessPassedAndFailed() is invoked;
             */
            /* Checks on global data */
            check_global_data();
            /* GUID
             * - {BB185AC8-8209-4bf6-B526-33A8246F50F6};
             * - {5AAF4B38-088D-4d97-8B5D-4434A961F626};
             * - {81350721-8BB2-4fa5-B82B-22A010DD1049};
             * - {925C3675-1EEF-4df1-9474-12BA6A0248B2};
             * - {9E8E1E18-5AFB-4348-A2E2-227A4A7BF30D};
             * - {F84B112D-7761-4bbb-98E6-4694BCF28E4A};
             * - {2683299A-A586-41a0-AB04-94B8276E9655};
             * - {7771CB64-11E8-4b7a-A7C2-01AFCBDD44E7};
             * - {DED2C058-E0B4-4744-89FC-CA136368CED5};
             * - {9EFCB995-094D-4ddb-8DE3-DD3347DD13B5};
             * - {DBD42C5C-7C59-4d09-BBA7-7971A040B49C};
             * - {9B876386-AE2B-4ce3-BD2E-E3C117F20BCD};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_DebArTime_Cyclic_not_STATUS_PASSED_EventId_less_Timepassed(int doIt){
if (doIt) {
    /* Test method - EP */
    /* Tester define */

    Dem_DebArTime_ParamSet paramSet_entity[3];
    INITIALISE(paramSet_entity);

    /* Test case data declarations */
    Dem_EventIdType EventId = 3;
    const void * paramSet = &paramSet_entity;
    uint16 paramIndex = 1;
    /* Set global data */
    initialise_global_data();

    paramSet_entity[1].TimePassedThreshold = 2;

    /* Set expected values for global data checks */
    initialise_expected_global_data();


    START_TEST("test_Dem_DebArTime_Cyclic_not_STATUS_PASSED_EventId_less_Timepassed",
               "Check that:"
               "- Function Dem_EvtSetDebounceLevel() is invoked"
               "- The value of status2report variable is set as DEM_EVENT_STATUS_PASSED"
               "- debAction variable is updated"
               "- Function Dem_EvtDecDebounceLevel() is invoked"
               "- Function Dem_EvtProcessPassedAndFailed() is invoked"
               "- Function Dem_DistMemReportFailed() is invoked"
               "- Function DI() is invoked"
               "- Function EI() is invoked"
               "In case:"
               "- Function Dem_EvtIsSuppressed() returns FALSE at line 137"
               "- Function Dem_EvtGetLastReportedEvent() returns DEM_EVENT_STATUS_PREPASSED at line 171"
               "- The returned value of Function Dem_EvtGetDebounceLevel() is less than the value of TimePassedThreshold at line 157"
               "- Function Dem_EvtSt_GetTestCompleteTOC() returns FALSE at line 173"
               "- The value of insertUnrobustToEvBuffer variable is TRUE at line 313"
               "- Function Dem_DistMemIsReportFailedNecessary() returns TRUE at line 320");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_EvtIsSuppressed#false;"
                       "DI#default;"
                       "Dem_DebHandleResetConditions#default;"
                       "Dem_EvtGetLastReportedEvent#DEM_EVENT_STATUS_PREPASSED;"
                       "Dem_EvtGetDebounceLevel#default;"
                       "Dem_EvtSt_GetTestCompleteTOC#true;"
                       "Dem_DebHandleDebounceAction_4_TimeBasedDeb#true;"
                       "EI#default;"
                       "Dem_EvBuffInsert#default;"
                       "Dem_DistMemIsReportFailedNecessary#true1;"
                       "Dem_DistMemReportFailed#default;");

            /* Call SUT */
            Dem_DebArTime_Cyclic(EventId, paramSet, paramIndex);

            /* Test case checks */
            /* Expected result
               * - Function Dem_EvtSetDebounceLevel() is invoked;
               * - Function Dem_EvtDecDebounceLevel() is invoked;
               * - Function Dem_DistMemReportFailed() is invoked;
               * - Function Dem_EvtProcessPassedAndFailed() is invoked;
             */
            /* Checks on global data */
            check_global_data();
            /* GUID
             * - {BB185AC8-8209-4bf6-B526-33A8246F50F6};
             * - {81350721-8BB2-4fa5-B82B-22A010DD1049};
             * - {925C3675-1EEF-4df1-9474-12BA6A0248B2};
             * - {9E8E1E18-5AFB-4348-A2E2-227A4A7BF30D};
             * - {F84B112D-7761-4bbb-98E6-4694BCF28E4A};
             * - {2683299A-A586-41a0-AB04-94B8276E9655};
             * - {7771CB64-11E8-4b7a-A7C2-01AFCBDD44E7};
             * - {DED2C058-E0B4-4744-89FC-CA136368CED5};
             * - {9EFCB995-094D-4ddb-8DE3-DD3347DD13B5};
             * - {DBD42C5C-7C59-4d09-BBA7-7971A040B49C};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_DebArTime_Cyclic_STATUS_FAILED_EventId_greater_Timefailed(int doIt){
if (doIt) {
    /* Test method - EP */
    /* Tester define */

    Dem_DebArTime_ParamSet paramSet_entity[3];
    INITIALISE(paramSet_entity);

    /* Test case data declarations */
    Dem_EventIdType EventId = 3;
    const void * paramSet = &paramSet_entity;
    uint16 paramIndex = 1;
    /* Set global data */
    initialise_global_data();

    paramSet_entity[1].TimeFailedThreshold = 1;
    paramSet_entity[1].FDCThreshold = 1;
    paramSet_entity[1].SuspiciousThreshold = 0;


    /* Set expected values for global data checks */
    initialise_expected_global_data();


    START_TEST("test_Dem_DebArTime_Cyclic_STATUS_FAILED_EventId_greater_Timefailed",
               "Check that:"
               "- Function Dem_EvtSetDebounceLevel() is invoked"
               "- The value of status2report variable is set as DEM_EVENT_STATUS_FAILED"
               "- debAction variable is updated"
               "- Function Dem_EvtIncDebounceLevel() is invoked"
               "- Function Dem_EvBuffInsert() is invoked"
               "- Function Dem_EvtProcessPassedAndFailed() is invoked"
               "- Function DI() is invoked"
               "- Function EI() is invoked"
               "In case:"
               "- Function Dem_EvtIsSuppressed() returns FALSE at line 137"
               "- Function Dem_EvtGetLastReportedEvent() returns DEM_EVENT_STATUS_PREFAILED at line 190"
               "- The returned value of Function Dem_EvtGetDebounceLevel() is less than the value of TimeFailedThreshold at line 199"
               "- The returned value of Function Dem_EvtGetDebounceLevel() is less than 0 at line 201"
               "- The returned value of Function Dem_EvtGetDebounceLevel() is equal TimeFailedThreshold at line 207"
               "- The returned value of Function Dem_EvtGetDebounceLevel() is greater than or equal FDCThreshold at line 214"
               "- The value of SuspiciousThreshold variable is different DEM_MAXSINT16 at line 228"
               "- The returned value of Function Dem_EvtGetDebounceLevel() is greater than or equal SuspiciousThreshold at line 230");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_EvtIsSuppressed#false;"
                       "DI#default;"
                       "Dem_DebHandleResetConditions#default;"
                       "Dem_EvtGetLastReportedEvent#DEM_EVENT_STATUS_PREFAILED;"
                       "Dem_EvtGetDebounceLevel#default;"
                       "Dem_EvtGetDebounceLevel#sint;"
                       "Dem_EvtSetDebounceLevel#default;"
                       "Dem_EvtIncDebounceLevel#default;"
                       "Dem_EvtGetDebounceLevel#01;"
                       "Dem_EvtGetDebounceLevel#01;"
                       "Dem_EvtGetDebounceLevel#01;"
                       "Dem_DebHandleDebounceAction_4_TimeBasedDeb#true1;"
                       "EI#default;"
                       "Dem_EvBuffInsert#default;"
                       "Dem_DistMemIsReportFailedNecessary#false1;"
                       "Dem_EvtProcessPassedAndFailed#FAILED;");

            /* Call SUT */
            Dem_DebArTime_Cyclic(EventId, paramSet, paramIndex);

            /* Test case checks */
            /* Expected result
               * - Function Dem_EvtSetDebounceLevel() is invoked;
               * - Function Dem_EvtIncDebounceLevel() is invoked;
               * - Function Dem_EvBuffInsert() is invoked;
               * - Function Dem_EvtProcessPassedAndFailed() is invoked;
             */
            /* Checks on global data */
            check_global_data();
            /* GUID
             * - {BB185AC8-8209-4bf6-B526-33A8246F50F6};
             * - {5AAF4B38-088D-4d97-8B5D-4434A961F626};
             * - {81350721-8BB2-4fa5-B82B-22A010DD1049};
             * - {925C3675-1EEF-4df1-9474-12BA6A0248B2};
             * - {9E8E1E18-5AFB-4348-A2E2-227A4A7BF30D};
             * - {F84B112D-7761-4bbb-98E6-4694BCF28E4A};
             * - {2683299A-A586-41a0-AB04-94B8276E9655};
             * - {9B876386-AE2B-4ce3-BD2E-E3C117F20BCD};
             * - {D0DD847E-04B7-43e5-B3B0-6D53CF846DF6};
             * - {7771CB64-11E8-4b7a-A7C2-01AFCBDD44E7};
             * - {9223B5ED-63E4-488a-8083-98835270D856};
             * - {9EFCB995-094D-4ddb-8DE3-DD3347DD13B5};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_DebArTime_Cyclic_not_STATUS_FAILED_EventId_greater_Timefailed(int doIt){
if (doIt) {
    /* Test method - EP */
    /* Tester define */

    Dem_DebArTime_ParamSet paramSet_entity[3];
    INITIALISE(paramSet_entity);

    /* Test case data declarations */
    Dem_EventIdType EventId = 3;
    const void * paramSet = &paramSet_entity;
    uint16 paramIndex = 1;
    /* Set global data */
    initialise_global_data();

    paramSet_entity[1].TimeFailedThreshold = 1;
    paramSet_entity[1].FDCThreshold = 1;
    paramSet_entity[1].SuspiciousThreshold = 3;


    /* Set expected values for global data checks */
    initialise_expected_global_data();


    START_TEST("test_Dem_DebArTime_Cyclic_not_STATUS_FAILED_EventId_greater_Timefailed",
               "Check that:"
               "- The value of status2report variable is set as DEM_EVENT_STATUS_PREFAILED"
               "- debAction variable is updated"
               "- Function Dem_EvtIncDebounceLevel() is invoked"
               "- Function Dem_EvBuffInsert() is invoked"
               "- Function Dem_DistMemIsReportFailedNecessary() is invoked"
               "- Function DI() is invoked"
               "- Function EI() is invoked"
               "In case:"
               "- Function Dem_EvtIsSuppressed() returns FALSE at line 137"
               "- Function Dem_EvtGetLastReportedEvent() returns DEM_EVENT_STATUS_PREFAILED at line 190"
               "- The returned value of Function Dem_EvtGetDebounceLevel() is greater than the value of TimeFailedThreshold at line 199"
               "- The returned value of Function Dem_EvtGetDebounceLevel() is equal 0 at line 201"
               "- The returned value of Function Dem_EvtGetDebounceLevel() is not equal TimeFailedThreshold at line 207"
               "- The value of SuspiciousThreshold variable is different DEM_MAXSINT16 at line 228"
               "- The returned value of Function Dem_EvtGetDebounceLevel() is less than SuspiciousThreshold at line 230");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_EvtIsSuppressed#false;"
                       "DI#default;"
                       "Dem_DebHandleResetConditions#default;"
                       "Dem_EvtGetLastReportedEvent#DEM_EVENT_STATUS_PREFAILED;"
                       "Dem_EvtGetDebounceLevel#default;"
                       "Dem_EvtGetDebounceLevel#default;"
                       "Dem_EvtIncDebounceLevel#default;"
                       "Dem_EvtGetDebounceLevel#default;"
                       "Dem_EvtGetDebounceLevel#01;"
                       "Dem_EvtGetDebounceLevel#01;"
                       "Dem_DebHandleDebounceAction_4_TimeBasedDeb#true2;"
                       "EI#default;"
                       "Dem_EvBuffInsert#default;"
                       "Dem_DistMemIsReportFailedNecessary#false2;");

            /* Call SUT */
            Dem_DebArTime_Cyclic(EventId, paramSet, paramIndex);

            /* Test case checks */
            /* Expected result
               * - The value of status2report variable is set as DEM_EVENT_STATUS_PREFAILED;
               * - debAction variable is updated;
               * - Function Dem_EvtIncDebounceLevel() is invoked;
               * - Function Dem_EvBuffInsert() is invoked;
               * - Function Dem_DistMemIsReportFailedNecessary() is invoked;
               * - Function DI() is invoked;
               * - Function EI() is invoked;
             */
            /* Checks on global data */
            check_global_data();
            /* GUID
             * - {BB185AC8-8209-4bf6-B526-33A8246F50F6};
             * - {5AAF4B38-088D-4d97-8B5D-4434A961F626};
             * - {81350721-8BB2-4fa5-B82B-22A010DD1049};
             * - {925C3675-1EEF-4df1-9474-12BA6A0248B2};
             * - {9E8E1E18-5AFB-4348-A2E2-227A4A7BF30D};
             * - {F84B112D-7761-4bbb-98E6-4694BCF28E4A};
             * - {2683299A-A586-41a0-AB04-94B8276E9655};
             * - {7771CB64-11E8-4b7a-A7C2-01AFCBDD44E7};
             * - {9223B5ED-63E4-488a-8083-98835270D856};
             * - {9EFCB995-094D-4ddb-8DE3-DD3347DD13B5};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_DebArTime_Cyclic_DEM_MAXSINT16_EventId_greater_Timefailed(int doIt){
if (doIt) {
    /* Test method - EP */
    /* Tester define */

    Dem_DebArTime_ParamSet paramSet_entity[3];
    INITIALISE(paramSet_entity);

    /* Test case data declarations */
    Dem_EventIdType EventId = 3;
    const void * paramSet = &paramSet_entity;
    uint16 paramIndex = 1;
    /* Set global data */
    initialise_global_data();

    paramSet_entity[1].TimeFailedThreshold = 3;
    paramSet_entity[1].FDCThreshold = 5;
    paramSet_entity[1].SuspiciousThreshold = DEM_MAXSINT16;


    /* Set expected values for global data checks */
    initialise_expected_global_data();


    START_TEST("test_Dem_DebArTime_Cyclic_DEM_MAXSINT16_EventId_greater_Timefailed",
               "Check that:"
               "- The value of status2report variable is set as DEM_EVENT_STATUS_PREFAILED"
               "- debAction variable is updated"
               "- Function Dem_EvtIncDebounceLevel() is invoked"
               "- Function Dem_EvBuffInsert() is invoked"
               "- Function Dem_DistMemIsReportFailedNecessary() is invoked"
               "- Function Dem_DistMemReportFailed() is invoked"
               "- Function DI() is invoked"
               "- Function EI() is invoked"
               "In case:"
               "- Function Dem_EvtIsSuppressed() returns FALSE at line 137"
               "- Function Dem_EvtGetLastReportedEvent() returns DEM_EVENT_STATUS_PREFAILED at line 190"
               "- The returned value of Function Dem_EvtGetDebounceLevel() is less than the value of FDCThreshold at line 214"
               "- The value of SuspiciousThreshold variable is equal DEM_MAXSINT16 at line 228");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_EvtIsSuppressed#false;"
                       "DI#default;"
                       "Dem_DebHandleResetConditions#default;"
                       "Dem_EvtGetLastReportedEvent#DEM_EVENT_STATUS_PREFAILED;"
                       "Dem_EvtGetDebounceLevel#01;"
                       "Dem_EvtGetDebounceLevel#default;"
                       "Dem_EvtIncDebounceLevel#default;"
                       "Dem_EvtGetDebounceLevel#default;"
                       "Dem_EvtGetDebounceLevel#01;"
                       "Dem_DebHandleDebounceAction_4_TimeBasedDeb#true3;"
                       "EI#default;"
                       "Dem_EvBuffInsert#default;"
                       "Dem_DistMemIsReportFailedNecessary#true1;"
                       "Dem_DistMemReportFailed#default;");

            /* Call SUT */
            Dem_DebArTime_Cyclic(EventId, paramSet, paramIndex);

            /* Test case checks */
            /* Expected result
               * - The value of status2report variable is set as DEM_EVENT_STATUS_PREFAILED;
               * - debAction variable is updated;
               * - Function Dem_EvtIncDebounceLevel() is invoked;
               * - Function Dem_EvBuffInsert() is invoked;
               * - Function Dem_DistMemIsReportFailedNecessary() is invoked;
               * - Function Dem_DistMemReportFailed() is invoked;
               * - Function DI() is invoked;
               * - Function EI() is invoked;
             */
            /* Checks on global data */
            check_global_data();
            /* GUID
             * - {BB185AC8-8209-4bf6-B526-33A8246F50F6};
             * - {5AAF4B38-088D-4d97-8B5D-4434A961F626};
             * - {81350721-8BB2-4fa5-B82B-22A010DD1049};
             * - {925C3675-1EEF-4df1-9474-12BA6A0248B2};
             * - {9E8E1E18-5AFB-4348-A2E2-227A4A7BF30D};
             * - {F84B112D-7761-4bbb-98E6-4694BCF28E4A};
             * - {2683299A-A586-41a0-AB04-94B8276E9655};
             * - {DBD42C5C-7C59-4d09-BBA7-7971A040B49C};
             * - {7771CB64-11E8-4b7a-A7C2-01AFCBDD44E7};
             * - {9223B5ED-63E4-488a-8083-98835270D856};
             * - {9EFCB995-094D-4ddb-8DE3-DD3347DD13B5};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_DebArTime_Cyclic_STATUS_FAILED_EventId_less_Timefailed(int doIt){
if (doIt) {
    /* Test method - EP */
    /* Tester define */

    Dem_DebArTime_ParamSet paramSet_entity[3];
    INITIALISE(paramSet_entity);

    /* Test case data declarations */
    Dem_EventIdType EventId = 3;
    const void * paramSet = &paramSet_entity;
    uint16 paramIndex = 1;
    /* Set global data */
    initialise_global_data();

    paramSet_entity[1].TimeFailedThreshold = 3;
    paramSet_entity[1].FDCThreshold = 5;
    paramSet_entity[1].SuspiciousThreshold = DEM_MAXSINT16;


    /* Set expected values for global data checks */
    initialise_expected_global_data();


    START_TEST("test_Dem_DebArTime_Cyclic_STATUS_FAILED_EventId_less_Timefailed",
               "Check that:"
               "- The value of status2report variable is set as DEM_EVENT_STATUS_PREFAILED"
               "- debAction variable is updated"
               "- Function Dem_EvtIncDebounceLevel() is invoked"
               "- Function Dem_EvBuffInsert() is invoked"
               "- Function Dem_DistMemIsReportFailedNecessary() is invoked"
               "- Function Dem_DistMemReportFailed() is invoked"
               "- Function DI() is invoked"
               "- Function EI() is invoked"
               "In case:"
               "- Function Dem_EvtIsSuppressed() returns FALSE at line 137"
               "- Function Dem_EvtGetLastReportedEvent() returns DEM_EVENT_STATUS_PREFAILED at line 190"
               "- The returned value of Function Dem_EvtGetDebounceLevel() is less than the value of FDCThreshold at line 214"
               "- The value of SuspiciousThreshold variable is equal DEM_MAXSINT16 at line 228");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_EvtIsSuppressed#false;"
                       "DI#default;"
                       "Dem_DebHandleResetConditions#default;"
                       "Dem_EvtGetLastReportedEvent#DEM_EVENT_STATUS_PREFAILED;"
                       "Dem_EvtGetDebounceLevel#01;"
                       "Dem_EvtGetDebounceLevel#default;"
                       "Dem_EvtIncDebounceLevel#default;"
                       "Dem_EvtGetDebounceLevel#default;"
                       "Dem_EvtGetDebounceLevel#01;"
                       "Dem_DebHandleDebounceAction_4_TimeBasedDeb#true3;"
                       "EI#default;"
                       "Dem_EvBuffInsert#default;"
                       "Dem_DistMemIsReportFailedNecessary#true1;"
                       "Dem_DistMemReportFailed#default;");

            /* Call SUT */
            Dem_DebArTime_Cyclic(EventId, paramSet, paramIndex);

            /* Test case checks */
            /* Expected result
               * - The value of status2report variable is set as DEM_EVENT_STATUS_PREFAILED;
               * - debAction variable is updated;
               * - Function Dem_EvtIncDebounceLevel() is invoked;
               * - Function Dem_EvBuffInsert() is invoked;
               * - Function Dem_DistMemIsReportFailedNecessary() is invoked;
               * - Function Dem_DistMemReportFailed() is invoked;
               * - Function DI() is invoked;
               * - Function EI() is invoked;
             */
            /* Checks on global data */
            check_global_data();
            /* GUID
             * - {BB185AC8-8209-4bf6-B526-33A8246F50F6};
             * - {5AAF4B38-088D-4d97-8B5D-4434A961F626};
             * - {81350721-8BB2-4fa5-B82B-22A010DD1049};
             * - {925C3675-1EEF-4df1-9474-12BA6A0248B2};
             * - {9E8E1E18-5AFB-4348-A2E2-227A4A7BF30D};
             * - {F84B112D-7761-4bbb-98E6-4694BCF28E4A};
             * - {2683299A-A586-41a0-AB04-94B8276E9655};
             * - {DBD42C5C-7C59-4d09-BBA7-7971A040B49C};
             * - {7771CB64-11E8-4b7a-A7C2-01AFCBDD44E7};
             * - {9223B5ED-63E4-488a-8083-98835270D856};
             * - {9EFCB995-094D-4ddb-8DE3-DD3347DD13B5};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_DebArTime_Cyclic_STATUS_FAILED_EventId_Greater_FailedThreshold(int doIt){
if (doIt) {
    /* Test method - EP */
    /* Tester define */

    Dem_DebArTime_ParamSet paramSet_entity[3];
    INITIALISE(paramSet_entity);

    /* Test case data declarations */
    Dem_EventIdType EventId = 3;
    const void * paramSet = &paramSet_entity;
    uint16 paramIndex = 1;
    /* Set global data */
    initialise_global_data();

    paramSet_entity[1].TimeFailedThreshold = 0;

    /* Set expected values for global data checks */
    initialise_expected_global_data();


    START_TEST("test_Dem_DebArTime_Cyclic_STATUS_FAILED_EventId_Greater_FailedThreshold",
               "Check that:"
               "- The value of status2report variable is set as DEM_EVENT_STATUS_FAILED"
               "- debAction variable is updated"
               "- Function Dem_DistMemIsReportFailedNecessary() is invoked"
               "- Function Dem_EvtProcessPassedAndFailed() is invoked"
               "- Function DI() is invoked"
               "- Function EI() is invoked"
               "In case:"
               "- Function Dem_EvtIsSuppressed() returns FALSE at line 137"
               "- Function Dem_EvtGetLastReportedEvent() returns DEM_EVENT_STATUS_PREFAILED at line 190"
               "- The returned value of Function Dem_EvtGetDebounceLevel() is less than the value of TimeFailedThreshold at line 238"
               "- Function Dem_EvtSt_GetTestFailed() returns FALSE at line 240");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_EvtIsSuppressed#false;"
                       "DI#default;"
                       "Dem_DebHandleResetConditions#default;"
                       "Dem_EvtGetLastReportedEvent#DEM_EVENT_STATUS_PREFAILED;"
                       "Dem_EvtGetDebounceLevel#01;"
                       "Dem_EvtSt_GetTestFailed#false;"
                       "Dem_DebHandleDebounceAction_4_TimeBasedDeb#false1;"
                       "EI#default;"
                       "Dem_DistMemIsReportFailedNecessary#false1;"
                       "Dem_EvtProcessPassedAndFailed#FAILED;");

            /* Call SUT */
            Dem_DebArTime_Cyclic(EventId, paramSet, paramIndex);

            /* Test case checks */
            /* Expected result
               * - The value of status2report variable is set as DEM_EVENT_STATUS_FAILED;
               * - debAction variable is updated;
               * - Function Dem_DistMemIsReportFailedNecessary() is invoked;
               * - Function Dem_EvtProcessPassedAndFailed() is invoked;
               * - Function DI() is invoked;
               * - Function EI() is invoked;
             */
            /* Checks on global data */
            check_global_data();
            /* GUID
             * - {BB185AC8-8209-4bf6-B526-33A8246F50F6};
             * - {5AAF4B38-088D-4d97-8B5D-4434A961F626};
             * - {81350721-8BB2-4fa5-B82B-22A010DD1049};
             * - {925C3675-1EEF-4df1-9474-12BA6A0248B2};
             * - {9E8E1E18-5AFB-4348-A2E2-227A4A7BF30D};
             * - {F84B112D-7761-4bbb-98E6-4694BCF28E4A};
             * - {2683299A-A586-41a0-AB04-94B8276E9655};
             * - {9B876386-AE2B-4ce3-BD2E-E3C117F20BCD};
             * - {69C3E497-41A6-4495-B8EB-582FD15623DA};
             * - {7771CB64-11E8-4b7a-A7C2-01AFCBDD44E7};
             * - {9223B5ED-63E4-488a-8083-98835270D856};
             * - {9EFCB995-094D-4ddb-8DE3-DD3347DD13B5};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_DebArTime_Cyclic_not_STATUS_FAILED_EventId_Greater_FailedThreshold(int doIt){
if (doIt) {
    /* Test method - EP */
    /* Tester define */

    Dem_DebArTime_ParamSet paramSet_entity[3];
    INITIALISE(paramSet_entity);

    /* Test case data declarations */
    Dem_EventIdType EventId = 3;
    const void * paramSet = &paramSet_entity;
    uint16 paramIndex = 1;
    /* Set global data */
    initialise_global_data();

    paramSet_entity[1].TimeFailedThreshold = 0;

    /* Set expected values for global data checks */
    initialise_expected_global_data();


    START_TEST("test_Dem_DebArTime_Cyclic_not_STATUS_FAILED_EventId_Greater_FailedThreshold",
               "Check that:"
               "- The value of status2report variable is set as DEM_EVENT_STATUS_FAILED"
               "- debAction variable is updated"
               "- Function Dem_EvBuffInsert() is invoked"
               "- Function Dem_DistMemIsReportFailedNecessary() is invoked"
               "- Function DI() is invoked"
               "- Function EI() is invoked"
               "In case:"
               "- Function Dem_EvtIsSuppressed() returns FALSE at line 137"
               "- Function Dem_EvtGetLastReportedEvent() returns DEM_EVENT_STATUS_PREFAILED at line 190"
               "- The returned value of Function Dem_EvtGetDebounceLevel() is less than the value of TimeFailedThreshold at line 238"
               "- Function Dem_EvtSt_GetTestFailed() returns FALSE at line 240");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_EvtIsSuppressed#false;"
                       "DI#default;"
                       "Dem_DebHandleResetConditions#default;"
                       "Dem_EvtGetLastReportedEvent#DEM_EVENT_STATUS_PREFAILED;"
                       "Dem_EvtGetDebounceLevel#01;"
                       "Dem_EvtSt_GetTestFailed#true;"
                       "Dem_DebHandleDebounceAction_4_TimeBasedDeb#true3;"
                       "EI#default;"
                       "Dem_EvBuffInsert#default;"
                       "Dem_DistMemIsReportFailedNecessary#false;");

            /* Call SUT */
            Dem_DebArTime_Cyclic(EventId, paramSet, paramIndex);

            /* Test case checks */
            /* Expected result
               * - The value of status2report variable is set as DEM_EVENT_STATUS_FAILED;
               * - debAction variable is updated;
               * - Function Dem_DistMemIsReportFailedNecessary() is invoked;
               * - Function Dem_EvBuffInsert() is invoked;
               * - Function DI() is invoked;
               * - Function EI() is invoked;
             */
            /* Checks on global data */
            check_global_data();
            /* GUID
             * - {BB185AC8-8209-4bf6-B526-33A8246F50F6};
             * - {5AAF4B38-088D-4d97-8B5D-4434A961F626};
             * - {81350721-8BB2-4fa5-B82B-22A010DD1049};
             * - {925C3675-1EEF-4df1-9474-12BA6A0248B2};
             * - {9E8E1E18-5AFB-4348-A2E2-227A4A7BF30D};
             * - {F84B112D-7761-4bbb-98E6-4694BCF28E4A};
             * - {2683299A-A586-41a0-AB04-94B8276E9655};
             * - {69C3E497-41A6-4495-B8EB-582FD15623DA};
             * - {7771CB64-11E8-4b7a-A7C2-01AFCBDD44E7};
             * - {9223B5ED-63E4-488a-8083-98835270D856};
             * - {9EFCB995-094D-4ddb-8DE3-DD3347DD13B5};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_DebArTime_Cyclic_STATUS_PASSED_debAction_RESETSUSPICIOUS(int doIt){
if (doIt) {
    /* Test method - EP */
    /* Tester define */

    Dem_DebArTime_ParamSet paramSet_entity[3];
    INITIALISE(paramSet_entity);

    /* Test case data declarations */
    Dem_EventIdType EventId = 3;
    const void * paramSet = &paramSet_entity;
    uint16 paramIndex = 1;
    /* Set global data */
    initialise_global_data();

    paramSet_entity[1].TimePassedThreshold = 0;
    paramSet_entity[1].SuspiciousThreshold = 0;


    /* Set expected values for global data checks */
    initialise_expected_global_data();


    START_TEST("test_Dem_DebArTime_Cyclic_STATUS_PASSED_debAction_RESETSUSPICIOUS",
               "Check that:"
               "- The value of status2report variable is set as DEM_EVENT_STATUS_PASSED"
               "- debAction variable is updated"
               "- Function Dem_EvtSetDebounceLevel() is invoked"
               "- Function Dem_EvBuffInsert() is invoked"
               "- Function Dem_DistMemIsReportFailedNecessary() is invoked"
               "- Function Dem_DistMemReportFailed() is invoked"
               "- Function Dem_EvtProcessPassedAndFailed() is invoked"
               "- Function DI() is invoked"
               "- Function EI() is invoked"
               "In case:"
               "- Function Dem_EvtIsSuppressed() returns FALSE at line 137"
               "- Function Dem_EvtGetLastReportedEvent() returns DEM_EVENT_STATUS_PASSED at line 253"
               "- Function Dem_EvtSt_GetTestFailed() returns TRUE at line 265"
               "- The value of SuspiciousThreshold variable is different DEM_MAXSINT16 at line 273 ");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_EvtIsSuppressed#false;"
                       "DI#default;"
                       "Dem_DebHandleResetConditions#default;"
                       "Dem_EvtGetLastReportedEvent#DEM_EVENT_STATUS_PASSED;"
                       "Dem_EvtSetDebounceLevel#default;"
                       "Dem_EvtSt_GetTestFailed#true;"
                       "Dem_DebHandleDebounceAction_4_TimeBasedDeb#true;"
                       "EI#default;"
                       "Dem_EvBuffInsert#default;"
                       "Dem_DistMemIsReportFailedNecessary#true;"
                       "Dem_DistMemReportFailed#default;"
                       "Dem_EvtProcessPassedAndFailed#PASSED;");

            /* Call SUT */
            Dem_DebArTime_Cyclic(EventId, paramSet, paramIndex);

            /* Test case checks */
            /* Expected result
               * - The value of status2report variable is set as DEM_EVENT_STATUS_PASSED;
               * - debAction variable is updated;
               * - Function Dem_EvtSetDebounceLevel() is invoked;
               * - Function Dem_EvBuffInsert() is invoked;
               * - Function Dem_DistMemIsReportFailedNecessary() is invoked;
               * - Function Dem_DistMemReportFailed() is invoked;
               * - Function Dem_EvtProcessPassedAndFailed() is invoked;
               * - Function DI() is invoked;
               * - Function EI() is invoked;
             */
            /* Checks on global data */
            check_global_data();
            /* GUID
             * - {BB185AC8-8209-4bf6-B526-33A8246F50F6};
             * - {5AAF4B38-088D-4d97-8B5D-4434A961F626};
             * - {81350721-8BB2-4fa5-B82B-22A010DD1049};
             * - {925C3675-1EEF-4df1-9474-12BA6A0248B2};
             * - {9E8E1E18-5AFB-4348-A2E2-227A4A7BF30D};
             * - {2683299A-A586-41a0-AB04-94B8276E9655};
             * - {9B876386-AE2B-4ce3-BD2E-E3C117F20BCD};
             * - {D0DD847E-04B7-43e5-B3B0-6D53CF846DF6};
             * - {69C3E497-41A6-4495-B8EB-582FD15623DA};
             * - {DBD42C5C-7C59-4d09-BBA7-7971A040B49C};
             * - {DED2C058-E0B4-4744-89FC-CA136368CED5};
             * - {9EFCB995-094D-4ddb-8DE3-DD3347DD13B5};
             * - {7771CB64-11E8-4b7a-A7C2-01AFCBDD44E7};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_DebArTime_Cyclic_not_STATUS_PASSED_debAction_not_RESETSUSPICIOUS(int doIt){
if (doIt) {
    /* Test method - EP */
    /* Tester define */

    Dem_DebArTime_ParamSet paramSet_entity[3];
    INITIALISE(paramSet_entity);

    /* Test case data declarations */
    Dem_EventIdType EventId = 3;
    const void * paramSet = &paramSet_entity;
    uint16 paramIndex = 1;
    /* Set global data */
    initialise_global_data();

    paramSet_entity[1].TimePassedThreshold = 0;
    paramSet_entity[1].SuspiciousThreshold = DEM_MAXSINT16;


    /* Set expected values for global data checks */
    initialise_expected_global_data();


    START_TEST("test_Dem_DebArTime_Cyclic_not_STATUS_PASSED_debAction_not_RESETSUSPICIOUS",
               "Check that:"
               "- The value of status2report variable is set as DEM_EVENT_STATUS_PASSED"
               "- debAction variable is updated"
               "- Function Dem_EvtSetDebounceLevel() is invoked"
               "- Function Dem_EvBuffInsert() is invoked"
               "- Function Dem_DistMemIsReportFailedNecessary() is invoked"
               "- Function DI() is invoked"
               "- Function EI() is invoked"
               "In case:"
               "- Function Dem_EvtIsSuppressed() returns FALSE at line 137"
               "- Function Dem_EvtGetLastReportedEvent() returns DEM_EVENT_STATUS_PASSED at line 253"
               "- Function Dem_EvtSt_GetTestFailed() returns FALSE at line 265"
               "- The value of SuspiciousThreshold variable is equal DEM_MAXSINT16 at line 273 ");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_EvtIsSuppressed#false;"
                       "DI#default;"
                       "Dem_DebHandleResetConditions#default;"
                       "Dem_EvtGetLastReportedEvent#DEM_EVENT_STATUS_PASSED;"
                       "Dem_EvtSetDebounceLevel#default;"
                       "Dem_EvtSt_GetTestFailed#false;"
                       "Dem_DebHandleDebounceAction_4_TimeBasedDeb#true4;"
                       "EI#default;"
                       "Dem_EvBuffInsert#default;"
                       "Dem_DistMemIsReportFailedNecessary#false;");

            /* Call SUT */
            Dem_DebArTime_Cyclic(EventId, paramSet, paramIndex);

            /* Test case checks */
            /* Expected result
               * - The value of status2report variable is set as DEM_EVENT_STATUS_PASSED;
               * - debAction variable is updated;
               * - Function Dem_EvtSetDebounceLevel() is invoked;
               * - Function Dem_EvBuffInsert() is invoked;
               * - Function Dem_DistMemIsReportFailedNecessary() is invoked;
               * - Function DI() is invoked;
               * - Function EI() is invoked;
             */
            /* Checks on global data */
            check_global_data();
            /* GUID
             * - {BB185AC8-8209-4bf6-B526-33A8246F50F6};
             * - {5AAF4B38-088D-4d97-8B5D-4434A961F626};
             * - {81350721-8BB2-4fa5-B82B-22A010DD1049};
             * - {925C3675-1EEF-4df1-9474-12BA6A0248B2};
             * - {9E8E1E18-5AFB-4348-A2E2-227A4A7BF30D};
             * - {2683299A-A586-41a0-AB04-94B8276E9655};
             * - {D0DD847E-04B7-43e5-B3B0-6D53CF846DF6};
             * - {69C3E497-41A6-4495-B8EB-582FD15623DA};
             * - {7771CB64-11E8-4b7a-A7C2-01AFCBDD44E7};
             * - {DED2C058-E0B4-4744-89FC-CA136368CED5};
             * - {9EFCB995-094D-4ddb-8DE3-DD3347DD13B5};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_DebArTime_Cyclic_STATUS_FAILED(int doIt){
if (doIt) {
    /* Test method - EP */
    /* Tester define */

    Dem_DebArTime_ParamSet paramSet_entity[3];
    INITIALISE(paramSet_entity);

    /* Test case data declarations */
    Dem_EventIdType EventId = 3;
    const void * paramSet = &paramSet_entity;
    uint16 paramIndex = 1;
    /* Set global data */
    initialise_global_data();

    paramSet_entity[1].TimeFailedThreshold = 0;

    /* Set expected values for global data checks */
    initialise_expected_global_data();


    START_TEST("test_Dem_DebArTime_Cyclic_STATUS_FAILED",
               "Check that:"
               "- The value of status2report variable is set as DEM_EVENT_STATUS_FAILED"
               "- debAction variable is updated"
               "- Function Dem_EvtSetDebounceLevel() is invoked"
               "- Function Dem_DistMemIsReportFailedNecessary() is invoked"
               "- Function Dem_EvtProcessPassedAndFailed() is invoked"
               "- Function DI() is invoked"
               "- Function EI() is invoked"
               "In case:"
               "- Function Dem_EvtIsSuppressed() returns FALSE at line 137"
               "- Function Dem_EvtGetLastReportedEvent() returns DEM_EVENT_STATUS_FAILED at line 282"
               "- Function Dem_EvtSt_GetTestFailed() returns FALSE at line 292");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_EvtIsSuppressed#false;"
                       "DI#default;"
                       "Dem_DebHandleResetConditions#default;"
                       "Dem_EvtGetLastReportedEvent#DEM_EVENT_STATUS_FAILED;"
                       "Dem_EvtSetDebounceLevel#default;"
                       "Dem_EvtSt_GetTestFailed#false;"
                       "Dem_DebHandleDebounceAction_4_TimeBasedDeb#false1;"
                       "EI#default;"
                       "Dem_DistMemIsReportFailedNecessary#false1;"
                       "Dem_EvtProcessPassedAndFailed#FAILED");

            /* Call SUT */
            Dem_DebArTime_Cyclic(EventId, paramSet, paramIndex);

            /* Test case checks */
            /* Expected result
               * - The value of status2report variable is set as DEM_EVENT_STATUS_PASSED;
               * - debAction variable is updated;
               * - Function Dem_EvtSetDebounceLevel() is invoked;
               * - Function Dem_DistMemIsReportFailedNecessary() is invoked;
               * - Function Dem_EvtProcessPassedAndFailed() is invoked;
               * - Function DI() is invoked;
               * - Function EI() is invoked;
             */
            /* Checks on global data */
            check_global_data();
            /* GUID
             * - {BB185AC8-8209-4bf6-B526-33A8246F50F6};
             * - {5AAF4B38-088D-4d97-8B5D-4434A961F626};
             * - {81350721-8BB2-4fa5-B82B-22A010DD1049};
             * - {925C3675-1EEF-4df1-9474-12BA6A0248B2};
             * - {9E8E1E18-5AFB-4348-A2E2-227A4A7BF30D};
             * - {2683299A-A586-41a0-AB04-94B8276E9655};
             * - {D0DD847E-04B7-43e5-B3B0-6D53CF846DF6};
             * - {1DCE46D3-07F0-41d3-BB74-C7FFBBE3470D}
             * - {7771CB64-11E8-4b7a-A7C2-01AFCBDD44E7};
             * - {9EFCB995-094D-4ddb-8DE3-DD3347DD13B5};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_DebArTime_Cyclic_not_STATUS_FAILED(int doIt){
if (doIt) {
    /* Test method - EP */
    /* Tester define */

    Dem_DebArTime_ParamSet paramSet_entity[3];
    INITIALISE(paramSet_entity);

    /* Test case data declarations */
    Dem_EventIdType EventId = 3;
    const void * paramSet = &paramSet_entity;
    uint16 paramIndex = 1;
    /* Set global data */
    initialise_global_data();

    paramSet_entity[1].TimeFailedThreshold = 0;

    /* Set expected values for global data checks */
    initialise_expected_global_data();


    START_TEST("test_Dem_DebArTime_Cyclic_not_STATUS_FAILED",
               "Check that:"
               "- The value of status2report variable is set as DEM_EVENT_STATUS_FAILED"
               "- debAction variable is updated"
               "- Function Dem_EvtSetDebounceLevel() is invoked"
               "- Function Dem_DistMemIsReportFailedNecessary() is invoked"
               "- Function Dem_EvBuffInsert() is invoked"
               "- Function DI() is invoked"
               "- Function EI() is invoked"
               "In case:"
               "- Function Dem_EvtIsSuppressed() returns FALSE at line 137"
               "- Function Dem_EvtGetLastReportedEvent() returns DEM_EVENT_STATUS_FAILED at line 282"
               "- Function Dem_EvtSt_GetTestFailed() returns TRUE at line 292");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_EvtIsSuppressed#false;"
                       "DI#default;"
                       "Dem_DebHandleResetConditions#default;"
                       "Dem_EvtGetLastReportedEvent#DEM_EVENT_STATUS_FAILED;"
                       "Dem_EvtSetDebounceLevel#default;"
                       "Dem_EvtSt_GetTestFailed#true;"
                       "Dem_DebHandleDebounceAction_4_TimeBasedDeb#true3;"
                       "EI#default;"
                       "Dem_EvBuffInsert#default;"
                       "Dem_DistMemIsReportFailedNecessary#false;");

            /* Call SUT */
            Dem_DebArTime_Cyclic(EventId, paramSet, paramIndex);

            /* Test case checks */
            /* Expected result
               * - The value of status2report variable is set as DEM_EVENT_STATUS_PASSED;
               * - debAction variable is updated;
               * - Function Dem_EvtSetDebounceLevel() is invoked;
               * - Function Dem_DistMemIsReportFailedNecessary() is invoked;
               * - Function Dem_EvBuffInsert() is invoked;
               * - Function DI() is invoked;
               * - Function EI() is invoked;
             */
            /* Checks on global data */
            check_global_data();
            /* GUID
             * - {BB185AC8-8209-4bf6-B526-33A8246F50F6};
             * - {5AAF4B38-088D-4d97-8B5D-4434A961F626};
             * - {81350721-8BB2-4fa5-B82B-22A010DD1049};
             * - {925C3675-1EEF-4df1-9474-12BA6A0248B2};
             * - {9E8E1E18-5AFB-4348-A2E2-227A4A7BF30D};
             * - {2683299A-A586-41a0-AB04-94B8276E9655};
             * - {D0DD847E-04B7-43e5-B3B0-6D53CF846DF6};
             * - {1DCE46D3-07F0-41d3-BB74-C7FFBBE3470D};
             * - {7771CB64-11E8-4b7a-A7C2-01AFCBDD44E7};
             * - {9EFCB995-094D-4ddb-8DE3-DD3347DD13B5};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_DebArTime_Cyclic_default(int doIt){
if (doIt) {
    /* Test method - EP */
    /* Tester define */

    Dem_DebArTime_ParamSet paramSet_entity[3];
    INITIALISE(paramSet_entity);

    /* Test case data declarations */
    Dem_EventIdType EventId = 3;
    const void * paramSet = &paramSet_entity;
    uint16 paramIndex = 1;
    /* Set global data */
    initialise_global_data();

    paramSet_entity[1].TimeFailedThreshold = 0;

    /* Set expected values for global data checks */
    initialise_expected_global_data();


    START_TEST("test_Dem_DebArTime_Cyclic_default",
               "Check that:"
               "- Function Dem_DistMemIsReportFailedNecessary() is invoked"
               "- Function Dem_EvBuffInsert() is invoked"
               "- Function DI() is invoked"
               "- Function EI() is invoked"
               "In case:"
               "- Function Dem_EvtIsSuppressed() returns FALSE at line 137"
               "- Function Dem_EvtGetLastReportedEvent() returns 7 at line 303");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_EvtIsSuppressed#false;"
                       "DI#default;"
                       "Dem_DebHandleResetConditions#default;"
                       "Dem_EvtGetLastReportedEvent#default;"
                       "Dem_DebHandleDebounceAction_4_TimeBasedDeb#true3;"
                       "EI#default;"
                       "Dem_EvBuffInsert#default;"
                       "Dem_DistMemIsReportFailedNecessary#false;");

            /* Call SUT */
            Dem_DebArTime_Cyclic(EventId, paramSet, paramIndex);

            /* Test case checks */
            /* Expected result
               * - Function Dem_DistMemIsReportFailedNecessary() is invoked;
               * - Function Dem_EvBuffInsert() is invoked;
               * - Function DI() is invoked;
               * - Function EI() is invoked;
             */
            /* Checks on global data */
            check_global_data();
            /* GUID
             * - {BB185AC8-8209-4bf6-B526-33A8246F50F6};
             * - {5AAF4B38-088D-4d97-8B5D-4434A961F626};
             * - {81350721-8BB2-4fa5-B82B-22A010DD1049};
             * - {925C3675-1EEF-4df1-9474-12BA6A0248B2};
             * - {9E8E1E18-5AFB-4348-A2E2-227A4A7BF30D};
             * - {9B876386-AE2B-4ce3-BD2E-E3C117F20BCD};
             * - {7771CB64-11E8-4b7a-A7C2-01AFCBDD44E7};
             * - {9EFCB995-094D-4ddb-8DE3-DD3347DD13B5};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_DebArTime_Cyclic_Dem_EvtIsSuppressed_Returns_TRUE(int doIt){
if (doIt) {
    /* Test method - EP */
    /* Tester define */

    Dem_DebArTime_ParamSet paramSet_entity[3];
    INITIALISE(paramSet_entity);

    /* Test case data declarations */
    Dem_EventIdType EventId = 3;
    const void * paramSet = &paramSet_entity;
    uint16 paramIndex = 1;
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();


    START_TEST("test_Dem_DebArTime_Cyclic_Dem_EvtIsSuppressed_Returns_TRUE",
               "Check that:"
               "- Function does nothing"
               "In case:"
               "- Function Dem_EvtIsSuppressed() returns TRUE at line 137");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_EvtIsSuppressed#true;");

            /* Call SUT */
            Dem_DebArTime_Cyclic(EventId, paramSet, paramIndex);

            /* Test case checks */
            /* Expected result
               * - Function does nothing;
             */
            /* Checks on global data */
            check_global_data();
            /* GUID
             * - {BB185AC8-8209-4bf6-B526-33A8246F50F6};
             * - {5AAF4B38-088D-4d97-8B5D-4434A961F626};
             */
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

    IF_INSTANCE("default") {
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
        CHECK_U_INT(eventId, 3);
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
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
        CHECK_U_INT(EventId, 3);
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Stub for function Dem_DebHandleResetConditions */
boolean Dem_DebHandleResetConditions(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_DebHandleResetConditions");

    IF_INSTANCE("default") {
        CHECK_U_INT(EventId, 3);
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Stub for function Dem_DistMemReportFailed */
void Dem_DistMemReportFailed(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_DistMemReportFailed");

    IF_INSTANCE("default") {
        CHECK_U_INT(EventId, 3);
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Stub for function Dem_EvtProcessPassedAndFailed */
void Dem_EvtProcessPassedAndFailed(Dem_EventIdType EventId,
                                   Dem_EventStatusType EventStatus){
    REGISTER_CALL("Dem_EvtProcessPassedAndFailed");

    IF_INSTANCE("PASSED") {
        CHECK_U_INT(EventId, 3);
        CHECK_U_INT(EventStatus, DEM_EVENT_STATUS_PASSED);
        return;
    }

    IF_INSTANCE("FAILED") {
        CHECK_U_INT(EventId, 3);
        CHECK_U_INT(EventStatus, DEM_EVENT_STATUS_FAILED);
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_isDtcIdValid */
Dem_boolean_least ISOLATE_Dem_DebArTime_Dem_isDtcIdValid(Dem_DtcIdType id){
    REGISTER_CALL("Dem_isDtcIdValid");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_DtcGroupIdIsValid */
Dem_boolean_least ISOLATE_Dem_DebArTime_Dem_DtcGroupIdIsValid(Dem_DTCGroupIdType dtcGroupID){
    REGISTER_CALL("Dem_DtcGroupIdIsValid");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_J1939IsNodeIdValid */
Dem_boolean_least ISOLATE_Dem_DebArTime_Dem_J1939IsNodeIdValid(Dem_J1939NodeIdType nodeId){
    REGISTER_CALL("Dem_J1939IsNodeIdValid");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function rba_DiagLib_Bit8SetBit */
void ISOLATE_Dem_DebArTime_rba_DiagLib_Bit8SetBit(uint8 * buffer,
                                                  uint8 bit_position){
    REGISTER_CALL("rba_DiagLib_Bit8SetBit");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function rba_DiagLib_Bit8ClearBit */
void ISOLATE_Dem_DebArTime_rba_DiagLib_Bit8ClearBit(uint8 * buffer,
                                                    uint8 bit_position){
    REGISTER_CALL("rba_DiagLib_Bit8ClearBit");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function rba_DiagLib_Bit8ClearBits */
void ISOLATE_Dem_DebArTime_rba_DiagLib_Bit8ClearBits(uint8 * value,
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
void ISOLATE_Dem_DebArTime_rba_DiagLib_Bit16SetBit(uint16 * buffer,
                                                   uint8 bit_position){
    REGISTER_CALL("rba_DiagLib_Bit16SetBit");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function rba_DiagLib_Bit16ClearBit */
void ISOLATE_Dem_DebArTime_rba_DiagLib_Bit16ClearBit(uint16 * buffer,
                                                     uint8 bit_position){
    REGISTER_CALL("rba_DiagLib_Bit16ClearBit");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function rba_DiagLib_Bit16ClearBits */
void ISOLATE_Dem_DebArTime_rba_DiagLib_Bit16ClearBits(uint16 * value,
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
void ISOLATE_Dem_DebArTime_rba_DiagLib_Bit32SetBit(uint32 * buffer,
                                                   uint8 bit_position){
    REGISTER_CALL("rba_DiagLib_Bit32SetBit");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function rba_DiagLib_Bit32ClearBit */
void ISOLATE_Dem_DebArTime_rba_DiagLib_Bit32ClearBit(uint32 * buffer,
                                                     uint8 bit_position){
    REGISTER_CALL("rba_DiagLib_Bit32ClearBit");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function rba_DiagLib_Bit32ClearBits */
void ISOLATE_Dem_DebArTime_rba_DiagLib_Bit32ClearBits(uint32 * value,
                                                      uint8 bit_position,
                                                      uint8 number_of_bits){
    REGISTER_CALL("rba_DiagLib_Bit32ClearBits");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_BitArraySetBit */
void ISOLATE_Dem_DebArTime_Dem_BitArraySetBit(uint32 * buffer,
                                              uint32 bit_position){
    REGISTER_CALL("Dem_BitArraySetBit");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_BitArrayClearBit */
void ISOLATE_Dem_DebArTime_Dem_BitArrayClearBit(uint32 * buffer,
                                                uint32 bit_position){
    REGISTER_CALL("Dem_BitArrayClearBit");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function rba_DiagLib_Bit8IsBitSet */
boolean ISOLATE_Dem_DebArTime_rba_DiagLib_Bit8IsBitSet(uint8 value,
                                                       uint8 bit_position){
    REGISTER_CALL("rba_DiagLib_Bit8IsBitSet");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function rba_DiagLib_Bit8OverwriteBit */
void ISOLATE_Dem_DebArTime_rba_DiagLib_Bit8OverwriteBit(uint8 * buffer,
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
Dem_boolean_least ISOLATE_Dem_DebArTime_Dem_EnCoAreAllFulfilled(Dem_EnCoList enableConditionList){
    REGISTER_CALL("Dem_EnCoAreAllFulfilled");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_NvMGetNvMBlocKId */
NvM_BlockIdType ISOLATE_Dem_DebArTime_Dem_NvMGetNvMBlocKId(Dem_NvmBlockIdType id){
    REGISTER_CALL("Dem_NvMGetNvMBlocKId");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_IndicatorGetBlinkingCounter */
uint16 ISOLATE_Dem_DebArTime_Dem_IndicatorGetBlinkingCounter(uint8 indicatorId){
    REGISTER_CALL("Dem_IndicatorGetBlinkingCounter");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_IndicatorGetContinuousCounter */
uint16 ISOLATE_Dem_DebArTime_Dem_IndicatorGetContinuousCounter(uint8 indicatorId){
    REGISTER_CALL("Dem_IndicatorGetContinuousCounter");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_IndicatorGetFastFlashCtr */
uint16 ISOLATE_Dem_DebArTime_Dem_IndicatorGetFastFlashCtr(uint8 indicatorId){
    REGISTER_CALL("Dem_IndicatorGetFastFlashCtr");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_IndicatorGetSlowFlashCtr */
uint16 ISOLATE_Dem_DebArTime_Dem_IndicatorGetSlowFlashCtr(uint8 indicatorId){
    REGISTER_CALL("Dem_IndicatorGetSlowFlashCtr");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_IndicatorSetContinuousCtr */
void ISOLATE_Dem_DebArTime_Dem_IndicatorSetContinuousCtr(uint8 indicatorId,
                                                         uint16 continuousCtr){
    REGISTER_CALL("Dem_IndicatorSetContinuousCtr");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_IndicatorSetBlinkingCtr */
void ISOLATE_Dem_DebArTime_Dem_IndicatorSetBlinkingCtr(uint8 indicatorId,
                                                       uint16 blinkingCtr){
    REGISTER_CALL("Dem_IndicatorSetBlinkingCtr");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_IndicatorSetFastFlashCtr */
void ISOLATE_Dem_DebArTime_Dem_IndicatorSetFastFlashCtr(uint8 indicatorId,
                                                        uint16 fastFlashCtr){
    REGISTER_CALL("Dem_IndicatorSetFastFlashCtr");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_IndicatorSetSlowFlashCtr */
void ISOLATE_Dem_DebArTime_Dem_IndicatorSetSlowFlashCtr(uint8 indicatorId,
                                                        uint16 slowFlashCtr){
    REGISTER_CALL("Dem_IndicatorSetSlowFlashCtr");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function rba_DiagLib_Bit16GetBits */
uint16 ISOLATE_Dem_DebArTime_rba_DiagLib_Bit16GetBits(uint16 value,
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
boolean ISOLATE_Dem_DebArTime_rba_DiagLib_Bit16IsBitSet(uint16 value,
                                                        uint8 bit_position){
    REGISTER_CALL("rba_DiagLib_Bit16IsBitSet");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_NvMWriteBlockOnShutdown */
void ISOLATE_Dem_DebArTime_Dem_NvMWriteBlockOnShutdown(Dem_NvmBlockIdType id){
    REGISTER_CALL("Dem_NvMWriteBlockOnShutdown");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_ISO14229ByteIsWarningIndicatorRequested */
Dem_boolean_least ISOLATE_Dem_DebArTime_Dem_ISO14229ByteIsWarningIndicatorRequested(uint8 self){
    REGISTER_CALL("Dem_ISO14229ByteIsWarningIndicatorRequested");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EventIndicatorAttributeIteratorNew */
void ISOLATE_Dem_DebArTime_Dem_EventIndicatorAttributeIteratorNew(Dem_EventIdType EventId,
                                                                  Dem_EventIndicatorAttributeIterator * it){
    REGISTER_CALL("Dem_EventIndicatorAttributeIteratorNew");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EventIndicatorAttributeIsValid */
Dem_boolean_least ISOLATE_Dem_DebArTime_Dem_EventIndicatorAttributeIsValid(Dem_EventIdType EventId,
                                                                           const Dem_EventIndicatorAttributeIterator * it){
    REGISTER_CALL("Dem_EventIndicatorAttributeIsValid");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EventIndicatorAttributeNext */
void ISOLATE_Dem_DebArTime_Dem_EventIndicatorAttributeNext(Dem_EventIndicatorAttributeIterator * it){
    REGISTER_CALL("Dem_EventIndicatorAttributeNext");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EventIndicatorAttributeCurrent */
uint16_least ISOLATE_Dem_DebArTime_Dem_EventIndicatorAttributeCurrent(const Dem_EventIndicatorAttributeIterator * it){
    REGISTER_CALL("Dem_EventIndicatorAttributeCurrent");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_IsIndicatorAttributeValid */
Dem_boolean_least ISOLATE_Dem_DebArTime_Dem_IsIndicatorAttributeValid(uint16_least indicatorIndex){
    REGISTER_CALL("Dem_IsIndicatorAttributeValid");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_IndicatorAttrib_GetIndicatorId */
uint8 ISOLATE_Dem_DebArTime_Dem_IndicatorAttrib_GetIndicatorId(uint16_least indicatorIndex){
    REGISTER_CALL("Dem_IndicatorAttrib_GetIndicatorId");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_IndicatorAttrib_GetBehaviour */
uint8 ISOLATE_Dem_DebArTime_Dem_IndicatorAttrib_GetBehaviour(uint16_least indicatorIndex){
    REGISTER_CALL("Dem_IndicatorAttrib_GetBehaviour");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_IndicatorAttribGetFailureCycCtr */
uint8 ISOLATE_Dem_DebArTime_Dem_IndicatorAttribGetFailureCycCtr(uint16_least indicatorIndex){
    REGISTER_CALL("Dem_IndicatorAttribGetFailureCycCtr");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_IndicatorDecrementBehaviourCounter */
void ISOLATE_Dem_DebArTime_Dem_IndicatorDecrementBehaviourCounter(uint8 indicatorId,
                                                                  uint8 indicatorBehaviour){
    REGISTER_CALL("Dem_IndicatorDecrementBehaviourCounter");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_IndicatorAttribSetFailureCycCtr */
void ISOLATE_Dem_DebArTime_Dem_IndicatorAttribSetFailureCycCtr(uint16_least indicatorIndex,
                                                               uint8 failureCtr){
    REGISTER_CALL("Dem_IndicatorAttribSetFailureCycCtr");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_IndicatorAttribSetHealingCycCtr */
void ISOLATE_Dem_DebArTime_Dem_IndicatorAttribSetHealingCycCtr(uint16_least indicatorIndex,
                                                               uint8 healingCtr){
    REGISTER_CALL("Dem_IndicatorAttribSetHealingCycCtr");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_BitArrayIsBitSet */
Dem_boolean_least ISOLATE_Dem_DebArTime_Dem_BitArrayIsBitSet(const uint32 * buffer,
                                                             uint32 bit_position){
    REGISTER_CALL("Dem_BitArrayIsBitSet");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_BitArrayOverwriteBit */
void ISOLATE_Dem_DebArTime_Dem_BitArrayOverwriteBit(uint32 * buffer,
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
boolean ISOLATE_Dem_DebArTime_rba_DiagLib_Bit32IsBitSet(uint32 value,
                                                        uint8 bit_position){
    REGISTER_CALL("rba_DiagLib_Bit32IsBitSet");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function rba_DiagLib_Bit32OverwriteBit */
void ISOLATE_Dem_DebArTime_rba_DiagLib_Bit32OverwriteBit(uint32 * buffer,
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
Dem_boolean_least ISOLATE_Dem_DebArTime_Dem_NvMIsInvalidateAllNVMBlocksRequested(){
    REGISTER_CALL("Dem_NvMIsInvalidateAllNVMBlocksRequested");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function rba_DiagLib_MemUtils_MemSet */
void ISOLATE_Dem_DebArTime_rba_DiagLib_MemUtils_MemSet(uint8 * xDest_pv,
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
void ISOLATE_Dem_DebArTime_Dem_NvMClearBlockByInvalidate(Dem_NvmBlockIdType id){
    REGISTER_CALL("Dem_NvMClearBlockByInvalidate");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_NvmGetStatus */
Dem_NvmResultType ISOLATE_Dem_DebArTime_Dem_NvmGetStatus(Dem_NvmBlockIdType id){
    REGISTER_CALL("Dem_NvmGetStatus");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function rba_DiagLib_Bit32GetBits */
uint32 ISOLATE_Dem_DebArTime_rba_DiagLib_Bit32GetBits(uint32 value,
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
Dem_EnCoList ISOLATE_Dem_DebArTime_Dem_EvtGetEnableConditions(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtGetEnableConditions");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function rba_DiagLib_Bit32OverwriteBits */
void ISOLATE_Dem_DebArTime_rba_DiagLib_Bit32OverwriteBits(uint32 * value,
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
void ISOLATE_Dem_DebArTime_Dem_EvtIncreaseGlobalInitMonitoringCounter(){
    REGISTER_CALL("Dem_EvtIncreaseGlobalInitMonitoringCounter");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtSetAnyInitMonitoring */
void ISOLATE_Dem_DebArTime_Dem_EvtSetAnyInitMonitoring(Dem_InitMonitorReasonType reason){
    REGISTER_CALL("Dem_EvtSetAnyInitMonitoring");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtIsAnyInitMonitoringRequested */
boolean ISOLATE_Dem_DebArTime_Dem_EvtIsAnyInitMonitoringRequested(){
    REGISTER_CALL("Dem_EvtIsAnyInitMonitoringRequested");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvtResetAnyInitMonitoring */
void ISOLATE_Dem_DebArTime_Dem_EvtResetAnyInitMonitoring(){
    REGISTER_CALL("Dem_EvtResetAnyInitMonitoring");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtGetOperationCycleId */
uint8 ISOLATE_Dem_DebArTime_Dem_EvtGetOperationCycleId(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtGetOperationCycleId");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvtGetAgingCycleId */
uint8 ISOLATE_Dem_DebArTime_Dem_EvtGetAgingCycleId(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtGetAgingCycleId");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvtGetFailureCycleId */
uint8 ISOLATE_Dem_DebArTime_Dem_EvtGetFailureCycleId(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtGetFailureCycleId");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function rba_DiagLib_MemUtils_MemCpy */
void ISOLATE_Dem_DebArTime_rba_DiagLib_MemUtils_MemCpy(uint8 * xDest_p,
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
Dem_boolean_least ISOLATE_Dem_DebArTime_Dem_EvtIsEventStoredInDistMem(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtIsEventStoredInDistMem");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_DistMemIsFull */
Dem_boolean_least ISOLATE_Dem_DebArTime_Dem_DistMemIsFull(){
    REGISTER_CALL("Dem_DistMemIsFull");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvtGetDebounceMethodIndex */
uint8 ISOLATE_Dem_DebArTime_Dem_EvtGetDebounceMethodIndex(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtGetDebounceMethodIndex");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvtGetDebounceParamSetIndex */
uint16 ISOLATE_Dem_DebArTime_Dem_EvtGetDebounceParamSetIndex(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtGetDebounceParamSetIndex");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvtGetFDCThresholdReachedTOC */
Dem_boolean_least ISOLATE_Dem_DebArTime_Dem_EvtGetFDCThresholdReachedTOC(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtGetFDCThresholdReachedTOC");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvtSetFDCThresholdReachedTOC */
void ISOLATE_Dem_DebArTime_Dem_EvtSetFDCThresholdReachedTOC(Dem_EventIdType EventId,
                                                            Dem_boolean_least setBit){
    REGISTER_CALL("Dem_EvtSetFDCThresholdReachedTOC");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_OpMoIsInitialized */
Dem_boolean_least ISOLATE_Dem_DebArTime_Dem_OpMoIsInitialized(){
    REGISTER_CALL("Dem_OpMoIsInitialized");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_StoCoAreAllFulfilled */
boolean ISOLATE_Dem_DebArTime_Dem_StoCoAreAllFulfilled(Dem_StoCoList storageConditionList){
    REGISTER_CALL("Dem_StoCoAreAllFulfilled");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvtGetStorageConditions */
Dem_StoCoList ISOLATE_Dem_DebArTime_Dem_EvtGetStorageConditions(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtGetStorageConditions");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvtSetFDCThresholdReached */
void ISOLATE_Dem_DebArTime_Dem_EvtSetFDCThresholdReached(Dem_EventIdType EventId,
                                                         Dem_boolean_least setBit){
    REGISTER_CALL("Dem_EvtSetFDCThresholdReached");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtIsSuspicious */
Dem_boolean_least ISOLATE_Dem_DebArTime_Dem_EvtIsSuspicious(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtIsSuspicious");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_DebHandleDebounceAction__processBits */
Dem_boolean_least ISOLATE_Dem_DebArTime_Dem_DebHandleDebounceAction__processBits(Dem_EventIdType EventId,
                                                                                 Dem_DebouncedActionType debAction){
    REGISTER_CALL("Dem_DebHandleDebounceAction__processBits");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EventIdIteratorNew */
void ISOLATE_Dem_DebArTime_Dem_EventIdIteratorNew(Dem_EventIdIterator * it){
    REGISTER_CALL("Dem_EventIdIteratorNew");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EventIdIteratorIsValid */
Dem_boolean_least ISOLATE_Dem_DebArTime_Dem_EventIdIteratorIsValid(const Dem_EventIdIterator * it){
    REGISTER_CALL("Dem_EventIdIteratorIsValid");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EventIdIteratorNext */
void ISOLATE_Dem_DebArTime_Dem_EventIdIteratorNext(Dem_EventIdIterator * it){
    REGISTER_CALL("Dem_EventIdIteratorNext");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EventIdIteratorCurrent */
Dem_EventIdType ISOLATE_Dem_DebArTime_Dem_EventIdIteratorCurrent(const Dem_EventIdIterator * it){
    REGISTER_CALL("Dem_EventIdIteratorCurrent");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_ClientSelectionType_invalidateSelectionResult */
void ISOLATE_Dem_DebArTime_Dem_ClientSelectionType_invalidateSelectionResult(Dem_ClientSelectionType * selection){
    REGISTER_CALL("Dem_ClientSelectionType_invalidateSelectionResult");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_ClientClearMachine_SetMachineActiveClient */
void ISOLATE_Dem_DebArTime_Dem_ClientClearMachine_SetMachineActiveClient(Dem_ClientIdType ClientId){
    REGISTER_CALL("Dem_ClientClearMachine_SetMachineActiveClient");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_ClientClearMachine_SetMachineState */
void ISOLATE_Dem_DebArTime_Dem_ClientClearMachine_SetMachineState(uint8 state){
    REGISTER_CALL("Dem_ClientClearMachine_SetMachineState");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_NvMStartClear */
void ISOLATE_Dem_DebArTime_Dem_NvMStartClear(){
    REGISTER_CALL("Dem_NvMStartClear");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EnvIsAnyTriggerSet */
Dem_boolean_least ISOLATE_Dem_DebArTime_Dem_EnvIsAnyTriggerSet(Dem_TriggerType trigger2test){
    REGISTER_CALL("Dem_EnvIsAnyTriggerSet");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemIsEventMemLocIdValid */
Dem_boolean_least ISOLATE_Dem_DebArTime_Dem_EvMemIsEventMemLocIdValid(uint16_least LocId){
    REGISTER_CALL("Dem_EvMemIsEventMemLocIdValid");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemGetEventMemStatusByPtr */
uint16_least ISOLATE_Dem_DebArTime_Dem_EvMemGetEventMemStatusByPtr(const Dem_EvMemEventMemoryType * EventMemory){
    REGISTER_CALL("Dem_EvMemGetEventMemStatusByPtr");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemGetEventMemEventIdByPtr */
Dem_EventIdType ISOLATE_Dem_DebArTime_Dem_EvMemGetEventMemEventIdByPtr(const Dem_EvMemEventMemoryType * EventMemory){
    REGISTER_CALL("Dem_EvMemGetEventMemEventIdByPtr");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemGetEventMemTimeIdByPtr */
uint32 ISOLATE_Dem_DebArTime_Dem_EvMemGetEventMemTimeIdByPtr(const Dem_EvMemEventMemoryType * EventMemory){
    REGISTER_CALL("Dem_EvMemGetEventMemTimeIdByPtr");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemGetEventMemDtcStatusByPtr */
uint8 ISOLATE_Dem_DebArTime_Dem_EvMemGetEventMemDtcStatusByPtr(const Dem_EvMemEventMemoryType * EventMemory){
    REGISTER_CALL("Dem_EvMemGetEventMemDtcStatusByPtr");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemGetEventMemFailureCounterByPtr */
uint8_least ISOLATE_Dem_DebArTime_Dem_EvMemGetEventMemFailureCounterByPtr(const Dem_EvMemEventMemoryType * EventMemory){
    REGISTER_CALL("Dem_EvMemGetEventMemFailureCounterByPtr");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemGetEventMemOccurrenceCounterByPtr */
uint16_least ISOLATE_Dem_DebArTime_Dem_EvMemGetEventMemOccurrenceCounterByPtr(const Dem_EvMemEventMemoryType * EventMemory){
    REGISTER_CALL("Dem_EvMemGetEventMemOccurrenceCounterByPtr");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemGetEventMemAgingCounterByPtr */
uint16_least ISOLATE_Dem_DebArTime_Dem_EvMemGetEventMemAgingCounterByPtr(const Dem_EvMemEventMemoryType * EventMemory){
    REGISTER_CALL("Dem_EvMemGetEventMemAgingCounterByPtr");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemGetEventMemAgingCounterForTFSLCByPtr */
uint16_least ISOLATE_Dem_DebArTime_Dem_EvMemGetEventMemAgingCounterForTFSLCByPtr(const Dem_EvMemEventMemoryType * EventMemory){
    REGISTER_CALL("Dem_EvMemGetEventMemAgingCounterForTFSLCByPtr");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemSetMaxFdcDuringCurrentCycleByPtr */
void ISOLATE_Dem_DebArTime_Dem_EvMemSetMaxFdcDuringCurrentCycleByPtr(Dem_EvMemEventMemoryType * EventMemory,
                                                                     sint8 fdc){
    REGISTER_CALL("Dem_EvMemSetMaxFdcDuringCurrentCycleByPtr");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvMemSetMaxFdcSinceLastClearByPtr */
void ISOLATE_Dem_DebArTime_Dem_EvMemSetMaxFdcSinceLastClearByPtr(Dem_EvMemEventMemoryType * EventMemory,
                                                                 sint8 fdc){
    REGISTER_CALL("Dem_EvMemSetMaxFdcSinceLastClearByPtr");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvMemGetMaxFdcDuringCurrentCycleByPtr */
sint8 ISOLATE_Dem_DebArTime_Dem_EvMemGetMaxFdcDuringCurrentCycleByPtr(const Dem_EvMemEventMemoryType * EventMemory){
    REGISTER_CALL("Dem_EvMemGetMaxFdcDuringCurrentCycleByPtr");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemGetMaxFdcSinceLastClearByPtr */
sint8 ISOLATE_Dem_DebArTime_Dem_EvMemGetMaxFdcSinceLastClearByPtr(const Dem_EvMemEventMemoryType * EventMemory){
    REGISTER_CALL("Dem_EvMemGetMaxFdcSinceLastClearByPtr");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemGetEventMemFreezeFrameCounterByPtr */
uint16_least ISOLATE_Dem_DebArTime_Dem_EvMemGetEventMemFreezeFrameCounterByPtr(const Dem_EvMemEventMemoryType * EventMemory){
    REGISTER_CALL("Dem_EvMemGetEventMemFreezeFrameCounterByPtr");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemGetEventMemTriggerByPtr */
Dem_TriggerType ISOLATE_Dem_DebArTime_Dem_EvMemGetEventMemTriggerByPtr(const Dem_EvMemEventMemoryType * EventMemory){
    REGISTER_CALL("Dem_EvMemGetEventMemTriggerByPtr");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemGetEventMemDataByPtr */
uint8 * ISOLATE_Dem_DebArTime_Dem_EvMemGetEventMemDataByPtr(Dem_EvMemEventMemoryType * EventMemory){
    REGISTER_CALL("Dem_EvMemGetEventMemDataByPtr");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EvMemSetToEmpty */
uint16_least ISOLATE_Dem_DebArTime_Dem_EvMemSetToEmpty(){
    REGISTER_CALL("Dem_EvMemSetToEmpty");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemIsStored */
Dem_boolean_least ISOLATE_Dem_DebArTime_Dem_EvMemIsStored(uint16_least Status){
    REGISTER_CALL("Dem_EvMemIsStored");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemIsEmpty */
Dem_boolean_least ISOLATE_Dem_DebArTime_Dem_EvMemIsEmpty(uint16_least Status){
    REGISTER_CALL("Dem_EvMemIsEmpty");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemGetShadowVisibility */
Dem_boolean_least ISOLATE_Dem_DebArTime_Dem_EvMemGetShadowVisibility(){
    REGISTER_CALL("Dem_EvMemGetShadowVisibility");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemGetEventMemStartLocId */
uint16_least ISOLATE_Dem_DebArTime_Dem_EvMemGetEventMemStartLocId(uint16_least MemId){
    REGISTER_CALL("Dem_EvMemGetEventMemStartLocId");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemGetEventMemEndLocId */
uint16_least ISOLATE_Dem_DebArTime_Dem_EvMemGetEventMemEndLocId(uint16_least MemId){
    REGISTER_CALL("Dem_EvMemGetEventMemEndLocId");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemEventMemoryIteratorNew */
void ISOLATE_Dem_DebArTime_Dem_EvMemEventMemoryIteratorNew(uint16_least * MemId){
    REGISTER_CALL("Dem_EvMemEventMemoryIteratorNew");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvMemEventMemoryIteratorIsValid */
Dem_boolean_least ISOLATE_Dem_DebArTime_Dem_EvMemEventMemoryIteratorIsValid(const uint16_least * MemId){
    REGISTER_CALL("Dem_EvMemEventMemoryIteratorIsValid");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemEventMemoryIteratorNext */
void ISOLATE_Dem_DebArTime_Dem_EvMemEventMemoryIteratorNext(uint16_least * MemId){
    REGISTER_CALL("Dem_EvMemEventMemoryIteratorNext");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_LibGetParamBool */
boolean ISOLATE_Dem_DebArTime_Dem_LibGetParamBool(boolean parameter){
    REGISTER_CALL("Dem_LibGetParamBool");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_DtcIdFromEventId */
Dem_DtcIdType ISOLATE_Dem_DebArTime_Dem_DtcIdFromEventId(Dem_EventIdType id){
    REGISTER_CALL("Dem_DtcIdFromEventId");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_ISO14229ByteIsTestFailed */
Dem_boolean_least ISOLATE_Dem_DebArTime_Dem_ISO14229ByteIsTestFailed(uint8 self){
    REGISTER_CALL("Dem_ISO14229ByteIsTestFailed");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemIsEdgeTrigger */
Dem_boolean_least ISOLATE_Dem_DebArTime_Dem_EvMemIsEdgeTrigger(uint16_least StatusOld,
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
void ISOLATE_Dem_DebArTime_Dem_EnvSetTrigger(Dem_TriggerType * trigger,
                                             Dem_TriggerType trigger2set){
    REGISTER_CALL("Dem_EnvSetTrigger");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtStoreTestFailedToNextOC */
Dem_boolean_least ISOLATE_Dem_DebArTime_Dem_EvtStoreTestFailedToNextOC(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtStoreTestFailedToNextOC");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_LibGetParamUI8 */
uint8 ISOLATE_Dem_DebArTime_Dem_LibGetParamUI8(uint8 parameter){
    REGISTER_CALL("Dem_LibGetParamUI8");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemGetRamStsMask */
uint16_least ISOLATE_Dem_DebArTime_Dem_EvMemGetRamStsMask(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvMemGetRamStsMask");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvtGetAgingThreshold */
uint8 ISOLATE_Dem_DebArTime_Dem_EvtGetAgingThreshold(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtGetAgingThreshold");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemGetCurrentAgingCycleCounterInt */
uint16_least ISOLATE_Dem_DebArTime_Dem_EvMemGetCurrentAgingCycleCounterInt(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvMemGetCurrentAgingCycleCounterInt");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemIsAged */
Dem_boolean_least ISOLATE_Dem_DebArTime_Dem_EvMemIsAged(Dem_EventIdType EventId,
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
uint16_least ISOLATE_Dem_DebArTime_Dem_EvMemGetEventMemAgingCounter(uint16_least LocId){
    REGISTER_CALL("Dem_EvMemGetEventMemAgingCounter");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemSetEventMemAgingCounter */
void ISOLATE_Dem_DebArTime_Dem_EvMemSetEventMemAgingCounter(uint16_least LocId,
                                                            uint16_least AgingCounter){
    REGISTER_CALL("Dem_EvMemSetEventMemAgingCounter");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvMemGetEventMemAgingCounterForTFSLC */
uint16_least ISOLATE_Dem_DebArTime_Dem_EvMemGetEventMemAgingCounterForTFSLC(uint16_least LocId){
    REGISTER_CALL("Dem_EvMemGetEventMemAgingCounterForTFSLC");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvtGetAgingThresholdForTFSLC */
uint8 ISOLATE_Dem_DebArTime_Dem_EvtGetAgingThresholdForTFSLC(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtGetAgingThresholdForTFSLC");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemSetEventMemAgingCounterForTFSLC */
void ISOLATE_Dem_DebArTime_Dem_EvMemSetEventMemAgingCounterForTFSLC(uint16_least LocId,
                                                                    uint16_least AgingCounterForTFSLC){
    REGISTER_CALL("Dem_EvMemSetEventMemAgingCounterForTFSLC");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtIsAgingAllowed */
Dem_boolean_least ISOLATE_Dem_DebArTime_Dem_EvtIsAgingAllowed(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtIsAgingAllowed");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemGetEventMemStatus */
uint16_least ISOLATE_Dem_DebArTime_Dem_EvMemGetEventMemStatus(uint16_least LocId){
    REGISTER_CALL("Dem_EvMemGetEventMemStatus");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvtIsDestPrimaryMemory */
Dem_boolean_least ISOLATE_Dem_DebArTime_Dem_EvtIsDestPrimaryMemory(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtIsDestPrimaryMemory");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvtIsDestSecondaryMemory */
Dem_boolean_least ISOLATE_Dem_DebArTime_Dem_EvtIsDestSecondaryMemory(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtIsDestSecondaryMemory");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemGetMemIdForDTCOrigin */
uint16_least ISOLATE_Dem_DebArTime_Dem_EvMemGetMemIdForDTCOrigin(Dem_DTCOriginType DTCOrigin){
    REGISTER_CALL("Dem_EvMemGetMemIdForDTCOrigin");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemIsMemIdValid */
Dem_boolean_least ISOLATE_Dem_DebArTime_Dem_EvMemIsMemIdValid(uint16_least MemId){
    REGISTER_CALL("Dem_EvMemIsMemIdValid");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemGetMemIdForEvent */
uint16_least ISOLATE_Dem_DebArTime_Dem_EvMemGetMemIdForEvent(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvMemGetMemIdForEvent");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_DtcIsSuppressed */
Dem_boolean_least ISOLATE_Dem_DebArTime_Dem_DtcIsSuppressed(Dem_DtcIdType dtcId){
    REGISTER_CALL("Dem_DtcIsSuppressed");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_DtcIsSuppressedDirectly */
Dem_boolean_least ISOLATE_Dem_DebArTime_Dem_DtcIsSuppressedDirectly(Dem_DtcIdType dtcId){
    REGISTER_CALL("Dem_DtcIsSuppressedDirectly");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EventIdListIteratorNewFromDtcId */
void ISOLATE_Dem_DebArTime_Dem_EventIdListIteratorNewFromDtcId(Dem_EventIdListIterator * it,
                                                               Dem_DtcIdType dtcid){
    REGISTER_CALL("Dem_EventIdListIteratorNewFromDtcId");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EventIdListIteratorIsValid */
Dem_boolean_least ISOLATE_Dem_DebArTime_Dem_EventIdListIteratorIsValid(const Dem_EventIdListIterator * it){
    REGISTER_CALL("Dem_EventIdListIteratorIsValid");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EventIdListIteratorNext */
void ISOLATE_Dem_DebArTime_Dem_EventIdListIteratorNext(Dem_EventIdListIterator * it){
    REGISTER_CALL("Dem_EventIdListIteratorNext");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtIsSuppressed */
Dem_boolean_least ISOLATE_Dem_DebArTime_Dem_EvtIsSuppressed(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtIsSuppressed");

    IF_INSTANCE("default") {
        return 0;
    }

    IF_INSTANCE("false") {
        CHECK_U_INT(EventId, 3);
        return FALSE;
    }

    IF_INSTANCE("true") {
        CHECK_U_INT(EventId, 3);
        return TRUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EventIdListIteratorCurrent */
Dem_EventIdType ISOLATE_Dem_DebArTime_Dem_EventIdListIteratorCurrent(const Dem_EventIdListIterator * it){
    REGISTER_CALL("Dem_EventIdListIteratorCurrent");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_DtcHasAlternativeDTCConfigured */
Dem_boolean_least ISOLATE_Dem_DebArTime_Dem_DtcHasAlternativeDTCConfigured(Dem_DtcIdType dtcId){
    REGISTER_CALL("Dem_DtcHasAlternativeDTCConfigured");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvtIsDestMirrorMemory */
Dem_boolean_least ISOLATE_Dem_DebArTime_Dem_EvtIsDestMirrorMemory(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtIsDestMirrorMemory");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_DtcIdGetFirstEventId */
Dem_EventIdType ISOLATE_Dem_DebArTime_Dem_DtcIdGetFirstEventId(Dem_DtcIdType dtcid){
    REGISTER_CALL("Dem_DtcIdGetFirstEventId");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EventUsesOrigin */
Dem_boolean_least ISOLATE_Dem_DebArTime_Dem_EventUsesOrigin(Dem_EventIdType eventId,
                                                            Dem_DTCOriginType origin){
    REGISTER_CALL("Dem_EventUsesOrigin");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_ISO14229ByteSetTestFailed */
void ISOLATE_Dem_DebArTime_Dem_ISO14229ByteSetTestFailed(uint8 * self,
                                                         Dem_boolean_least setOrReset){
    REGISTER_CALL("Dem_ISO14229ByteSetTestFailed");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_ISO14229ByteSetTestFailedTOC */
void ISOLATE_Dem_DebArTime_Dem_ISO14229ByteSetTestFailedTOC(uint8 * self,
                                                            Dem_boolean_least setOrReset){
    REGISTER_CALL("Dem_ISO14229ByteSetTestFailedTOC");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_ISO14229ByteSetTestFailedSLC */
void ISOLATE_Dem_DebArTime_Dem_ISO14229ByteSetTestFailedSLC(uint8 * self,
                                                            Dem_boolean_least setOrReset){
    REGISTER_CALL("Dem_ISO14229ByteSetTestFailedSLC");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_ISO14229ByteSetTestCompleteTOC */
void ISOLATE_Dem_DebArTime_Dem_ISO14229ByteSetTestCompleteTOC(uint8 * self,
                                                              Dem_boolean_least setOrReset){
    REGISTER_CALL("Dem_ISO14229ByteSetTestCompleteTOC");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_ISO14229ByteSetTestCompleteSLC */
void ISOLATE_Dem_DebArTime_Dem_ISO14229ByteSetTestCompleteSLC(uint8 * self,
                                                              Dem_boolean_least setOrReset){
    REGISTER_CALL("Dem_ISO14229ByteSetTestCompleteSLC");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_ISO14229ByteSetPendingDTC */
void ISOLATE_Dem_DebArTime_Dem_ISO14229ByteSetPendingDTC(uint8 * self,
                                                         Dem_boolean_least setOrReset){
    REGISTER_CALL("Dem_ISO14229ByteSetPendingDTC");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_ISO14229ByteSetWarningIndicatorRequested */
void ISOLATE_Dem_DebArTime_Dem_ISO14229ByteSetWarningIndicatorRequested(uint8 * self,
                                                                        Dem_boolean_least setOrReset){
    REGISTER_CALL("Dem_ISO14229ByteSetWarningIndicatorRequested");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtGetIsoByte */
Dem_UdsStatusByteType ISOLATE_Dem_DebArTime_Dem_EvtGetIsoByte(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtGetIsoByte");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_ISO14229ByteIsTestCompleteTOC */
Dem_boolean_least ISOLATE_Dem_DebArTime_Dem_ISO14229ByteIsTestCompleteTOC(uint8 self){
    REGISTER_CALL("Dem_ISO14229ByteIsTestCompleteTOC");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_ISO14229ByteIsTestFailedTOC */
Dem_boolean_least ISOLATE_Dem_DebArTime_Dem_ISO14229ByteIsTestFailedTOC(uint8 self){
    REGISTER_CALL("Dem_ISO14229ByteIsTestFailedTOC");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_ISO14229ByteSetConfirmedDTC */
void ISOLATE_Dem_DebArTime_Dem_ISO14229ByteSetConfirmedDTC(uint8 * self,
                                                           Dem_boolean_least setOrReset){
    REGISTER_CALL("Dem_ISO14229ByteSetConfirmedDTC");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtGetCustIsoByte */
Dem_UdsStatusByteType ISOLATE_Dem_DebArTime_Dem_EvtGetCustIsoByte(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtGetCustIsoByte");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvtSt_CustomInitialization */
void ISOLATE_Dem_DebArTime_Dem_EvtSt_CustomInitialization(Dem_EventIdType EventId,
                                                          Dem_UdsStatusByteType * statusByte){
    REGISTER_CALL("Dem_EvtSt_CustomInitialization");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtSt_CustomFailed */
void ISOLATE_Dem_DebArTime_Dem_EvtSt_CustomFailed(Dem_EventIdType EventId,
                                                  Dem_UdsStatusByteType * statusByte){
    REGISTER_CALL("Dem_EvtSt_CustomFailed");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtSt_CustomPassed */
void ISOLATE_Dem_DebArTime_Dem_EvtSt_CustomPassed(Dem_EventIdType EventId,
                                                  Dem_UdsStatusByteType * statusByte){
    REGISTER_CALL("Dem_EvtSt_CustomPassed");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtSt_CustomResetEventStatus */
void ISOLATE_Dem_DebArTime_Dem_EvtSt_CustomResetEventStatus(Dem_EventIdType EventId,
                                                            Dem_UdsStatusByteType * statusByte){
    REGISTER_CALL("Dem_EvtSt_CustomResetEventStatus");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtSt_CustomEvtAvailable */
void ISOLATE_Dem_DebArTime_Dem_EvtSt_CustomEvtAvailable(Dem_EventIdType EventId,
                                                        Dem_UdsStatusByteType * statusByte){
    REGISTER_CALL("Dem_EvtSt_CustomEvtAvailable");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtSt_CustomEvtNotAvailable */
void ISOLATE_Dem_DebArTime_Dem_EvtSt_CustomEvtNotAvailable(Dem_EventIdType EventId,
                                                           Dem_UdsStatusByteType * statusByte){
    REGISTER_CALL("Dem_EvtSt_CustomEvtNotAvailable");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtSt_CustomClear */
void ISOLATE_Dem_DebArTime_Dem_EvtSt_CustomClear(Dem_EventIdType EventId,
                                                 Dem_UdsStatusByteType * statusByte){
    REGISTER_CALL("Dem_EvtSt_CustomClear");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtSt_CustomClear_OnlyThisCycleAndReadiness */
void ISOLATE_Dem_DebArTime_Dem_EvtSt_CustomClear_OnlyThisCycleAndReadiness(Dem_EventIdType EventId,
                                                                           Dem_UdsStatusByteType * statusByte){
    REGISTER_CALL("Dem_EvtSt_CustomClear_OnlyThisCycleAndReadiness");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtSt_CustomNewOperationCycle */
void ISOLATE_Dem_DebArTime_Dem_EvtSt_CustomNewOperationCycle(Dem_EventIdType EventId,
                                                             Dem_UdsStatusByteType * statusByte){
    REGISTER_CALL("Dem_EvtSt_CustomNewOperationCycle");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtSt_CustomIndicatorOn */
void ISOLATE_Dem_DebArTime_Dem_EvtSt_CustomIndicatorOn(Dem_EventIdType EventId,
                                                       Dem_UdsStatusByteType * statusByte){
    REGISTER_CALL("Dem_EvtSt_CustomIndicatorOn");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtSt_CustomIndicatorOff */
void ISOLATE_Dem_DebArTime_Dem_EvtSt_CustomIndicatorOff(Dem_EventIdType EventId,
                                                        Dem_UdsStatusByteType * statusByte){
    REGISTER_CALL("Dem_EvtSt_CustomIndicatorOff");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtSt_CustomDTCSettingOn */
void ISOLATE_Dem_DebArTime_Dem_EvtSt_CustomDTCSettingOn(Dem_EventIdType EventId,
                                                        Dem_UdsStatusByteType * statusByte){
    REGISTER_CALL("Dem_EvtSt_CustomDTCSettingOn");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtSt_CustomConfirmation */
void ISOLATE_Dem_DebArTime_Dem_EvtSt_CustomConfirmation(Dem_EventIdType EventId,
                                                        Dem_UdsStatusByteType * statusByte){
    REGISTER_CALL("Dem_EvtSt_CustomConfirmation");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtSt_CustomAging */
void ISOLATE_Dem_DebArTime_Dem_EvtSt_CustomAging(Dem_EventIdType EventId,
                                                 Dem_UdsStatusByteType * statusByte){
    REGISTER_CALL("Dem_EvtSt_CustomAging");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtSt_CustomSetImmediateAging */
void ISOLATE_Dem_DebArTime_Dem_EvtSt_CustomSetImmediateAging(Dem_EventIdType EventId,
                                                             Dem_UdsStatusByteType * statusByte){
    REGISTER_CALL("Dem_EvtSt_CustomSetImmediateAging");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtSt_CustomDisplacement */
void ISOLATE_Dem_DebArTime_Dem_EvtSt_CustomDisplacement(Dem_EventIdType EventId,
                                                        Dem_UdsStatusByteType * statusByte){
    REGISTER_CALL("Dem_EvtSt_CustomDisplacement");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtSt_CustomEvCombinationReplacement */
void ISOLATE_Dem_DebArTime_Dem_EvtSt_CustomEvCombinationReplacement(Dem_EventIdType EventId,
                                                                    Dem_UdsStatusByteType * statusByte){
    REGISTER_CALL("Dem_EvtSt_CustomEvCombinationReplacement");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtSt_CustomSetPending */
void ISOLATE_Dem_DebArTime_Dem_EvtSt_CustomSetPending(Dem_EventIdType EventId,
                                                      Dem_UdsStatusByteType * statusByte,
                                                      Dem_boolean_least newValue){
    REGISTER_CALL("Dem_EvtSt_CustomSetPending");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_ISO14229ByteIsPendingDTC */
Dem_boolean_least ISOLATE_Dem_DebArTime_Dem_ISO14229ByteIsPendingDTC(uint8 self){
    REGISTER_CALL("Dem_ISO14229ByteIsPendingDTC");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvtGetDebounceLevel */
sint16 ISOLATE_Dem_DebArTime_Dem_EvtGetDebounceLevel(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtGetDebounceLevel");

    IF_INSTANCE("01") {
        CHECK_U_INT(EventId, 3);
        return 1;
    }

    IF_INSTANCE("sint") {
        CHECK_U_INT(EventId, 3);
        return (-1);
    }

    IF_INSTANCE("default") {
        CHECK_U_INT(EventId, 3);
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EvtGetLastReportedEvent */
Dem_EventStatusType ISOLATE_Dem_DebArTime_Dem_EvtGetLastReportedEvent(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtGetLastReportedEvent");

    IF_INSTANCE("DEM_EVENT_STATUS_PREFAILED") {
        CHECK_U_INT(EventId, 3);
        return DEM_EVENT_STATUS_PREFAILED;
    }

    IF_INSTANCE("DEM_EVENT_STATUS_PREPASSED") {
        CHECK_U_INT(EventId, 3);
        return DEM_EVENT_STATUS_PREPASSED;
    }

    IF_INSTANCE("DEM_EVENT_STATUS_PASSED") {
        CHECK_U_INT(EventId, 3);
        return DEM_EVENT_STATUS_PASSED;
    }

    IF_INSTANCE("DEM_EVENT_STATUS_FAILED") {
        CHECK_U_INT(EventId, 3);
        return DEM_EVENT_STATUS_FAILED;
    }

    IF_INSTANCE("default") {
        CHECK_U_INT(EventId, 3);
        return 7;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EvtSetDebounceLevel */
void ISOLATE_Dem_DebArTime_Dem_EvtSetDebounceLevel(Dem_EventIdType EventId,
                                                   sint16 debounceLevel){
    REGISTER_CALL("Dem_EvtSetDebounceLevel");

    IF_INSTANCE("passed") {
        CHECK_U_INT(EventId, 3);
        CHECK_U_INT(debounceLevel, 2);
        return;
    }

    IF_INSTANCE("failed") {
        CHECK_U_INT(EventId, 3);
        CHECK_U_INT(debounceLevel, 2);
        return;
    }

    IF_INSTANCE("default") {
        CHECK_U_INT(EventId, 3);
        CHECK_U_INT(debounceLevel, 0);
        return;
    }
    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtRequestResetFailureFilterAfterDtcSetting */
void ISOLATE_Dem_DebArTime_Dem_EvtRequestResetFailureFilterAfterDtcSetting(Dem_EventIdType EventId,
                                                                           Dem_boolean_least setBit){
    REGISTER_CALL("Dem_EvtRequestResetFailureFilterAfterDtcSetting");

    IF_INSTANCE("default") {
        CHECK_U_INT(EventId, 3);
        CHECK_BOOLEAN(setBit, FALSE);
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtRequestResetFailureFilter */
void ISOLATE_Dem_DebArTime_Dem_EvtRequestResetFailureFilter(Dem_EventIdType EventId,
                                                            Dem_boolean_least setBit){
    REGISTER_CALL("Dem_EvtRequestResetFailureFilter");

    IF_INSTANCE("default") {
        CHECK_U_INT(EventId, 3);
        CHECK_U_INT(setBit, FALSE);
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtDecDebounceLevel */
void ISOLATE_Dem_DebArTime_Dem_EvtDecDebounceLevel(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtDecDebounceLevel");

    IF_INSTANCE("default") {
        CHECK_U_INT(EventId, 3);
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtSt_GetTestCompleteTOC */
Dem_boolean_least ISOLATE_Dem_DebArTime_Dem_EvtSt_GetTestCompleteTOC(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtSt_GetTestCompleteTOC");

    IF_INSTANCE("true") {
        CHECK_U_INT(EventId, 3);
        return TRUE;
    }
    IF_INSTANCE("false") {
        CHECK_U_INT(EventId, 3);
        return FALSE;
    }
    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvtIncDebounceLevel */
void ISOLATE_Dem_DebArTime_Dem_EvtIncDebounceLevel(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtIncDebounceLevel");

    IF_INSTANCE("default") {
        CHECK_U_INT(EventId, 3);
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtSt_GetTestFailed */
Dem_boolean_least ISOLATE_Dem_DebArTime_Dem_EvtSt_GetTestFailed(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtSt_GetTestFailed");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    IF_INSTANCE("true") {
        CHECK_U_INT(EventId, 3);
        return TRUE;
    }

    IF_INSTANCE("false") {
        CHECK_U_INT(EventId, 3);
        return FALSE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_DebHandleDebounceAction_4_TimeBasedDeb */
Dem_boolean_least ISOLATE_Dem_DebArTime_Dem_DebHandleDebounceAction_4_TimeBasedDeb(Dem_EventIdType EventId,
                                                                                   Dem_DebouncedActionType debAction){
    REGISTER_CALL("Dem_DebHandleDebounceAction_4_TimeBasedDeb");

    IF_INSTANCE("default") {
        return 0;
    }

    IF_INSTANCE("true") {
        CHECK_U_INT(EventId, 3);
        CHECK_U_INT(debAction, 40);
        return TRUE;
    }

    IF_INSTANCE("true1") {
        CHECK_U_INT(EventId, 3);
        CHECK_U_INT(debAction, 5);
        return TRUE;
    }

    IF_INSTANCE("true2") {
        CHECK_U_INT(EventId, 3);
        CHECK_U_INT(debAction, 3);
        return TRUE;
    }

    IF_INSTANCE("true3") {
        CHECK_U_INT(EventId, 3);
        CHECK_U_INT(debAction, DEM_DEBACTION_NOOP);
        return TRUE;
    }

    IF_INSTANCE("true4") {
        CHECK_U_INT(EventId, 3);
        CHECK_U_INT(debAction, 32);
        return TRUE;
    }

    IF_INSTANCE("false") {
        CHECK_U_INT(EventId, 3);
        CHECK_U_INT(debAction, DEM_DEBACTION_RESETFDCTHRESHOLDREACHED);
        return FALSE;
    }

    IF_INSTANCE("false1") {
        CHECK_U_INT(EventId, 3);
        CHECK_U_INT(debAction, DEM_DEBACTION_SETFDCTHRESHOLDREACHED);
        return FALSE;
    }


    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_DistMemIsReportFailedNecessary */
Dem_boolean_least ISOLATE_Dem_DebArTime_Dem_DistMemIsReportFailedNecessary(Dem_EventIdType eventId,
                                                                           Dem_EventStatusType eventStatus){
    REGISTER_CALL("Dem_DistMemIsReportFailedNecessary");

    IF_INSTANCE("default") {
        return 0;
    }

    IF_INSTANCE("true") {
        CHECK_U_INT(eventId, 3);
        CHECK_U_INT(eventStatus, DEM_EVENT_STATUS_PASSED);
        return TRUE;
    }

    IF_INSTANCE("true1") {
        CHECK_U_INT(eventId, 3);
        CHECK_U_INT(eventStatus, DEM_EVENT_STATUS_INVALIDREPORT);
        return TRUE;
    }

    IF_INSTANCE("false") {
        CHECK_U_INT(eventId, 3);
        CHECK_U_INT(eventStatus, DEM_EVENT_STATUS_INVALIDREPORT);
        return FALSE;
    }

    IF_INSTANCE("false1") {
        CHECK_U_INT(eventId, 3);
        CHECK_U_INT(eventStatus, DEM_EVENT_STATUS_FAILED);
        return FALSE;
    }

    IF_INSTANCE("false2") {
        CHECK_U_INT(eventId, 3);
        CHECK_U_INT(eventStatus, DEM_EVENT_STATUS_PREFAILED);
        return FALSE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* pragma qas cantata testscript end */
/*****************************************************************************/
/* End of test script                                                        */
/*****************************************************************************/
