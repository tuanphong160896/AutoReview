/*****************************************************************************/
/*                            Cantata Test Script                            */
/*****************************************************************************/
/*
 *    Filename: test_Dem_DebCtrBaseClass_Var1.c
 *    Author: hiu81hc
 *    Generated on: 06-Aug-2018 13:38:38
 *    Generated from: Dem_DebCtrBaseClass.c
 */
/*****************************************************************************/
/* Environment Definition                                                    */
/*****************************************************************************/

#define TEST_SCRIPT_GENERATOR 2

/* Include files from software under test */
#include "Dem_DebCtrBaseClass.h"
#include "Dem_Deb.h"
#include "Dem_Events.h"
#include "Dem_EventStatus.h"
#include "Dem_Lib.h"
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
extern void Dem_DebCounterBaseClass_GetLimits(const void * paramSet, uint16 paramIndex, sint16_least * MinThreshold, sint16_least * MaxThreshold);
extern uint8_least Dem_DebCounterBaseClass_Filter(Dem_EventIdType EventId, Dem_EventStatusType * status, const void * paramSet, uint16 paramIndex);

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
void test_Dem_DebCounterBaseClass_GetLimits_Max_and_Min_Threshold_are_updated(int);
void test_Dem_DebCounterBaseClass_Filter_STATUS_PASSED_debLevel_equal_minThreshold(int);
void test_Dem_DebCounterBaseClass_Filter_STATUS_PASSED_Suspicious_equal_DEM_MAX(int);
void test_Dem_DebCounterBaseClass_Filter_isJumpDownEnabled_is_TRUE(int);
void test_Dem_DebCounterBaseClass_Filter_debLevel_equal_maxThreshold(int);
void test_Dem_DebCounterBaseClass_Filter_debLevel_Greater_maxThreshold_STATUS_FAILED(int);
void test_Dem_DebCounterBaseClass_Filter_debLevel_Greater_FDCThreshold_debAction_or_INSERT(int);
void test_Dem_DebCounterBaseClass_Filter_debLevel_less_SuspiciousThreshold(int);
void test_Dem_DebCounterBaseClass_Filter_debLevel_equal_minThreshold(int);
void test_Dem_DebCounterBaseClass_Filter_debLevel_not_equal_minThreshold(int);
void test_Dem_DebCounterBaseClass_Filter_status_FAILED_debLevel_equal_maxThreshold(int);
void test_Dem_DebCounterBaseClass_Filter_status_FAILED_debLevel_not_equal_maxThreshold(int);
void test_Dem_DebCounterBaseClass_Filter_default(int);
void test_Dem_DebCounterBaseClass_Filter_debAction_greater_than_FDC_and_Suspicious(int);

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
    OPEN_LOG("test_Dem_DebCtrBaseClass_Var1.ctr", false, 100);
    START_SCRIPT("Dem_DebCtrBaseClass", true);

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
    test_Dem_DebCounterBaseClass_GetLimits_Max_and_Min_Threshold_are_updated(1);
    test_Dem_DebCounterBaseClass_Filter_STATUS_PASSED_debLevel_equal_minThreshold(1);
    test_Dem_DebCounterBaseClass_Filter_STATUS_PASSED_Suspicious_equal_DEM_MAX(1);
    test_Dem_DebCounterBaseClass_Filter_isJumpDownEnabled_is_TRUE(1);
    test_Dem_DebCounterBaseClass_Filter_debLevel_equal_maxThreshold(1);
    test_Dem_DebCounterBaseClass_Filter_debLevel_Greater_maxThreshold_STATUS_FAILED(1);
    test_Dem_DebCounterBaseClass_Filter_debLevel_Greater_FDCThreshold_debAction_or_INSERT(1);
    test_Dem_DebCounterBaseClass_Filter_debLevel_less_SuspiciousThreshold(1);
    test_Dem_DebCounterBaseClass_Filter_debLevel_equal_minThreshold(1);
    test_Dem_DebCounterBaseClass_Filter_debLevel_not_equal_minThreshold(1);
    test_Dem_DebCounterBaseClass_Filter_status_FAILED_debLevel_equal_maxThreshold(1);
    test_Dem_DebCounterBaseClass_Filter_status_FAILED_debLevel_not_equal_maxThreshold(1);
    test_Dem_DebCounterBaseClass_Filter_default(1);
    test_Dem_DebCounterBaseClass_Filter_debAction_greater_than_FDC_and_Suspicious(1);

    rule_set("*", "*");
    EXPORT_COVERAGE("test_Dem_DebCtrBaseClass_Var1.cov", cppca_export_replace);
}

/*****************************************************************************/
/* Test Cases                                                                */
/*****************************************************************************/

void test_Dem_DebCounterBaseClass_GetLimits_Max_and_Min_Threshold_are_updated(int doIt){
if (doIt) {
    /* Compilation flag
     * - Define DEM_CFG_DEBCOUNTERBASECLASS as DEM_CFG_DEBCOUNTERBASECLASS_ON;
     * - Define DEM_CFG_SUPPORTEVENTMEMORYENTRY_ONFDCTHRESHOLD as DEM_CFG_SUPPORTEVENTMEMORYENTRY_ONFDCTHRESHOLD_ON;
     * - Define DEM_CFG_SUPPORT_EVENT_FDCTHRESHOLDREACHED as TRUE;
     * - Define DEM_CFG_SUSPICIOUS_SUPPORT as TRUE;
     * - Define DEM_CFG_DISTURBANCE_MEMORY as DEM_CFG_DISTURBANCE_MEMORY_ON;
     */

    /* Test method - EP */

    /* Tester define */

    Dem_DebCounterBaseClass_ParamSet paramSet_entity[10];
    INITIALISE(paramSet_entity);

    sint16_least MinThreshold_entity;
    INITIALISE(MinThreshold_entity);

    sint16_least MaxThreshold_entity;
    INITIALISE(MaxThreshold_entity);

    /* Test case data declarations */
    const void * paramSet = &paramSet_entity[0];
    sint16_least * MinThreshold = (sint16_least *)&MinThreshold_entity;
    sint16_least * MaxThreshold = (sint16_least *)&MaxThreshold_entity;
    uint16 paramIndex = 0;

    /* Set global data */
    initialise_global_data();

    paramSet_entity[0].failedThreshold = 3;
    paramSet_entity[0].passedThreshold = 5;

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_DebCounterBaseClass_GetLimits_Max_and_Min_Threshold_are_updated",
               "Check that:"
               "- MaxThreshold variable is updated"
               "- MinThreshold variable is updated");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_getDebCtrBaseClassFailedThreshold#default;"
                       "Dem_getDebCtrBaseClassPassedThreshold#default;");

            /* Call SUT */
            Dem_DebCounterBaseClass_GetLimits(paramSet, paramIndex, MinThreshold, MaxThreshold);

            /* Test case checks */
            /* Expected result
             * - MaxThreshold variable is updated;
             * - MinThreshold variable is updated;
             */
            /* Checks on global data */
            check_global_data();

            CHECK_U_INT(* MinThreshold, 3);
            CHECK_U_INT(* MaxThreshold, 5);
            /* GUID
             * - {277DD650-50A4-4a49-8E45-E0921748A89D};
             * - {ED64742D-774D-450a-8EC0-EA5345C20A40};
             */

        END_CALLS();
    END_TEST();
}}

