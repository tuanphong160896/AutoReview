/*****************************************************************************/
/*                            Cantata Test Script                            */
/*****************************************************************************/
/*
 *    Filename: test_Dem_ConsisChk_Var1.c
 *    Author: LPA1HC
 *    Generated on: 01-Aug-2018 10:29:09
 *    Generated from: Dem_ConsisChk.c
 */
/*****************************************************************************/
/* Environment Definition                                                    */
/*****************************************************************************/

#define TEST_SCRIPT_GENERATOR 2

/* Include files from software under test */
#include "Dem_ConsisChk.h"
#include "Dem_Bfm.h"
#include "Dem_Mapping.h"
#define DEM_START_SEC_ROM_CODE
#include "Dem_Cfg_MemMap.h"

//#define 0 0 /* Default value of variables & stub returns */

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
extern void ACCESS_FUNCTION_Dem_ConsisChk_Dem_ConsistencyCheckForFailedDTC();
extern void Dem_ConsistencyCheckForDTC();
extern void ACCESS_FUNCTION_Dem_ConsisChk_Dem_ConsistencyCheckForConfirmedDTC();
extern void ACCESS_FUNCTION_Dem_ConsisChk_Dem_StatusByteConsistencyCheck(uint16_least LocId, uint16_least Status);

/* Global data */
Dem_EvMemEventMemoryType Dem_EvMemEventMemory[24U];

/* Expected variables for global data */
Dem_EvMemEventMemoryType expected_Dem_EvMemEventMemory[24U];

/* This function initialises global data to default values. This function       */
/* is called by every test case so must not contain test case specific settings */
static void initialise_global_data(){
    INITIALISE(Dem_EvMemEventMemory);
}

/* This function copies the global data settings into expected variables for */
/* use in check_global_data(). It is called by every test case so must not   */
/* contain test case specific settings.                                      */
static void initialise_expected_global_data(){
    COPY_TO_EXPECTED(Dem_EvMemEventMemory, expected_Dem_EvMemEventMemory);
}

/* This function checks global data against the expected values. */
static void check_global_data(){
    CHECK_MEMORY("Dem_EvMemEventMemory", Dem_EvMemEventMemory, expected_Dem_EvMemEventMemory, sizeof(expected_Dem_EvMemEventMemory));
}

/* Prototypes for test functions */
void run_tests();
void test_Dem_ConsistencyCheckForFailedDTC_GetMaxTimeStamp(int);
void test_Dem_ConsistencyCheckForFailedDTC_NotValidDctId(int);
void test_Dem_ConsistencyCheckForDTC_Failed_Confirmed(int);
void test_Dem_ConsistencyCheckForDTC_Valid(int);
void test_Dem_ConsistencyCheckForConfirmedDTC_GetMaxTimeStamp(int);
void test_Dem_ConsistencyCheckForConfirmedDTC_NotValid(int);

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
    OPEN_LOG("test_Dem_ConsisChk_Var1.ctr", false, 100);
    START_SCRIPT("Dem_ConsisChk", true);

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
    test_Dem_ConsistencyCheckForFailedDTC_GetMaxTimeStamp(1);
    test_Dem_ConsistencyCheckForFailedDTC_NotValidDctId(1);
    test_Dem_ConsistencyCheckForDTC_Failed_Confirmed(1);
    test_Dem_ConsistencyCheckForDTC_Valid(1);
    test_Dem_ConsistencyCheckForConfirmedDTC_GetMaxTimeStamp(1);
    test_Dem_ConsistencyCheckForConfirmedDTC_NotValid(1);

    rule_set("*", "*");
    EXPORT_COVERAGE("test_Dem_ConsisChk_Var1.cov", cppca_export_replace);
}

/*****************************************************************************/
/* Test Cases                                                                */
/*****************************************************************************/

void test_Dem_ConsistencyCheckForFailedDTC_GetMaxTimeStamp(int doIt){
if (doIt) {
    /* Compilation flag - n/a */

    /* Test Method - EP */

    /* Tester define */

    /* Test case data declarations */

    /* Set global data */
    initialise_global_data();
    Dem_EvMemEventMemory[0].TimeId = 0x05;

    /* Set expected values for global data checks */
    initialise_expected_global_data();


    START_TEST("test_Dem_ConsistencyCheckForFailedDTC_GetMaxTimeStamp",
               " Check whether:"
               " - The maximum failed time in eventId is updated by the returned value of Dem_EvMemGetEventMemEventId() function "
               " - Dem_EvMemGenSetDtcByOccIndex() function is invoked "
               " In case:"
               " The first loop: "
               " - The returned value of Dem_EvMemIsEmpty() function is FALSE (line 32) "
               " - The event status with DEM_EVMEM_STSMASK_TESTFAILED macro is not zero (line 35)"
               " - Time Id is greater than maximum failed time in eventId (line 38) "
               " The second loop: "
               " - Time Id is less than maximum failed time in eventId (line 38) "
               " The third loop: "
               " - The event status with DEM_EVMEM_STSMASK_TESTFAILED macro is zero (line 35) "
               " The fourth loop: "
               " - The returned value of Dem_EvMemIsEmpty() function is TRUE (line 32) "
               " The fifth loop: "
               " - The returned value of Dem_EvMemEventMemoryLocIteratorIsValid() function is FALSE and the loop is end  (line 25) "
               " - The maximum failed time in eventId is not zero and the returned value of Dem_isDtcIdValid() function is True (line 51) ");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_EvMemEventMemoryLocIteratorNew#TC_01_01;"
                       "Dem_EvMemEventMemoryLocIteratorIsValid#TC_01_01;"
                       "Dem_EvMemGetEventMemStatus#TC_01_01;"
                       "Dem_EvMemIsEmpty#TC_01_01;"
                       "Dem_EvMemGetEventMemEventId#TC_01_01;"
                       "Dem_EvMemEventMemoryLocIteratorNext#TC_01_01;"
                       "Dem_EvMemEventMemoryLocIteratorIsValid#TC_01_01;"
                       "Dem_EvMemGetEventMemStatus#TC_01_01_A;"
                       "Dem_EvMemIsEmpty#TC_01_01_A;"
                       "Dem_EvMemEventMemoryLocIteratorNext#TC_01_01;"
                       "Dem_EvMemEventMemoryLocIteratorIsValid#TC_01_01;"
                       "Dem_EvMemGetEventMemStatus#TC_01_01_B;"
                       "Dem_EvMemIsEmpty#TC_01_01_B;"
                       "Dem_EvMemEventMemoryLocIteratorNext#TC_01_01;"
                       "Dem_EvMemEventMemoryLocIteratorIsValid#TC_01_01;"
                       "Dem_EvMemGetEventMemStatus#TC_01_01_B;"
                       "Dem_EvMemIsEmpty#TC_01_01_C;"
                       "Dem_EvMemEventMemoryLocIteratorNext#TC_01_01;"
                       "Dem_EvMemEventMemoryLocIteratorIsValid#TC_01_01_B;"
                       "Dem_DtcIdFromEventId#TC_01_01;"
                       "Dem_isDtcIdValid#TC_01_01;"
                       "Dem_EvMemGenSetDtcByOccIndex#TC_01_01;");

            /* Call SUT */
            ACCESS_FUNCTION(Dem_ConsisChk, Dem_ConsistencyCheckForFailedDTC)();

            /* Test case checks */
            /* Expected Result
             * - The maximum failed time in eventId is updated by the returned value of Dem_EvMemGetEventMemEventId() function;
             * - Dem_EvMemGenSetDtcByOccIndex() function is invoked;
             */
            /* Checks on global data */
            check_global_data();
            /* GUID
             * - {B87E0CC9-390E-4063-98ED-CFA9232C2268};
             * - {B14485F8-2459-425b-8BE6-C2814F01AB40};
             * - {BA821461-98FD-451a-B763-862E752EAD07};
             */
        END_CALLS();
    END_TEST();
}}
void test_Dem_ConsistencyCheckForFailedDTC_NotValidDctId(int doIt){
if (doIt) {
    /* Test Method - EP */

    /* Tester define */

    /* Test case data declarations */

    /* Set global data */
    initialise_global_data();

    /* Set expected values for global data checks */
    initialise_expected_global_data();


    START_TEST("test_Dem_ConsistencyCheckForFailedDTC_NotValidDctId",
               " Check whether the Dem_EvMemGenSetDtcByOccIndex() function is not invoked "
               " In case: "
               " - The returned value of Dem_EvMemEventMemoryLocIteratorIsValid() function is FALSE and the loop is end  (line 25) "
               " - The maximum failed time in eventId is zero (line 51) ");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_EvMemEventMemoryLocIteratorNew#TC_01_01;"
                       "Dem_EvMemEventMemoryLocIteratorIsValid#TC_01_01_B;"
                       "Dem_DtcIdFromEventId#TC_01_02;");

            /* Call SUT */
            ACCESS_FUNCTION(Dem_ConsisChk, Dem_ConsistencyCheckForFailedDTC)();

            /* Test case checks */
            /* Expected Result - The Dem_EvMemGenSetDtcByOccIndex() function is not invoked */
            /* Checks on global data */
            check_global_data();
            /* GUID - {B14485F8-2459-425b-8BE6-C2814F01AB40} */
        END_CALLS();
    END_TEST();
}}