void test_Dem_DebCounterBaseClass_Filter_STATUS_PASSED_debLevel_equal_minThreshold(int doIt){
if (doIt) {
    /* Test method - EP */
    /* Tester define */

    Dem_EventStatusType status_entity;
    INITIALISE(status_entity);

    Dem_DebCounterBaseClass_ParamSet paramSet_entity[10];
    INITIALISE(paramSet_entity);

    /* Test case data declarations */
    Dem_EventIdType EventId = 3;
    Dem_EventStatusType * status = (Dem_EventStatusType *)&status_entity;
    const void * paramSet = &paramSet_entity[0];
    uint16 paramIndex = 0;
    uint8_least returnValue;
    /* Set global data */
    initialise_global_data();

    *status = DEM_EVENT_STATUS_PREPASSED;
    paramSet_entity[0].SuspiciousThreshold = 5;

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_DebCounterBaseClass_Filter_STATUS_PASSED_debLevel_equal_minThreshold",
               "Check that:"
               "- The value of minThreshold is set as the returned value of function Dem_getDebCtrBaseClassPassedThreshold()"
               "- The value of maxThreshold is set as the returned value of function Dem_getDebCtrBaseClassFailedThreshold()"
               "- The value of jumpDownValue is set as the returned value of function Dem_getDebCtrBaseClassJumpDownValue()"
               "- The value of jumpUpValue is set as the returned value of function Dem_getDebCtrBaseClassJumpUpValue()"
               "- The value of isJumpDownEnabled is set as the returned value of function Dem_getDebCtrBaseClassIsJumpDown()"
               "- The value of isJumpUpEnabled is set as the returned value of function Dem_getDebCtrBaseClassIsJumpUp()"
               "- The value of debLevel is set as the returned value of function Dem_EvtGetDebounceLevel()"
               "- Function Dem_DistMemReportPassed() is invoked"
               "- The value of debAction variable is updated"
               "- The value of status is updated"
               "In case:"
               "- The value of status is set as DEM_EVENT_STATUS_PREPASSED at line 71"
               "- The value of debLevel is less than the value of maxThreshold at line 73"
               "- The returned value of function Dem_EvtGetLastReportedEvent() is equal DEM_EVENT_STATUS_PREFAILED at line 73"
               "- The value of SuspiciousThreshold is different DEM_MAXSINT16 at line 88");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_getDebCtrBaseClassPassedThreshold#default;"
                       "Dem_getDebCtrBaseClassFailedThreshold#default;"
                       "Dem_getDebCtrBaseClassJumpDownValue#default;"
                       "Dem_getDebCtrBaseClassJumpUpValue#default;"
                       "Dem_getDebCtrBaseClassIsJumpDown#true;"
                       "Dem_getDebCtrBaseClassIsJumpUp#default;"
                       "Dem_EvtGetDebounceLevel#default;"
                       "Dem_EvtGetLastReportedEvent#PREFAILED;"
                       "Dem_DistMemReportPassed#default;");

            /* Call SUT */
            returnValue = Dem_DebCounterBaseClass_Filter(EventId, status, paramSet, paramIndex);

            /* Test case checks */
            CHECK_U_INT(returnValue, 40);
            /* Expected result
             * - Function Dem_DistMemReportPassed() is invoked;
             * - The value of debAction variable is updated;
             * - The value of status is updated;
             */
            /* Checks on global data */
            check_global_data();

            CHECK_U_INT(*status, DEM_EVENT_STATUS_PASSED);

            /* GUID
             * - {D6E66671-8E1B-47bc-A49E-803EC6651B5C};
             * - {848881B9-79F9-4efe-8FDC-FA4B5C4EE09E};
             * - {EDB07163-45D8-4c47-BF5A-5A1A8D415C26};
             * - {FA902A63-6A66-4b9c-82B7-8C7728A58614};
             * - {9B0589C5-FF3E-4b3a-A803-F6F9846D46F5};
             * - {4AB13ADD-1C99-4eb7-A7F9-B031150C820F};
             * - {8D8FEDD6-008F-46d9-8529-08DF99B7E284};
             * - {D65F8D94-7FA0-4c26-BE18-D81358210ADF};
             * - {6DFEFF2F-0704-4f46-BF51-FBDF24083578};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_DebCounterBaseClass_Filter_STATUS_PASSED_Suspicious_equal_DEM_MAX(int doIt){
if (doIt) {
    /* Test method - EP */
    /* Tester define */

    Dem_EventStatusType status_entity;
    INITIALISE(status_entity);

    Dem_DebCounterBaseClass_ParamSet paramSet_entity[10];
    INITIALISE(paramSet_entity);

    /* Test case data declarations */
    Dem_EventIdType EventId = 3;
    Dem_EventStatusType * status = (Dem_EventStatusType *)&status_entity;
    const void * paramSet = &paramSet_entity[0];
    uint16 paramIndex = 0;
    uint8_least returnValue;
    /* Set global data */
    initialise_global_data();

    *status = DEM_EVENT_STATUS_PREPASSED;
    paramSet_entity[0].SuspiciousThreshold = DEM_MAXSINT16;

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_DebCounterBaseClass_Filter_STATUS_PASSED_Suspicious_equal_DEM_MAX",
               "Check that:"
               "- The value of minThreshold is set as the returned value of function Dem_getDebCtrBaseClassPassedThreshold()"
               "- The value of maxThreshold is set as the returned value of function Dem_getDebCtrBaseClassFailedThreshold()"
               "- The value of jumpDownValue is set as the returned value of function Dem_getDebCtrBaseClassJumpDownValue()"
               "- The value of jumpUpValue is set as the returned value of function Dem_getDebCtrBaseClassJumpUpValue()"
               "- The value of isJumpDownEnabled is set as the returned value of function Dem_getDebCtrBaseClassIsJumpDown()"
               "- The value of isJumpUpEnabled is set as the returned value of function Dem_getDebCtrBaseClassIsJumpUp()"
               "- The value of debLevel is set as the returned value of function Dem_EvtGetDebounceLevel()"
               "- Function Dem_DistMemReportPassed() is invoked"
               "- The value of debAction variable is updated"
               "- The value of status is updated"
               "In case:"
               "- The value of status is set as DEM_EVENT_STATUS_PREPASSED at line 71"
               "- The value of debLevel is less than the value of maxThreshold at line 73"
               "- The value of SuspiciousThreshold is equal DEM_MAXSINT16 at line 88");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_getDebCtrBaseClassPassedThreshold#default;"
                       "Dem_getDebCtrBaseClassFailedThreshold#default;"
                       "Dem_getDebCtrBaseClassJumpDownValue#default;"
                       "Dem_getDebCtrBaseClassJumpUpValue#default;"
                       "Dem_getDebCtrBaseClassIsJumpDown#true;"
                       "Dem_getDebCtrBaseClassIsJumpUp#default;"
                       "Dem_EvtGetDebounceLevel#default;"
                       "Dem_EvtGetLastReportedEvent#PREFAILED;"
                       "Dem_DistMemReportPassed#default;");

            /* Call SUT */
            returnValue = Dem_DebCounterBaseClass_Filter(EventId, status, paramSet, paramIndex);

            /* Test case checks */
            CHECK_U_INT(returnValue, 32);
            /* Expected result
             * - Function Dem_DistMemReportPassed() is invoked;
             * - The value of debAction variable is updated;
             * - The value of status is updated;
             */
            /* Checks on global data */
            check_global_data();

            CHECK_U_INT(*status, DEM_EVENT_STATUS_PASSED);

            /* GUID
             * - {D6E66671-8E1B-47bc-A49E-803EC6651B5C};
             * - {848881B9-79F9-4efe-8FDC-FA4B5C4EE09E};
             * - {EDB07163-45D8-4c47-BF5A-5A1A8D415C26};
             * - {FA902A63-6A66-4b9c-82B7-8C7728A58614};
             * - {9B0589C5-FF3E-4b3a-A803-F6F9846D46F5};
             * - {4AB13ADD-1C99-4eb7-A7F9-B031150C820F};
             * - {8D8FEDD6-008F-46d9-8529-08DF99B7E284};
             * - {D65F8D94-7FA0-4c26-BE18-D81358210ADF};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_DebCounterBaseClass_Filter_isJumpDownEnabled_is_TRUE(int doIt){
if (doIt) {
    /* Test method - EP */
    /* Tester define */

    Dem_EventStatusType status_entity;
    INITIALISE(status_entity);

    Dem_DebCounterBaseClass_ParamSet paramSet_entity[10];
    INITIALISE(paramSet_entity);

    /* Test case data declarations */
    Dem_EventIdType EventId = 3;
    Dem_EventStatusType * status = (Dem_EventStatusType *)&status_entity;
    const void * paramSet = &paramSet_entity[0];
    uint16 paramIndex = 0;
    uint8_least returnValue;
    /* Set global data */
    initialise_global_data();

    *status = DEM_EVENT_STATUS_PREPASSED;
    paramSet_entity[0].stepDown = 5;

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_DebCounterBaseClass_Filter_isJumpDownEnabled_is_TRUE",
               "Check that:"
               "- The value of minThreshold is set as the returned value of function Dem_getDebCtrBaseClassPassedThreshold()"
               "- The value of maxThreshold is set as the returned value of function Dem_getDebCtrBaseClassFailedThreshold()"
               "- The value of jumpDownValue is set as the returned value of function Dem_getDebCtrBaseClassJumpDownValue()"
               "- The value of jumpUpValue is set as the returned value of function Dem_getDebCtrBaseClassJumpUpValue()"
               "- The value of isJumpDownEnabled is set as the returned value of function Dem_getDebCtrBaseClassIsJumpDown()"
               "- The value of isJumpUpEnabled is set as the returned value of function Dem_getDebCtrBaseClassIsJumpUp()"
               "- The value of debLevel is set as the returned value of function Dem_EvtGetDebounceLevel()"
               "- The value of debAction variable is updated"
               "- The value of status is updated"
               "- Function Dem_EvtSetDebounceLevel() is invoked"
               "In case:"
               "- The value of status is set as DEM_EVENT_STATUS_PREPASSED at line 71"
               "- The value of debLevel is not equal the value of minThreshold at line 85"
               "- The value of SuspiciousThreshold is equal DEM_MAXSINT16 at line 88");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_getDebCtrBaseClassPassedThreshold#default;"
                       "Dem_getDebCtrBaseClassFailedThreshold#01;"
                       "Dem_getDebCtrBaseClassJumpDownValue#default;"
                       "Dem_getDebCtrBaseClassJumpUpValue#default;"
                       "Dem_getDebCtrBaseClassIsJumpDown#true;"
                       "Dem_getDebCtrBaseClassIsJumpUp#default;"
                       "Dem_EvtGetDebounceLevel#01;"
                       "Dem_EvtSetDebounceLevel#02;");

            /* Call SUT */
            returnValue = Dem_DebCounterBaseClass_Filter(EventId, status, paramSet, paramIndex);

            /* Test case checks */
            CHECK_U_INT(returnValue, 40);
            /* Expected result
             * - The value of debAction variable is updated;
             * - The value of status is updated;
             * - Function Dem_EvtSetDebounceLevel() is invoked;
             */
            /* Checks on global data */
            check_global_data();
            /* GUID
             * - {D6E66671-8E1B-47bc-A49E-803EC6651B5C};
             * - {848881B9-79F9-4efe-8FDC-FA4B5C4EE09E};
             * - {E40AD58D-48FE-4fa8-AD9F-75BA9BF2C9F5};
             * - {9B0589C5-FF3E-4b3a-A803-F6F9846D46F5};
             * - {4AB13ADD-1C99-4eb7-A7F9-B031150C820F};
             * - {8D8FEDD6-008F-46d9-8529-08DF99B7E284};
             * - {D65F8D94-7FA0-4c26-BE18-D81358210ADF};
             * - {EDB07163-45D8-4c47-BF5A-5A1A8D415C26};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_DebCounterBaseClass_Filter_debLevel_equal_maxThreshold(int doIt){
if (doIt) {
    /* Test method - EP */
    /* Tester define */

    Dem_EventStatusType status_entity;
    INITIALISE(status_entity);

    Dem_DebCounterBaseClass_ParamSet paramSet_entity[10];
    INITIALISE(paramSet_entity);

    /* Test case data declarations */
    Dem_EventIdType EventId = 3;
    Dem_EventStatusType * status = (Dem_EventStatusType *)&status_entity;
    const void * paramSet = &paramSet_entity[0];
    uint16 paramIndex = 0;
    uint8_least returnValue;
    /* Set global data */
    initialise_global_data();

    *status = DEM_EVENT_STATUS_PREFAILED;

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_DebCounterBaseClass_Filter_debLevel_equal_maxThreshold",
               "Check that:"
               "- The value of minThreshold is set as the returned value of function Dem_getDebCtrBaseClassPassedThreshold()"
               "- The value of maxThreshold is set as the returned value of function Dem_getDebCtrBaseClassFailedThreshold()"
               "- The value of jumpDownValue is set as the returned value of function Dem_getDebCtrBaseClassJumpDownValue()"
               "- The value of jumpUpValue is set as the returned value of function Dem_getDebCtrBaseClassJumpUpValue()"
               "- The value of isJumpDownEnabled is set as the returned value of function Dem_getDebCtrBaseClassIsJumpDown()"
               "- The value of isJumpUpEnabled is set as the returned value of function Dem_getDebCtrBaseClassIsJumpUp()"
               "- The value of debLevel is set as the returned value of function Dem_EvtGetDebounceLevel()"
               "- The value of debAction variable is updated"
               "- The value of status is updated"
               "In case:"
               "- The value of status is set as DEM_EVENT_STATUS_PREFAILED at line 131"
               "- The value of debLevel is equal maxThreshold at line 134");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_getDebCtrBaseClassPassedThreshold#01;"
                       "Dem_getDebCtrBaseClassFailedThreshold#02;"
                       "Dem_getDebCtrBaseClassJumpDownValue#default;"
                       "Dem_getDebCtrBaseClassJumpUpValue#default;"
                       "Dem_getDebCtrBaseClassIsJumpDown#false;"
                       "Dem_getDebCtrBaseClassIsJumpUp#default;"
                       "Dem_EvtGetDebounceLevel#default;");

            /* Call SUT */
            returnValue = Dem_DebCounterBaseClass_Filter(EventId, status, paramSet, paramIndex);

            /* Test case checks */
            CHECK_U_INT(returnValue, DEM_DEBACTION_SETFDCTHRESHOLDREACHED);
            /* Expected result
             * - The value of debAction variable is updated;
             * - The value of status is updated;
             */
            /* Checks on global data */
            check_global_data();
            /* GUID
             * - {D6E66671-8E1B-47bc-A49E-803EC6651B5C};
             * - {848881B9-79F9-4efe-8FDC-FA4B5C4EE09E};
             * - {E40AD58D-48FE-4fa8-AD9F-75BA9BF2C9F5};
             * - {9B0589C5-FF3E-4b3a-A803-F6F9846D46F5};
             * - {4AB13ADD-1C99-4eb7-A7F9-B031150C820F};
             * - {8D8FEDD6-008F-46d9-8529-08DF99B7E284};
             * - {D65F8D94-7FA0-4c26-BE18-D81358210ADF};
             * - {EDB07163-45D8-4c47-BF5A-5A1A8D415C26};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_DebCounterBaseClass_Filter_debLevel_Greater_maxThreshold_STATUS_FAILED(int doIt){
if (doIt) {
    /* Test method - EP */
    /* Tester define */

    Dem_EventStatusType status_entity;
    INITIALISE(status_entity);

    Dem_DebCounterBaseClass_ParamSet paramSet_entity[10];
    INITIALISE(paramSet_entity);

    /* Test case data declarations */
    Dem_EventIdType EventId = 3;
    Dem_EventStatusType * status = (Dem_EventStatusType *)&status_entity;
    const void * paramSet = &paramSet_entity[0];
    uint16 paramIndex = 0;
    uint8_least returnValue;
    /* Set global data */
    initialise_global_data();

    *status = DEM_EVENT_STATUS_PREFAILED;
    paramSet_entity[0].FDCThreshold = 2;

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_DebCounterBaseClass_Filter_debLevel_Greater_maxThreshold_STATUS_FAILED",
               "Check that:"
               "- The value of minThreshold is set as the returned value of function Dem_getDebCtrBaseClassPassedThreshold()"
               "- The value of maxThreshold is set as the returned value of function Dem_getDebCtrBaseClassFailedThreshold()"
               "- The value of jumpDownValue is set as the returned value of function Dem_getDebCtrBaseClassJumpDownValue()"
               "- The value of jumpUpValue is set as the returned value of function Dem_getDebCtrBaseClassJumpUpValue()"
               "- The value of isJumpDownEnabled is set as the returned value of function Dem_getDebCtrBaseClassIsJumpDown()"
               "- The value of isJumpUpEnabled is set as the returned value of function Dem_getDebCtrBaseClassIsJumpUp()"
               "- The value of debLevel is set as the returned value of function Dem_EvtGetDebounceLevel()"
               "- The value of debAction variable is updated"
               "- The value of status is updated"
               "In case:"
               "- The value of status is set as DEM_EVENT_STATUS_PREFAILED at line 131"
               "- The value of debLevel is less than jumpUpValue at line 144"
               "- The value of isJumpUpEnabled is TRUE at line 144"
               "- The value of debLevel is equal minThreshold at line 144"
               "- The value of debLevel is greater than FDCThreshold at line 162");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_getDebCtrBaseClassPassedThreshold#default;"
                       "Dem_getDebCtrBaseClassFailedThreshold#01;"
                       "Dem_getDebCtrBaseClassJumpDownValue#default;"
                       "Dem_getDebCtrBaseClassJumpUpValue#default;"
                       "Dem_getDebCtrBaseClassIsJumpDown#true;"
                       "Dem_getDebCtrBaseClassIsJumpUp#true;"
                       "Dem_EvtGetDebounceLevel#default;"
                       "Dem_EvtSetDebounceLevel#default;");

            /* Call SUT */
            returnValue = Dem_DebCounterBaseClass_Filter(EventId, status, paramSet, paramIndex);

            /* Test case checks */
            CHECK_U_INT(returnValue, DEM_DEBACTION_SETFDCTHRESHOLDREACHED);
            /* Expected result
             * - The value of debAction variable is updated;
             * - The value of status is updated;
             */
            /* Checks on global data */
            check_global_data();

            CHECK_U_INT(*status, DEM_EVENT_STATUS_FAILED);

            /* GUID
             * - {D6E66671-8E1B-47bc-A49E-803EC6651B5C};
             * - {848881B9-79F9-4efe-8FDC-FA4B5C4EE09E};
             * - {E40AD58D-48FE-4fa8-AD9F-75BA9BF2C9F5};
             * - {9B0589C5-FF3E-4b3a-A803-F6F9846D46F5};
             * - {4AB13ADD-1C99-4eb7-A7F9-B031150C820F};
             * - {8D8FEDD6-008F-46d9-8529-08DF99B7E284};
             * - {D65F8D94-7FA0-4c26-BE18-D81358210ADF};
             * - {5BB2B141-F49B-4321-8EA8-445ECA4CA05E};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_DebCounterBaseClass_Filter_debLevel_Greater_FDCThreshold_debAction_or_INSERT(int doIt){
if (doIt) {
    /* Test method - EP */
    /* Tester define */

    Dem_EventStatusType status_entity;
    INITIALISE(status_entity);

    Dem_DebCounterBaseClass_ParamSet paramSet_entity[10];
    INITIALISE(paramSet_entity);

    /* Test case data declarations */
    Dem_EventIdType EventId = 3;
    Dem_EventStatusType * status = (Dem_EventStatusType *)&status_entity;
    const void * paramSet = &paramSet_entity[0];
    uint16 paramIndex = 0;
    uint8_least returnValue;
    /* Set global data */
    initialise_global_data();

    *status = DEM_EVENT_STATUS_PREFAILED;
    paramSet_entity[0].FDCThreshold = 0;
    paramSet_entity[0].SuspiciousThreshold = 0;
    paramSet_entity[0].stepUp = 0;

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_DebCounterBaseClass_Filter_debLevel_Greater_FDCThreshold_debAction_or_INSERT",
               "Check that:"
               "- The value of minThreshold is set as the returned value of function Dem_getDebCtrBaseClassPassedThreshold()"
               "- The value of maxThreshold is set as the returned value of function Dem_getDebCtrBaseClassFailedThreshold()"
               "- The value of jumpDownValue is set as the returned value of function Dem_getDebCtrBaseClassJumpDownValue()"
               "- The value of jumpUpValue is set as the returned value of function Dem_getDebCtrBaseClassJumpUpValue()"
               "- The value of isJumpDownEnabled is set as the returned value of function Dem_getDebCtrBaseClassIsJumpDown()"
               "- The value of isJumpUpEnabled is set as the returned value of function Dem_getDebCtrBaseClassIsJumpUp()"
               "- The value of debLevel is set as the returned value of function Dem_EvtGetDebounceLevel()"
               "- The value of debAction variable is updated"
               "- The value of status is updated"
               "In case:"
               "- The value of status is set as DEM_EVENT_STATUS_PREFAILED at line 131"
               "- The value of isJumpUpEnabled is FALSE at line 144"
               "- The value of debLevel is less than maxThreshold at line 154");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_getDebCtrBaseClassPassedThreshold#default;"
                       "Dem_getDebCtrBaseClassFailedThreshold#default;"
                       "Dem_getDebCtrBaseClassJumpDownValue#default;"
                       "Dem_getDebCtrBaseClassJumpUpValue#default;"
                       "Dem_getDebCtrBaseClassIsJumpDown#true;"
                       "Dem_getDebCtrBaseClassIsJumpUp#false;"
                       "Dem_EvtGetDebounceLevel#02;"
                       "Dem_EvtSetDebounceLevel#03;");

            /* Call SUT */
            returnValue = Dem_DebCounterBaseClass_Filter(EventId, status, paramSet, paramIndex);

            /* Test case checks */
            CHECK_U_INT(returnValue, 7);
            /* Expected result
             * - The value of debAction variable is updated;
             * - The value of status is updated;
             */
            /* Checks on global data */
            check_global_data();
            /* GUID
             * - {D6E66671-8E1B-47bc-A49E-803EC6651B5C};
             * - {848881B9-79F9-4efe-8FDC-FA4B5C4EE09E};
             * - {E40AD58D-48FE-4fa8-AD9F-75BA9BF2C9F5};
             * - {9B0589C5-FF3E-4b3a-A803-F6F9846D46F5};
             * - {4AB13ADD-1C99-4eb7-A7F9-B031150C820F};
             * - {8D8FEDD6-008F-46d9-8529-08DF99B7E284};
             * - {D65F8D94-7FA0-4c26-BE18-D81358210ADF};
             * - {5BB2B141-F49B-4321-8EA8-445ECA4CA05E};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_DebCounterBaseClass_Filter_debLevel_less_SuspiciousThreshold(int doIt){
if (doIt) {
    /* Test method - EP */
    /* Tester define */

    Dem_EventStatusType status_entity;
    INITIALISE(status_entity);

    Dem_DebCounterBaseClass_ParamSet paramSet_entity[10];
    INITIALISE(paramSet_entity);

    /* Test case data declarations */
    Dem_EventIdType EventId = 3;
    Dem_EventStatusType * status = (Dem_EventStatusType *)&status_entity;
    const void * paramSet = &paramSet_entity[0];
    uint16 paramIndex = 0;
    uint8_least returnValue;
    /* Set global data */
    initialise_global_data();

    *status = DEM_EVENT_STATUS_PREFAILED;
    paramSet_entity[0].SuspiciousThreshold = 10;
    paramSet_entity[0].stepUp = 0;

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_DebCounterBaseClass_Filter_debLevel_less_SuspiciousThreshold",
               "Check that:"
               "- The value of minThreshold is set as the returned value of function Dem_getDebCtrBaseClassPassedThreshold()"
               "- The value of maxThreshold is set as the returned value of function Dem_getDebCtrBaseClassFailedThreshold()"
               "- The value of jumpDownValue is set as the returned value of function Dem_getDebCtrBaseClassJumpDownValue()"
               "- The value of jumpUpValue is set as the returned value of function Dem_getDebCtrBaseClassJumpUpValue()"
               "- The value of isJumpDownEnabled is set as the returned value of function Dem_getDebCtrBaseClassIsJumpDown()"
               "- The value of isJumpUpEnabled is set as the returned value of function Dem_getDebCtrBaseClassIsJumpUp()"
               "- The value of debLevel is set as the returned value of function Dem_EvtGetDebounceLevel()"
               "- The value of debAction variable is updated"
               "- The value of status is updated"
               "In case:"
               "- The value of status is set as DEM_EVENT_STATUS_PREFAILED at line 131"
               "- The value of debLevel is less than maxThreshold at line 175"
               "- The value of debLevel is less than SuspiciousThreshold at line 177");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_getDebCtrBaseClassPassedThreshold#default;"
                       "Dem_getDebCtrBaseClassFailedThreshold#default;"
                       "Dem_getDebCtrBaseClassJumpDownValue#default;"
                       "Dem_getDebCtrBaseClassJumpUpValue#default;"
                       "Dem_getDebCtrBaseClassIsJumpDown#true;"
                       "Dem_getDebCtrBaseClassIsJumpUp#false;"
                       "Dem_EvtGetDebounceLevel#02;"
                       "Dem_EvtSetDebounceLevel#03;");

            /* Call SUT */
            returnValue = Dem_DebCounterBaseClass_Filter(EventId, status, paramSet, paramIndex);

            /* Test case checks */
            CHECK_U_INT(returnValue, DEM_DEBACTION_NOOP);
            /* Expected result
             * - The value of debAction variable is updated;
             * - The value of status is updated;
             */
            /* Checks on global data */
            check_global_data();
            /* GUID
             * - {D6E66671-8E1B-47bc-A49E-803EC6651B5C};
             * - {848881B9-79F9-4efe-8FDC-FA4B5C4EE09E};
             * - {E40AD58D-48FE-4fa8-AD9F-75BA9BF2C9F5};
             * - {9B0589C5-FF3E-4b3a-A803-F6F9846D46F5};
             * - {4AB13ADD-1C99-4eb7-A7F9-B031150C820F};
             * - {8D8FEDD6-008F-46d9-8529-08DF99B7E284};
             * - {D65F8D94-7FA0-4c26-BE18-D81358210ADF};
             * - {CB9C38CD-046B-47f3-B631-E2FC0C1F193F};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_DebCounterBaseClass_Filter_debLevel_equal_minThreshold(int doIt){
if (doIt) {
    /* Test method - EP */
    /* Tester define */

    Dem_EventStatusType status_entity;
    INITIALISE(status_entity);

    Dem_DebCounterBaseClass_ParamSet paramSet_entity[10];
    INITIALISE(paramSet_entity);

    /* Test case data declarations */
    Dem_EventIdType EventId = 3;
    Dem_EventStatusType * status = (Dem_EventStatusType *)&status_entity;
    const void * paramSet = &paramSet_entity[0];
    uint16 paramIndex = 0;
    uint8_least returnValue;
    /* Set global data */
    initialise_global_data();

    *status = DEM_EVENT_STATUS_PASSED;
    paramSet_entity[0].SuspiciousThreshold = 10;

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_DebCounterBaseClass_Filter_debLevel_equal_minThreshold",
               "Check that:"
               "- The value of minThreshold is set as the returned value of function Dem_getDebCtrBaseClassPassedThreshold()"
               "- The value of maxThreshold is set as the returned value of function Dem_getDebCtrBaseClassFailedThreshold()"
               "- The value of jumpDownValue is set as the returned value of function Dem_getDebCtrBaseClassJumpDownValue()"
               "- The value of jumpUpValue is set as the returned value of function Dem_getDebCtrBaseClassJumpUpValue()"
               "- The value of isJumpDownEnabled is set as the returned value of function Dem_getDebCtrBaseClassIsJumpDown()"
               "- The value of isJumpUpEnabled is set as the returned value of function Dem_getDebCtrBaseClassIsJumpUp()"
               "- The value of debLevel is set as the returned value of function Dem_EvtGetDebounceLevel()"
               "- The value of debAction variable is updated"
               "- The value of status is updated"
               "In case:"
               "- The value of status is set as DEM_EVENT_STATUS_PASSED at line 186"
               "- The value of SuspiciousThreshold is different DEM_MAXSINT16 at line 189"
               "- The value of debLevel is equal minThreshold at line 197");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_getDebCtrBaseClassPassedThreshold#default;"
                       "Dem_getDebCtrBaseClassFailedThreshold#default;"
                       "Dem_getDebCtrBaseClassJumpDownValue#default;"
                       "Dem_getDebCtrBaseClassJumpUpValue#default;"
                       "Dem_getDebCtrBaseClassIsJumpDown#true;"
                       "Dem_getDebCtrBaseClassIsJumpUp#false;"
                       "Dem_EvtGetDebounceLevel#default;"
                       "Dem_EvtGetLastReportedEvent#default;");

            /* Call SUT */
            returnValue = Dem_DebCounterBaseClass_Filter(EventId, status, paramSet, paramIndex);

            /* Test case checks */
            CHECK_U_INT(returnValue, 40);
            /* Expected result
             * - The value of debAction variable is updated;
             * - The value of status is updated;
             */
            /* Checks on global data */
            check_global_data();
            /* GUID
             * - {D6E66671-8E1B-47bc-A49E-803EC6651B5C};
             * - {848881B9-79F9-4efe-8FDC-FA4B5C4EE09E};
             * - {E40AD58D-48FE-4fa8-AD9F-75BA9BF2C9F5};
             * - {9B0589C5-FF3E-4b3a-A803-F6F9846D46F5};
             * - {4AB13ADD-1C99-4eb7-A7F9-B031150C820F};
             * - {8D8FEDD6-008F-46d9-8529-08DF99B7E284};
             * - {D65F8D94-7FA0-4c26-BE18-D81358210ADF};
             * - {CB9C38CD-046B-47f3-B631-E2FC0C1F193F};
             * - {A2CA2904-00B9-4965-9DE4-D1B0AAEC03C6};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_DebCounterBaseClass_Filter_debLevel_not_equal_minThreshold(int doIt){
if (doIt) {
    /* Test method - EP */
    /* Tester define */

    Dem_EventStatusType status_entity;
    INITIALISE(status_entity);

    Dem_DebCounterBaseClass_ParamSet paramSet_entity[10];
    INITIALISE(paramSet_entity);

    /* Test case data declarations */
    Dem_EventIdType EventId = 3;
    Dem_EventStatusType * status = (Dem_EventStatusType *)&status_entity;
    const void * paramSet = &paramSet_entity[0];
    uint16 paramIndex = 0;
    uint8_least returnValue;
    /* Set global data */
    initialise_global_data();

    *status = DEM_EVENT_STATUS_PASSED;
    paramSet_entity[0].SuspiciousThreshold = DEM_MAXSINT16;

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_DebCounterBaseClass_Filter_debLevel_not_equal_minThreshold",
               "Check that:"
               "- The value of minThreshold is set as the returned value of function Dem_getDebCtrBaseClassPassedThreshold()"
               "- The value of maxThreshold is set as the returned value of function Dem_getDebCtrBaseClassFailedThreshold()"
               "- The value of jumpDownValue is set as the returned value of function Dem_getDebCtrBaseClassJumpDownValue()"
               "- The value of jumpUpValue is set as the returned value of function Dem_getDebCtrBaseClassJumpUpValue()"
               "- The value of isJumpDownEnabled is set as the returned value of function Dem_getDebCtrBaseClassIsJumpDown()"
               "- The value of isJumpUpEnabled is set as the returned value of function Dem_getDebCtrBaseClassIsJumpUp()"
               "- The value of debLevel is set as the returned value of function Dem_EvtGetDebounceLevel()"
               "- The value of debAction variable is updated"
               "- The value of status is updated"
               "In case:"
               "- The value of status is set as DEM_EVENT_STATUS_PASSED at line 186"
               "- The value of SuspiciousThreshold is equal DEM_MAXSINT16 at line 189"
               "- The value of debLevel is not equal minThreshold at line 197");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_getDebCtrBaseClassPassedThreshold#default;"
                       "Dem_getDebCtrBaseClassFailedThreshold#default;"
                       "Dem_getDebCtrBaseClassJumpDownValue#default;"
                       "Dem_getDebCtrBaseClassJumpUpValue#default;"
                       "Dem_getDebCtrBaseClassIsJumpDown#true;"
                       "Dem_getDebCtrBaseClassIsJumpUp#false;"
                       "Dem_EvtGetDebounceLevel#01;"
                       "Dem_EvtGetLastReportedEvent#default;"
                       "Dem_EvtSetDebounceLevel#01;");

            /* Call SUT */
            returnValue = Dem_DebCounterBaseClass_Filter(EventId, status, paramSet, paramIndex);

            /* Test case checks */
            CHECK_U_INT(returnValue, 32);
            /* Expected result
             * - The value of debAction variable is updated;
             * - The value of status is updated;
             */
            /* Checks on global data */
            check_global_data();
            /* GUID
             * - {D6E66671-8E1B-47bc-A49E-803EC6651B5C};
             * - {848881B9-79F9-4efe-8FDC-FA4B5C4EE09E};
             * - {E40AD58D-48FE-4fa8-AD9F-75BA9BF2C9F5};
             * - {9B0589C5-FF3E-4b3a-A803-F6F9846D46F5};
             * - {4AB13ADD-1C99-4eb7-A7F9-B031150C820F};
             * - {8D8FEDD6-008F-46d9-8529-08DF99B7E284};
             * - {D65F8D94-7FA0-4c26-BE18-D81358210ADF};
             * - {CB9C38CD-046B-47f3-B631-E2FC0C1F193F};
             * - {A2CA2904-00B9-4965-9DE4-D1B0AAEC03C6};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_DebCounterBaseClass_Filter_status_FAILED_debLevel_equal_maxThreshold(int doIt){
if (doIt) {
    /* Test method - EP */
    /* Tester define */

    Dem_EventStatusType status_entity;
    INITIALISE(status_entity);

    Dem_DebCounterBaseClass_ParamSet paramSet_entity[10];
    INITIALISE(paramSet_entity);

    /* Test case data declarations */
    Dem_EventIdType EventId = 3;
    Dem_EventStatusType * status = (Dem_EventStatusType *)&status_entity;
    const void * paramSet = &paramSet_entity[0];
    uint16 paramIndex = 0;
    uint8_least returnValue;
    /* Set global data */
    initialise_global_data();

    *status = DEM_EVENT_STATUS_FAILED;

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_DebCounterBaseClass_Filter_status_FAILED_debLevel_equal_maxThreshold",
               "Check that:"
               "- The value of minThreshold is set as the returned value of function Dem_getDebCtrBaseClassPassedThreshold()"
               "- The value of maxThreshold is set as the returned value of function Dem_getDebCtrBaseClassFailedThreshold()"
               "- The value of jumpDownValue is set as the returned value of function Dem_getDebCtrBaseClassJumpDownValue()"
               "- The value of jumpUpValue is set as the returned value of function Dem_getDebCtrBaseClassJumpUpValue()"
               "- The value of isJumpDownEnabled is set as the returned value of function Dem_getDebCtrBaseClassIsJumpDown()"
               "- The value of isJumpUpEnabled is set as the returned value of function Dem_getDebCtrBaseClassIsJumpUp()"
               "- The value of debLevel is set as the returned value of function Dem_EvtGetDebounceLevel()"
               "- The value of debAction variable is updated"
               "- The value of status is updated"
               "In case:"
               "- The value of status is set as DEM_EVENT_STATUS_FAILED at line 205"
               "- The value of debLevel is equal maxThreshold at line 211");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_getDebCtrBaseClassPassedThreshold#default;"
                       "Dem_getDebCtrBaseClassFailedThreshold#02;"
                       "Dem_getDebCtrBaseClassJumpDownValue#default;"
                       "Dem_getDebCtrBaseClassJumpUpValue#default;"
                       "Dem_getDebCtrBaseClassIsJumpDown#true;"
                       "Dem_getDebCtrBaseClassIsJumpUp#false;"
                       "Dem_EvtGetDebounceLevel#default;");

            /* Call SUT */
            returnValue = Dem_DebCounterBaseClass_Filter(EventId, status, paramSet, paramIndex);

            /* Test case checks */
            CHECK_U_INT(returnValue, DEM_DEBACTION_SETFDCTHRESHOLDREACHED);
            /* Expected result
             * - The value of debAction variable is updated;
             * - The value of status is updated;
             */
            /* Checks on global data */
            check_global_data();
            /* GUID
             * - {D6E66671-8E1B-47bc-A49E-803EC6651B5C};
             * - {848881B9-79F9-4efe-8FDC-FA4B5C4EE09E};
             * - {E40AD58D-48FE-4fa8-AD9F-75BA9BF2C9F5};
             * - {9B0589C5-FF3E-4b3a-A803-F6F9846D46F5};
             * - {4AB13ADD-1C99-4eb7-A7F9-B031150C820F};
             * - {8D8FEDD6-008F-46d9-8529-08DF99B7E284};
             * - {D65F8D94-7FA0-4c26-BE18-D81358210ADF};
             * - {20DAF1B0-2D81-4146-BFFE-F6704FCB0D78};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_DebCounterBaseClass_Filter_status_FAILED_debLevel_not_equal_maxThreshold(int doIt){
if (doIt) {
    /* Test method - EP */
    /* Tester define */

    Dem_EventStatusType status_entity;
    INITIALISE(status_entity);

    Dem_DebCounterBaseClass_ParamSet paramSet_entity[10];
    INITIALISE(paramSet_entity);

    /* Test case data declarations */
    Dem_EventIdType EventId = 3;
    Dem_EventStatusType * status = (Dem_EventStatusType *)&status_entity;
    const void * paramSet = &paramSet_entity[0];
    uint16 paramIndex = 0;
    uint8_least returnValue;
    /* Set global data */
    initialise_global_data();

    *status = DEM_EVENT_STATUS_FAILED;

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_DebCounterBaseClass_Filter_status_FAILED_debLevel_not_equal_maxThreshold",
               "Check that:"
               "- The value of minThreshold is set as the returned value of function Dem_getDebCtrBaseClassPassedThreshold()"
               "- The value of maxThreshold is set as the returned value of function Dem_getDebCtrBaseClassFailedThreshold()"
               "- The value of jumpDownValue is set as the returned value of function Dem_getDebCtrBaseClassJumpDownValue()"
               "- The value of jumpUpValue is set as the returned value of function Dem_getDebCtrBaseClassJumpUpValue()"
               "- The value of isJumpDownEnabled is set as the returned value of function Dem_getDebCtrBaseClassIsJumpDown()"
               "- The value of isJumpUpEnabled is set as the returned value of function Dem_getDebCtrBaseClassIsJumpUp()"
               "- The value of debLevel is set as the returned value of function Dem_EvtGetDebounceLevel()"
               "- The value of debAction variable is updated"
               "- The value of status is updated"
               "In case:"
               "- The value of status is set as DEM_EVENT_STATUS_FAILED at line 205"
               "- The value of debLevel is equal not maxThreshold at line 211");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_getDebCtrBaseClassPassedThreshold#default;"
                       "Dem_getDebCtrBaseClassFailedThreshold#02;"
                       "Dem_getDebCtrBaseClassJumpDownValue#default;"
                       "Dem_getDebCtrBaseClassJumpUpValue#default;"
                       "Dem_getDebCtrBaseClassIsJumpDown#true;"
                       "Dem_getDebCtrBaseClassIsJumpUp#false;"
                       "Dem_EvtGetDebounceLevel#01;"
                       "Dem_EvtSetDebounceLevel#01;");

            /* Call SUT */
            returnValue = Dem_DebCounterBaseClass_Filter(EventId, status, paramSet, paramIndex);

            /* Test case checks */
            CHECK_U_INT(returnValue, DEM_DEBACTION_SETFDCTHRESHOLDREACHED);
            /* Expected result
             * - The value of debAction variable is updated;
             * - The value of status is updated;
             */
            /* Checks on global data */
            check_global_data();
            /* GUID
             * - {D6E66671-8E1B-47bc-A49E-803EC6651B5C};
             * - {848881B9-79F9-4efe-8FDC-FA4B5C4EE09E};
             * - {E40AD58D-48FE-4fa8-AD9F-75BA9BF2C9F5};
             * - {9B0589C5-FF3E-4b3a-A803-F6F9846D46F5};
             * - {4AB13ADD-1C99-4eb7-A7F9-B031150C820F};
             * - {8D8FEDD6-008F-46d9-8529-08DF99B7E284};
             * - {D65F8D94-7FA0-4c26-BE18-D81358210ADF};
             * - {20DAF1B0-2D81-4146-BFFE-F6704FCB0D78};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_DebCounterBaseClass_Filter_default(int doIt){
if (doIt) {
    /* Test method - EP */
    /* Tester define */

    Dem_EventStatusType status_entity;
    INITIALISE(status_entity);

    Dem_DebCounterBaseClass_ParamSet paramSet_entity[10];
    INITIALISE(paramSet_entity);

    /* Test case data declarations */
    Dem_EventIdType EventId = 3;
    Dem_EventStatusType * status = (Dem_EventStatusType *)&status_entity;
    const void * paramSet = &paramSet_entity[0];
    uint16 paramIndex = 0;
    uint8_least returnValue;
    /* Set global data */
    initialise_global_data();

    *status = DEM_EVENT_STATUS_FDC_THRESHOLD_REACHED;

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_DebCounterBaseClass_Filter_default",
               "Check that:"
               "- The value of minThreshold is set as the returned value of function Dem_getDebCtrBaseClassPassedThreshold()"
               "- The value of maxThreshold is set as the returned value of function Dem_getDebCtrBaseClassFailedThreshold()"
               "- The value of jumpDownValue is set as the returned value of function Dem_getDebCtrBaseClassJumpDownValue()"
               "- The value of jumpUpValue is set as the returned value of function Dem_getDebCtrBaseClassJumpUpValue()"
               "- The value of isJumpDownEnabled is set as the returned value of function Dem_getDebCtrBaseClassIsJumpDown()"
               "- The value of isJumpUpEnabled is set as the returned value of function Dem_getDebCtrBaseClassIsJumpUp()"
               "- The value of debLevel is set as the returned value of function Dem_EvtGetDebounceLevel()"
               "- Function returns DEM_DEBACTION_NOOP"
               "In case:"
               "- The value of status is set as DEM_EVENT_STATUS_FDC_THRESHOLD_REACHED at line 219");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_getDebCtrBaseClassPassedThreshold#default;"
                       "Dem_getDebCtrBaseClassFailedThreshold#02;"
                       "Dem_getDebCtrBaseClassJumpDownValue#default;"
                       "Dem_getDebCtrBaseClassJumpUpValue#default;"
                       "Dem_getDebCtrBaseClassIsJumpDown#true;"
                       "Dem_getDebCtrBaseClassIsJumpUp#false;"
                       "Dem_EvtGetDebounceLevel#01;");

            /* Call SUT */
            returnValue = Dem_DebCounterBaseClass_Filter(EventId, status, paramSet, paramIndex);

            /* Test case checks */
            CHECK_U_INT(returnValue, DEM_DEBACTION_NOOP);
            /* Expected result
             * Function returns DEM_DEBACTION_NOOP;
             */
            /* Checks on global data */
            check_global_data();
            /* GUID
             * - {D6E66671-8E1B-47bc-A49E-803EC6651B5C};
             * - {848881B9-79F9-4efe-8FDC-FA4B5C4EE09E};
             * - {4AB13ADD-1C99-4eb7-A7F9-B031150C820F};
             * - {8D8FEDD6-008F-46d9-8529-08DF99B7E284};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_DebCounterBaseClass_Filter_debAction_greater_than_FDC_and_Suspicious(int doIt){
if (doIt) {
    /* Test method - EP */
    /* Tester define */

    Dem_EventStatusType status_entity;
    INITIALISE(status_entity);

    Dem_DebCounterBaseClass_ParamSet paramSet_entity[10];
    INITIALISE(paramSet_entity);

    /* Test case data declarations */
    Dem_EventIdType EventId = 3;
    Dem_EventStatusType * status = (Dem_EventStatusType *)&status_entity;
    const void * paramSet = &paramSet_entity[0];
    uint16 paramIndex = 0;
    uint8_least returnValue;
    /* Set global data */
    initialise_global_data();

    *status = DEM_EVENT_STATUS_PREPASSED;
    paramSet_entity[0].FDCThreshold = 0;
    paramSet_entity[0].SuspiciousThreshold = 0;
    paramSet_entity[0].stepDown = 0;

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_DebCounterBaseClass_Filter_debAction_greater_than_FDC_and_Suspicious",
               "Check that:"
               "- The value of minThreshold is set as the returned value of function Dem_getDebCtrBaseClassPassedThreshold()"
               "- The value of maxThreshold is set as the returned value of function Dem_getDebCtrBaseClassFailedThreshold()"
               "- The value of jumpDownValue is set as the returned value of function Dem_getDebCtrBaseClassJumpDownValue()"
               "- The value of jumpUpValue is set as the returned value of function Dem_getDebCtrBaseClassJumpUpValue()"
               "- The value of isJumpDownEnabled is set as the returned value of function Dem_getDebCtrBaseClassIsJumpDown()"
               "- The value of isJumpUpEnabled is set as the returned value of function Dem_getDebCtrBaseClassIsJumpUp()"
               "- The value of debLevel is set as the returned value of function Dem_EvtGetDebounceLevel()"
               "- The value of status is updated"
               "- Function Dem_EvtSetDebounceLevel() is invoked"
               "In case:"
               "- The value of status is set as DEM_EVENT_STATUS_PREPASSED at line 71"
               "- The value of debLevel is greater than FDCThreshold at line 117"
               "- The value of debLevel is greater than SuspiciousThreshold at line 123");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_getDebCtrBaseClassPassedThreshold#01;"
                       "Dem_getDebCtrBaseClassFailedThreshold#01;"
                       "Dem_getDebCtrBaseClassJumpDownValue#default;"
                       "Dem_getDebCtrBaseClassJumpUpValue#default;"
                       "Dem_getDebCtrBaseClassIsJumpDown#false;"
                       "Dem_getDebCtrBaseClassIsJumpUp#default;"
                       "Dem_EvtGetDebounceLevel#default;"
                       "Dem_EvtSetDebounceLevel#02;");

            /* Call SUT */
            returnValue = Dem_DebCounterBaseClass_Filter(EventId, status, paramSet, paramIndex);

            /* Test case checks */
            CHECK_U_INT(returnValue, DEM_DEBACTION_NOOP);
            /* Expected result
             * - The value of status is updated;
             * - Function Dem_EvtSetDebounceLevel() is invoked;
             */
            /* Checks on global data */
            check_global_data();
            /* GUID
             * - {D6E66671-8E1B-47bc-A49E-803EC6651B5C};
             * - {848881B9-79F9-4efe-8FDC-FA4B5C4EE09E};
             * - {E40AD58D-48FE-4fa8-AD9F-75BA9BF2C9F5};
             * - {9B0589C5-FF3E-4b3a-A803-F6F9846D46F5};
             * - {4AB13ADD-1C99-4eb7-A7F9-B031150C820F};
             * - {8D8FEDD6-008F-46d9-8529-08DF99B7E284};
             * - {D65F8D94-7FA0-4c26-BE18-D81358210ADF};
             * - {EDB07163-45D8-4c47-BF5A-5A1A8D415C26};
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
        return CANTATA_DEFAULT_VALUE;
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
        CHECK_U_INT(EventId, 3);
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_isDtcIdValid */
Dem_boolean_least ISOLATE_Dem_DebCtrBaseClass_Dem_isDtcIdValid(Dem_DtcIdType id){
    REGISTER_CALL("Dem_isDtcIdValid");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_DtcGroupIdIsValid */
Dem_boolean_least ISOLATE_Dem_DebCtrBaseClass_Dem_DtcGroupIdIsValid(Dem_DTCGroupIdType dtcGroupID){
    REGISTER_CALL("Dem_DtcGroupIdIsValid");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_J1939IsNodeIdValid */
Dem_boolean_least ISOLATE_Dem_DebCtrBaseClass_Dem_J1939IsNodeIdValid(Dem_J1939NodeIdType nodeId){
    REGISTER_CALL("Dem_J1939IsNodeIdValid");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function rba_DiagLib_Bit8SetBit */
void ISOLATE_Dem_DebCtrBaseClass_rba_DiagLib_Bit8SetBit(uint8 * buffer,
                                                        uint8 bit_position){
    REGISTER_CALL("rba_DiagLib_Bit8SetBit");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function rba_DiagLib_Bit8ClearBit */
void ISOLATE_Dem_DebCtrBaseClass_rba_DiagLib_Bit8ClearBit(uint8 * buffer,
                                                          uint8 bit_position){
    REGISTER_CALL("rba_DiagLib_Bit8ClearBit");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function rba_DiagLib_Bit8ClearBits */
void ISOLATE_Dem_DebCtrBaseClass_rba_DiagLib_Bit8ClearBits(uint8 * value,
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
void ISOLATE_Dem_DebCtrBaseClass_rba_DiagLib_Bit16SetBit(uint16 * buffer,
                                                         uint8 bit_position){
    REGISTER_CALL("rba_DiagLib_Bit16SetBit");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function rba_DiagLib_Bit16ClearBit */
void ISOLATE_Dem_DebCtrBaseClass_rba_DiagLib_Bit16ClearBit(uint16 * buffer,
                                                           uint8 bit_position){
    REGISTER_CALL("rba_DiagLib_Bit16ClearBit");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function rba_DiagLib_Bit16ClearBits */
void ISOLATE_Dem_DebCtrBaseClass_rba_DiagLib_Bit16ClearBits(uint16 * value,
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
void ISOLATE_Dem_DebCtrBaseClass_rba_DiagLib_Bit32SetBit(uint32 * buffer,
                                                         uint8 bit_position){
    REGISTER_CALL("rba_DiagLib_Bit32SetBit");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function rba_DiagLib_Bit32ClearBit */
void ISOLATE_Dem_DebCtrBaseClass_rba_DiagLib_Bit32ClearBit(uint32 * buffer,
                                                           uint8 bit_position){
    REGISTER_CALL("rba_DiagLib_Bit32ClearBit");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function rba_DiagLib_Bit32ClearBits */
void ISOLATE_Dem_DebCtrBaseClass_rba_DiagLib_Bit32ClearBits(uint32 * value,
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
void ISOLATE_Dem_DebCtrBaseClass_Dem_BitArraySetBit(uint32 * buffer,
                                                    uint32 bit_position){
    REGISTER_CALL("Dem_BitArraySetBit");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_BitArrayClearBit */
void ISOLATE_Dem_DebCtrBaseClass_Dem_BitArrayClearBit(uint32 * buffer,
                                                      uint32 bit_position){
    REGISTER_CALL("Dem_BitArrayClearBit");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function rba_DiagLib_Bit8IsBitSet */
boolean ISOLATE_Dem_DebCtrBaseClass_rba_DiagLib_Bit8IsBitSet(uint8 value,
                                                             uint8 bit_position){
    REGISTER_CALL("rba_DiagLib_Bit8IsBitSet");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function rba_DiagLib_Bit8OverwriteBit */
void ISOLATE_Dem_DebCtrBaseClass_rba_DiagLib_Bit8OverwriteBit(uint8 * buffer,
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
Dem_boolean_least ISOLATE_Dem_DebCtrBaseClass_Dem_EnCoAreAllFulfilled(Dem_EnCoList enableConditionList){
    REGISTER_CALL("Dem_EnCoAreAllFulfilled");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_NvMGetNvMBlocKId */
NvM_BlockIdType ISOLATE_Dem_DebCtrBaseClass_Dem_NvMGetNvMBlocKId(Dem_NvmBlockIdType id){
    REGISTER_CALL("Dem_NvMGetNvMBlocKId");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_IndicatorGetBlinkingCounter */
uint16 ISOLATE_Dem_DebCtrBaseClass_Dem_IndicatorGetBlinkingCounter(uint8 indicatorId){
    REGISTER_CALL("Dem_IndicatorGetBlinkingCounter");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_IndicatorGetContinuousCounter */
uint16 ISOLATE_Dem_DebCtrBaseClass_Dem_IndicatorGetContinuousCounter(uint8 indicatorId){
    REGISTER_CALL("Dem_IndicatorGetContinuousCounter");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_IndicatorGetFastFlashCtr */
uint16 ISOLATE_Dem_DebCtrBaseClass_Dem_IndicatorGetFastFlashCtr(uint8 indicatorId){
    REGISTER_CALL("Dem_IndicatorGetFastFlashCtr");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_IndicatorGetSlowFlashCtr */
uint16 ISOLATE_Dem_DebCtrBaseClass_Dem_IndicatorGetSlowFlashCtr(uint8 indicatorId){
    REGISTER_CALL("Dem_IndicatorGetSlowFlashCtr");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_IndicatorSetContinuousCtr */
void ISOLATE_Dem_DebCtrBaseClass_Dem_IndicatorSetContinuousCtr(uint8 indicatorId,
                                                               uint16 continuousCtr){
    REGISTER_CALL("Dem_IndicatorSetContinuousCtr");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_IndicatorSetBlinkingCtr */
void ISOLATE_Dem_DebCtrBaseClass_Dem_IndicatorSetBlinkingCtr(uint8 indicatorId,
                                                             uint16 blinkingCtr){
    REGISTER_CALL("Dem_IndicatorSetBlinkingCtr");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_IndicatorSetFastFlashCtr */
void ISOLATE_Dem_DebCtrBaseClass_Dem_IndicatorSetFastFlashCtr(uint8 indicatorId,
                                                              uint16 fastFlashCtr){
    REGISTER_CALL("Dem_IndicatorSetFastFlashCtr");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_IndicatorSetSlowFlashCtr */
void ISOLATE_Dem_DebCtrBaseClass_Dem_IndicatorSetSlowFlashCtr(uint8 indicatorId,
                                                              uint16 slowFlashCtr){
    REGISTER_CALL("Dem_IndicatorSetSlowFlashCtr");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function rba_DiagLib_Bit16GetBits */
uint16 ISOLATE_Dem_DebCtrBaseClass_rba_DiagLib_Bit16GetBits(uint16 value,
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
boolean ISOLATE_Dem_DebCtrBaseClass_rba_DiagLib_Bit16IsBitSet(uint16 value,
                                                              uint8 bit_position){
    REGISTER_CALL("rba_DiagLib_Bit16IsBitSet");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_NvMWriteBlockOnShutdown */
void ISOLATE_Dem_DebCtrBaseClass_Dem_NvMWriteBlockOnShutdown(Dem_NvmBlockIdType id){
    REGISTER_CALL("Dem_NvMWriteBlockOnShutdown");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_ISO14229ByteIsWarningIndicatorRequested */
Dem_boolean_least ISOLATE_Dem_DebCtrBaseClass_Dem_ISO14229ByteIsWarningIndicatorRequested(uint8 self){
    REGISTER_CALL("Dem_ISO14229ByteIsWarningIndicatorRequested");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EventIndicatorAttributeIteratorNew */
void ISOLATE_Dem_DebCtrBaseClass_Dem_EventIndicatorAttributeIteratorNew(Dem_EventIdType EventId,
                                                                        Dem_EventIndicatorAttributeIterator * it){
    REGISTER_CALL("Dem_EventIndicatorAttributeIteratorNew");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EventIndicatorAttributeIsValid */
Dem_boolean_least ISOLATE_Dem_DebCtrBaseClass_Dem_EventIndicatorAttributeIsValid(Dem_EventIdType EventId,
                                                                                 const Dem_EventIndicatorAttributeIterator * it){
    REGISTER_CALL("Dem_EventIndicatorAttributeIsValid");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EventIndicatorAttributeNext */
void ISOLATE_Dem_DebCtrBaseClass_Dem_EventIndicatorAttributeNext(Dem_EventIndicatorAttributeIterator * it){
    REGISTER_CALL("Dem_EventIndicatorAttributeNext");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EventIndicatorAttributeCurrent */
uint16_least ISOLATE_Dem_DebCtrBaseClass_Dem_EventIndicatorAttributeCurrent(const Dem_EventIndicatorAttributeIterator * it){
    REGISTER_CALL("Dem_EventIndicatorAttributeCurrent");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_IsIndicatorAttributeValid */
Dem_boolean_least ISOLATE_Dem_DebCtrBaseClass_Dem_IsIndicatorAttributeValid(uint16_least indicatorIndex){
    REGISTER_CALL("Dem_IsIndicatorAttributeValid");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_IndicatorAttrib_GetIndicatorId */
uint8 ISOLATE_Dem_DebCtrBaseClass_Dem_IndicatorAttrib_GetIndicatorId(uint16_least indicatorIndex){
    REGISTER_CALL("Dem_IndicatorAttrib_GetIndicatorId");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_IndicatorAttrib_GetBehaviour */
uint8 ISOLATE_Dem_DebCtrBaseClass_Dem_IndicatorAttrib_GetBehaviour(uint16_least indicatorIndex){
    REGISTER_CALL("Dem_IndicatorAttrib_GetBehaviour");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_IndicatorAttribGetFailureCycCtr */
uint8 ISOLATE_Dem_DebCtrBaseClass_Dem_IndicatorAttribGetFailureCycCtr(uint16_least indicatorIndex){
    REGISTER_CALL("Dem_IndicatorAttribGetFailureCycCtr");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_IndicatorDecrementBehaviourCounter */
void ISOLATE_Dem_DebCtrBaseClass_Dem_IndicatorDecrementBehaviourCounter(uint8 indicatorId,
                                                                        uint8 indicatorBehaviour){
    REGISTER_CALL("Dem_IndicatorDecrementBehaviourCounter");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_IndicatorAttribSetFailureCycCtr */
void ISOLATE_Dem_DebCtrBaseClass_Dem_IndicatorAttribSetFailureCycCtr(uint16_least indicatorIndex,
                                                                     uint8 failureCtr){
    REGISTER_CALL("Dem_IndicatorAttribSetFailureCycCtr");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_IndicatorAttribSetHealingCycCtr */
void ISOLATE_Dem_DebCtrBaseClass_Dem_IndicatorAttribSetHealingCycCtr(uint16_least indicatorIndex,
                                                                     uint8 healingCtr){
    REGISTER_CALL("Dem_IndicatorAttribSetHealingCycCtr");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_BitArrayIsBitSet */
Dem_boolean_least ISOLATE_Dem_DebCtrBaseClass_Dem_BitArrayIsBitSet(const uint32 * buffer,
                                                                   uint32 bit_position){
    REGISTER_CALL("Dem_BitArrayIsBitSet");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_BitArrayOverwriteBit */
void ISOLATE_Dem_DebCtrBaseClass_Dem_BitArrayOverwriteBit(uint32 * buffer,
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
boolean ISOLATE_Dem_DebCtrBaseClass_rba_DiagLib_Bit32IsBitSet(uint32 value,
                                                              uint8 bit_position){
    REGISTER_CALL("rba_DiagLib_Bit32IsBitSet");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function rba_DiagLib_Bit32OverwriteBit */
void ISOLATE_Dem_DebCtrBaseClass_rba_DiagLib_Bit32OverwriteBit(uint32 * buffer,
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
Dem_boolean_least ISOLATE_Dem_DebCtrBaseClass_Dem_NvMIsInvalidateAllNVMBlocksRequested(){
    REGISTER_CALL("Dem_NvMIsInvalidateAllNVMBlocksRequested");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function rba_DiagLib_MemUtils_MemSet */
void ISOLATE_Dem_DebCtrBaseClass_rba_DiagLib_MemUtils_MemSet(uint8 * xDest_pv,
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
void ISOLATE_Dem_DebCtrBaseClass_Dem_NvMClearBlockByInvalidate(Dem_NvmBlockIdType id){
    REGISTER_CALL("Dem_NvMClearBlockByInvalidate");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_NvmGetStatus */
Dem_NvmResultType ISOLATE_Dem_DebCtrBaseClass_Dem_NvmGetStatus(Dem_NvmBlockIdType id){
    REGISTER_CALL("Dem_NvmGetStatus");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function rba_DiagLib_Bit32GetBits */
uint32 ISOLATE_Dem_DebCtrBaseClass_rba_DiagLib_Bit32GetBits(uint32 value,
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
Dem_EnCoList ISOLATE_Dem_DebCtrBaseClass_Dem_EvtGetEnableConditions(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtGetEnableConditions");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function rba_DiagLib_Bit32OverwriteBits */
void ISOLATE_Dem_DebCtrBaseClass_rba_DiagLib_Bit32OverwriteBits(uint32 * value,
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
void ISOLATE_Dem_DebCtrBaseClass_Dem_EvtIncreaseGlobalInitMonitoringCounter(){
    REGISTER_CALL("Dem_EvtIncreaseGlobalInitMonitoringCounter");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtSetAnyInitMonitoring */
void ISOLATE_Dem_DebCtrBaseClass_Dem_EvtSetAnyInitMonitoring(Dem_InitMonitorReasonType reason){
    REGISTER_CALL("Dem_EvtSetAnyInitMonitoring");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtIsAnyInitMonitoringRequested */
boolean ISOLATE_Dem_DebCtrBaseClass_Dem_EvtIsAnyInitMonitoringRequested(){
    REGISTER_CALL("Dem_EvtIsAnyInitMonitoringRequested");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvtResetAnyInitMonitoring */
void ISOLATE_Dem_DebCtrBaseClass_Dem_EvtResetAnyInitMonitoring(){
    REGISTER_CALL("Dem_EvtResetAnyInitMonitoring");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtGetOperationCycleId */
uint8 ISOLATE_Dem_DebCtrBaseClass_Dem_EvtGetOperationCycleId(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtGetOperationCycleId");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvtGetAgingCycleId */
uint8 ISOLATE_Dem_DebCtrBaseClass_Dem_EvtGetAgingCycleId(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtGetAgingCycleId");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvtGetFailureCycleId */
uint8 ISOLATE_Dem_DebCtrBaseClass_Dem_EvtGetFailureCycleId(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtGetFailureCycleId");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function rba_DiagLib_MemUtils_MemCpy */
void ISOLATE_Dem_DebCtrBaseClass_rba_DiagLib_MemUtils_MemCpy(uint8 * xDest_p,
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
Dem_boolean_least ISOLATE_Dem_DebCtrBaseClass_Dem_EvtIsEventStoredInDistMem(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtIsEventStoredInDistMem");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_DistMemIsFull */
Dem_boolean_least ISOLATE_Dem_DebCtrBaseClass_Dem_DistMemIsFull(){
    REGISTER_CALL("Dem_DistMemIsFull");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvtGetDebounceMethodIndex */
uint8 ISOLATE_Dem_DebCtrBaseClass_Dem_EvtGetDebounceMethodIndex(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtGetDebounceMethodIndex");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvtGetDebounceParamSetIndex */
uint16 ISOLATE_Dem_DebCtrBaseClass_Dem_EvtGetDebounceParamSetIndex(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtGetDebounceParamSetIndex");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvtGetFDCThresholdReachedTOC */
Dem_boolean_least ISOLATE_Dem_DebCtrBaseClass_Dem_EvtGetFDCThresholdReachedTOC(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtGetFDCThresholdReachedTOC");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvtSetFDCThresholdReachedTOC */
void ISOLATE_Dem_DebCtrBaseClass_Dem_EvtSetFDCThresholdReachedTOC(Dem_EventIdType EventId,
                                                                  Dem_boolean_least setBit){
    REGISTER_CALL("Dem_EvtSetFDCThresholdReachedTOC");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_OpMoIsInitialized */
Dem_boolean_least ISOLATE_Dem_DebCtrBaseClass_Dem_OpMoIsInitialized(){
    REGISTER_CALL("Dem_OpMoIsInitialized");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_StoCoAreAllFulfilled */
boolean ISOLATE_Dem_DebCtrBaseClass_Dem_StoCoAreAllFulfilled(Dem_StoCoList storageConditionList){
    REGISTER_CALL("Dem_StoCoAreAllFulfilled");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvtGetStorageConditions */
Dem_StoCoList ISOLATE_Dem_DebCtrBaseClass_Dem_EvtGetStorageConditions(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtGetStorageConditions");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvtSetFDCThresholdReached */
void ISOLATE_Dem_DebCtrBaseClass_Dem_EvtSetFDCThresholdReached(Dem_EventIdType EventId,
                                                               Dem_boolean_least setBit){
    REGISTER_CALL("Dem_EvtSetFDCThresholdReached");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtIsSuspicious */
Dem_boolean_least ISOLATE_Dem_DebCtrBaseClass_Dem_EvtIsSuspicious(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtIsSuspicious");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_DebHandleDebounceAction__processBits */
Dem_boolean_least ISOLATE_Dem_DebCtrBaseClass_Dem_DebHandleDebounceAction__processBits(Dem_EventIdType EventId,
                                                                                       Dem_DebouncedActionType debAction){
    REGISTER_CALL("Dem_DebHandleDebounceAction__processBits");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EventIdIteratorNew */
void ISOLATE_Dem_DebCtrBaseClass_Dem_EventIdIteratorNew(Dem_EventIdIterator * it){
    REGISTER_CALL("Dem_EventIdIteratorNew");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EventIdIteratorIsValid */
Dem_boolean_least ISOLATE_Dem_DebCtrBaseClass_Dem_EventIdIteratorIsValid(const Dem_EventIdIterator * it){
    REGISTER_CALL("Dem_EventIdIteratorIsValid");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EventIdIteratorNext */
void ISOLATE_Dem_DebCtrBaseClass_Dem_EventIdIteratorNext(Dem_EventIdIterator * it){
    REGISTER_CALL("Dem_EventIdIteratorNext");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EventIdIteratorCurrent */
Dem_EventIdType ISOLATE_Dem_DebCtrBaseClass_Dem_EventIdIteratorCurrent(const Dem_EventIdIterator * it){
    REGISTER_CALL("Dem_EventIdIteratorCurrent");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_ClientSelectionType_invalidateSelectionResult */
void ISOLATE_Dem_DebCtrBaseClass_Dem_ClientSelectionType_invalidateSelectionResult(Dem_ClientSelectionType * selection){
    REGISTER_CALL("Dem_ClientSelectionType_invalidateSelectionResult");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_ClientClearMachine_SetMachineActiveClient */
void ISOLATE_Dem_DebCtrBaseClass_Dem_ClientClearMachine_SetMachineActiveClient(Dem_ClientIdType ClientId){
    REGISTER_CALL("Dem_ClientClearMachine_SetMachineActiveClient");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_ClientClearMachine_SetMachineState */
void ISOLATE_Dem_DebCtrBaseClass_Dem_ClientClearMachine_SetMachineState(uint8 state){
    REGISTER_CALL("Dem_ClientClearMachine_SetMachineState");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_NvMStartClear */
void ISOLATE_Dem_DebCtrBaseClass_Dem_NvMStartClear(){
    REGISTER_CALL("Dem_NvMStartClear");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EnvIsAnyTriggerSet */
Dem_boolean_least ISOLATE_Dem_DebCtrBaseClass_Dem_EnvIsAnyTriggerSet(Dem_TriggerType trigger2test){
    REGISTER_CALL("Dem_EnvIsAnyTriggerSet");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemIsEventMemLocIdValid */
Dem_boolean_least ISOLATE_Dem_DebCtrBaseClass_Dem_EvMemIsEventMemLocIdValid(uint16_least LocId){
    REGISTER_CALL("Dem_EvMemIsEventMemLocIdValid");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemGetEventMemStatusByPtr */
uint16_least ISOLATE_Dem_DebCtrBaseClass_Dem_EvMemGetEventMemStatusByPtr(const Dem_EvMemEventMemoryType * EventMemory){
    REGISTER_CALL("Dem_EvMemGetEventMemStatusByPtr");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemGetEventMemEventIdByPtr */
Dem_EventIdType ISOLATE_Dem_DebCtrBaseClass_Dem_EvMemGetEventMemEventIdByPtr(const Dem_EvMemEventMemoryType * EventMemory){
    REGISTER_CALL("Dem_EvMemGetEventMemEventIdByPtr");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemGetEventMemTimeIdByPtr */
uint32 ISOLATE_Dem_DebCtrBaseClass_Dem_EvMemGetEventMemTimeIdByPtr(const Dem_EvMemEventMemoryType * EventMemory){
    REGISTER_CALL("Dem_EvMemGetEventMemTimeIdByPtr");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemGetEventMemDtcStatusByPtr */
uint8 ISOLATE_Dem_DebCtrBaseClass_Dem_EvMemGetEventMemDtcStatusByPtr(const Dem_EvMemEventMemoryType * EventMemory){
    REGISTER_CALL("Dem_EvMemGetEventMemDtcStatusByPtr");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemGetEventMemFailureCounterByPtr */
uint8_least ISOLATE_Dem_DebCtrBaseClass_Dem_EvMemGetEventMemFailureCounterByPtr(const Dem_EvMemEventMemoryType * EventMemory){
    REGISTER_CALL("Dem_EvMemGetEventMemFailureCounterByPtr");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemGetEventMemOccurrenceCounterByPtr */
uint16_least ISOLATE_Dem_DebCtrBaseClass_Dem_EvMemGetEventMemOccurrenceCounterByPtr(const Dem_EvMemEventMemoryType * EventMemory){
    REGISTER_CALL("Dem_EvMemGetEventMemOccurrenceCounterByPtr");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemGetEventMemAgingCounterByPtr */
uint16_least ISOLATE_Dem_DebCtrBaseClass_Dem_EvMemGetEventMemAgingCounterByPtr(const Dem_EvMemEventMemoryType * EventMemory){
    REGISTER_CALL("Dem_EvMemGetEventMemAgingCounterByPtr");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemGetEventMemAgingCounterForTFSLCByPtr */
uint16_least ISOLATE_Dem_DebCtrBaseClass_Dem_EvMemGetEventMemAgingCounterForTFSLCByPtr(const Dem_EvMemEventMemoryType * EventMemory){
    REGISTER_CALL("Dem_EvMemGetEventMemAgingCounterForTFSLCByPtr");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemSetMaxFdcDuringCurrentCycleByPtr */
void ISOLATE_Dem_DebCtrBaseClass_Dem_EvMemSetMaxFdcDuringCurrentCycleByPtr(Dem_EvMemEventMemoryType * EventMemory,
                                                                           sint8 fdc){
    REGISTER_CALL("Dem_EvMemSetMaxFdcDuringCurrentCycleByPtr");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvMemSetMaxFdcSinceLastClearByPtr */
void ISOLATE_Dem_DebCtrBaseClass_Dem_EvMemSetMaxFdcSinceLastClearByPtr(Dem_EvMemEventMemoryType * EventMemory,
                                                                       sint8 fdc){
    REGISTER_CALL("Dem_EvMemSetMaxFdcSinceLastClearByPtr");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvMemGetMaxFdcDuringCurrentCycleByPtr */
sint8 ISOLATE_Dem_DebCtrBaseClass_Dem_EvMemGetMaxFdcDuringCurrentCycleByPtr(const Dem_EvMemEventMemoryType * EventMemory){
    REGISTER_CALL("Dem_EvMemGetMaxFdcDuringCurrentCycleByPtr");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemGetMaxFdcSinceLastClearByPtr */
sint8 ISOLATE_Dem_DebCtrBaseClass_Dem_EvMemGetMaxFdcSinceLastClearByPtr(const Dem_EvMemEventMemoryType * EventMemory){
    REGISTER_CALL("Dem_EvMemGetMaxFdcSinceLastClearByPtr");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemGetEventMemFreezeFrameCounterByPtr */
uint16_least ISOLATE_Dem_DebCtrBaseClass_Dem_EvMemGetEventMemFreezeFrameCounterByPtr(const Dem_EvMemEventMemoryType * EventMemory){
    REGISTER_CALL("Dem_EvMemGetEventMemFreezeFrameCounterByPtr");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemGetEventMemTriggerByPtr */
Dem_TriggerType ISOLATE_Dem_DebCtrBaseClass_Dem_EvMemGetEventMemTriggerByPtr(const Dem_EvMemEventMemoryType * EventMemory){
    REGISTER_CALL("Dem_EvMemGetEventMemTriggerByPtr");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemGetEventMemDataByPtr */
uint8 * ISOLATE_Dem_DebCtrBaseClass_Dem_EvMemGetEventMemDataByPtr(Dem_EvMemEventMemoryType * EventMemory){
    REGISTER_CALL("Dem_EvMemGetEventMemDataByPtr");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EvMemSetToEmpty */
uint16_least ISOLATE_Dem_DebCtrBaseClass_Dem_EvMemSetToEmpty(){
    REGISTER_CALL("Dem_EvMemSetToEmpty");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemIsStored */
Dem_boolean_least ISOLATE_Dem_DebCtrBaseClass_Dem_EvMemIsStored(uint16_least Status){
    REGISTER_CALL("Dem_EvMemIsStored");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemIsEmpty */
Dem_boolean_least ISOLATE_Dem_DebCtrBaseClass_Dem_EvMemIsEmpty(uint16_least Status){
    REGISTER_CALL("Dem_EvMemIsEmpty");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemGetShadowVisibility */
Dem_boolean_least ISOLATE_Dem_DebCtrBaseClass_Dem_EvMemGetShadowVisibility(){
    REGISTER_CALL("Dem_EvMemGetShadowVisibility");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemGetEventMemStartLocId */
uint16_least ISOLATE_Dem_DebCtrBaseClass_Dem_EvMemGetEventMemStartLocId(uint16_least MemId){
    REGISTER_CALL("Dem_EvMemGetEventMemStartLocId");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemGetEventMemEndLocId */
uint16_least ISOLATE_Dem_DebCtrBaseClass_Dem_EvMemGetEventMemEndLocId(uint16_least MemId){
    REGISTER_CALL("Dem_EvMemGetEventMemEndLocId");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemEventMemoryIteratorNew */
void ISOLATE_Dem_DebCtrBaseClass_Dem_EvMemEventMemoryIteratorNew(uint16_least * MemId){
    REGISTER_CALL("Dem_EvMemEventMemoryIteratorNew");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvMemEventMemoryIteratorIsValid */
Dem_boolean_least ISOLATE_Dem_DebCtrBaseClass_Dem_EvMemEventMemoryIteratorIsValid(const uint16_least * MemId){
    REGISTER_CALL("Dem_EvMemEventMemoryIteratorIsValid");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemEventMemoryIteratorNext */
void ISOLATE_Dem_DebCtrBaseClass_Dem_EvMemEventMemoryIteratorNext(uint16_least * MemId){
    REGISTER_CALL("Dem_EvMemEventMemoryIteratorNext");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_LibGetParamBool */
boolean ISOLATE_Dem_DebCtrBaseClass_Dem_LibGetParamBool(boolean parameter){
    REGISTER_CALL("Dem_LibGetParamBool");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_DtcIdFromEventId */
Dem_DtcIdType ISOLATE_Dem_DebCtrBaseClass_Dem_DtcIdFromEventId(Dem_EventIdType id){
    REGISTER_CALL("Dem_DtcIdFromEventId");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_ISO14229ByteIsTestFailed */
Dem_boolean_least ISOLATE_Dem_DebCtrBaseClass_Dem_ISO14229ByteIsTestFailed(uint8 self){
    REGISTER_CALL("Dem_ISO14229ByteIsTestFailed");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemIsEdgeTrigger */
Dem_boolean_least ISOLATE_Dem_DebCtrBaseClass_Dem_EvMemIsEdgeTrigger(uint16_least StatusOld,
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
void ISOLATE_Dem_DebCtrBaseClass_Dem_EnvSetTrigger(Dem_TriggerType * trigger,
                                                   Dem_TriggerType trigger2set){
    REGISTER_CALL("Dem_EnvSetTrigger");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtStoreTestFailedToNextOC */
Dem_boolean_least ISOLATE_Dem_DebCtrBaseClass_Dem_EvtStoreTestFailedToNextOC(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtStoreTestFailedToNextOC");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_LibGetParamUI8 */
uint8 ISOLATE_Dem_DebCtrBaseClass_Dem_LibGetParamUI8(uint8 parameter){
    REGISTER_CALL("Dem_LibGetParamUI8");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemGetRamStsMask */
uint16_least ISOLATE_Dem_DebCtrBaseClass_Dem_EvMemGetRamStsMask(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvMemGetRamStsMask");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvtGetAgingThreshold */
uint8 ISOLATE_Dem_DebCtrBaseClass_Dem_EvtGetAgingThreshold(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtGetAgingThreshold");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemGetCurrentAgingCycleCounterInt */
uint16_least ISOLATE_Dem_DebCtrBaseClass_Dem_EvMemGetCurrentAgingCycleCounterInt(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvMemGetCurrentAgingCycleCounterInt");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemIsAged */
Dem_boolean_least ISOLATE_Dem_DebCtrBaseClass_Dem_EvMemIsAged(Dem_EventIdType EventId,
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
uint16_least ISOLATE_Dem_DebCtrBaseClass_Dem_EvMemGetEventMemAgingCounter(uint16_least LocId){
    REGISTER_CALL("Dem_EvMemGetEventMemAgingCounter");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemSetEventMemAgingCounter */
void ISOLATE_Dem_DebCtrBaseClass_Dem_EvMemSetEventMemAgingCounter(uint16_least LocId,
                                                                  uint16_least AgingCounter){
    REGISTER_CALL("Dem_EvMemSetEventMemAgingCounter");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvMemGetEventMemAgingCounterForTFSLC */
uint16_least ISOLATE_Dem_DebCtrBaseClass_Dem_EvMemGetEventMemAgingCounterForTFSLC(uint16_least LocId){
    REGISTER_CALL("Dem_EvMemGetEventMemAgingCounterForTFSLC");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvtGetAgingThresholdForTFSLC */
uint8 ISOLATE_Dem_DebCtrBaseClass_Dem_EvtGetAgingThresholdForTFSLC(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtGetAgingThresholdForTFSLC");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemSetEventMemAgingCounterForTFSLC */
void ISOLATE_Dem_DebCtrBaseClass_Dem_EvMemSetEventMemAgingCounterForTFSLC(uint16_least LocId,
                                                                          uint16_least AgingCounterForTFSLC){
    REGISTER_CALL("Dem_EvMemSetEventMemAgingCounterForTFSLC");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtIsAgingAllowed */
Dem_boolean_least ISOLATE_Dem_DebCtrBaseClass_Dem_EvtIsAgingAllowed(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtIsAgingAllowed");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemGetEventMemStatus */
uint16_least ISOLATE_Dem_DebCtrBaseClass_Dem_EvMemGetEventMemStatus(uint16_least LocId){
    REGISTER_CALL("Dem_EvMemGetEventMemStatus");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvtIsDestPrimaryMemory */
Dem_boolean_least ISOLATE_Dem_DebCtrBaseClass_Dem_EvtIsDestPrimaryMemory(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtIsDestPrimaryMemory");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvtIsDestSecondaryMemory */
Dem_boolean_least ISOLATE_Dem_DebCtrBaseClass_Dem_EvtIsDestSecondaryMemory(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtIsDestSecondaryMemory");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemGetMemIdForDTCOrigin */
uint16_least ISOLATE_Dem_DebCtrBaseClass_Dem_EvMemGetMemIdForDTCOrigin(Dem_DTCOriginType DTCOrigin){
    REGISTER_CALL("Dem_EvMemGetMemIdForDTCOrigin");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemIsMemIdValid */
Dem_boolean_least ISOLATE_Dem_DebCtrBaseClass_Dem_EvMemIsMemIdValid(uint16_least MemId){
    REGISTER_CALL("Dem_EvMemIsMemIdValid");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvMemGetMemIdForEvent */
uint16_least ISOLATE_Dem_DebCtrBaseClass_Dem_EvMemGetMemIdForEvent(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvMemGetMemIdForEvent");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_DtcIsSuppressed */
Dem_boolean_least ISOLATE_Dem_DebCtrBaseClass_Dem_DtcIsSuppressed(Dem_DtcIdType dtcId){
    REGISTER_CALL("Dem_DtcIsSuppressed");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_DtcIsSuppressedDirectly */
Dem_boolean_least ISOLATE_Dem_DebCtrBaseClass_Dem_DtcIsSuppressedDirectly(Dem_DtcIdType dtcId){
    REGISTER_CALL("Dem_DtcIsSuppressedDirectly");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EventIdListIteratorNewFromDtcId */
void ISOLATE_Dem_DebCtrBaseClass_Dem_EventIdListIteratorNewFromDtcId(Dem_EventIdListIterator * it,
                                                                     Dem_DtcIdType dtcid){
    REGISTER_CALL("Dem_EventIdListIteratorNewFromDtcId");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EventIdListIteratorIsValid */
Dem_boolean_least ISOLATE_Dem_DebCtrBaseClass_Dem_EventIdListIteratorIsValid(const Dem_EventIdListIterator * it){
    REGISTER_CALL("Dem_EventIdListIteratorIsValid");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EventIdListIteratorNext */
void ISOLATE_Dem_DebCtrBaseClass_Dem_EventIdListIteratorNext(Dem_EventIdListIterator * it){
    REGISTER_CALL("Dem_EventIdListIteratorNext");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtIsSuppressed */
Dem_boolean_least ISOLATE_Dem_DebCtrBaseClass_Dem_EvtIsSuppressed(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtIsSuppressed");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EventIdListIteratorCurrent */
Dem_EventIdType ISOLATE_Dem_DebCtrBaseClass_Dem_EventIdListIteratorCurrent(const Dem_EventIdListIterator * it){
    REGISTER_CALL("Dem_EventIdListIteratorCurrent");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_DtcHasAlternativeDTCConfigured */
Dem_boolean_least ISOLATE_Dem_DebCtrBaseClass_Dem_DtcHasAlternativeDTCConfigured(Dem_DtcIdType dtcId){
    REGISTER_CALL("Dem_DtcHasAlternativeDTCConfigured");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvtIsDestMirrorMemory */
Dem_boolean_least ISOLATE_Dem_DebCtrBaseClass_Dem_EvtIsDestMirrorMemory(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtIsDestMirrorMemory");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_DtcIdGetFirstEventId */
Dem_EventIdType ISOLATE_Dem_DebCtrBaseClass_Dem_DtcIdGetFirstEventId(Dem_DtcIdType dtcid){
    REGISTER_CALL("Dem_DtcIdGetFirstEventId");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EventUsesOrigin */
Dem_boolean_least ISOLATE_Dem_DebCtrBaseClass_Dem_EventUsesOrigin(Dem_EventIdType eventId,
                                                                  Dem_DTCOriginType origin){
    REGISTER_CALL("Dem_EventUsesOrigin");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_ISO14229ByteSetTestFailed */
void ISOLATE_Dem_DebCtrBaseClass_Dem_ISO14229ByteSetTestFailed(uint8 * self,
                                                               Dem_boolean_least setOrReset){
    REGISTER_CALL("Dem_ISO14229ByteSetTestFailed");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_ISO14229ByteSetTestFailedTOC */
void ISOLATE_Dem_DebCtrBaseClass_Dem_ISO14229ByteSetTestFailedTOC(uint8 * self,
                                                                  Dem_boolean_least setOrReset){
    REGISTER_CALL("Dem_ISO14229ByteSetTestFailedTOC");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_ISO14229ByteSetTestFailedSLC */
void ISOLATE_Dem_DebCtrBaseClass_Dem_ISO14229ByteSetTestFailedSLC(uint8 * self,
                                                                  Dem_boolean_least setOrReset){
    REGISTER_CALL("Dem_ISO14229ByteSetTestFailedSLC");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_ISO14229ByteSetTestCompleteTOC */
void ISOLATE_Dem_DebCtrBaseClass_Dem_ISO14229ByteSetTestCompleteTOC(uint8 * self,
                                                                    Dem_boolean_least setOrReset){
    REGISTER_CALL("Dem_ISO14229ByteSetTestCompleteTOC");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_ISO14229ByteSetTestCompleteSLC */
void ISOLATE_Dem_DebCtrBaseClass_Dem_ISO14229ByteSetTestCompleteSLC(uint8 * self,
                                                                    Dem_boolean_least setOrReset){
    REGISTER_CALL("Dem_ISO14229ByteSetTestCompleteSLC");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_ISO14229ByteSetPendingDTC */
void ISOLATE_Dem_DebCtrBaseClass_Dem_ISO14229ByteSetPendingDTC(uint8 * self,
                                                               Dem_boolean_least setOrReset){
    REGISTER_CALL("Dem_ISO14229ByteSetPendingDTC");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_ISO14229ByteSetWarningIndicatorRequested */
void ISOLATE_Dem_DebCtrBaseClass_Dem_ISO14229ByteSetWarningIndicatorRequested(uint8 * self,
                                                                              Dem_boolean_least setOrReset){
    REGISTER_CALL("Dem_ISO14229ByteSetWarningIndicatorRequested");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtGetIsoByte */
Dem_UdsStatusByteType ISOLATE_Dem_DebCtrBaseClass_Dem_EvtGetIsoByte(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtGetIsoByte");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_ISO14229ByteIsTestCompleteTOC */
Dem_boolean_least ISOLATE_Dem_DebCtrBaseClass_Dem_ISO14229ByteIsTestCompleteTOC(uint8 self){
    REGISTER_CALL("Dem_ISO14229ByteIsTestCompleteTOC");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_ISO14229ByteIsTestFailedTOC */
Dem_boolean_least ISOLATE_Dem_DebCtrBaseClass_Dem_ISO14229ByteIsTestFailedTOC(uint8 self){
    REGISTER_CALL("Dem_ISO14229ByteIsTestFailedTOC");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_ISO14229ByteSetConfirmedDTC */
void ISOLATE_Dem_DebCtrBaseClass_Dem_ISO14229ByteSetConfirmedDTC(uint8 * self,
                                                                 Dem_boolean_least setOrReset){
    REGISTER_CALL("Dem_ISO14229ByteSetConfirmedDTC");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtGetCustIsoByte */
Dem_UdsStatusByteType ISOLATE_Dem_DebCtrBaseClass_Dem_EvtGetCustIsoByte(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtGetCustIsoByte");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvtSt_CustomInitialization */
void ISOLATE_Dem_DebCtrBaseClass_Dem_EvtSt_CustomInitialization(Dem_EventIdType EventId,
                                                                Dem_UdsStatusByteType * statusByte){
    REGISTER_CALL("Dem_EvtSt_CustomInitialization");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtSt_CustomFailed */
void ISOLATE_Dem_DebCtrBaseClass_Dem_EvtSt_CustomFailed(Dem_EventIdType EventId,
                                                        Dem_UdsStatusByteType * statusByte){
    REGISTER_CALL("Dem_EvtSt_CustomFailed");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtSt_CustomPassed */
void ISOLATE_Dem_DebCtrBaseClass_Dem_EvtSt_CustomPassed(Dem_EventIdType EventId,
                                                        Dem_UdsStatusByteType * statusByte){
    REGISTER_CALL("Dem_EvtSt_CustomPassed");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtSt_CustomResetEventStatus */
void ISOLATE_Dem_DebCtrBaseClass_Dem_EvtSt_CustomResetEventStatus(Dem_EventIdType EventId,
                                                                  Dem_UdsStatusByteType * statusByte){
    REGISTER_CALL("Dem_EvtSt_CustomResetEventStatus");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtSt_CustomEvtAvailable */
void ISOLATE_Dem_DebCtrBaseClass_Dem_EvtSt_CustomEvtAvailable(Dem_EventIdType EventId,
                                                              Dem_UdsStatusByteType * statusByte){
    REGISTER_CALL("Dem_EvtSt_CustomEvtAvailable");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtSt_CustomEvtNotAvailable */
void ISOLATE_Dem_DebCtrBaseClass_Dem_EvtSt_CustomEvtNotAvailable(Dem_EventIdType EventId,
                                                                 Dem_UdsStatusByteType * statusByte){
    REGISTER_CALL("Dem_EvtSt_CustomEvtNotAvailable");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtSt_CustomClear */
void ISOLATE_Dem_DebCtrBaseClass_Dem_EvtSt_CustomClear(Dem_EventIdType EventId,
                                                       Dem_UdsStatusByteType * statusByte){
    REGISTER_CALL("Dem_EvtSt_CustomClear");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtSt_CustomClear_OnlyThisCycleAndReadiness */
void ISOLATE_Dem_DebCtrBaseClass_Dem_EvtSt_CustomClear_OnlyThisCycleAndReadiness(Dem_EventIdType EventId,
                                                                                 Dem_UdsStatusByteType * statusByte){
    REGISTER_CALL("Dem_EvtSt_CustomClear_OnlyThisCycleAndReadiness");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtSt_CustomNewOperationCycle */
void ISOLATE_Dem_DebCtrBaseClass_Dem_EvtSt_CustomNewOperationCycle(Dem_EventIdType EventId,
                                                                   Dem_UdsStatusByteType * statusByte){
    REGISTER_CALL("Dem_EvtSt_CustomNewOperationCycle");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtSt_CustomIndicatorOn */
void ISOLATE_Dem_DebCtrBaseClass_Dem_EvtSt_CustomIndicatorOn(Dem_EventIdType EventId,
                                                             Dem_UdsStatusByteType * statusByte){
    REGISTER_CALL("Dem_EvtSt_CustomIndicatorOn");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtSt_CustomIndicatorOff */
void ISOLATE_Dem_DebCtrBaseClass_Dem_EvtSt_CustomIndicatorOff(Dem_EventIdType EventId,
                                                              Dem_UdsStatusByteType * statusByte){
    REGISTER_CALL("Dem_EvtSt_CustomIndicatorOff");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtSt_CustomDTCSettingOn */
void ISOLATE_Dem_DebCtrBaseClass_Dem_EvtSt_CustomDTCSettingOn(Dem_EventIdType EventId,
                                                              Dem_UdsStatusByteType * statusByte){
    REGISTER_CALL("Dem_EvtSt_CustomDTCSettingOn");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtSt_CustomConfirmation */
void ISOLATE_Dem_DebCtrBaseClass_Dem_EvtSt_CustomConfirmation(Dem_EventIdType EventId,
                                                              Dem_UdsStatusByteType * statusByte){
    REGISTER_CALL("Dem_EvtSt_CustomConfirmation");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtSt_CustomAging */
void ISOLATE_Dem_DebCtrBaseClass_Dem_EvtSt_CustomAging(Dem_EventIdType EventId,
                                                       Dem_UdsStatusByteType * statusByte){
    REGISTER_CALL("Dem_EvtSt_CustomAging");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtSt_CustomSetImmediateAging */
void ISOLATE_Dem_DebCtrBaseClass_Dem_EvtSt_CustomSetImmediateAging(Dem_EventIdType EventId,
                                                                   Dem_UdsStatusByteType * statusByte){
    REGISTER_CALL("Dem_EvtSt_CustomSetImmediateAging");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtSt_CustomDisplacement */
void ISOLATE_Dem_DebCtrBaseClass_Dem_EvtSt_CustomDisplacement(Dem_EventIdType EventId,
                                                              Dem_UdsStatusByteType * statusByte){
    REGISTER_CALL("Dem_EvtSt_CustomDisplacement");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtSt_CustomEvCombinationReplacement */
void ISOLATE_Dem_DebCtrBaseClass_Dem_EvtSt_CustomEvCombinationReplacement(Dem_EventIdType EventId,
                                                                          Dem_UdsStatusByteType * statusByte){
    REGISTER_CALL("Dem_EvtSt_CustomEvCombinationReplacement");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtSt_CustomSetPending */
void ISOLATE_Dem_DebCtrBaseClass_Dem_EvtSt_CustomSetPending(Dem_EventIdType EventId,
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
Dem_boolean_least ISOLATE_Dem_DebCtrBaseClass_Dem_ISO14229ByteIsPendingDTC(uint8 self){
    REGISTER_CALL("Dem_ISO14229ByteIsPendingDTC");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_getDebCtrBaseClassFailedThreshold */
sint16 ISOLATE_Dem_DebCtrBaseClass_Dem_getDebCtrBaseClassFailedThreshold(const void * paramSet,
                                                                         uint16 paramIndex){
    REGISTER_CALL("Dem_getDebCtrBaseClassFailedThreshold");

    IF_INSTANCE("default") {
        CHECK_U_INT(paramIndex, 0);
        return 5;
    }

    IF_INSTANCE("01") {
        CHECK_U_INT(paramIndex, 0);
        return 2;
    }

    IF_INSTANCE("02") {
        CHECK_U_INT(paramIndex, 0);
        return 3;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_getDebCtrBaseClassPassedThreshold */
sint16 ISOLATE_Dem_DebCtrBaseClass_Dem_getDebCtrBaseClassPassedThreshold(const void * paramSet,
                                                                         uint16 paramIndex){
    REGISTER_CALL("Dem_getDebCtrBaseClassPassedThreshold");

    IF_INSTANCE("default") {
        CHECK_U_INT(paramIndex, 0);
        return 3;
    }

    IF_INSTANCE("01") {
        CHECK_U_INT(paramIndex, 0);
        return 5;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_getDebCtrBaseClassJumpDownValue */
sint16 ISOLATE_Dem_DebCtrBaseClass_Dem_getDebCtrBaseClassJumpDownValue(const void * paramSet,
                                                                       uint16 paramIndex){
    REGISTER_CALL("Dem_getDebCtrBaseClassJumpDownValue");

    IF_INSTANCE("default") {
        CHECK_U_INT(paramIndex, 0);
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_getDebCtrBaseClassJumpUpValue */
sint16 ISOLATE_Dem_DebCtrBaseClass_Dem_getDebCtrBaseClassJumpUpValue(const void * paramSet,
                                                                     uint16 paramIndex){
    REGISTER_CALL("Dem_getDebCtrBaseClassJumpUpValue");

    IF_INSTANCE("default") {
        CHECK_U_INT(paramIndex, 0);
        return 7;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_getDebCtrBaseClassIsJumpDown */
boolean ISOLATE_Dem_DebCtrBaseClass_Dem_getDebCtrBaseClassIsJumpDown(const void * paramSet,
                                                                     uint16 paramIndex){
    REGISTER_CALL("Dem_getDebCtrBaseClassIsJumpDown");

    IF_INSTANCE("default") {
        return 0;
    }

    IF_INSTANCE("true") {
        CHECK_U_INT(paramIndex, 0);
        return TRUE;
    }

    IF_INSTANCE("false") {
        CHECK_U_INT(paramIndex, 0);
        return FALSE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_getDebCtrBaseClassIsJumpUp */
boolean ISOLATE_Dem_DebCtrBaseClass_Dem_getDebCtrBaseClassIsJumpUp(const void * paramSet,
                                                                   uint16 paramIndex){
    REGISTER_CALL("Dem_getDebCtrBaseClassIsJumpUp");

    IF_INSTANCE("default") {
        return 0;
    }

    IF_INSTANCE("true") {
        CHECK_U_INT(paramIndex, 0);
        return TRUE;
    }

    IF_INSTANCE("false") {
        CHECK_U_INT(paramIndex, 0);
        return FALSE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EvtGetDebounceLevel */
sint16 ISOLATE_Dem_DebCtrBaseClass_Dem_EvtGetDebounceLevel(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtGetDebounceLevel");

    IF_INSTANCE("default") {
        CHECK_U_INT(EventId, 3);
        return 3;
    }

    IF_INSTANCE("01") {
        CHECK_U_INT(EventId, 3);
        return 2;
    }

    IF_INSTANCE("02") {
        CHECK_U_INT(EventId, 3);
        return 1;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EvtGetLastReportedEvent */
Dem_EventStatusType ISOLATE_Dem_DebCtrBaseClass_Dem_EvtGetLastReportedEvent(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtGetLastReportedEvent");

    IF_INSTANCE("default") {
        CHECK_U_INT(EventId, 3);
        return 0;
    }

    IF_INSTANCE("PREPASSED") {
        CHECK_U_INT(EventId, 3);
        return DEM_EVENT_STATUS_PREPASSED;
    }

    IF_INSTANCE("PREFAILED") {
        CHECK_U_INT(EventId, 3);
        return DEM_EVENT_STATUS_PREFAILED;
    }


    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EvtSetDebounceLevel */
void ISOLATE_Dem_DebCtrBaseClass_Dem_EvtSetDebounceLevel(Dem_EventIdType EventId,
                                                         sint16 debounceLevel){
    REGISTER_CALL("Dem_EvtSetDebounceLevel");

    IF_INSTANCE("default") {
        CHECK_U_INT(EventId, 3);
        CHECK_U_INT(debounceLevel, 2);
        return;
    }

    IF_INSTANCE("01") {
        CHECK_U_INT(EventId, 3);
        CHECK_U_INT(debounceLevel, 3);
        return;
    }

    IF_INSTANCE("02") {
        CHECK_U_INT(EventId, 3);
        CHECK_U_INT(debounceLevel, 5);
        return;
    }

    IF_INSTANCE("03") {
        CHECK_U_INT(EventId, 3);
        CHECK_U_INT(debounceLevel, 1);
        return;
    }
    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* pragma qas cantata testscript end */
/*****************************************************************************/
/* End of test script                                                        */
/*****************************************************************************/