void test_Dem_ConsistencyCheckForDTC_Failed_Confirmed(int doIt){
if (doIt) {
    /* Test Method - EP */

    /* Tester define */

    /* Test case data declarations */

    /* Set global data */
    initialise_global_data();

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_ConsistencyCheckForDTC_Failed_Confirmed",
               " Check whether the Dem_ConsistencyCheckForFailedDTC() and Dem_ConsistencyCheckForConfirmedDTC() functions are invoked "
               " In case: The returned value of Dem_isDtcIdValid() function is FALSE (line 103, line 109) ");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_EvMemGenGetLastFailedDtcFromGenNvData#TC_02_01;"
                       "Dem_isDtcIdValid#TC_02_01;"
                       "Dem_ConsistencyCheckForFailedDTC#TC_02_01;"
                       "Dem_EvMemGenGetLastConfirmedDtcFromGenNvData#TC_02_01;"
                       "Dem_isDtcIdValid#TC_02_01_A;"
                       "Dem_ConsistencyCheckForConfirmedDTC#TC_02_01;");

            /* Call SUT */
            Dem_ConsistencyCheckForDTC();

            /* Test case checks */
            /* Expected Result - The Dem_ConsistencyCheckForFailedDTC() and Dem_ConsistencyCheckForConfirmedDTC() functions are invoked */
            /* Checks on global data */
            check_global_data();
            /* GUID
             * - {D2B27857-10CC-4980-95F0-A85ABEFA200B};
             * - {2B2BD7AC-80A5-4a47-BD2E-9A8AAAB32891};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_ConsistencyCheckForDTC_Valid(int doIt){
if (doIt) {
    /* Test Method - EP */

    /* Tester define */

    /* Test case data declarations */

    /* Set global data */
    initialise_global_data();

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_ConsistencyCheckForDTC_Valid",
               " Check whether the Dem_ConsistencyCheckForFailedDTC() and Dem_ConsistencyCheckForConfirmedDTC() functions are not invoked "
               " In case: The returned value of Dem_isDtcIdValid() function is TRUE (line 103, line 109) ");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_EvMemGenGetLastFailedDtcFromGenNvData#TC_02_02;"
                       "Dem_isDtcIdValid#TC_02_02;"
                       "Dem_EvMemGenGetLastConfirmedDtcFromGenNvData#TC_02_02;"
                       "Dem_isDtcIdValid#TC_02_02_A;");

            /* Call SUT */
            Dem_ConsistencyCheckForDTC();

            /* Test case checks */
            /* Expected Result - The Dem_ConsistencyCheckForFailedDTC() and Dem_ConsistencyCheckForConfirmedDTC() functions are not invoked */
            /* Checks on global data */
            check_global_data();
            /* GUID
             * - {Not Applicable};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_ConsistencyCheckForConfirmedDTC_GetMaxTimeStamp(int doIt){
if (doIt) {
    /* Test Method - EP */

    /* Tester define */

    /* Test case data declarations */

    /* Set global data */
    initialise_global_data();
    Dem_EvMemEventMemory[0].TimeId = 0x20;

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_ConsistencyCheckForConfirmedDTC_GetMaxTimeStamp",
               " Check whether:"
               " - The maximum confirmed time in eventId is updated by the returned value of Dem_EvMemGetEventMemEventId() function "
               " - Dem_EvMemGenSetDtcByOccIndex() function is invoked  "
               " In case:"
               " The first loop: "
               " - The returned value of Dem_EvMemIsEmpty() function is FALSE (line 73) "
               " - The event status with DEM_EVMEM_STSMASK_CONFIRMED macro is not zero (line 76)"
               " - Time Id is greater than maximum confirmed time in eventId (line 79) "
               " The second loop: "
               " - Time Id is less than maximum confirmed time in eventId (line 79) "
               " The third loop: "
               " - The event status with DEM_EVMEM_STSMASK_CONFIRMED macro is zero (line 76) "
               " The fourth loop: "
               " - The returned value of Dem_EvMemIsEmpty() function is TRUE (line 73) "
               " The fifth loop: "
               " - The returned value of Dem_EvMemEventMemoryLocIteratorIsValid() function is FALSE and the loop is end  (line 65) "
               " - The maximum confirmed time in eventId is not zero and the returned value of Dem_isDtcIdValid() function is True (line 93) ");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_EvMemEventMemoryLocIteratorNew#TC_01_01;"
                       "Dem_EvMemEventMemoryLocIteratorIsValid#TC_01_01;"
                       "Dem_EvMemGetEventMemStatus#TC_03_01;"
                       "Dem_EvMemIsEmpty#TC_03_01;"
                       "Dem_EvMemGetEventMemEventId#TC_01_01;"
                       "Dem_EvMemEventMemoryLocIteratorNext#TC_01_01;"
                       "Dem_EvMemEventMemoryLocIteratorIsValid#TC_01_01;"
                       "Dem_EvMemGetEventMemStatus#TC_03_01;"
                       "Dem_EvMemIsEmpty#TC_03_01;"
                       "Dem_EvMemEventMemoryLocIteratorNext#TC_01_01;"
                       "Dem_EvMemEventMemoryLocIteratorIsValid#TC_01_01;"
                       "Dem_EvMemGetEventMemStatus#TC_01_01_B;"
                       "Dem_EvMemIsEmpty#TC_01_01_B;"
                       "Dem_EvMemEventMemoryLocIteratorNext#TC_01_01;"
                       "Dem_EvMemEventMemoryLocIteratorIsValid#TC_01_01;"
                       "Dem_EvMemGetEventMemStatus#TC_01_01_B;"
                       "Dem_EvMemIsEmpty#TC_01_01_C;"
                       "Dem_EvMemEventMemoryLocIteratorNext#TC_01_01;"
                       "Dem_EvMemEventMemoryLocIteratorIsValid#TC_01_01_B;"
                       "Dem_DtcIdFromEventId#TC_01_01;"
                       "Dem_isDtcIdValid#TC_01_01;"
                       "Dem_EvMemGenSetDtcByOccIndex#TC_03_01;");

            /* Call SUT */
            ACCESS_FUNCTION(Dem_ConsisChk, Dem_ConsistencyCheckForConfirmedDTC)();

            /* Test case checks */
            /* Expected Result
             * - The maximum confirmed time in eventId is updated by the returned value of Dem_EvMemGetEventMemEventId() function;
             * - Dem_EvMemGenSetDtcByOccIndex() function is invoked;
             */
            /* Checks on global data */
            check_global_data();
            /* GUID
             * - {B87E0CC9-390E-4063-98ED-CFA9232C2268};
             * - {374E4D8C-13EF-4995-8EA4-9AD59F497603};
             * - {D6A0C64D-318F-4c35-85A8-05B0A4DB85AE};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_ConsistencyCheckForConfirmedDTC_NotValid(int doIt){
if (doIt) {
    /* Test Method - EP */

    /* Tester define */

    /* Test case data declarations */

    /* Set global data */
    initialise_global_data();
    Dem_EvMemEventMemory[0].TimeId = 0x20;

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_ConsistencyCheckForConfirmedDTC_NotValid",
               " Check whether the Dem_EvMemGenSetDtcByOccIndex() function is not invoked  "
               " In case: The returned value of Dem_isDtcIdValid() function is FALSE (line 93) ");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_EvMemEventMemoryLocIteratorNew#TC_01_01;"
                       "Dem_EvMemEventMemoryLocIteratorIsValid#TC_01_01;"
                       "Dem_EvMemGetEventMemStatus#TC_03_01;"
                       "Dem_EvMemIsEmpty#TC_03_01;"
                       "Dem_EvMemGetEventMemEventId#TC_01_01;"
                       "Dem_EvMemEventMemoryLocIteratorNext#TC_01_01;"
                       "Dem_EvMemEventMemoryLocIteratorIsValid#TC_01_01;"
                       "Dem_EvMemGetEventMemStatus#TC_03_01;"
                       "Dem_EvMemIsEmpty#TC_03_01;"
                       "Dem_EvMemEventMemoryLocIteratorNext#TC_01_01;"
                       "Dem_EvMemEventMemoryLocIteratorIsValid#TC_01_01;"
                       "Dem_EvMemGetEventMemStatus#TC_01_01_B;"
                       "Dem_EvMemIsEmpty#TC_01_01_B;"
                       "Dem_EvMemEventMemoryLocIteratorNext#TC_01_01;"
                       "Dem_EvMemEventMemoryLocIteratorIsValid#TC_01_01;"
                       "Dem_EvMemGetEventMemStatus#TC_01_01_B;"
                       "Dem_EvMemIsEmpty#TC_01_01_C;"
                       "Dem_EvMemEventMemoryLocIteratorNext#TC_01_01;"
                       "Dem_EvMemEventMemoryLocIteratorIsValid#TC_01_01_B;"
                       "Dem_DtcIdFromEventId#TC_01_01;"
                       "Dem_isDtcIdValid#TC_03_01;");

            /* Call SUT */
            ACCESS_FUNCTION(Dem_ConsisChk, Dem_ConsistencyCheckForConfirmedDTC)();

            /* Test case checks */
            /* Expected Result - The Dem_EvMemGenSetDtcByOccIndex() function is not invoked */
            /* Checks on global data */
            check_global_data();
            /* GUID
             * - {B87E0CC9-390E-4063-98ED-CFA9232C2268};
             * - {374E4D8C-13EF-4995-8EA4-9AD59F497603};
             * - {D6A0C64D-318F-4c35-85A8-05B0A4DB85AE};
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
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Stub for function NvM_GetErrorStatus */
Std_ReturnType NvM_GetErrorStatus(NvM_BlockIdType BlockId,
                                  NvM_RequestResultType * RequestResultPtr){
    REGISTER_CALL("NvM_GetErrorStatus");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
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
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Stub for function Dem_IsInitMonitorForEventRequested */
boolean Dem_IsInitMonitorForEventRequested(Dem_EventIdType EventId,
                                           Dem_InitMonitorReasonType * InitMonitorReason){
    REGISTER_CALL("Dem_IsInitMonitorForEventRequested");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Stub for function Dem_EvBuffIsEventPending */
Dem_boolean_least Dem_EvBuffIsEventPending(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvBuffIsEventPending");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
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
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
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
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Stub for function Dem_EvMemGetEventMemoryStatusOfEvent */
uint16_least Dem_EvMemGetEventMemoryStatusOfEvent(Dem_EventIdType EventId,
                                                  uint16_least MemId){
    REGISTER_CALL("Dem_EvMemGetEventMemoryStatusOfEvent");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Stub for function Dem_EvMemGetEventMemoryLocIdOfEvent */
uint16_least Dem_EvMemGetEventMemoryLocIdOfEvent(Dem_EventIdType EventId,
                                                 uint16_least MemId){
    REGISTER_CALL("Dem_EvMemGetEventMemoryLocIdOfEvent");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Stub for function Dem_EvMemGetReaderCopyOfEvent */
Std_ReturnType Dem_EvMemGetReaderCopyOfEvent(Dem_EvMemEventMemoryType * ReaderCopy,
                                             Dem_EventIdType EventId,
                                             uint16_least MemId){
    REGISTER_CALL("Dem_EvMemGetReaderCopyOfEvent");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Stub for function Dem_EvMemGetMemoryLocIdOfDtcAndOriginWithVisibility */
uint16_least Dem_EvMemGetMemoryLocIdOfDtcAndOriginWithVisibility(Dem_DtcIdType DtcId,
                                                                 Dem_DTCOriginType DTCOrigin,
                                                                 Dem_boolean_least ShadowEntriesVisible){
    REGISTER_CALL("Dem_EvMemGetMemoryLocIdOfDtcAndOriginWithVisibility");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Stub for function Dem_EvMemGetEventMemoryLocIdOfDtcWithVisibility */
uint16_least Dem_EvMemGetEventMemoryLocIdOfDtcWithVisibility(Dem_DtcIdType DtcId,
                                                             uint16_least MemId,
                                                             Dem_boolean_least ShadowEntriesVisible){
    REGISTER_CALL("Dem_EvMemGetEventMemoryLocIdOfDtcWithVisibility");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Stub for function Dem_IsEventEnabledByDtcSetting */
Dem_boolean_least Dem_IsEventEnabledByDtcSetting(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_IsEventEnabledByDtcSetting");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function rba_DiagLib_Bit8SetBit */
void ISOLATE_Dem_ConsisChk_rba_DiagLib_Bit8SetBit(uint8 * buffer,
                                                  uint8 bit_position){
    REGISTER_CALL("rba_DiagLib_Bit8SetBit");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function rba_DiagLib_Bit8ClearBit */
void ISOLATE_Dem_ConsisChk_rba_DiagLib_Bit8ClearBit(uint8 * buffer,
                                                    uint8 bit_position){
    REGISTER_CALL("rba_DiagLib_Bit8ClearBit");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function rba_DiagLib_Bit8ClearBits */
void ISOLATE_Dem_ConsisChk_rba_DiagLib_Bit8ClearBits(uint8 * value,
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
void ISOLATE_Dem_ConsisChk_rba_DiagLib_Bit16SetBit(uint16 * buffer,
                                                   uint8 bit_position){
    REGISTER_CALL("rba_DiagLib_Bit16SetBit");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function rba_DiagLib_Bit16ClearBit */
void ISOLATE_Dem_ConsisChk_rba_DiagLib_Bit16ClearBit(uint16 * buffer,
                                                     uint8 bit_position){
    REGISTER_CALL("rba_DiagLib_Bit16ClearBit");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function rba_DiagLib_Bit16ClearBits */
void ISOLATE_Dem_ConsisChk_rba_DiagLib_Bit16ClearBits(uint16 * value,
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
void ISOLATE_Dem_ConsisChk_rba_DiagLib_Bit32SetBit(uint32 * buffer,
                                                   uint8 bit_position){
    REGISTER_CALL("rba_DiagLib_Bit32SetBit");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function rba_DiagLib_Bit32ClearBit */
void ISOLATE_Dem_ConsisChk_rba_DiagLib_Bit32ClearBit(uint32 * buffer,
                                                     uint8 bit_position){
    REGISTER_CALL("rba_DiagLib_Bit32ClearBit");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function rba_DiagLib_Bit32ClearBits */
void ISOLATE_Dem_ConsisChk_rba_DiagLib_Bit32ClearBits(uint32 * value,
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
Dem_boolean_least ISOLATE_Dem_ConsisChk_Dem_isDtcIdValid(Dem_DtcIdType id){
    REGISTER_CALL("Dem_isDtcIdValid");

    IF_INSTANCE("TC_02_02") {
        CHECK_U_INT(id,0x36);
        return TRUE;
    }
    IF_INSTANCE("TC_02_02_A") {
        CHECK_U_INT(id,0x72);
        return TRUE;
    }
    IF_INSTANCE("TC_01_01") {
        CHECK_U_INT(id,0x12);
        return TRUE;
    }
    IF_INSTANCE("TC_01_02") {
        CHECK_U_INT(id,0x12);
        return FALSE;
    }
    IF_INSTANCE("TC_03_01") {
        CHECK_U_INT(id,0x12);
        return FALSE;
    }
    IF_INSTANCE("TC_02_01") {
        CHECK_U_INT(id,0x32);
        return FALSE;
    }
    IF_INSTANCE("TC_02_01_A") {
        CHECK_U_INT(id,0x23);
        return FALSE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_DtcGroupIdIsValid */
Dem_boolean_least ISOLATE_Dem_ConsisChk_Dem_DtcGroupIdIsValid(Dem_DTCGroupIdType dtcGroupID){
    REGISTER_CALL("Dem_DtcGroupIdIsValid");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_J1939IsNodeIdValid */
Dem_boolean_least ISOLATE_Dem_ConsisChk_Dem_J1939IsNodeIdValid(Dem_J1939NodeIdType nodeId){
    REGISTER_CALL("Dem_J1939IsNodeIdValid");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_BitArraySetBit */
void ISOLATE_Dem_ConsisChk_Dem_BitArraySetBit(uint32 * buffer,
                                              uint32 bit_position){
    REGISTER_CALL("Dem_BitArraySetBit");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_BitArrayClearBit */
void ISOLATE_Dem_ConsisChk_Dem_BitArrayClearBit(uint32 * buffer,
                                                uint32 bit_position){
    REGISTER_CALL("Dem_BitArrayClearBit");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function rba_DiagLib_Bit8IsBitSet */
boolean ISOLATE_Dem_ConsisChk_rba_DiagLib_Bit8IsBitSet(uint8 value,
                                                       uint8 bit_position){
    REGISTER_CALL("rba_DiagLib_Bit8IsBitSet");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function rba_DiagLib_Bit8OverwriteBit */
void ISOLATE_Dem_ConsisChk_rba_DiagLib_Bit8OverwriteBit(uint8 * buffer,
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
Dem_boolean_least ISOLATE_Dem_ConsisChk_Dem_EnCoAreAllFulfilled(Dem_EnCoList enableConditionList){
    REGISTER_CALL("Dem_EnCoAreAllFulfilled");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_NvMGetNvMBlocKId */
NvM_BlockIdType ISOLATE_Dem_ConsisChk_Dem_NvMGetNvMBlocKId(Dem_NvmBlockIdType id){
    REGISTER_CALL("Dem_NvMGetNvMBlocKId");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_IndicatorGetBlinkingCounter */
uint16 ISOLATE_Dem_ConsisChk_Dem_IndicatorGetBlinkingCounter(uint8 indicatorId){
    REGISTER_CALL("Dem_IndicatorGetBlinkingCounter");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_IndicatorGetContinuousCounter */
uint16 ISOLATE_Dem_ConsisChk_Dem_IndicatorGetContinuousCounter(uint8 indicatorId){
    REGISTER_CALL("Dem_IndicatorGetContinuousCounter");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_IndicatorGetFastFlashCtr */
uint16 ISOLATE_Dem_ConsisChk_Dem_IndicatorGetFastFlashCtr(uint8 indicatorId){
    REGISTER_CALL("Dem_IndicatorGetFastFlashCtr");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_IndicatorGetSlowFlashCtr */
uint16 ISOLATE_Dem_ConsisChk_Dem_IndicatorGetSlowFlashCtr(uint8 indicatorId){
    REGISTER_CALL("Dem_IndicatorGetSlowFlashCtr");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_IndicatorSetContinuousCtr */
void ISOLATE_Dem_ConsisChk_Dem_IndicatorSetContinuousCtr(uint8 indicatorId,
                                                         uint16 continuousCtr){
    REGISTER_CALL("Dem_IndicatorSetContinuousCtr");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_IndicatorSetBlinkingCtr */
void ISOLATE_Dem_ConsisChk_Dem_IndicatorSetBlinkingCtr(uint8 indicatorId,
                                                       uint16 blinkingCtr){
    REGISTER_CALL("Dem_IndicatorSetBlinkingCtr");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_IndicatorSetFastFlashCtr */
void ISOLATE_Dem_ConsisChk_Dem_IndicatorSetFastFlashCtr(uint8 indicatorId,
                                                        uint16 fastFlashCtr){
    REGISTER_CALL("Dem_IndicatorSetFastFlashCtr");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_IndicatorSetSlowFlashCtr */
void ISOLATE_Dem_ConsisChk_Dem_IndicatorSetSlowFlashCtr(uint8 indicatorId,
                                                        uint16 slowFlashCtr){
    REGISTER_CALL("Dem_IndicatorSetSlowFlashCtr");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function rba_DiagLib_Bit16GetBits */
uint16 ISOLATE_Dem_ConsisChk_rba_DiagLib_Bit16GetBits(uint16 value,
                                                      uint8 bit_position,
                                                      uint8 number_of_bits){
    REGISTER_CALL("rba_DiagLib_Bit16GetBits");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function rba_DiagLib_Bit16IsBitSet */
boolean ISOLATE_Dem_ConsisChk_rba_DiagLib_Bit16IsBitSet(uint16 value,
                                                        uint8 bit_position){
    REGISTER_CALL("rba_DiagLib_Bit16IsBitSet");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_NvMWriteBlockOnShutdown */
void ISOLATE_Dem_ConsisChk_Dem_NvMWriteBlockOnShutdown(Dem_NvmBlockIdType id){
    REGISTER_CALL("Dem_NvMWriteBlockOnShutdown");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_ISO14229ByteIsWarningIndicatorRequested */
Dem_boolean_least ISOLATE_Dem_ConsisChk_Dem_ISO14229ByteIsWarningIndicatorRequested(uint8 self){
    REGISTER_CALL("Dem_ISO14229ByteIsWarningIndicatorRequested");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EventIndicatorAttributeIteratorNew */
void ISOLATE_Dem_ConsisChk_Dem_EventIndicatorAttributeIteratorNew(Dem_EventIdType EventId,
                                                                  Dem_EventIndicatorAttributeIterator * it){
    REGISTER_CALL("Dem_EventIndicatorAttributeIteratorNew");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EventIndicatorAttributeIsValid */
Dem_boolean_least ISOLATE_Dem_ConsisChk_Dem_EventIndicatorAttributeIsValid(Dem_EventIdType EventId,
                                                                           const Dem_EventIndicatorAttributeIterator * it){
    REGISTER_CALL("Dem_EventIndicatorAttributeIsValid");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EventIndicatorAttributeNext */
void ISOLATE_Dem_ConsisChk_Dem_EventIndicatorAttributeNext(Dem_EventIndicatorAttributeIterator * it){
    REGISTER_CALL("Dem_EventIndicatorAttributeNext");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EventIndicatorAttributeCurrent */
uint16_least ISOLATE_Dem_ConsisChk_Dem_EventIndicatorAttributeCurrent(const Dem_EventIndicatorAttributeIterator * it){
    REGISTER_CALL("Dem_EventIndicatorAttributeCurrent");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_IsIndicatorAttributeValid */
Dem_boolean_least ISOLATE_Dem_ConsisChk_Dem_IsIndicatorAttributeValid(uint16_least indicatorIndex){
    REGISTER_CALL("Dem_IsIndicatorAttributeValid");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_IndicatorAttrib_GetIndicatorId */
uint8 ISOLATE_Dem_ConsisChk_Dem_IndicatorAttrib_GetIndicatorId(uint16_least indicatorIndex){
    REGISTER_CALL("Dem_IndicatorAttrib_GetIndicatorId");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_IndicatorAttrib_GetBehaviour */
uint8 ISOLATE_Dem_ConsisChk_Dem_IndicatorAttrib_GetBehaviour(uint16_least indicatorIndex){
    REGISTER_CALL("Dem_IndicatorAttrib_GetBehaviour");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_IndicatorAttribGetFailureCycCtr */
uint8 ISOLATE_Dem_ConsisChk_Dem_IndicatorAttribGetFailureCycCtr(uint16_least indicatorIndex){
    REGISTER_CALL("Dem_IndicatorAttribGetFailureCycCtr");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_IndicatorDecrementBehaviourCounter */
void ISOLATE_Dem_ConsisChk_Dem_IndicatorDecrementBehaviourCounter(uint8 indicatorId,
                                                                  uint8 indicatorBehaviour){
    REGISTER_CALL("Dem_IndicatorDecrementBehaviourCounter");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_IndicatorAttribSetFailureCycCtr */
void ISOLATE_Dem_ConsisChk_Dem_IndicatorAttribSetFailureCycCtr(uint16_least indicatorIndex,
                                                               uint8 failureCtr){
    REGISTER_CALL("Dem_IndicatorAttribSetFailureCycCtr");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_IndicatorAttribSetHealingCycCtr */
void ISOLATE_Dem_ConsisChk_Dem_IndicatorAttribSetHealingCycCtr(uint16_least indicatorIndex,
                                                               uint8 healingCtr){
    REGISTER_CALL("Dem_IndicatorAttribSetHealingCycCtr");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_BitArrayIsBitSet */
Dem_boolean_least ISOLATE_Dem_ConsisChk_Dem_BitArrayIsBitSet(const uint32 * buffer,
                                                             uint32 bit_position){
    REGISTER_CALL("Dem_BitArrayIsBitSet");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_BitArrayOverwriteBit */
void ISOLATE_Dem_ConsisChk_Dem_BitArrayOverwriteBit(uint32 * buffer,
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
boolean ISOLATE_Dem_ConsisChk_rba_DiagLib_Bit32IsBitSet(uint32 value,
                                                        uint8 bit_position){
    REGISTER_CALL("rba_DiagLib_Bit32IsBitSet");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function rba_DiagLib_Bit32OverwriteBit */
void ISOLATE_Dem_ConsisChk_rba_DiagLib_Bit32OverwriteBit(uint32 * buffer,
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
Dem_boolean_least ISOLATE_Dem_ConsisChk_Dem_NvMIsInvalidateAllNVMBlocksRequested(){
    REGISTER_CALL("Dem_NvMIsInvalidateAllNVMBlocksRequested");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function rba_DiagLib_MemUtils_MemSet */
void ISOLATE_Dem_ConsisChk_rba_DiagLib_MemUtils_MemSet(uint8 * xDest_pv,
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
void ISOLATE_Dem_ConsisChk_Dem_NvMClearBlockByInvalidate(Dem_NvmBlockIdType id){
    REGISTER_CALL("Dem_NvMClearBlockByInvalidate");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_NvmGetStatus */
Dem_NvmResultType ISOLATE_Dem_ConsisChk_Dem_NvmGetStatus(Dem_NvmBlockIdType id){
    REGISTER_CALL("Dem_NvmGetStatus");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function rba_DiagLib_Bit32GetBits */
uint32 ISOLATE_Dem_ConsisChk_rba_DiagLib_Bit32GetBits(uint32 value,
                                                      uint8 bit_position,
                                                      uint8 number_of_bits){
    REGISTER_CALL("rba_DiagLib_Bit32GetBits");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EvtGetEnableConditions */
Dem_EnCoList ISOLATE_Dem_ConsisChk_Dem_EvtGetEnableConditions(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtGetEnableConditions");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function rba_DiagLib_Bit32OverwriteBits */
void ISOLATE_Dem_ConsisChk_rba_DiagLib_Bit32OverwriteBits(uint32 * value,
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
void ISOLATE_Dem_ConsisChk_Dem_EvtIncreaseGlobalInitMonitoringCounter(){
    REGISTER_CALL("Dem_EvtIncreaseGlobalInitMonitoringCounter");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtSetAnyInitMonitoring */
void ISOLATE_Dem_ConsisChk_Dem_EvtSetAnyInitMonitoring(Dem_InitMonitorReasonType reason){
    REGISTER_CALL("Dem_EvtSetAnyInitMonitoring");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtIsAnyInitMonitoringRequested */
boolean ISOLATE_Dem_ConsisChk_Dem_EvtIsAnyInitMonitoringRequested(){
    REGISTER_CALL("Dem_EvtIsAnyInitMonitoringRequested");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EvtResetAnyInitMonitoring */
void ISOLATE_Dem_ConsisChk_Dem_EvtResetAnyInitMonitoring(){
    REGISTER_CALL("Dem_EvtResetAnyInitMonitoring");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtGetOperationCycleId */
uint8 ISOLATE_Dem_ConsisChk_Dem_EvtGetOperationCycleId(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtGetOperationCycleId");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EvtGetAgingCycleId */
uint8 ISOLATE_Dem_ConsisChk_Dem_EvtGetAgingCycleId(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtGetAgingCycleId");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EvtGetFailureCycleId */
uint8 ISOLATE_Dem_ConsisChk_Dem_EvtGetFailureCycleId(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtGetFailureCycleId");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EnvIsAnyTriggerSet */
Dem_boolean_least ISOLATE_Dem_ConsisChk_Dem_EnvIsAnyTriggerSet(Dem_TriggerType trigger2test){
    REGISTER_CALL("Dem_EnvIsAnyTriggerSet");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function rba_DiagLib_MemUtils_MemCpy */
void ISOLATE_Dem_ConsisChk_rba_DiagLib_MemUtils_MemCpy(uint8 * xDest_p,
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
Dem_boolean_least ISOLATE_Dem_ConsisChk_Dem_EvtIsEventStoredInDistMem(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtIsEventStoredInDistMem");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_DistMemIsFull */
Dem_boolean_least ISOLATE_Dem_ConsisChk_Dem_DistMemIsFull(){
    REGISTER_CALL("Dem_DistMemIsFull");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EvtGetDebounceMethodIndex */
uint8 ISOLATE_Dem_ConsisChk_Dem_EvtGetDebounceMethodIndex(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtGetDebounceMethodIndex");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EvtGetDebounceParamSetIndex */
uint16 ISOLATE_Dem_ConsisChk_Dem_EvtGetDebounceParamSetIndex(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtGetDebounceParamSetIndex");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EvtGetFDCThresholdReachedTOC */
Dem_boolean_least ISOLATE_Dem_ConsisChk_Dem_EvtGetFDCThresholdReachedTOC(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtGetFDCThresholdReachedTOC");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EvtSetFDCThresholdReachedTOC */
void ISOLATE_Dem_ConsisChk_Dem_EvtSetFDCThresholdReachedTOC(Dem_EventIdType EventId,
                                                            Dem_boolean_least setBit){
    REGISTER_CALL("Dem_EvtSetFDCThresholdReachedTOC");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_OpMoIsInitialized */
Dem_boolean_least ISOLATE_Dem_ConsisChk_Dem_OpMoIsInitialized(){
    REGISTER_CALL("Dem_OpMoIsInitialized");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_StoCoAreAllFulfilled */
boolean ISOLATE_Dem_ConsisChk_Dem_StoCoAreAllFulfilled(Dem_StoCoList storageConditionList){
    REGISTER_CALL("Dem_StoCoAreAllFulfilled");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EvtGetStorageConditions */
Dem_StoCoList ISOLATE_Dem_ConsisChk_Dem_EvtGetStorageConditions(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtGetStorageConditions");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EvtSetFDCThresholdReached */
void ISOLATE_Dem_ConsisChk_Dem_EvtSetFDCThresholdReached(Dem_EventIdType EventId,
                                                         Dem_boolean_least setBit){
    REGISTER_CALL("Dem_EvtSetFDCThresholdReached");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtIsSuspicious */
Dem_boolean_least ISOLATE_Dem_ConsisChk_Dem_EvtIsSuspicious(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtIsSuspicious");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_DebHandleDebounceAction__processBits */
Dem_boolean_least ISOLATE_Dem_ConsisChk_Dem_DebHandleDebounceAction__processBits(Dem_EventIdType EventId,
                                                                                 Dem_DebouncedActionType debAction){
    REGISTER_CALL("Dem_DebHandleDebounceAction__processBits");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EventIdIteratorNew */
void ISOLATE_Dem_ConsisChk_Dem_EventIdIteratorNew(Dem_EventIdIterator * it){
    REGISTER_CALL("Dem_EventIdIteratorNew");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EventIdIteratorIsValid */
Dem_boolean_least ISOLATE_Dem_ConsisChk_Dem_EventIdIteratorIsValid(const Dem_EventIdIterator * it){
    REGISTER_CALL("Dem_EventIdIteratorIsValid");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EventIdIteratorNext */
void ISOLATE_Dem_ConsisChk_Dem_EventIdIteratorNext(Dem_EventIdIterator * it){
    REGISTER_CALL("Dem_EventIdIteratorNext");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EventIdIteratorCurrent */
Dem_EventIdType ISOLATE_Dem_ConsisChk_Dem_EventIdIteratorCurrent(const Dem_EventIdIterator * it){
    REGISTER_CALL("Dem_EventIdIteratorCurrent");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_ClientSelectionType_invalidateSelectionResult */
void ISOLATE_Dem_ConsisChk_Dem_ClientSelectionType_invalidateSelectionResult(Dem_ClientSelectionType * selection){
    REGISTER_CALL("Dem_ClientSelectionType_invalidateSelectionResult");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_ClientClearMachine_SetMachineActiveClient */
void ISOLATE_Dem_ConsisChk_Dem_ClientClearMachine_SetMachineActiveClient(Dem_ClientIdType ClientId){
    REGISTER_CALL("Dem_ClientClearMachine_SetMachineActiveClient");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_ClientClearMachine_SetMachineState */
void ISOLATE_Dem_ConsisChk_Dem_ClientClearMachine_SetMachineState(uint8 state){
    REGISTER_CALL("Dem_ClientClearMachine_SetMachineState");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_NvMStartClear */
void ISOLATE_Dem_ConsisChk_Dem_NvMStartClear(){
    REGISTER_CALL("Dem_NvMStartClear");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvMemIsEventMemLocIdValid */
Dem_boolean_least ISOLATE_Dem_ConsisChk_Dem_EvMemIsEventMemLocIdValid(uint16_least LocId){
    REGISTER_CALL("Dem_EvMemIsEventMemLocIdValid");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EvMemGetEventMemStatusByPtr */
uint16_least ISOLATE_Dem_ConsisChk_Dem_EvMemGetEventMemStatusByPtr(const Dem_EvMemEventMemoryType * EventMemory){
    REGISTER_CALL("Dem_EvMemGetEventMemStatusByPtr");

    IF_INSTANCE("TC_01_01") {
        return 0x01;
    }
    IF_INSTANCE("TC_01_01_A") {
        return 0x0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EvMemGetEventMemEventIdByPtr */
Dem_EventIdType ISOLATE_Dem_ConsisChk_Dem_EvMemGetEventMemEventIdByPtr(const Dem_EvMemEventMemoryType * EventMemory){
    REGISTER_CALL("Dem_EvMemGetEventMemEventIdByPtr");

    IF_INSTANCE("TC_01_01") {
        CHECK_ADDRESS(EventMemory, &Dem_EvMemEventMemory[0]);
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EvMemGetEventMemTimeIdByPtr */
uint32 ISOLATE_Dem_ConsisChk_Dem_EvMemGetEventMemTimeIdByPtr(const Dem_EvMemEventMemoryType * EventMemory){
    REGISTER_CALL("Dem_EvMemGetEventMemTimeIdByPtr");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EvMemGetEventMemDtcStatusByPtr */
uint8 ISOLATE_Dem_ConsisChk_Dem_EvMemGetEventMemDtcStatusByPtr(const Dem_EvMemEventMemoryType * EventMemory){
    REGISTER_CALL("Dem_EvMemGetEventMemDtcStatusByPtr");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EvMemGetEventMemFailureCounterByPtr */
uint8_least ISOLATE_Dem_ConsisChk_Dem_EvMemGetEventMemFailureCounterByPtr(const Dem_EvMemEventMemoryType * EventMemory){
    REGISTER_CALL("Dem_EvMemGetEventMemFailureCounterByPtr");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EvMemGetEventMemOccurrenceCounterByPtr */
uint16_least ISOLATE_Dem_ConsisChk_Dem_EvMemGetEventMemOccurrenceCounterByPtr(const Dem_EvMemEventMemoryType * EventMemory){
    REGISTER_CALL("Dem_EvMemGetEventMemOccurrenceCounterByPtr");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EvMemGetEventMemAgingCounterByPtr */
uint16_least ISOLATE_Dem_ConsisChk_Dem_EvMemGetEventMemAgingCounterByPtr(const Dem_EvMemEventMemoryType * EventMemory){
    REGISTER_CALL("Dem_EvMemGetEventMemAgingCounterByPtr");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EvMemGetEventMemAgingCounterForTFSLCByPtr */
uint16_least ISOLATE_Dem_ConsisChk_Dem_EvMemGetEventMemAgingCounterForTFSLCByPtr(const Dem_EvMemEventMemoryType * EventMemory){
    REGISTER_CALL("Dem_EvMemGetEventMemAgingCounterForTFSLCByPtr");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EvMemSetMaxFdcDuringCurrentCycleByPtr */
void ISOLATE_Dem_ConsisChk_Dem_EvMemSetMaxFdcDuringCurrentCycleByPtr(Dem_EvMemEventMemoryType * EventMemory,
                                                                     sint8 fdc){
    REGISTER_CALL("Dem_EvMemSetMaxFdcDuringCurrentCycleByPtr");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvMemSetMaxFdcSinceLastClearByPtr */
void ISOLATE_Dem_ConsisChk_Dem_EvMemSetMaxFdcSinceLastClearByPtr(Dem_EvMemEventMemoryType * EventMemory,
                                                                 sint8 fdc){
    REGISTER_CALL("Dem_EvMemSetMaxFdcSinceLastClearByPtr");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvMemGetMaxFdcDuringCurrentCycleByPtr */
sint8 ISOLATE_Dem_ConsisChk_Dem_EvMemGetMaxFdcDuringCurrentCycleByPtr(const Dem_EvMemEventMemoryType * EventMemory){
    REGISTER_CALL("Dem_EvMemGetMaxFdcDuringCurrentCycleByPtr");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EvMemGetMaxFdcSinceLastClearByPtr */
sint8 ISOLATE_Dem_ConsisChk_Dem_EvMemGetMaxFdcSinceLastClearByPtr(const Dem_EvMemEventMemoryType * EventMemory){
    REGISTER_CALL("Dem_EvMemGetMaxFdcSinceLastClearByPtr");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EvMemGetEventMemFreezeFrameCounterByPtr */
uint16_least ISOLATE_Dem_ConsisChk_Dem_EvMemGetEventMemFreezeFrameCounterByPtr(const Dem_EvMemEventMemoryType * EventMemory){
    REGISTER_CALL("Dem_EvMemGetEventMemFreezeFrameCounterByPtr");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EvMemGetEventMemTriggerByPtr */
Dem_TriggerType ISOLATE_Dem_ConsisChk_Dem_EvMemGetEventMemTriggerByPtr(const Dem_EvMemEventMemoryType * EventMemory){
    REGISTER_CALL("Dem_EvMemGetEventMemTriggerByPtr");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EvMemGetEventMemDataByPtr */
uint8 * ISOLATE_Dem_ConsisChk_Dem_EvMemGetEventMemDataByPtr(Dem_EvMemEventMemoryType * EventMemory){
    REGISTER_CALL("Dem_EvMemGetEventMemDataByPtr");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EvMemSetToEmpty */
uint16_least ISOLATE_Dem_ConsisChk_Dem_EvMemSetToEmpty(){
    REGISTER_CALL("Dem_EvMemSetToEmpty");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EvMemIsStored */
Dem_boolean_least ISOLATE_Dem_ConsisChk_Dem_EvMemIsStored(uint16_least Status){
    REGISTER_CALL("Dem_EvMemIsStored");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EvMemIsEmpty */
Dem_boolean_least ISOLATE_Dem_ConsisChk_Dem_EvMemIsEmpty(uint16_least Status){
    REGISTER_CALL("Dem_EvMemIsEmpty");

    IF_INSTANCE("TC_03_01") {
        CHECK_U_INT(Status, 0x08);
        return FALSE;
    }
    IF_INSTANCE("TC_01_01") {
        CHECK_U_INT(Status, 0x01);
        return FALSE;
    }
    IF_INSTANCE("TC_01_01_A") {
        CHECK_U_INT(Status, 0x01);
        return FALSE;
    }
    IF_INSTANCE("TC_01_01_B") {
        CHECK_U_INT(Status, 0x04);
        return FALSE;
    }
    IF_INSTANCE("TC_01_01_C") {
        CHECK_U_INT(Status, 0x04);
        return TRUE;
    }
    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EvMemGetShadowVisibility */
Dem_boolean_least ISOLATE_Dem_ConsisChk_Dem_EvMemGetShadowVisibility(){
    REGISTER_CALL("Dem_EvMemGetShadowVisibility");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EvMemGetEventMemStartLocId */
uint16_least ISOLATE_Dem_ConsisChk_Dem_EvMemGetEventMemStartLocId(uint16_least MemId){
    REGISTER_CALL("Dem_EvMemGetEventMemStartLocId");

    IF_INSTANCE("TC_01_01") {
        CHECK_U_INT(MemId, 0);
        return 0x00;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EvMemGetEventMemEndLocId */
uint16_least ISOLATE_Dem_ConsisChk_Dem_EvMemGetEventMemEndLocId(uint16_least MemId){
    REGISTER_CALL("Dem_EvMemGetEventMemEndLocId");

    IF_INSTANCE("TC_01_01") {
        CHECK_U_INT(MemId, DEM_CFG_EVMEM_MEMID_PRIMARY);
        return 0X01;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EvMemEventMemoryIteratorNew */
void ISOLATE_Dem_ConsisChk_Dem_EvMemEventMemoryIteratorNew(uint16_least * MemId){
    REGISTER_CALL("Dem_EvMemEventMemoryIteratorNew");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvMemEventMemoryIteratorIsValid */
Dem_boolean_least ISOLATE_Dem_ConsisChk_Dem_EvMemEventMemoryIteratorIsValid(const uint16_least * MemId){
    REGISTER_CALL("Dem_EvMemEventMemoryIteratorIsValid");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EvMemEventMemoryIteratorNext */
void ISOLATE_Dem_ConsisChk_Dem_EvMemEventMemoryIteratorNext(uint16_least * MemId){
    REGISTER_CALL("Dem_EvMemEventMemoryIteratorNext");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_LibGetParamBool */
boolean ISOLATE_Dem_ConsisChk_Dem_LibGetParamBool(boolean parameter){
    REGISTER_CALL("Dem_LibGetParamBool");

    IF_INSTANCE("TC_04_01") {
        CHECK_BOOLEAN(parameter,TRUE);
        return TRUE;
    }
    IF_INSTANCE("TC_04_02") {
        CHECK_BOOLEAN(parameter,TRUE);
        return FALSE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_DtcIdFromEventId */
Dem_DtcIdType ISOLATE_Dem_ConsisChk_Dem_DtcIdFromEventId(Dem_EventIdType id){
    REGISTER_CALL("Dem_DtcIdFromEventId");

    IF_INSTANCE("TC_01_01") {
        CHECK_U_INT(id,0x05);
        return 0x12;
    }
    IF_INSTANCE("TC_01_02") {
        CHECK_U_INT(id, 0);
        return 0x12;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_ISO14229ByteIsTestFailed */
Dem_boolean_least ISOLATE_Dem_ConsisChk_Dem_ISO14229ByteIsTestFailed(uint8 self){
    REGISTER_CALL("Dem_ISO14229ByteIsTestFailed");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EvMemIsEdgeTrigger */
Dem_boolean_least ISOLATE_Dem_ConsisChk_Dem_EvMemIsEdgeTrigger(uint16_least StatusOld,
                                                               uint16_least StatusNew,
                                                               uint16_least Trigger){
    REGISTER_CALL("Dem_EvMemIsEdgeTrigger");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EnvSetTrigger */
void ISOLATE_Dem_ConsisChk_Dem_EnvSetTrigger(Dem_TriggerType * trigger,
                                             Dem_TriggerType trigger2set){
    REGISTER_CALL("Dem_EnvSetTrigger");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtStoreTestFailedToNextOC */
Dem_boolean_least ISOLATE_Dem_ConsisChk_Dem_EvtStoreTestFailedToNextOC(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtStoreTestFailedToNextOC");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_LibGetParamUI8 */
uint8 ISOLATE_Dem_ConsisChk_Dem_LibGetParamUI8(uint8 parameter){
    REGISTER_CALL("Dem_LibGetParamUI8");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EvMemGetRamStsMask */
uint16_least ISOLATE_Dem_ConsisChk_Dem_EvMemGetRamStsMask(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvMemGetRamStsMask");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EvtGetAgingThreshold */
uint8 ISOLATE_Dem_ConsisChk_Dem_EvtGetAgingThreshold(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtGetAgingThreshold");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EvMemGetCurrentAgingCycleCounterInt */
uint16_least ISOLATE_Dem_ConsisChk_Dem_EvMemGetCurrentAgingCycleCounterInt(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvMemGetCurrentAgingCycleCounterInt");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EvMemIsAged */
Dem_boolean_least ISOLATE_Dem_ConsisChk_Dem_EvMemIsAged(Dem_EventIdType EventId,
                                                        uint16_least LocId,
                                                        uint16_least StatusNew){
    REGISTER_CALL("Dem_EvMemIsAged");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EvMemGetEventMemAgingCounter */
uint16_least ISOLATE_Dem_ConsisChk_Dem_EvMemGetEventMemAgingCounter(uint16_least LocId){
    REGISTER_CALL("Dem_EvMemGetEventMemAgingCounter");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EvMemSetEventMemAgingCounter */
void ISOLATE_Dem_ConsisChk_Dem_EvMemSetEventMemAgingCounter(uint16_least LocId,
                                                            uint16_least AgingCounter){
    REGISTER_CALL("Dem_EvMemSetEventMemAgingCounter");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvMemGetEventMemAgingCounterForTFSLC */
uint16_least ISOLATE_Dem_ConsisChk_Dem_EvMemGetEventMemAgingCounterForTFSLC(uint16_least LocId){
    REGISTER_CALL("Dem_EvMemGetEventMemAgingCounterForTFSLC");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EvtGetAgingThresholdForTFSLC */
uint8 ISOLATE_Dem_ConsisChk_Dem_EvtGetAgingThresholdForTFSLC(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtGetAgingThresholdForTFSLC");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EvMemSetEventMemAgingCounterForTFSLC */
void ISOLATE_Dem_ConsisChk_Dem_EvMemSetEventMemAgingCounterForTFSLC(uint16_least LocId,
                                                                    uint16_least AgingCounterForTFSLC){
    REGISTER_CALL("Dem_EvMemSetEventMemAgingCounterForTFSLC");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtIsAgingAllowed */
Dem_boolean_least ISOLATE_Dem_ConsisChk_Dem_EvtIsAgingAllowed(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtIsAgingAllowed");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EvMemGetEventMemStatus */
uint16_least ISOLATE_Dem_ConsisChk_Dem_EvMemGetEventMemStatus(uint16_least LocId){
    REGISTER_CALL("Dem_EvMemGetEventMemStatus");

    IF_INSTANCE("TC_03_01") {
        CHECK_U_INT(LocId,0x00);
        return 0x08;
    }
    IF_INSTANCE("TC_01_01") {
        CHECK_U_INT(LocId,0x00);
        return 0x01;
    }
    IF_INSTANCE("TC_01_01_A") {
        CHECK_U_INT(LocId,0x00);
        return 0x01;
    }
    IF_INSTANCE("TC_01_01_B") {
        CHECK_U_INT(LocId,0x00);
        return 0x04;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EvtIsDestPrimaryMemory */
Dem_boolean_least ISOLATE_Dem_ConsisChk_Dem_EvtIsDestPrimaryMemory(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtIsDestPrimaryMemory");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EvtIsDestSecondaryMemory */
Dem_boolean_least ISOLATE_Dem_ConsisChk_Dem_EvtIsDestSecondaryMemory(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtIsDestSecondaryMemory");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EvMemGetMemIdForDTCOrigin */
uint16_least ISOLATE_Dem_ConsisChk_Dem_EvMemGetMemIdForDTCOrigin(Dem_DTCOriginType DTCOrigin){
    REGISTER_CALL("Dem_EvMemGetMemIdForDTCOrigin");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EvMemIsMemIdValid */
Dem_boolean_least ISOLATE_Dem_ConsisChk_Dem_EvMemIsMemIdValid(uint16_least MemId){
    REGISTER_CALL("Dem_EvMemIsMemIdValid");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EvMemGetMemIdForEvent */
uint16_least ISOLATE_Dem_ConsisChk_Dem_EvMemGetMemIdForEvent(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvMemGetMemIdForEvent");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_DtcIsSuppressed */
Dem_boolean_least ISOLATE_Dem_ConsisChk_Dem_DtcIsSuppressed(Dem_DtcIdType dtcId){
    REGISTER_CALL("Dem_DtcIsSuppressed");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_DtcIsSuppressedDirectly */
Dem_boolean_least ISOLATE_Dem_ConsisChk_Dem_DtcIsSuppressedDirectly(Dem_DtcIdType dtcId){
    REGISTER_CALL("Dem_DtcIsSuppressedDirectly");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EventIdListIteratorNewFromDtcId */
void ISOLATE_Dem_ConsisChk_Dem_EventIdListIteratorNewFromDtcId(Dem_EventIdListIterator * it,
                                                               Dem_DtcIdType dtcid){
    REGISTER_CALL("Dem_EventIdListIteratorNewFromDtcId");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EventIdListIteratorIsValid */
Dem_boolean_least ISOLATE_Dem_ConsisChk_Dem_EventIdListIteratorIsValid(const Dem_EventIdListIterator * it){
    REGISTER_CALL("Dem_EventIdListIteratorIsValid");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EventIdListIteratorNext */
void ISOLATE_Dem_ConsisChk_Dem_EventIdListIteratorNext(Dem_EventIdListIterator * it){
    REGISTER_CALL("Dem_EventIdListIteratorNext");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtIsSuppressed */
Dem_boolean_least ISOLATE_Dem_ConsisChk_Dem_EvtIsSuppressed(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtIsSuppressed");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EventIdListIteratorCurrent */
Dem_EventIdType ISOLATE_Dem_ConsisChk_Dem_EventIdListIteratorCurrent(const Dem_EventIdListIterator * it){
    REGISTER_CALL("Dem_EventIdListIteratorCurrent");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_DtcHasAlternativeDTCConfigured */
Dem_boolean_least ISOLATE_Dem_ConsisChk_Dem_DtcHasAlternativeDTCConfigured(Dem_DtcIdType dtcId){
    REGISTER_CALL("Dem_DtcHasAlternativeDTCConfigured");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EvtIsDestMirrorMemory */
Dem_boolean_least ISOLATE_Dem_ConsisChk_Dem_EvtIsDestMirrorMemory(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtIsDestMirrorMemory");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_DtcIdGetFirstEventId */
Dem_EventIdType ISOLATE_Dem_ConsisChk_Dem_DtcIdGetFirstEventId(Dem_DtcIdType dtcid){
    REGISTER_CALL("Dem_DtcIdGetFirstEventId");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EventUsesOrigin */
Dem_boolean_least ISOLATE_Dem_ConsisChk_Dem_EventUsesOrigin(Dem_EventIdType eventId,
                                                            Dem_DTCOriginType origin){
    REGISTER_CALL("Dem_EventUsesOrigin");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EvMemGenGetDtcIdByOccIndex */
Dem_DtcIdType ISOLATE_Dem_ConsisChk_Dem_EvMemGenGetDtcIdByOccIndex(uint32 OccIndex){
    REGISTER_CALL("Dem_EvMemGenGetDtcIdByOccIndex");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EvMemGenSetDtcByOccIndex */
void ISOLATE_Dem_ConsisChk_Dem_EvMemGenSetDtcByOccIndex(Dem_DtcIdType DtcId,
                                                        uint32 OccIndex){
    REGISTER_CALL("Dem_EvMemGenSetDtcByOccIndex");

    IF_INSTANCE("TC_01_01") {
        CHECK_U_INT(DtcId, 0x12);
        CHECK_U_INT(OccIndex, DEM_MOST_RECENT_FAILED_DTC);
        return;
    }
    IF_INSTANCE("TC_03_01") {
        CHECK_U_INT(DtcId, 0x12);
        CHECK_U_INT(OccIndex, DEM_MOST_REC_DET_CONFIRMED_DTC);
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_GetEvMemLockInternal */
boolean ISOLATE_Dem_ConsisChk_Dem_GetEvMemLockInternal(){
    REGISTER_CALL("Dem_GetEvMemLockInternal");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EvMemGenReportEvent */
void ISOLATE_Dem_ConsisChk_Dem_EvMemGenReportEvent(Dem_EventIdType EventId,
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
void ISOLATE_Dem_ConsisChk_Dem_NvMClearBlockByWrite(Dem_NvmBlockIdType id){
    REGISTER_CALL("Dem_NvMClearBlockByWrite");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvMemGenIsOverflow */
boolean ISOLATE_Dem_ConsisChk_Dem_EvMemGenIsOverflow(Dem_DTCOriginType DtcOrigin){
    REGISTER_CALL("Dem_EvMemGenIsOverflow");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EvMemGenSetOverflow */
void ISOLATE_Dem_ConsisChk_Dem_EvMemGenSetOverflow(Dem_DTCOriginType DtcOrigin){
    REGISTER_CALL("Dem_EvMemGenSetOverflow");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_ISO14229ByteSetTestFailed */
void ISOLATE_Dem_ConsisChk_Dem_ISO14229ByteSetTestFailed(uint8 * self,
                                                         Dem_boolean_least setOrReset){
    REGISTER_CALL("Dem_ISO14229ByteSetTestFailed");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_ISO14229ByteSetTestFailedTOC */
void ISOLATE_Dem_ConsisChk_Dem_ISO14229ByteSetTestFailedTOC(uint8 * self,
                                                            Dem_boolean_least setOrReset){
    REGISTER_CALL("Dem_ISO14229ByteSetTestFailedTOC");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_ISO14229ByteSetTestFailedSLC */
void ISOLATE_Dem_ConsisChk_Dem_ISO14229ByteSetTestFailedSLC(uint8 * self,
                                                            Dem_boolean_least setOrReset){
    REGISTER_CALL("Dem_ISO14229ByteSetTestFailedSLC");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_ISO14229ByteSetTestCompleteTOC */
void ISOLATE_Dem_ConsisChk_Dem_ISO14229ByteSetTestCompleteTOC(uint8 * self,
                                                              Dem_boolean_least setOrReset){
    REGISTER_CALL("Dem_ISO14229ByteSetTestCompleteTOC");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_ISO14229ByteSetTestCompleteSLC */
void ISOLATE_Dem_ConsisChk_Dem_ISO14229ByteSetTestCompleteSLC(uint8 * self,
                                                              Dem_boolean_least setOrReset){
    REGISTER_CALL("Dem_ISO14229ByteSetTestCompleteSLC");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_ISO14229ByteSetPendingDTC */
void ISOLATE_Dem_ConsisChk_Dem_ISO14229ByteSetPendingDTC(uint8 * self,
                                                         Dem_boolean_least setOrReset){
    REGISTER_CALL("Dem_ISO14229ByteSetPendingDTC");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_ISO14229ByteSetWarningIndicatorRequested */
void ISOLATE_Dem_ConsisChk_Dem_ISO14229ByteSetWarningIndicatorRequested(uint8 * self,
                                                                        Dem_boolean_least setOrReset){
    REGISTER_CALL("Dem_ISO14229ByteSetWarningIndicatorRequested");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtGetIsoByte */
Dem_UdsStatusByteType ISOLATE_Dem_ConsisChk_Dem_EvtGetIsoByte(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtGetIsoByte");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_ISO14229ByteIsTestCompleteTOC */
Dem_boolean_least ISOLATE_Dem_ConsisChk_Dem_ISO14229ByteIsTestCompleteTOC(uint8 self){
    REGISTER_CALL("Dem_ISO14229ByteIsTestCompleteTOC");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_ISO14229ByteIsTestFailedTOC */
Dem_boolean_least ISOLATE_Dem_ConsisChk_Dem_ISO14229ByteIsTestFailedTOC(uint8 self){
    REGISTER_CALL("Dem_ISO14229ByteIsTestFailedTOC");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_ISO14229ByteSetConfirmedDTC */
void ISOLATE_Dem_ConsisChk_Dem_ISO14229ByteSetConfirmedDTC(uint8 * self,
                                                           Dem_boolean_least setOrReset){
    REGISTER_CALL("Dem_ISO14229ByteSetConfirmedDTC");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtGetCustIsoByte */
Dem_UdsStatusByteType ISOLATE_Dem_ConsisChk_Dem_EvtGetCustIsoByte(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtGetCustIsoByte");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EvtSt_CustomInitialization */
void ISOLATE_Dem_ConsisChk_Dem_EvtSt_CustomInitialization(Dem_EventIdType EventId,
                                                          Dem_UdsStatusByteType * statusByte){
    REGISTER_CALL("Dem_EvtSt_CustomInitialization");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtSt_CustomFailed */
void ISOLATE_Dem_ConsisChk_Dem_EvtSt_CustomFailed(Dem_EventIdType EventId,
                                                  Dem_UdsStatusByteType * statusByte){
    REGISTER_CALL("Dem_EvtSt_CustomFailed");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtSt_CustomPassed */
void ISOLATE_Dem_ConsisChk_Dem_EvtSt_CustomPassed(Dem_EventIdType EventId,
                                                  Dem_UdsStatusByteType * statusByte){
    REGISTER_CALL("Dem_EvtSt_CustomPassed");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtSt_CustomResetEventStatus */
void ISOLATE_Dem_ConsisChk_Dem_EvtSt_CustomResetEventStatus(Dem_EventIdType EventId,
                                                            Dem_UdsStatusByteType * statusByte){
    REGISTER_CALL("Dem_EvtSt_CustomResetEventStatus");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtSt_CustomEvtAvailable */
void ISOLATE_Dem_ConsisChk_Dem_EvtSt_CustomEvtAvailable(Dem_EventIdType EventId,
                                                        Dem_UdsStatusByteType * statusByte){
    REGISTER_CALL("Dem_EvtSt_CustomEvtAvailable");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtSt_CustomEvtNotAvailable */
void ISOLATE_Dem_ConsisChk_Dem_EvtSt_CustomEvtNotAvailable(Dem_EventIdType EventId,
                                                           Dem_UdsStatusByteType * statusByte){
    REGISTER_CALL("Dem_EvtSt_CustomEvtNotAvailable");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtSt_CustomClear */
void ISOLATE_Dem_ConsisChk_Dem_EvtSt_CustomClear(Dem_EventIdType EventId,
                                                 Dem_UdsStatusByteType * statusByte){
    REGISTER_CALL("Dem_EvtSt_CustomClear");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtSt_CustomClear_OnlyThisCycleAndReadiness */
void ISOLATE_Dem_ConsisChk_Dem_EvtSt_CustomClear_OnlyThisCycleAndReadiness(Dem_EventIdType EventId,
                                                                           Dem_UdsStatusByteType * statusByte){
    REGISTER_CALL("Dem_EvtSt_CustomClear_OnlyThisCycleAndReadiness");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtSt_CustomNewOperationCycle */
void ISOLATE_Dem_ConsisChk_Dem_EvtSt_CustomNewOperationCycle(Dem_EventIdType EventId,
                                                             Dem_UdsStatusByteType * statusByte){
    REGISTER_CALL("Dem_EvtSt_CustomNewOperationCycle");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtSt_CustomIndicatorOn */
void ISOLATE_Dem_ConsisChk_Dem_EvtSt_CustomIndicatorOn(Dem_EventIdType EventId,
                                                       Dem_UdsStatusByteType * statusByte){
    REGISTER_CALL("Dem_EvtSt_CustomIndicatorOn");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtSt_CustomIndicatorOff */
void ISOLATE_Dem_ConsisChk_Dem_EvtSt_CustomIndicatorOff(Dem_EventIdType EventId,
                                                        Dem_UdsStatusByteType * statusByte){
    REGISTER_CALL("Dem_EvtSt_CustomIndicatorOff");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtSt_CustomDTCSettingOn */
void ISOLATE_Dem_ConsisChk_Dem_EvtSt_CustomDTCSettingOn(Dem_EventIdType EventId,
                                                        Dem_UdsStatusByteType * statusByte){
    REGISTER_CALL("Dem_EvtSt_CustomDTCSettingOn");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtSt_CustomConfirmation */
void ISOLATE_Dem_ConsisChk_Dem_EvtSt_CustomConfirmation(Dem_EventIdType EventId,
                                                        Dem_UdsStatusByteType * statusByte){
    REGISTER_CALL("Dem_EvtSt_CustomConfirmation");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtSt_CustomAging */
void ISOLATE_Dem_ConsisChk_Dem_EvtSt_CustomAging(Dem_EventIdType EventId,
                                                 Dem_UdsStatusByteType * statusByte){
    REGISTER_CALL("Dem_EvtSt_CustomAging");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtSt_CustomSetImmediateAging */
void ISOLATE_Dem_ConsisChk_Dem_EvtSt_CustomSetImmediateAging(Dem_EventIdType EventId,
                                                             Dem_UdsStatusByteType * statusByte){
    REGISTER_CALL("Dem_EvtSt_CustomSetImmediateAging");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtSt_CustomDisplacement */
void ISOLATE_Dem_ConsisChk_Dem_EvtSt_CustomDisplacement(Dem_EventIdType EventId,
                                                        Dem_UdsStatusByteType * statusByte){
    REGISTER_CALL("Dem_EvtSt_CustomDisplacement");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtSt_CustomEvCombinationReplacement */
void ISOLATE_Dem_ConsisChk_Dem_EvtSt_CustomEvCombinationReplacement(Dem_EventIdType EventId,
                                                                    Dem_UdsStatusByteType * statusByte){
    REGISTER_CALL("Dem_EvtSt_CustomEvCombinationReplacement");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtSt_CustomSetPending */
void ISOLATE_Dem_ConsisChk_Dem_EvtSt_CustomSetPending(Dem_EventIdType EventId,
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
Dem_boolean_least ISOLATE_Dem_ConsisChk_Dem_ISO14229ByteIsPendingDTC(uint8 self){
    REGISTER_CALL("Dem_ISO14229ByteIsPendingDTC");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EvMemIsOriginPrimary */
Dem_boolean_least ISOLATE_Dem_ConsisChk_Dem_EvMemIsOriginPrimary(uint16_least LocId){
    REGISTER_CALL("Dem_EvMemIsOriginPrimary");

    IF_INSTANCE("TC_04_01") {
        CHECK_U_INT(LocId, 0x45);
        return TRUE;
    }
    IF_INSTANCE("TC_04_02") {
        CHECK_U_INT(LocId, 0x45);
        return FALSE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EvMemIsOriginSecondary */
Dem_boolean_least ISOLATE_Dem_ConsisChk_Dem_EvMemIsOriginSecondary(uint16_least LocId){
    REGISTER_CALL("Dem_EvMemIsOriginSecondary");

    IF_INSTANCE("TC_04_01") {
        CHECK_U_INT(LocId, 0x45);
        return TRUE;
    }
    IF_INSTANCE("TC_04_02") {
        CHECK_U_INT(LocId, 0x45);
        return FALSE;
    }
    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EvMemGetEventMemEventId */
Dem_EventIdType ISOLATE_Dem_ConsisChk_Dem_EvMemGetEventMemEventId(uint16_least LocId){
    REGISTER_CALL("Dem_EvMemGetEventMemEventId");

    IF_INSTANCE("TC_01_01") {
        CHECK_U_INT(LocId, 0);
        return 0x05;
    }
    IF_INSTANCE("TC_04_01") {
        CHECK_U_INT(LocId, 0x45);
        return 0x12;
    }
    IF_INSTANCE("TC_04_02") {
        CHECK_U_INT(LocId, 0x45);
        return 0x00;
    }
    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EvtSt_SetTestFailed */
void ISOLATE_Dem_ConsisChk_Dem_EvtSt_SetTestFailed(Dem_EventIdType EventId,
                                                   Dem_boolean_least setBit){
    REGISTER_CALL("Dem_EvtSt_SetTestFailed");

    IF_INSTANCE("TC_04_01") {
        CHECK_U_INT(EventId, 0x12);
        CHECK_BOOLEAN(setBit, FALSE);
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtSt_SetTestFailedSLC */
void ISOLATE_Dem_ConsisChk_Dem_EvtSt_SetTestFailedSLC(Dem_EventIdType EventId,
                                                      Dem_boolean_least setBit){
    REGISTER_CALL("Dem_EvtSt_SetTestFailedSLC");

    IF_INSTANCE("TC_04_01") {
        CHECK_U_INT(EventId,0x12);
        CHECK_BOOLEAN(setBit, TRUE);
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtSt_SetTestCompleteSLC */
void ISOLATE_Dem_ConsisChk_Dem_EvtSt_SetTestCompleteSLC(Dem_EventIdType EventId,
                                                        Dem_boolean_least setBit){
    REGISTER_CALL("Dem_EvtSt_SetTestCompleteSLC");

    IF_INSTANCE("TC_04_01") {
        CHECK_U_INT(EventId,0x12);
        CHECK_BOOLEAN(setBit, TRUE);
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtSt_SetConfirmedDTC */
void ISOLATE_Dem_ConsisChk_Dem_EvtSt_SetConfirmedDTC(Dem_EventIdType EventId,
                                                     Dem_boolean_least setBit){
    REGISTER_CALL("Dem_EvtSt_SetConfirmedDTC");

    IF_INSTANCE("TC_04_01") {
        CHECK_U_INT(EventId,0x12);
        CHECK_BOOLEAN(setBit, TRUE);
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtSt_SetPendingDTC */
void ISOLATE_Dem_ConsisChk_Dem_EvtSt_SetPendingDTC(Dem_EventIdType EventId,
                                                   Dem_boolean_least setBit){
    REGISTER_CALL("Dem_EvtSt_SetPendingDTC");

    IF_INSTANCE("TC_04_01") {
        CHECK_U_INT(EventId,0x12);
        CHECK_BOOLEAN(setBit, TRUE);
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvMemEventMemoryLocIteratorNew */
void ISOLATE_Dem_ConsisChk_Dem_EvMemEventMemoryLocIteratorNew(uint16_least * LocId,
                                                              uint16_least MemId){
    REGISTER_CALL("Dem_EvMemEventMemoryLocIteratorNew");

    IF_INSTANCE("TC_01_01") {
        CHECK_U_INT(MemId, DEM_CFG_EVMEM_MEMID_PRIMARY);
        *LocId = 0x00;
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvMemEventMemoryLocIteratorIsValid */
Dem_boolean_least ISOLATE_Dem_ConsisChk_Dem_EvMemEventMemoryLocIteratorIsValid(const uint16_least * LocId,
                                                                               uint16_least MemId){
    REGISTER_CALL("Dem_EvMemEventMemoryLocIteratorIsValid");

    IF_INSTANCE("TC_01_01") {
        CHECK_U_INT(MemId, DEM_CFG_EVMEM_MEMID_PRIMARY);
        return TRUE;
    }
    IF_INSTANCE("TC_01_01_B") {
        CHECK_U_INT(MemId, DEM_CFG_EVMEM_MEMID_PRIMARY);
        return FALSE;
    }


    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EvMemEventMemoryLocIteratorNext */
void ISOLATE_Dem_ConsisChk_Dem_EvMemEventMemoryLocIteratorNext(uint16_least * LocId,
                                                               uint16_least MemId){
    REGISTER_CALL("Dem_EvMemEventMemoryLocIteratorNext");

    IF_INSTANCE("TC_01_01") {
        CHECK_U_INT(MemId,DEM_CFG_EVMEM_MEMID_PRIMARY);
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvMemGenGetLastFailedDtcFromGenNvData */
Dem_DtcIdType ISOLATE_Dem_ConsisChk_Dem_EvMemGenGetLastFailedDtcFromGenNvData(){
    REGISTER_CALL("Dem_EvMemGenGetLastFailedDtcFromGenNvData");

    IF_INSTANCE("TC_02_01") {
        return 0x32;
    }
    IF_INSTANCE("TC_02_02") {
        return 0x36;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_ConsistencyCheckForFailedDTC */
void ISOLATE_Dem_ConsisChk_Dem_ConsistencyCheckForFailedDTC(){
    REGISTER_CALL("Dem_ConsistencyCheckForFailedDTC");

    IF_INSTANCE("TC_02_01") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvMemGenGetLastConfirmedDtcFromGenNvData */
Dem_DtcIdType ISOLATE_Dem_ConsisChk_Dem_EvMemGenGetLastConfirmedDtcFromGenNvData(){
    REGISTER_CALL("Dem_EvMemGenGetLastConfirmedDtcFromGenNvData");

    IF_INSTANCE("TC_02_01") {
        return 0x23;
    }
    IF_INSTANCE("TC_02_02") {
        return 0x72;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_ConsistencyCheckForConfirmedDTC */
void ISOLATE_Dem_ConsisChk_Dem_ConsistencyCheckForConfirmedDTC(){
    REGISTER_CALL("Dem_ConsistencyCheckForConfirmedDTC");

    IF_INSTANCE("TC_02_01") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* pragma qas cantata testscript end */
/*****************************************************************************/
/* End of test script                                                        */
/*****************************************************************************/
