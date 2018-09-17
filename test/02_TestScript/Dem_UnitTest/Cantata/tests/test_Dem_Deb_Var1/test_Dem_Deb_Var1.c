/*****************************************************************************/
/*                            Cantata Test Script                            */
/*****************************************************************************/
/*
 *    Filename: test_Dem_Deb_Var1.c
 *    Author: urg1hc
 *    Generated on: 03-Aug-2018 18:03:40
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
extern Std_ReturnType Dem_DebGetDebounceCounter4Calculation(Dem_EventIdType EventId, sint16 * debounceCounter);
extern sint8 Dem_DebCalculateFaultDetectionCounter(Dem_EventIdType EventId, sint16 debounceCounter);

/* Tester define */
Std_ReturnType Dem_GetFaultDetectionCounterOfIntDebMonitors_fnc(sint8 * faultDetCtr);
void Dem_DebGetLimits_fnc(const void* paramSet, uint16 paramIndex, sint16_least* MinThreshold, sint16_least* MaxThreshold);
extern Std_ReturnType Dem_GetFaultDetectionCounter(Dem_EventIdType EventId, sint8 * FaultDetectionCounter);
extern Std_ReturnType Dem_GetFaultDetectionCounter_GeneralEvtInfo(Dem_EventIdType EventId, sint8 * FaultDetectionCounter);
extern Std_ReturnType Dem_ResetEventDebounceStatus(Dem_EventIdType EventId, Dem_DebounceResetStatusType DebounceResetStatus);
extern Std_ReturnType Dem_ManipulateEventDebounceStatus(Dem_EventIdType EventId, Dem_DebugDataType debug0, Dem_DebugDataType debug1, sint16 manipulationValue);
extern boolean Dem_DebHandleResetConditions(Dem_EventIdType EventId);
extern uint8 ACCESS_FUNCTION_Dem_Deb_Dem_getEventDebouncing(Dem_EventIdType EventId);
extern Std_ReturnType Dem_GetDebouncingOfEvent(Dem_EventIdType EventId, Dem_DebouncingStateType * DebouncingState);
extern Std_ReturnType Dem_GetDebouncingOfEvent_GeneralEvtInfo(Dem_EventIdType EventId, Dem_DebouncingStateType * DebouncingState);
extern void Dem_DebMainFunction();
extern void Dem_TimeBasedDebounceMainFunction();

/* Global data */
Dem_DebClass Dem_Cfg_DebClasses[3];
Dem_OpMoStateType Dem_OpMoState;

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
void test_Dem_DebGetDebounceCounter4Calculation_MONINTERNAL(int);
void test_Dem_DebGetDebounceCounter4Calculation_NO_FDC_AVAI(int);
void test_Dem_DebGetDebounceCounter4Calculation_Counter0(int);
void test_Dem_DebGetDebounceCounter4Calculation_CounterUpdated_0(int);
void test_Dem_DebGetDebounceCounter4Calculation_CounterUpdated_1(int);
/*****************************************************************************/
void test_Dem_DebCalculateFaultDetectionCounter_MONINTERNAL(int);
void test_Dem_DebCalculateFaultDetectionCounter_Counter1(int);
void test_Dem_DebCalculateFaultDetectionCounter_Counter1_Threshold_Neg(int);
void test_Dem_DebCalculateFaultDetectionCounter_Counter_Threshold_Neg(int);
void test_Dem_DebCalculateFaultDetectionCounter_Counter_Neg(int);
void test_Dem_DebCalculateFaultDetectionCounter_DoNothing(int);
/*****************************************************************************/
void test_Dem_GetFaultDetectionCounter_OpMoState_NotINIT(int);
void test_Dem_GetFaultDetectionCounter_NULL(int);
void test_Dem_GetFaultDetectionCounter_E_OK(int);
void test_Dem_GetFaultDetectionCounter_NOT_OK(int);
/*****************************************************************************/
void test_Dem_GetFaultDetectionCounter_GeneralEvtInfo(int);
/*****************************************************************************/
void test_Dem_ResetEventDebounceStatus_Error(int);
void test_Dem_ResetEventDebounceStatus_InvokedFnc(int);
void test_Dem_ResetEventDebounceStatus_Not_RESET(int);
/*****************************************************************************/
void test_Dem_ManipulateEventDebounceStatus_EventIdValid(int);
void test_Dem_ManipulateEventDebounceStatus_Init(int);
void test_Dem_ManipulateEventDebounceStatus_Fulfilled(int);
void test_Dem_ManipulateEventDebounceStatus_Debounce_0(int);
void test_Dem_ManipulateEventDebounceStatus_Debounce_1(int);
void test_Dem_ManipulateEventDebounceStatus_minThreshold_0(int);
void test_Dem_ManipulateEventDebounceStatus_minThreshold_1(int);
void test_Dem_ManipulateEventDebounceStatus_minThreshold_2(int);
void test_Dem_ManipulateEventDebounceStatus_minThreshold_3(int);
void test_Dem_ManipulateEventDebounceStatus_minThreshold_4(int);
void test_Dem_ManipulateEventDebounceStatus_minThreshold_5(int);
void test_Dem_ManipulateEventDebounceStatus_maxThreshold_0(int);
void test_Dem_ManipulateEventDebounceStatus_maxThreshold_1(int);
void test_Dem_ManipulateEventDebounceStatus_maxThreshold_2(int);
void test_Dem_ManipulateEventDebounceStatus_other(int);
/*****************************************************************************/
void test_Dem_DebHandleResetConditions_DtcSetting_TRUE(int);
void test_Dem_DebHandleResetConditions_FilterRequested(int);
void test_Dem_DebHandleResetConditions_DtcSetting_FALSE(int);
void test_Dem_DebHandleResetConditions_StorageCondition_FALSE(int);
/*****************************************************************************/
void test_Dem_getEventDebouncing_set_1(int);
void test_Dem_getEventDebouncing_set_127(int);
void test_Dem_getEventDebouncing_set_Neg(int);
void test_Dem_getEventDebouncing_set_0(int);
/*****************************************************************************/
void test_Dem_GetDebouncingOfEvent_Error(int);
void test_Dem_GetDebouncingOfEvent_NULL(int);
void test_Dem_GetDebouncingOfEvent_DET(int);
void test_Dem_GetDebouncingOfEvent_Update_State(int);
/*****************************************************************************/
void test_Dem_GetDebouncingOfEvent_GeneralEvtInfo(int);
void test_Dem_DebMainFunction_DoNothing(int);
void test_Dem_TimeBasedDebounceMainFunction_InvokedFnc(int);
void test_Dem_TimeBasedDebounceMainFunction_DoNothing(int);

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
    OPEN_LOG("test_Dem_Deb_Var1.ctr", false, 100);
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
    test_Dem_DebGetDebounceCounter4Calculation_MONINTERNAL(1);
    test_Dem_DebGetDebounceCounter4Calculation_NO_FDC_AVAI(1);
    test_Dem_DebGetDebounceCounter4Calculation_Counter0(1);
    test_Dem_DebGetDebounceCounter4Calculation_CounterUpdated_0(1);
    test_Dem_DebGetDebounceCounter4Calculation_CounterUpdated_1(1);
    /*****************************************************************************/
    test_Dem_DebCalculateFaultDetectionCounter_MONINTERNAL(1);
    test_Dem_DebCalculateFaultDetectionCounter_Counter1(1);
    test_Dem_DebCalculateFaultDetectionCounter_Counter1_Threshold_Neg(1);
    test_Dem_DebCalculateFaultDetectionCounter_Counter_Threshold_Neg(1);
    test_Dem_DebCalculateFaultDetectionCounter_Counter_Neg(1);
    test_Dem_DebCalculateFaultDetectionCounter_DoNothing(1);
    /*****************************************************************************/
    test_Dem_GetFaultDetectionCounter_OpMoState_NotINIT(1);
    test_Dem_GetFaultDetectionCounter_NULL(1);
    test_Dem_GetFaultDetectionCounter_E_OK(1);
    test_Dem_GetFaultDetectionCounter_NOT_OK(1);
    /*****************************************************************************/
    test_Dem_GetFaultDetectionCounter_GeneralEvtInfo(1);
    /*****************************************************************************/
    test_Dem_ResetEventDebounceStatus_Error(1);
    test_Dem_ResetEventDebounceStatus_InvokedFnc(1);
    test_Dem_ResetEventDebounceStatus_Not_RESET(1);
    /*****************************************************************************/
    test_Dem_ManipulateEventDebounceStatus_EventIdValid(1);
    test_Dem_ManipulateEventDebounceStatus_Init(1);
    test_Dem_ManipulateEventDebounceStatus_Fulfilled(1);
    test_Dem_ManipulateEventDebounceStatus_Debounce_0(1);
    test_Dem_ManipulateEventDebounceStatus_Debounce_1(1);
    test_Dem_ManipulateEventDebounceStatus_minThreshold_0(1);
    test_Dem_ManipulateEventDebounceStatus_minThreshold_1(1);
    test_Dem_ManipulateEventDebounceStatus_minThreshold_2(1);
    test_Dem_ManipulateEventDebounceStatus_minThreshold_3(1);
    test_Dem_ManipulateEventDebounceStatus_minThreshold_4(1);
    test_Dem_ManipulateEventDebounceStatus_minThreshold_5(1);
    test_Dem_ManipulateEventDebounceStatus_maxThreshold_0(1);
    test_Dem_ManipulateEventDebounceStatus_maxThreshold_1(1);
    test_Dem_ManipulateEventDebounceStatus_maxThreshold_2(1);
    test_Dem_ManipulateEventDebounceStatus_other(1);
    /*****************************************************************************/
    test_Dem_DebHandleResetConditions_DtcSetting_TRUE(1);
    test_Dem_DebHandleResetConditions_FilterRequested(1);
    test_Dem_DebHandleResetConditions_DtcSetting_FALSE(1);
    test_Dem_DebHandleResetConditions_StorageCondition_FALSE(1);
    /*****************************************************************************/
    test_Dem_getEventDebouncing_set_1(1);
    test_Dem_getEventDebouncing_set_127(1);
    test_Dem_getEventDebouncing_set_Neg(1);
    test_Dem_getEventDebouncing_set_0(1);
    /*****************************************************************************/
    test_Dem_GetDebouncingOfEvent_Error(1);
    test_Dem_GetDebouncingOfEvent_NULL(1);
    test_Dem_GetDebouncingOfEvent_DET(1);
    test_Dem_GetDebouncingOfEvent_Update_State(1);
    /*****************************************************************************/
    test_Dem_GetDebouncingOfEvent_GeneralEvtInfo(1);
    test_Dem_DebMainFunction_DoNothing(1);
    test_Dem_TimeBasedDebounceMainFunction_InvokedFnc(1);
    test_Dem_TimeBasedDebounceMainFunction_DoNothing(1);

    rule_set("*", "*");
    EXPORT_COVERAGE("test_Dem_Deb_Var1.cov", cppca_export_replace);
}

/*****************************************************************************/
/* Test Cases                                                                */
/*****************************************************************************/

void test_Dem_DebGetDebounceCounter4Calculation_MONINTERNAL(int doIt){
if (doIt) {
    /* Compilation Flag
     * Define DEM_CFG_DEBMONINTERNAL as DEM_CFG_DEBMONINTERNAL_ON;
     * Define DEM_CFG_DTCSETTINGBLOCKSREPORTING as FALSE;
     * Define DEM_CFG_DEBUGDATA as DEM_CFG_DEBUGDATA_OFF;
     * Define DEM_CFG_DEBARTIMEBASE as DEM_CFG_DEBARTIMEBASE_ON;
     * Define DEM_CFG_DEBCOUNTERBASECLASS as DEM_CFG_DEBCOUNTERBASECLASS_ON;
     * Define DEM_CFG_DISTURBANCE_MEMORY as DEM_CFG_DISTURBANCE_MEMORY_ON;
     * Define DEM_CFG_SETEVENTSTATUSALLOWEDCALLBACK as DEM_CFG_SETEVENTSTATUSALLOWEDCALLBACK_OFF;
     * Define DEM_CFG_SETEVENTSTATUSCALLNOTIFICATION as DEM_CFG_SETEVENTSTATUSCALLNOTIFICATION_OFF;
     * Define DEM_CFG_DTCSETTINGBLOCKSREPORTING as FALSE;
     * Define DEM_CFG_SUPPORT_DEB_RESET_AFTER_STOCO as DEM_CFG_SUPPORT_DEB_RESET_AFTER_STOCO_ACCORDING_DEBOUNCEBEHAVIOR;
     * Define DEM_CFG_DEBTIMEBASED_CONFIGURED_CYCLICTASKTIME as TRUE;
     */
    /* Test Method - EP */
    /* Tester define */
    sint16 debounceCounter_entity;
    INITIALISE(debounceCounter_entity);
    Dem_DebounceMonitorInternal paramSet_entity[9];
    INITIALISE(paramSet_entity);

    /* Test case data declarations */
    Dem_EventIdType EventId = 0;
    sint16 * debounceCounter = &debounceCounter_entity;
    Std_ReturnType returnValue;
    Std_ReturnType expected_returnValue = 0;

    /* Set global data */
    initialise_global_data();
    Dem_Cfg_DebClasses[0].paramSet = (void*)&paramSet_entity[0];
    paramSet_entity[0].funcPointer_GetFDC = &Dem_GetFaultDetectionCounterOfIntDebMonitors_fnc;

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_DebGetDebounceCounter4Calculation_MONINTERNAL",
               "Check FDC value is gotten from the application in case:"
               "- Function Dem_EvtGetDebounceMethodIndex() returns DEM_DEBMETH_IDX_MONINTERNAL (line 42)"
               "- Pointer get FDC is set valid function (line 47)");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_EvtGetDebounceMethodIndex#MONINTERNAL;"
                "Dem_EvtGetDebounceMethodIndex#MONINTERNAL;"
                "Dem_EvtGetDebounceParamSetIndex#default;"
                "Dem_EvtGetDebounceParamSetIndex#default;"
                "Dem_GetFaultDetectionCounterOfIntDebMonitors_fnc#default;");

            /* Call SUT */
            returnValue = Dem_DebGetDebounceCounter4Calculation(EventId, debounceCounter);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Expected Result - FDC value is gotten from the application */
            /* Checks on global data */
            check_global_data();
            CHECK_U_INT(*debounceCounter, 1);
            /* GUID -
             * {CC586068-D30D-496b-AF98-99C15930FEFF};
             * {63F5526A-3F0A-4973-B86E-0B4EB606E5D2};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_DebGetDebounceCounter4Calculation_NO_FDC_AVAI(int doIt){
if (doIt) {
    /* Test Method - EP */
    /* Tester define */
    sint16 debounceCounter_entity;
    INITIALISE(debounceCounter_entity);
    Dem_DebounceMonitorInternal paramSet_entity[9];
    INITIALISE(paramSet_entity);

    /* Test case data declarations */
    Dem_EventIdType EventId = 0;
    sint16 * debounceCounter = &debounceCounter_entity;
    Std_ReturnType returnValue;
    Std_ReturnType expected_returnValue = DEM_E_NO_FDC_AVAILABLE;

    /* Set global data */
    initialise_global_data();
    Dem_Cfg_DebClasses[0].paramSet = (void*)&paramSet_entity[0];
    paramSet_entity[0].funcPointer_GetFDC = NULL_PTR;

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_DebGetDebounceCounter4Calculation_NO_FDC_AVAI",
               "Check function returns DEM_E_NO_FDC_AVAILABLE in case:"
               "- Function Dem_EvtGetDebounceMethodIndex() returns DEM_DEBMETH_IDX_MONINTERNAL (line 42)"
               "- Pointer get FDC is set NULL (line 58)");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_EvtGetDebounceMethodIndex#MONINTERNAL;"
                "Dem_EvtGetDebounceMethodIndex#MONINTERNAL;"
                "Dem_EvtGetDebounceParamSetIndex#default;");

            /* Call SUT */
            returnValue = Dem_DebGetDebounceCounter4Calculation(EventId, debounceCounter);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Expected Result - Function returns DEM_E_NO_FDC_AVAILABLE */
            /* Checks on global data */
            check_global_data();
            CHECK_U_INT(*debounceCounter, 0);
            /* GUID -
             * {C49DB81C-E20C-4651-B0D8-1B9D999442D1};
             * {63F5526A-3F0A-4973-B86E-0B4EB606E5D2};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_DebGetDebounceCounter4Calculation_Counter0(int doIt){
if (doIt) {
    /* Test Method - EP */
    /* Tester define */
    sint16 debounceCounter_entity;
    INITIALISE(debounceCounter_entity);

    /* Test case data declarations */
    Dem_EventIdType EventId = 0;
    sint16 * debounceCounter = &debounceCounter_entity;
    Std_ReturnType returnValue;
    Std_ReturnType expected_returnValue = E_OK;

    /* Set global data */
    initialise_global_data();

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_DebGetDebounceCounter4Calculation_Counter0",
               "Check function returns E_OK in case:"
               "- Function Dem_EvtGetDebounceMethodIndex() returns value differ with DEM_DEBMETH_IDX_MONINTERNAL (line 65)"
               "- Function Dem_EvtIsResetFailureFilterRequested() returns FALSE (line 68)"
               "- Function Dem_EvtIsResetFailureFilterRequestedAfterDtcSetting() returns TRUE (line 68)"
               "- Function Dem_IsEventEnabledByDtcSetting() returns TRUE (line 68)");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_EvtGetDebounceMethodIndex#Not_MONINTERNAL;"
                "Dem_EvtIsResetFailureFilterRequested#FALSE;"
                "Dem_EvtIsResetFailureFilterRequestedAfterDtcSetting#TRUE;"
                "Dem_IsEventEnabledByDtcSetting#TRUE;");

            /* Call SUT */
            returnValue = Dem_DebGetDebounceCounter4Calculation(EventId, debounceCounter);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Expected Result - Function returns E_OK */
            /* Checks on global data */
            check_global_data();
            CHECK_U_INT(*debounceCounter, 0);
            /* GUID -
             * {DF4208D7-8194-481e-A549-C02B380C2859};
             * {816DACDD-CE07-4594-A7BE-58FC4AFFD91B};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_DebGetDebounceCounter4Calculation_CounterUpdated_0(int doIt){
if (doIt) {
    /* Test Method - EP */
    /* Tester define */
    sint16 debounceCounter_entity;
    INITIALISE(debounceCounter_entity);

    /* Test case data declarations */
    Dem_EventIdType EventId = 0;
    sint16 * debounceCounter = &debounceCounter_entity;
    Std_ReturnType returnValue;
    Std_ReturnType expected_returnValue = E_OK;

    /* Set global data */
    initialise_global_data();

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_DebGetDebounceCounter4Calculation_CounterUpdated_0",
               "Check function returns E_OK and debounceCounter is updated by returned value of function Dem_EvtGetDebounceLevel() in case:"
               "- Function Dem_EvtGetDebounceMethodIndex() returns value differ with DEM_DEBMETH_IDX_MONINTERNAL (line 65)"
               "- Function Dem_EvtIsResetFailureFilterRequested() returns FALSE (line 76)"
               "- Function Dem_EvtIsResetFailureFilterRequestedAfterDtcSetting() returns FALSE (line 76)");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_EvtGetDebounceMethodIndex#Not_MONINTERNAL;"
                "Dem_EvtIsResetFailureFilterRequested#FALSE;"
                "Dem_EvtIsResetFailureFilterRequestedAfterDtcSetting#FALSE;"
                "Dem_EvtGetDebounceLevel#CounterUpdate;");

            /* Call SUT */
            returnValue = Dem_DebGetDebounceCounter4Calculation(EventId, debounceCounter);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Expected Result - Function returns E_OK */
            /* Checks on global data */
            check_global_data();
            CHECK_U_INT(*debounceCounter, 1);
            /* GUID -
             * {DF4208D7-8194-481e-A549-C02B380C2859};
             * {C15A5DC6-4E45-453f-BF89-BB73F922B859};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_DebGetDebounceCounter4Calculation_CounterUpdated_1(int doIt){
if (doIt) {
    /* Test Method - EP */
    /* Tester define */
    sint16 debounceCounter_entity;
    INITIALISE(debounceCounter_entity);

    /* Test case data declarations */
    Dem_EventIdType EventId = 0;
    sint16 * debounceCounter = &debounceCounter_entity;
    Std_ReturnType returnValue;
    Std_ReturnType expected_returnValue = E_OK;

    /* Set global data */
    initialise_global_data();

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_DebGetDebounceCounter4Calculation_CounterUpdated_1",
               "Check function returns E_OK and debounceCounter is updated by returned value of function Dem_EvtGetDebounceLevel() in case:"
               "- Function Dem_EvtGetDebounceMethodIndex() returns value differ with DEM_DEBMETH_IDX_MONINTERNAL (line 65)"
               "- Function Dem_EvtIsResetFailureFilterRequested() returns FALSE (line 76)"
               "- Function Dem_EvtIsResetFailureFilterRequestedAfterDtcSetting() returns TRUE (line 76)"
               "- Function Dem_IsEventEnabledByDtcSetting() returns FALSE (line 76)");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_EvtGetDebounceMethodIndex#Not_MONINTERNAL;"
                "Dem_EvtIsResetFailureFilterRequested#FALSE;"
                "Dem_EvtIsResetFailureFilterRequestedAfterDtcSetting#TRUE;"
                "Dem_IsEventEnabledByDtcSetting#FALSE;"
                "Dem_EvtGetDebounceLevel#CounterUpdate;");

            /* Call SUT */
            returnValue = Dem_DebGetDebounceCounter4Calculation(EventId, debounceCounter);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Expected Result - Function returns E_OK */
            /* Checks on global data */
            check_global_data();
            CHECK_U_INT(*debounceCounter, 1);
            /* GUID -
             * {DF4208D7-8194-481e-A549-C02B380C2859};
             * {C15A5DC6-4E45-453f-BF89-BB73F922B859};
             */
        END_CALLS();
    END_TEST();
}}

/*****************************************************************************/
/* Dem_DebCalculateFaultDetectionCounter                                     */
/*****************************************************************************/

void test_Dem_DebCalculateFaultDetectionCounter_MONINTERNAL(int doIt){
if (doIt) {
    /* Test Method - EP */
    /* Tester define */
    /* Test case data declarations */
    Dem_EventIdType EventId = 0;
    sint16 debounceCounter = 0;
    sint8 returnValue;
    sint8 expected_returnValue = 0;

    /* Set global data */
    initialise_global_data();

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_DebCalculateFaultDetectionCounter_MONINTERNAL",
               "Check function returns the value of debounceCounter parameter in case:"
               "- Function Dem_EvtGetDebounceMethodIndex() returns DEM_DEBMETH_IDX_MONINTERNAL (line 93)");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_EvtGetDebounceMethodIndex#MONINTERNAL;");

            /* Call SUT */
            returnValue = Dem_DebCalculateFaultDetectionCounter(EventId, debounceCounter);

            /* Test case checks */
            CHECK_S_CHAR(returnValue, expected_returnValue);
            /* Expected Result - Function returns the value of debounceCounter parameter */
            /* Checks on global data */
            check_global_data();
            /* GUID -
             * {D313253E-90DA-44e3-9C85-C25144A9869B};
             * {4B599D48-15ED-4932-BC02-2BB775ACBE2A};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_DebCalculateFaultDetectionCounter_Counter1(int doIt){
if (doIt) {
    /* Test Method - EP */
    /* Tester define */
    /* Test case data declarations */
    Dem_EventIdType EventId = 0;
    sint16 debounceCounter = 1;
    sint8 returnValue;
    sint8 expected_returnValue = DEM_DEB_DEBLEVEL_MAXTHRESHOLD;

    /* Set global data */
    initialise_global_data();
    Dem_Cfg_DebClasses[0].funcPointer_GetLimits = Dem_DebGetLimits_fnc;

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_DebCalculateFaultDetectionCounter_Counter1",
               "Check function returns DEM_DEB_DEBLEVEL_MAXTHRESHOLD in case:"
               "- Function Dem_EvtGetDebounceMethodIndex() returns value differ with DEM_DEBMETH_IDX_MONINTERNAL (line 98)"
               "- debounceCounter is greater than 0 (line 109)"
               "- Maximum Threshold is greater than 0 (line 111)");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_EvtGetDebounceMethodIndex#Not_MONINTERNAL;"
                "Dem_EvtGetDebounceMethodIndex#MONINTERNAL;"
                "Dem_EvtGetDebounceMethodIndex#MONINTERNAL;"
                "Dem_EvtGetDebounceParamSetIndex#default;"
                "Dem_DebGetLimits_fnc#MaxThreshold_set_1;");

            /* Call SUT */
            returnValue = Dem_DebCalculateFaultDetectionCounter(EventId, debounceCounter);

            /* Test case checks */
            CHECK_S_CHAR(returnValue, expected_returnValue);
            /* Expected Result - Function returns DEM_DEB_DEBLEVEL_MAXTHRESHOLD */
            /* Checks on global data */
            check_global_data();
            /* GUID -
             * {A1C0F4D7-9695-4c17-84A2-AB3A858D1FF2};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_DebCalculateFaultDetectionCounter_Counter1_Threshold_Neg(int doIt){
if (doIt) {
    /* Test Method - FI */
    /* Tester define */
    /* Test case data declarations */
    Dem_EventIdType EventId = 0;
    sint16 debounceCounter = 1;
    sint8 returnValue;
    sint8 expected_returnValue = 0x81;

    /* Set global data */
    initialise_global_data();
    Dem_Cfg_DebClasses[0].funcPointer_GetLimits = Dem_DebGetLimits_fnc;

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_DebCalculateFaultDetectionCounter_Counter1_Threshold_Neg",
               "Check function Det_ReportError() is invoked in case:"
               "- Function Dem_EvtGetDebounceMethodIndex() returns value differ with DEM_DEBMETH_IDX_MONINTERNAL (line 98)"
               "- debounceCounter is greater than 0 (line 109)"
               "- Maximum Threshold is less than 0 (line 111)");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_EvtGetDebounceMethodIndex#Not_MONINTERNAL;"
                "Dem_EvtGetDebounceMethodIndex#MONINTERNAL;"
                "Dem_EvtGetDebounceMethodIndex#MONINTERNAL;"
                "Dem_EvtGetDebounceParamSetIndex#default;"
                "Dem_DebGetLimits_fnc#MaxThreshold_set_Neg;"
                "Det_ReportError#MAXTHRESHOLD;");

            /* Call SUT */
            returnValue = Dem_DebCalculateFaultDetectionCounter(EventId, debounceCounter);

            /* Test case checks */
            CHECK_S_CHAR(returnValue, expected_returnValue);
            /* Expected Result - Function Det_ReportError() is invoked */
            /* Checks on global data */
            check_global_data();
            /* GUID -
             * {A1C0F4D7-9695-4c17-84A2-AB3A858D1FF2};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_DebCalculateFaultDetectionCounter_Counter_Threshold_Neg(int doIt){
if (doIt) {
    /* Test Method - EP */
    /* Tester define */
    /* Test case data declarations */
    Dem_EventIdType EventId = 0;
    sint16 debounceCounter = -1;
    sint8 returnValue;
    sint8 expected_returnValue = DEM_DEB_DEBLEVEL_MINTHRESHOLD;

    /* Set global data */
    initialise_global_data();
    Dem_Cfg_DebClasses[0].funcPointer_GetLimits = Dem_DebGetLimits_fnc;

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_DebCalculateFaultDetectionCounter_Counter_Threshold_Neg",
               "Check function returns DEM_DEB_DEBLEVEL_MINTHRESHOLD in case:"
               "- Function Dem_EvtGetDebounceMethodIndex() returns value differ with DEM_DEBMETH_IDX_MONINTERNAL (line 98)"
               "- debounceCounter is less than 0 (line 115)"
               "- Maximum Threshold is less than 0 (line 117)");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_EvtGetDebounceMethodIndex#Not_MONINTERNAL;"
                "Dem_EvtGetDebounceMethodIndex#MONINTERNAL;"
                "Dem_EvtGetDebounceMethodIndex#MONINTERNAL;"
                "Dem_EvtGetDebounceParamSetIndex#default;"
                "Dem_DebGetLimits_fnc#MinThreshold_set_Neg;");

            /* Call SUT */
            returnValue = Dem_DebCalculateFaultDetectionCounter(EventId, debounceCounter);

            /* Test case checks */
            CHECK_S_CHAR(returnValue, expected_returnValue);
            /* Expected Result - Function returns DEM_DEB_DEBLEVEL_MINTHRESHOLD */
            /* Checks on global data */
            check_global_data();
            /* GUID -
             * {E6A461B4-EEB4-4e53-A600-B82962AC0602};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_DebCalculateFaultDetectionCounter_Counter_Neg(int doIt){
if (doIt) {
    /* Test Method - FI */
    /* Tester define */
    /* Test case data declarations */
    Dem_EventIdType EventId = 0;
    sint16 debounceCounter = -1;
    sint8 returnValue;
    sint8 expected_returnValue = DEM_DEB_DEBLEVEL_MINTHRESHOLD;

    /* Set global data */
    initialise_global_data();
    Dem_Cfg_DebClasses[0].funcPointer_GetLimits = Dem_DebGetLimits_fnc;

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_DebCalculateFaultDetectionCounter_Counter_Neg",
               "Check function Det_ReportError() is invoked in case:"
               "- Function Dem_EvtGetDebounceMethodIndex() returns value differ with DEM_DEBMETH_IDX_MONINTERNAL (line 98)"
               "- debounceCounter is less than 0 (line 115)"
               "- Maximum Threshold is greater than 0 (line 117)");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_EvtGetDebounceMethodIndex#Not_MONINTERNAL;"
                "Dem_EvtGetDebounceMethodIndex#MONINTERNAL;"
                "Dem_EvtGetDebounceMethodIndex#MONINTERNAL;"
                "Dem_EvtGetDebounceParamSetIndex#default;"
                "Dem_DebGetLimits_fnc#MinThreshold_set_1;"
                "Det_ReportError#MINTHRESHOLD;");

            /* Call SUT */
            returnValue = Dem_DebCalculateFaultDetectionCounter(EventId, debounceCounter);

            /* Test case checks */
            CHECK_S_CHAR(returnValue, expected_returnValue);
            /* Expected Result - Function Det_ReportError() is invoked */
            /* Checks on global data */
            check_global_data();
            /* GUID -
             * {E6A461B4-EEB4-4e53-A600-B82962AC0602};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_DebCalculateFaultDetectionCounter_DoNothing(int doIt){
if (doIt) {
    /* Test Method - EP */
    /* Tester define */
    /* Test case data declarations */
    Dem_EventIdType EventId = 0;
    sint16 debounceCounter = 0;
    sint8 returnValue;
    sint8 expected_returnValue = 0;

    /* Set global data */
    initialise_global_data();
    Dem_Cfg_DebClasses[0].funcPointer_GetLimits = Dem_DebGetLimits_fnc;

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_DebCalculateFaultDetectionCounter_DoNothing",
               "Check function returns zero in case:"
               "- Function Dem_EvtGetDebounceMethodIndex() returns value differ with DEM_DEBMETH_IDX_MONINTERNAL (line 98)"
               "- debounceCounter is set 0 (line 121)");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_EvtGetDebounceMethodIndex#Not_MONINTERNAL;"
                "Dem_EvtGetDebounceMethodIndex#MONINTERNAL;"
                "Dem_EvtGetDebounceMethodIndex#MONINTERNAL;"
                "Dem_EvtGetDebounceParamSetIndex#default;"
                "Dem_DebGetLimits_fnc#MinThreshold_set_1;");

            /* Call SUT */
            returnValue = Dem_DebCalculateFaultDetectionCounter(EventId, debounceCounter);

            /* Test case checks */
            CHECK_S_CHAR(returnValue, expected_returnValue);
            /* Expected Result - Function returns zero */
            /* Checks on global data */
            check_global_data();
            /* GUID -
             * {2A6DB99D-A36B-4d64-9EFC-4330598981BA};
             */
        END_CALLS();
    END_TEST();
}}

/*****************************************************************************/
/* Dem_GetFaultDetectionCounter                                              */
/*****************************************************************************/

void test_Dem_GetFaultDetectionCounter_OpMoState_NotINIT(int doIt){
if (doIt) {
    /* Test Method - FI */
    /* Tester define */
    /* Test case data declarations */
    Dem_EventIdType EventId = 0;
    sint8 * FaultDetectionCounter = NULL_PTR;
    Std_ReturnType returnValue;
    Std_ReturnType expected_returnValue = E_NOT_OK;

    /* Set global data */
    initialise_global_data();
    Dem_OpMoState = DEM_OPMO_STATE_NOTINITIALIZED;

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_GetFaultDetectionCounter_OpMoState_NotINIT",
               "Check function returns error in case:"
               "- The check for PREINITIALIZATION, VALIDITY and AVAILABLITY for an event ID is failed (line 138)");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Det_ReportError#Dem_GetFaultDetectionCounter_0x20;");

            /* Call SUT */
            returnValue = Dem_GetFaultDetectionCounter(EventId, FaultDetectionCounter);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Expected Result - Function returns error */
            /* Checks on global data */
            check_global_data();
            /* GUID -
             * {F33F6EF9-E7AA-4eba-933B-9DB9B3C0618C};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_GetFaultDetectionCounter_NULL(int doIt){
if (doIt) {
    /* Test Method - FI */
    /* Tester define */
    /* Test case data declarations */
    Dem_EventIdType EventId = 0;
    sint8 * FaultDetectionCounter = NULL_PTR;
    Std_ReturnType returnValue;
    Std_ReturnType expected_returnValue = E_NOT_OK;

    /* Set global data */
    initialise_global_data();
    Dem_OpMoState = DEM_OPMO_STATE_PREINITIALIZED;

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_GetFaultDetectionCounter_NULL",
               "Check function returns error in case:"
               "- The check for PREINITIALIZATION, VALIDITY and AVAILABLITY for an event ID is passed (line 138)"
               "- Parameter FaultDetectionCounter set NULL (line 139)");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_isEventIdValid#TRUE;"
                "Dem_EvtIsSuppressed#FALSE;"
                "Det_ReportError#Dem_GetFaultDetectionCounter_NULL;");

            /* Call SUT */
            returnValue = Dem_GetFaultDetectionCounter(EventId, FaultDetectionCounter);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Expected Result - Function returns error */
            /* Checks on global data */
            check_global_data();
            /* GUID -
             * {A10E3921-E6DD-4b53-9237-E7F430F1863C};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_GetFaultDetectionCounter_E_OK(int doIt){
if (doIt) {
    /* Test Method - EP */
    /* Tester define */
    sint8 FaultDetectionCounter_entity;
    INITIALISE(FaultDetectionCounter_entity);

    /* Test case data declarations */
    Dem_EventIdType EventId = 0;
    sint8 * FaultDetectionCounter = &FaultDetectionCounter_entity;
    Std_ReturnType returnValue;
    Std_ReturnType expected_returnValue = E_OK;

    /* Set global data */
    initialise_global_data();
    Dem_OpMoState = DEM_OPMO_STATE_PREINITIALIZED;

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_GetFaultDetectionCounter_E_OK",
               "Check function returns E_OK and parameter FaultDetectionCounter is updated in case:"
               "- The check for PREINITIALIZATION, VALIDITY and AVAILABLITY for an event ID is passed (line 138)"
               "- Parameter FaultDetectionCounter set NULL (line 139)"
               "- Function Dem_DebGetDebounceCounter4Calculation() returns E_OK (line 144)");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_isEventIdValid#TRUE;"
                "Dem_EvtIsSuppressed#FALSE;"
                "Dem_DebGetDebounceCounter4Calculation#E_OK;"
                "Dem_DebCalculateFaultDetectionCounter#1;");

            /* Call SUT */
            returnValue = Dem_GetFaultDetectionCounter(EventId, FaultDetectionCounter);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            CHECK_U_INT(*FaultDetectionCounter, 1);
            /* Expected Result - Function returns E_OK and parameter FaultDetectionCounter is updated */
            /* Checks on global data */
            check_global_data();
            /* GUID -
             * {11AB2539-B7EC-4815-8593-92256851A564};
             * {A1194F24-3D9D-4acc-AB64-633E81F90721};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_GetFaultDetectionCounter_NOT_OK(int doIt){
if (doIt) {
    /* Test Method - EP */
    /* Tester define */
    sint8 FaultDetectionCounter_entity;
    INITIALISE(FaultDetectionCounter_entity);

    /* Test case data declarations */
    Dem_EventIdType EventId = 0;
    sint8 * FaultDetectionCounter = &FaultDetectionCounter_entity;
    Std_ReturnType returnValue;
    Std_ReturnType expected_returnValue = E_NOT_OK;

    /* Set global data */
    initialise_global_data();
    Dem_OpMoState = DEM_OPMO_STATE_PREINITIALIZED;

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_GetFaultDetectionCounter_NOT_OK",
               "Check function returns E_NOT_OK in case:"
               "- The check for PREINITIALIZATION, VALIDITY and AVAILABLITY for an event ID is passed (line 138)"
               "- Parameter FaultDetectionCounter set NULL (line 139)"
               "- Function Dem_DebGetDebounceCounter4Calculation() returns E_NOT_OK (line 144)");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_isEventIdValid#TRUE;"
                "Dem_EvtIsSuppressed#FALSE;"
                "Dem_DebGetDebounceCounter4Calculation#E_NOT_OK;"
                "Dem_DebCalculateFaultDetectionCounter#1;");

            /* Call SUT */
            returnValue = Dem_GetFaultDetectionCounter(EventId, FaultDetectionCounter);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Expected Result - Function returns E_NOT_OK */
            /* Checks on global data */
            check_global_data();
            /* GUID -
             * {A1194F24-3D9D-4acc-AB64-633E81F90721};
             */
        END_CALLS();
    END_TEST();
}}

/*****************************************************************************/
/* Dem_GetFaultDetectionCounter_GeneralEvtInfo                               */
/*****************************************************************************/

void test_Dem_GetFaultDetectionCounter_GeneralEvtInfo(int doIt){
if (doIt) {
    /* Test Method - EP */
    /* Tester define */
    /* Test case data declarations */
    Dem_EventIdType EventId = 0;
    sint8 * FaultDetectionCounter = NULL_PTR;
    Std_ReturnType returnValue;
    Std_ReturnType expected_returnValue = 0;

    /* Set global data */
    initialise_global_data();

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_GetFaultDetectionCounter_GeneralEvtInfo",
               "Check function returns the returned value of function Dem_GetFaultDetectionCounter()");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_GetFaultDetectionCounter#GeneralEvtInfo;");

            /* Call SUT */
            returnValue = Dem_GetFaultDetectionCounter_GeneralEvtInfo(EventId, FaultDetectionCounter);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Expected Result - Function returns the returned value of function Dem_GetFaultDetectionCounter() */
            /* Checks on global data */
            check_global_data();
            /* GUID -
             * {D9D7202F-2F8E-451e-A8ED-A558F5822250};
             */
        END_CALLS();
    END_TEST();
}}

/*****************************************************************************/
/* Dem_ResetEventDebounceStatus                                              */
/*****************************************************************************/

void test_Dem_ResetEventDebounceStatus_Error(int doIt){
if (doIt) {
    /* Test Method - FI */
    /* Tester define */
    /* Test case data declarations */
    Dem_EventIdType EventId = 0;
    Dem_DebounceResetStatusType DebounceResetStatus = 0;
    Std_ReturnType returnValue;
    Std_ReturnType expected_returnValue = E_NOT_OK;

    /* Set global data */
    initialise_global_data();
    Dem_OpMoState = DEM_OPMO_STATE_NOTINITIALIZED;

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_ResetEventDebounceStatus_Error",
               "Check function returns error in case:"
               "- The check for PREINITIALIZATION, VALIDITY and AVAILABLITY for an event ID is failed (line 159)");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Det_ReportError#Dem_ResetEventDebounceStatus;");

            /* Call SUT */
            returnValue = Dem_ResetEventDebounceStatus(EventId, DebounceResetStatus);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Expected Result - Function returns error */
            /* Checks on global data */
            check_global_data();
            /* GUID -
             * Not Applicable;
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_ResetEventDebounceStatus_InvokedFnc(int doIt){
if (doIt) {
    /* Test Method - EP */
    /* Tester define */
    /* Test case data declarations */
    Dem_EventIdType EventId = 0;
    Dem_DebounceResetStatusType DebounceResetStatus = DEM_DEBOUNCE_STATUS_RESET;
    Std_ReturnType returnValue;
    Std_ReturnType expected_returnValue = E_OK;

    /* Set global data */
    initialise_global_data();
    Dem_OpMoState = DEM_OPMO_STATE_PREINITIALIZED;

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_ResetEventDebounceStatus_InvokedFnc",
               "Check function returns E_OK and function Dem_EvtSetDebounceLevel() is invoked in case:"
               "- The check for PREINITIALIZATION, VALIDITY and AVAILABLITY for an event ID is passed (line 159)"
               "- Parameter DebounceResetStatus is set DEM_DEBOUNCE_STATUS_RESET (line 164)");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_isEventIdValid#TRUE;"
                "Dem_EvtIsSuppressed#FALSE;"
                "DI#default;"
                "Dem_EvtSetLastReportedEvent#INVALIDREPORT;"
                "Dem_EvtSetDebounceLevel#DEM_EVENT_STATUS_PASSED;"
                "EI#default;");

            /* Call SUT */
            returnValue = Dem_ResetEventDebounceStatus(EventId, DebounceResetStatus);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Expected Result - Function returns E_OK and function Dem_EvtSetDebounceLevel() is invoked */
            /* Checks on global data */
            check_global_data();
            /* GUID -
             * {CA8BA8A9-C9B9-4f06-87D5-C615C800F8FA};
             * {0E8272FE-3BC4-4509-82BA-161C570FA63D};
             * {3971D69F-FCF9-43ab-9558-ED382277421B};
             * {4B72EB8E-E474-4c4d-83B0-7F06D0B1E747};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_ResetEventDebounceStatus_Not_RESET(int doIt){
if (doIt) {
    /* Test Method - EP */
    /* Tester define */
    /* Test case data declarations */
    Dem_EventIdType EventId = 0;
    Dem_DebounceResetStatusType DebounceResetStatus = DEM_DEBOUNCE_STATUS_FREEZE;
    Std_ReturnType returnValue;
    Std_ReturnType expected_returnValue = E_OK;

    /* Set global data */
    initialise_global_data();
    Dem_OpMoState = DEM_OPMO_STATE_PREINITIALIZED;

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_ResetEventDebounceStatus_Not_RESET",
               "Check function returns E_OK in case:"
               "- The check for PREINITIALIZATION, VALIDITY and AVAILABLITY for an event ID is passed (line 159)"
               "- Parameter DebounceResetStatus is set DEM_DEBOUNCE_STATUS_FREEZE (line 164)");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_isEventIdValid#TRUE;"
                "Dem_EvtIsSuppressed#FALSE;"
                "DI#default;"
                "Dem_EvtSetLastReportedEvent#INVALIDREPORT;"
                "EI#default;");

            /* Call SUT */
            returnValue = Dem_ResetEventDebounceStatus(EventId, DebounceResetStatus);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Expected Result - Function returns E_OK */
            /* Checks on global data */
            check_global_data();
            /* GUID -
             * {CA8BA8A9-C9B9-4f06-87D5-C615C800F8FA};
             * {0E8272FE-3BC4-4509-82BA-161C570FA63D};
             * {4B72EB8E-E474-4c4d-83B0-7F06D0B1E747};
             */
        END_CALLS();
    END_TEST();
}}

/*****************************************************************************/
/* Dem_ManipulateEventDebounceStatus                                         */
/*****************************************************************************/

void test_Dem_ManipulateEventDebounceStatus_EventIdValid(int doIt){
if (doIt) {
    /* Test Method - EP */
    /* Tester define */
    /* Test case data declarations */
    Dem_EventIdType EventId = 0;
    Dem_DebugDataType debug0 = 0;
    Dem_DebugDataType debug1 = 0;
    sint16 manipulationValue = 0;
    Std_ReturnType returnValue;
    Std_ReturnType expected_returnValue = E_NOT_OK;

    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_ManipulateEventDebounceStatus_EventIdValid",
               "Check function returns E_NOT_OK in case:"
               "- Function Dem_isEventIdValid() returns FALSE (line 193)");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_isEventIdValid#FALSE;");

            /* Call SUT */
            returnValue = Dem_ManipulateEventDebounceStatus(EventId, debug0, debug1, manipulationValue);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Expected Result - Function returns E_NOT_OK */
            /* Checks on global data */
            check_global_data();
            /* GUID -
             * {480853E1-AE5F-4c2b-BD84-D22DE11F9D27};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_ManipulateEventDebounceStatus_Init(int doIt){
if (doIt) {
    /* Test Method - FI */
    /* Tester define */
    /* Test case data declarations */
    Dem_EventIdType EventId = 0;
    Dem_DebugDataType debug0 = 0;
    Dem_DebugDataType debug1 = 0;
    sint16 manipulationValue = 0;
    Std_ReturnType returnValue;
    Std_ReturnType expected_returnValue = E_NOT_OK;

    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_ManipulateEventDebounceStatus_Init",
               "Check function returns error in case:"
               "- Function Dem_isEventIdValid() returns TRUE (line 193)"
               "- Function Dem_OpMoIsInitialized() returns FALSE (line 198)");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_isEventIdValid#TRUE;"
                "Dem_OpMoIsInitialized#FALSE;"
                "Det_ReportError#Dem_ManipulateEventDebounceStatus;");

            /* Call SUT */
            returnValue = Dem_ManipulateEventDebounceStatus(EventId, debug0, debug1, manipulationValue);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Expected Result - Function returns error */
            /* Checks on global data */
            check_global_data();
            /* GUID -
             * {AC4A7FE5-8D53-41fd-B1FB-E8BFD5E60FB5};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_ManipulateEventDebounceStatus_Fulfilled(int doIt){
if (doIt) {
    /* Test Method - EP */
    /* Tester define */
    /* Test case data declarations */
    Dem_EventIdType EventId = 0;
    Dem_DebugDataType debug0 = 0;
    Dem_DebugDataType debug1 = 0;
    sint16 manipulationValue = 0;
    Std_ReturnType returnValue;
    Std_ReturnType expected_returnValue = E_NOT_OK;

    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_ManipulateEventDebounceStatus_Fulfilled",
               "Check function returns E_NOT_OK in case:"
               "- Function Dem_isEventIdValid() returns TRUE (line 193)"
               "- Function Dem_OpMoIsInitialized() returns TRUE (line 198)"
               "- Function Dem_EvtAllEnableConditionsFulfilled() returns FALSE (line 204)");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_isEventIdValid#TRUE;"
                "Dem_OpMoIsInitialized#TRUE;"
                "Dem_EvtAllEnableConditionsFulfilled#FALSE;");

            /* Call SUT */
            returnValue = Dem_ManipulateEventDebounceStatus(EventId, debug0, debug1, manipulationValue);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Expected Result - Function returns E_NOT_OK */
            /* Checks on global data */
            check_global_data();
            /* GUID -
             * {AAB10A19-62DA-4003-8260-AD62C8E09DA3};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_ManipulateEventDebounceStatus_Debounce_0(int doIt){
if (doIt) {
    /* Test Method - EP */
    /* Tester define */
    /* Test case data declarations */
    Dem_EventIdType EventId = 0;
    Dem_DebugDataType debug0 = 0;
    Dem_DebugDataType debug1 = 0;
    sint16 manipulationValue = 0;
    Std_ReturnType returnValue;
    Std_ReturnType expected_returnValue = E_NOT_OK;

    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_ManipulateEventDebounceStatus_Debounce_0",
               "Check function returns E_NOT_OK in case:"
               "- Function Dem_isEventIdValid() returns TRUE (line 193)"
               "- Function Dem_OpMoIsInitialized() returns TRUE (line 198)"
               "- Function Dem_EvtAllEnableConditionsFulfilled() returns TRUE (line 204)"
               "- Function Dem_IsOperationCycleStarted() returns TRUE (line 205)"
               "- Function Dem_EvtIsSuppressed() returns FALSE (line 206)"
               "- Function Dem_IsEventReportingEnabledByDtcSetting() returns TRUE (line 207)"
               "- Function Dem_EvtGetDebounceMethodIndex() returns 0 (line 212)");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_isEventIdValid#TRUE;"
                "Dem_OpMoIsInitialized#TRUE;"
                "Dem_EvtAllEnableConditionsFulfilled#TRUE;"
                "Dem_EvtGetOperationCycleId#default;"
                "Dem_IsOperationCycleStarted#TRUE;"
                "Dem_EvtIsSuppressed#FALSE;"
                "Dem_IsEventReportingEnabledByDtcSetting#TRUE;"
                "Dem_EvtGetDebounceMethodIndex#MONINTERNAL;");

            /* Call SUT */
            returnValue = Dem_ManipulateEventDebounceStatus(EventId, debug0, debug1, manipulationValue);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Expected Result - Function returns E_NOT_OK */
            /* Checks on global data */
            check_global_data();
            /* GUID -
             * {6E565A0F-B957-4cbe-A2E7-9EF10602C197};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_ManipulateEventDebounceStatus_Debounce_1(int doIt){
if (doIt) {
    /* Test Method - EP */
    /* Tester define */
    /* Test case data declarations */
    Dem_EventIdType EventId = 0;
    Dem_DebugDataType debug0 = 0;
    Dem_DebugDataType debug1 = 0;
    sint16 manipulationValue = 0;
    Std_ReturnType returnValue;
    Std_ReturnType expected_returnValue = E_NOT_OK;

    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_ManipulateEventDebounceStatus_Debounce_1",
               "Check function returns E_NOT_OK in case:"
               "- Function Dem_isEventIdValid() returns TRUE (line 193)"
               "- Function Dem_OpMoIsInitialized() returns TRUE (line 198)"
               "- Function Dem_EvtAllEnableConditionsFulfilled() returns TRUE (line 204)"
               "- Function Dem_IsOperationCycleStarted() returns TRUE (line 205)"
               "- Function Dem_EvtIsSuppressed() returns FALSE (line 206)"
               "- Function Dem_IsEventReportingEnabledByDtcSetting() returns TRUE (line 207)"
               "- Function Dem_EvtGetDebounceMethodIndex() returns DEM_DEBMETH_IDX_ARTIME (line 218)");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_isEventIdValid#TRUE;"
                "Dem_OpMoIsInitialized#TRUE;"
                "Dem_EvtAllEnableConditionsFulfilled#TRUE;"
                "Dem_EvtGetOperationCycleId#default;"
                "Dem_IsOperationCycleStarted#TRUE;"
                "Dem_EvtIsSuppressed#FALSE;"
                "Dem_IsEventReportingEnabledByDtcSetting#TRUE;"
                "Dem_EvtGetDebounceMethodIndex#Not_MONINTERNAL;"
                "Dem_EvtGetDebounceMethodIndex#Not_MONINTERNAL;");

            /* Call SUT */
            returnValue = Dem_ManipulateEventDebounceStatus(EventId, debug0, debug1, manipulationValue);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Expected Result - Function returns E_NOT_OK */
            /* Checks on global data */
            check_global_data();
            /* GUID -
             * {8E04914A-6F60-4f43-96C9-0F39EF6A3E3B};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_ManipulateEventDebounceStatus_minThreshold_0(int doIt){
if (doIt) {
    /* Test Method - EP */
    /* Tester define */
    /* Test case data declarations */
    Dem_EventIdType EventId = 0;
    Dem_DebugDataType debug0 = 0;
    Dem_DebugDataType debug1 = 0;
    sint16 manipulationValue = -1;
    Std_ReturnType returnValue;
    Std_ReturnType expected_returnValue = E_OK;

    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_ManipulateEventDebounceStatus_minThreshold_0",
               "Check function returns E_OK and function Dem_DistMemReportPassed() is invoked in case:"
               "- Function Dem_isEventIdValid() returns TRUE (line 193)"
               "- Function Dem_OpMoIsInitialized() returns TRUE (line 198)"
               "- Function Dem_EvtAllEnableConditionsFulfilled() returns TRUE (line 204)"
               "- Function Dem_IsOperationCycleStarted() returns TRUE (line 205)"
               "- Function Dem_EvtIsSuppressed() returns FALSE (line 206)"
               "- Function Dem_IsEventReportingEnabledByDtcSetting() returns TRUE (line 207)"
               "- Function Dem_EvtGetDebounceMethodIndex() returns DEM_DEBMETH_IDX_ARCTRBASECLASS (line 228)");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_isEventIdValid#TRUE;"
                "Dem_OpMoIsInitialized#TRUE;"
                "Dem_EvtAllEnableConditionsFulfilled#TRUE;"
                "Dem_EvtGetOperationCycleId#default;"
                "Dem_IsOperationCycleStarted#TRUE;"
                "Dem_EvtIsSuppressed#FALSE;"
                "Dem_IsEventReportingEnabledByDtcSetting#TRUE;"
                "Dem_EvtGetDebounceMethodIndex#Not_MONINTERNAL;"
                "Dem_EvtGetDebounceMethodIndex#ARCTRBASECLASS;"
                "Dem_EvtGetDebounceMethodIndex#MONINTERNAL;"
                "Dem_EvtGetDebounceParamSetIndex#default;"
                "Dem_EvtGetDebounceMethodIndex#ARCTRBASECLASS;"
                "Dem_getDebCtrBaseClassPassedThreshold#0;"
                "Dem_getDebCtrBaseClassFailedThreshold#1;"
                "Dem_getDebCtrBaseClassJumpDownValue#0;"
                "Dem_getDebCtrBaseClassJumpUpValue#0;"
                "Dem_getDebCtrBaseClassIsJumpDown#FALSE;"
                "Dem_getDebCtrBaseClassIsJumpUp#FALSE;"
                "Dem_EvtGetDebounceLevel#0;"
                "Dem_EvtIsResetFailureFilterRequested#TRUE;"
                "DI#default;"
                "Dem_EvtRequestResetFailureFilter#default;"
                "EI#default;"
                "Dem_EvtGetLastReportedEvent#DEM_EVENT_STATUS_PREFAILED;"
                "Dem_DistMemReportPassed#default;");

            /* Call SUT */
            returnValue = Dem_ManipulateEventDebounceStatus(EventId, debug0, debug1, manipulationValue);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Expected Result - Function returns E_OK */
            /* Checks on global data */
            check_global_data();
            /* GUID -
             * {F6F6C2F6-8F5D-495e-B5E4-C850D0DDFA37};
             * {940445D3-5304-4b4b-ADAC-BAC64307ECA7};
             * {FF8055BE-9E11-4d44-9AA5-8C25DEA314DE};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_ManipulateEventDebounceStatus_minThreshold_1(int doIt){
if (doIt) {
    /* Test Method - EP */
    /* Tester define */
    /* Test case data declarations */
    Dem_EventIdType EventId = 0;
    Dem_DebugDataType debug0 = 0;
    Dem_DebugDataType debug1 = 0;
    sint16 manipulationValue = -1;
    Std_ReturnType returnValue;
    Std_ReturnType expected_returnValue = E_OK;

    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_ManipulateEventDebounceStatus_minThreshold_1",
               "Check function returns E_OK and function Dem_DistMemReportFailed() is invoked in case:"
               "- Function Dem_isEventIdValid() returns TRUE (line 193)"
               "- Function Dem_OpMoIsInitialized() returns TRUE (line 198)"
               "- Function Dem_EvtAllEnableConditionsFulfilled() returns TRUE (line 204)"
               "- Function Dem_IsOperationCycleStarted() returns TRUE (line 205)"
               "- Function Dem_EvtIsSuppressed() returns FALSE (line 206)"
               "- Function Dem_IsEventReportingEnabledByDtcSetting() returns TRUE (line 207)"
               "- Function Dem_EvtGetDebounceMethodIndex() returns DEM_DEBMETH_IDX_ARCTRBASECLASS (line 228)"
               "- Function Dem_DistMemIsReportFailedNecessary() returns TRUE (line 350)");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_isEventIdValid#TRUE;"
                "Dem_OpMoIsInitialized#TRUE;"
                "Dem_EvtAllEnableConditionsFulfilled#TRUE;"
                "Dem_EvtGetOperationCycleId#default;"
                "Dem_IsOperationCycleStarted#TRUE;"
                "Dem_EvtIsSuppressed#FALSE;"
                "Dem_IsEventReportingEnabledByDtcSetting#TRUE;"
                "Dem_EvtGetDebounceMethodIndex#Not_MONINTERNAL;"
                "Dem_EvtGetDebounceMethodIndex#ARCTRBASECLASS;"
                "Dem_EvtGetDebounceMethodIndex#MONINTERNAL;"
                "Dem_EvtGetDebounceParamSetIndex#default;"
                "Dem_EvtGetDebounceMethodIndex#ARCTRBASECLASS;"
                "Dem_getDebCtrBaseClassPassedThreshold#0;"
                "Dem_getDebCtrBaseClassFailedThreshold#1;"
                "Dem_getDebCtrBaseClassJumpDownValue#0;"
                "Dem_getDebCtrBaseClassJumpUpValue#0;"
                "Dem_getDebCtrBaseClassIsJumpDown#TRUE;"
                "Dem_getDebCtrBaseClassIsJumpUp#FALSE;"
                "Dem_EvtGetDebounceLevel#1;"
                "Dem_EvtIsResetFailureFilterRequested#FALSE;"
                "Dem_EvtGetLastReportedEvent#DEM_EVENT_STATUS_PREFAILED;"
                "Dem_EvtSetDebounceLevel#DEM_EVENT_STATUS_PASSED;"
                "Dem_EvtSetLastReportedEvent#pass;"
                "Dem_EvtProcessPassedAndFailed#pass;"
                "Dem_DistMemIsReportFailedNecessary#TRUE;"
                "Dem_DistMemReportFailed#default;");

            /* Call SUT */
            returnValue = Dem_ManipulateEventDebounceStatus(EventId, debug0, debug1, manipulationValue);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Expected Result - Function returns E_OK */
            /* Checks on global data */
            check_global_data();
            /* GUID -
             * {625B1064-B32E-489f-8C9B-4BBB6C898E06};
             * {C561214F-B74D-4261-A802-E3AF33BCA61F};
             * {4CF9306D-B4CC-40fb-AA42-32090472E222};
             * {CD79EA0A-8CF7-44f8-B351-29AF7CA5CDF3};
             * {2A623A82-3400-4506-A651-5D6BFC9712A7};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_ManipulateEventDebounceStatus_minThreshold_2(int doIt){
if (doIt) {
    /* Test Method - EP */
    /* Tester define */
    /* Test case data declarations */
    Dem_EventIdType EventId = 0;
    Dem_DebugDataType debug0 = 0;
    Dem_DebugDataType debug1 = 0;
    sint16 manipulationValue = -1;
    Std_ReturnType returnValue;
    Std_ReturnType expected_returnValue = E_OK;

    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_ManipulateEventDebounceStatus_minThreshold_2",
               "Check function returns E_OK and function Dem_DistMemReportFailed() is invoked in case:"
               "- Function Dem_isEventIdValid() returns TRUE (line 193)"
               "- Function Dem_OpMoIsInitialized() returns TRUE (line 198)"
               "- Function Dem_EvtAllEnableConditionsFulfilled() returns TRUE (line 204)"
               "- Function Dem_IsOperationCycleStarted() returns TRUE (line 205)"
               "- Function Dem_EvtIsSuppressed() returns FALSE (line 206)"
               "- Function Dem_IsEventReportingEnabledByDtcSetting() returns TRUE (line 207)"
               "- Function Dem_EvtGetDebounceMethodIndex() returns DEM_DEBMETH_IDX_ARCTRBASECLASS (line 228)"
               "- The debounce Level is greater than maxThreshold (line 278)"
               "- Function Dem_DistMemIsReportFailedNecessary() returns TRUE (line 350)");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_isEventIdValid#TRUE;"
                "Dem_OpMoIsInitialized#TRUE;"
                "Dem_EvtAllEnableConditionsFulfilled#TRUE;"
                "Dem_EvtGetOperationCycleId#default;"
                "Dem_IsOperationCycleStarted#TRUE;"
                "Dem_EvtIsSuppressed#FALSE;"
                "Dem_IsEventReportingEnabledByDtcSetting#TRUE;"
                "Dem_EvtGetDebounceMethodIndex#Not_MONINTERNAL;"
                "Dem_EvtGetDebounceMethodIndex#ARCTRBASECLASS;"
                "Dem_EvtGetDebounceMethodIndex#MONINTERNAL;"
                "Dem_EvtGetDebounceParamSetIndex#default;"
                "Dem_EvtGetDebounceMethodIndex#ARCTRBASECLASS;"
                "Dem_getDebCtrBaseClassPassedThreshold#0;"
                "Dem_getDebCtrBaseClassFailedThreshold#1;"
                "Dem_getDebCtrBaseClassJumpDownValue#0;"
                "Dem_getDebCtrBaseClassJumpUpValue#0;"
                "Dem_getDebCtrBaseClassIsJumpDown#TRUE;"
                "Dem_getDebCtrBaseClassIsJumpUp#FALSE;"
                "Dem_EvtGetDebounceLevel#2;"
                "Dem_EvtIsResetFailureFilterRequested#FALSE;"
                "Dem_EvtGetLastReportedEvent#DEM_EVENT_STATUS_PREFAILED;"
                "Dem_EvtSetDebounceLevel#DEM_EVENT_STATUS_FAILED;"
                "Dem_EvtSetLastReportedEvent#fail;"
                "Dem_EvtProcessPassedAndFailed#fail;"
                "Dem_DistMemIsReportFailedNecessary#TRUE_fail;"
                "Dem_DistMemReportFailed#default;"
                "Dem_EvMemGenReportFailedEvent#default;");

            /* Call SUT */
            returnValue = Dem_ManipulateEventDebounceStatus(EventId, debug0, debug1, manipulationValue);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Expected Result - Function returns E_OK */
            /* Checks on global data */
            check_global_data();
            /* GUID -
             * {625B1064-B32E-489f-8C9B-4BBB6C898E06};
             * {C561214F-B74D-4261-A802-E3AF33BCA61F};
             * {4CF9306D-B4CC-40fb-AA42-32090472E222};
             * {CD79EA0A-8CF7-44f8-B351-29AF7CA5CDF3};
             * {5B541AC7-4CD9-441c-83E7-5D030DCDCF3E};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_ManipulateEventDebounceStatus_minThreshold_3(int doIt){
if (doIt) {
    /* Test Method - EP */
    /* Tester define */
    /* Test case data declarations */
    Dem_EventIdType EventId = 0;
    Dem_DebugDataType debug0 = 0;
    Dem_DebugDataType debug1 = 0;
    sint16 manipulationValue = -1;
    Std_ReturnType returnValue;
    Std_ReturnType expected_returnValue = E_OK;

    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_ManipulateEventDebounceStatus_minThreshold_3",
               "Check function returns E_OK and function Dem_DistMemReportFailed() is invoked in case:"
               "- Function Dem_isEventIdValid() returns TRUE (line 193)"
               "- Function Dem_OpMoIsInitialized() returns TRUE (line 198)"
               "- Function Dem_EvtAllEnableConditionsFulfilled() returns TRUE (line 204)"
               "- Function Dem_IsOperationCycleStarted() returns TRUE (line 205)"
               "- Function Dem_EvtIsSuppressed() returns FALSE (line 206)"
               "- Function Dem_IsEventReportingEnabledByDtcSetting() returns TRUE (line 207)"
               "- Function Dem_EvtGetDebounceMethodIndex() returns DEM_DEBMETH_IDX_ARCTRBASECLASS (line 228)"
               "- The debounce Level is less than jumpDownValue (line 277)"
               "- Function Dem_DistMemIsReportFailedNecessary() returns TRUE (line 350)");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_isEventIdValid#TRUE;"
                "Dem_OpMoIsInitialized#TRUE;"
                "Dem_EvtAllEnableConditionsFulfilled#TRUE;"
                "Dem_EvtGetOperationCycleId#default;"
                "Dem_IsOperationCycleStarted#TRUE;"
                "Dem_EvtIsSuppressed#FALSE;"
                "Dem_IsEventReportingEnabledByDtcSetting#TRUE;"
                "Dem_EvtGetDebounceMethodIndex#Not_MONINTERNAL;"
                "Dem_EvtGetDebounceMethodIndex#ARCTRBASECLASS;"
                "Dem_EvtGetDebounceMethodIndex#MONINTERNAL;"
                "Dem_EvtGetDebounceParamSetIndex#default;"
                "Dem_EvtGetDebounceMethodIndex#ARCTRBASECLASS;"
                "Dem_getDebCtrBaseClassPassedThreshold#0;"
                "Dem_getDebCtrBaseClassFailedThreshold#1;"
                "Dem_getDebCtrBaseClassJumpDownValue#2;"
                "Dem_getDebCtrBaseClassJumpUpValue#0;"
                "Dem_getDebCtrBaseClassIsJumpDown#TRUE;"
                "Dem_getDebCtrBaseClassIsJumpUp#FALSE;"
                "Dem_EvtGetDebounceLevel#2;"
                "Dem_EvtIsResetFailureFilterRequested#FALSE;"
                "Dem_EvtGetLastReportedEvent#DEM_EVENT_STATUS_PREFAILED;"
                "Dem_EvtSetDebounceLevel#DEM_EVENT_STATUS_FAILED;"
                "Dem_EvtSetLastReportedEvent#fail;"
                "Dem_EvtProcessPassedAndFailed#fail;"
                "Dem_DistMemIsReportFailedNecessary#TRUE_fail;"
                "Dem_DistMemReportFailed#default;"
                "Dem_EvMemGenReportFailedEvent#default;");

            /* Call SUT */
            returnValue = Dem_ManipulateEventDebounceStatus(EventId, debug0, debug1, manipulationValue);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Expected Result - Function returns E_OK */
            /* Checks on global data */
            check_global_data();
            /* GUID -
             * {625B1064-B32E-489f-8C9B-4BBB6C898E06};
             * {C561214F-B74D-4261-A802-E3AF33BCA61F};
             * {4CF9306D-B4CC-40fb-AA42-32090472E222};
             * {CD79EA0A-8CF7-44f8-B351-29AF7CA5CDF3};
             * {5B541AC7-4CD9-441c-83E7-5D030DCDCF3E};
             * {83048610-C249-47df-8311-6CB333B4852C};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_ManipulateEventDebounceStatus_minThreshold_4(int doIt){
if (doIt) {
    /* Test Method - EP */
    /* Tester define */
    /* Test case data declarations */
    Dem_EventIdType EventId = 0;
    Dem_DebugDataType debug0 = 0;
    Dem_DebugDataType debug1 = 0;
    sint16 manipulationValue = -1;
    Std_ReturnType returnValue;
    Std_ReturnType expected_returnValue = E_OK;

    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_ManipulateEventDebounceStatus_minThreshold_4",
               "Check function returns E_OK and function Dem_DistMemReportFailed() is invoked in case:"
               "- Function Dem_isEventIdValid() returns TRUE (line 193)"
               "- Function Dem_OpMoIsInitialized() returns TRUE (line 198)"
               "- Function Dem_EvtAllEnableConditionsFulfilled() returns TRUE (line 204)"
               "- Function Dem_IsOperationCycleStarted() returns TRUE (line 205)"
               "- Function Dem_EvtIsSuppressed() returns FALSE (line 206)"
               "- Function Dem_IsEventReportingEnabledByDtcSetting() returns TRUE (line 207)"
               "- Function Dem_EvtGetDebounceMethodIndex() returns DEM_DEBMETH_IDX_ARCTRBASECLASS (line 228)"
               "- Function Dem_getDebCtrBaseClassIsJumpDown() returns FALSE (line 277)"
               "- Function Dem_DistMemIsReportFailedNecessary() returns TRUE (line 350)");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_isEventIdValid#TRUE;"
                "Dem_OpMoIsInitialized#TRUE;"
                "Dem_EvtAllEnableConditionsFulfilled#TRUE;"
                "Dem_EvtGetOperationCycleId#default;"
                "Dem_IsOperationCycleStarted#TRUE;"
                "Dem_EvtIsSuppressed#FALSE;"
                "Dem_IsEventReportingEnabledByDtcSetting#TRUE;"
                "Dem_EvtGetDebounceMethodIndex#Not_MONINTERNAL;"
                "Dem_EvtGetDebounceMethodIndex#ARCTRBASECLASS;"
                "Dem_EvtGetDebounceMethodIndex#MONINTERNAL;"
                "Dem_EvtGetDebounceParamSetIndex#default;"
                "Dem_EvtGetDebounceMethodIndex#ARCTRBASECLASS;"
                "Dem_getDebCtrBaseClassPassedThreshold#0;"
                "Dem_getDebCtrBaseClassFailedThreshold#1;"
                "Dem_getDebCtrBaseClassJumpDownValue#2;"
                "Dem_getDebCtrBaseClassJumpUpValue#0;"
                "Dem_getDebCtrBaseClassIsJumpDown#FALSE;"
                "Dem_getDebCtrBaseClassIsJumpUp#FALSE;"
                "Dem_EvtGetDebounceLevel#2;"
                "Dem_EvtIsResetFailureFilterRequested#FALSE;"
                "Dem_EvtGetLastReportedEvent#DEM_EVENT_STATUS_PREFAILED;"
                "Dem_EvtSetDebounceLevel#DEM_EVENT_STATUS_FAILED;"
                "Dem_EvtSetLastReportedEvent#fail;"
                "Dem_EvtProcessPassedAndFailed#fail;"
                "Dem_DistMemIsReportFailedNecessary#TRUE_fail;"
                "Dem_DistMemReportFailed#default;"
                "Dem_EvMemGenReportFailedEvent#default;");

            /* Call SUT */
            returnValue = Dem_ManipulateEventDebounceStatus(EventId, debug0, debug1, manipulationValue);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Expected Result - Function returns E_OK */
            /* Checks on global data */
            check_global_data();
            /* GUID -
             * {625B1064-B32E-489f-8C9B-4BBB6C898E06};
             * {C561214F-B74D-4261-A802-E3AF33BCA61F};
             * {4CF9306D-B4CC-40fb-AA42-32090472E222};
             * {CD79EA0A-8CF7-44f8-B351-29AF7CA5CDF3};
             * {5B541AC7-4CD9-441c-83E7-5D030DCDCF3E};
             * {83048610-C249-47df-8311-6CB333B4852C};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_ManipulateEventDebounceStatus_minThreshold_5(int doIt){
if (doIt) {
    /* Test Method - EP */
    /* Tester define */
    /* Test case data declarations */
    Dem_EventIdType EventId = 0;
    Dem_DebugDataType debug0 = 0;
    Dem_DebugDataType debug1 = 0;
    sint16 manipulationValue = -1;
    Std_ReturnType returnValue;
    Std_ReturnType expected_returnValue = E_OK;

    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_ManipulateEventDebounceStatus_minThreshold_5",
               "Check function returns E_OK in case:"
               "- Function Dem_isEventIdValid() returns TRUE (line 193)"
               "- Function Dem_OpMoIsInitialized() returns TRUE (line 198)"
               "- Function Dem_EvtAllEnableConditionsFulfilled() returns TRUE (line 204)"
               "- Function Dem_IsOperationCycleStarted() returns TRUE (line 205)"
               "- Function Dem_EvtIsSuppressed() returns FALSE (line 206)"
               "- Function Dem_IsEventReportingEnabledByDtcSetting() returns TRUE (line 207)"
               "- Function Dem_EvtGetDebounceMethodIndex() returns DEM_DEBMETH_IDX_ARCTRBASECLASS (line 228)"
               "- Function Dem_DistMemIsReportFailedNecessary() returns FALSE (line 350)");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_isEventIdValid#TRUE;"
                "Dem_OpMoIsInitialized#TRUE;"
                "Dem_EvtAllEnableConditionsFulfilled#TRUE;"
                "Dem_EvtGetOperationCycleId#default;"
                "Dem_IsOperationCycleStarted#TRUE;"
                "Dem_EvtIsSuppressed#FALSE;"
                "Dem_IsEventReportingEnabledByDtcSetting#TRUE;"
                "Dem_EvtGetDebounceMethodIndex#Not_MONINTERNAL;"
                "Dem_EvtGetDebounceMethodIndex#ARCTRBASECLASS;"
                "Dem_EvtGetDebounceMethodIndex#MONINTERNAL;"
                "Dem_EvtGetDebounceParamSetIndex#default;"
                "Dem_EvtGetDebounceMethodIndex#ARCTRBASECLASS;"
                "Dem_getDebCtrBaseClassPassedThreshold#0;"
                "Dem_getDebCtrBaseClassFailedThreshold#1;"
                "Dem_getDebCtrBaseClassJumpDownValue#2;"
                "Dem_getDebCtrBaseClassJumpUpValue#0;"
                "Dem_getDebCtrBaseClassIsJumpDown#FALSE;"
                "Dem_getDebCtrBaseClassIsJumpUp#FALSE;"
                "Dem_EvtGetDebounceLevel#2;"
                "Dem_EvtIsResetFailureFilterRequested#FALSE;"
                "Dem_EvtGetLastReportedEvent#DEM_EVENT_STATUS_PREPASSED;"
                "Dem_EvtGetLastReportedEvent#DEM_EVENT_STATUS_PREPASSED;"
                "Dem_EvtSetDebounceLevel#DEM_EVENT_STATUS_FAILED;"
                "Dem_EvtSetLastReportedEvent#fail;"
                "Dem_EvtProcessPassedAndFailed#fail;"
                "Dem_DistMemIsReportFailedNecessary#FALSE_fail;"
                "Dem_EvMemGenReportFailedEvent#default;");

            /* Call SUT */
            returnValue = Dem_ManipulateEventDebounceStatus(EventId, debug0, debug1, manipulationValue);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Expected Result - Function returns E_OK */
            /* Checks on global data */
            check_global_data();
            /* GUID -
             * {625B1064-B32E-489f-8C9B-4BBB6C898E06};
             * {C561214F-B74D-4261-A802-E3AF33BCA61F};
             * {4CF9306D-B4CC-40fb-AA42-32090472E222};
             * {CD79EA0A-8CF7-44f8-B351-29AF7CA5CDF3};
             * {5B541AC7-4CD9-441c-83E7-5D030DCDCF3E};
             * {83048610-C249-47df-8311-6CB333B4852C};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_ManipulateEventDebounceStatus_maxThreshold_0(int doIt){
if (doIt) {
    /* Test Method - EP */
    /* Tester define */
    /* Test case data declarations */
    Dem_EventIdType EventId = 0;
    Dem_DebugDataType debug0 = 0;
    Dem_DebugDataType debug1 = 0;
    sint16 manipulationValue = 1;
    Std_ReturnType returnValue;
    Std_ReturnType expected_returnValue = E_OK;

    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_ManipulateEventDebounceStatus_maxThreshold_0",
               "Check function returns E_OK in case:"
               "- Function Dem_isEventIdValid() returns TRUE (line 193)"
               "- Function Dem_OpMoIsInitialized() returns TRUE (line 198)"
               "- Function Dem_EvtAllEnableConditionsFulfilled() returns TRUE (line 204)"
               "- Function Dem_IsOperationCycleStarted() returns TRUE (line 205)"
               "- Function Dem_EvtIsSuppressed() returns FALSE (line 206)"
               "- Function Dem_IsEventReportingEnabledByDtcSetting() returns TRUE (line 207)"
               "- Function Dem_EvtGetDebounceMethodIndex() returns DEM_DEBMETH_IDX_ARCTRBASECLASS (line 228)"
               "- Function Dem_getDebCtrBaseClassFailedThreshold() return 0 (line 231)"
               "- Function Dem_EvtGetDebounceLevel() returns 0 (line 268)");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_isEventIdValid#TRUE;"
                "Dem_OpMoIsInitialized#TRUE;"
                "Dem_EvtAllEnableConditionsFulfilled#TRUE;"
                "Dem_EvtGetOperationCycleId#default;"
                "Dem_IsOperationCycleStarted#TRUE;"
                "Dem_EvtIsSuppressed#FALSE;"
                "Dem_IsEventReportingEnabledByDtcSetting#TRUE;"
                "Dem_EvtGetDebounceMethodIndex#Not_MONINTERNAL;"
                "Dem_EvtGetDebounceMethodIndex#ARCTRBASECLASS;"
                "Dem_EvtGetDebounceMethodIndex#MONINTERNAL;"
                "Dem_EvtGetDebounceParamSetIndex#default;"
                "Dem_EvtGetDebounceMethodIndex#ARCTRBASECLASS;"
                "Dem_getDebCtrBaseClassPassedThreshold#0;"
                "Dem_getDebCtrBaseClassFailedThreshold#0;"
                "Dem_getDebCtrBaseClassJumpDownValue#2;"
                "Dem_getDebCtrBaseClassJumpUpValue#1;"
                "Dem_getDebCtrBaseClassIsJumpDown#FALSE;"
                "Dem_getDebCtrBaseClassIsJumpUp#TRUE;"
                "Dem_EvtGetDebounceLevel#0;"
                "Dem_EvtIsResetFailureFilterRequested#FALSE;");

            /* Call SUT */
            returnValue = Dem_ManipulateEventDebounceStatus(EventId, debug0, debug1, manipulationValue);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Expected Result - Function returns E_OK */
            /* Checks on global data */
            check_global_data();
            /* GUID -
             * {405EF81F-D2F5-4f2d-ADD5-D191E3652A35};
             * {192BA674-421B-4f92-AF08-B5B2D492141A};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_ManipulateEventDebounceStatus_maxThreshold_1(int doIt){
if (doIt) {
    /* Test Method - EP */
    /* Tester define */
    /* Test case data declarations */
    Dem_EventIdType EventId = 0;
    Dem_DebugDataType debug0 = 0;
    Dem_DebugDataType debug1 = 0;
    sint16 manipulationValue = 1;
    Std_ReturnType returnValue;
    Std_ReturnType expected_returnValue = E_OK;

    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_ManipulateEventDebounceStatus_maxThreshold_1",
               "Check function returns E_OK and status is change to DEM_EVENT_STATUS_PREFAILED in case:"
               "- Function Dem_isEventIdValid() returns TRUE (line 193)"
               "- Function Dem_OpMoIsInitialized() returns TRUE (line 198)"
               "- Function Dem_EvtAllEnableConditionsFulfilled() returns TRUE (line 204)"
               "- Function Dem_IsOperationCycleStarted() returns TRUE (line 205)"
               "- Function Dem_EvtIsSuppressed() returns FALSE (line 206)"
               "- Function Dem_IsEventReportingEnabledByDtcSetting() returns TRUE (line 207)"
               "- Function Dem_EvtGetDebounceMethodIndex() returns DEM_DEBMETH_IDX_ARCTRBASECLASS (line 228)"
               "- Function Dem_DistMemIsReportFailedNecessary() returns FALSE (line 350)");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_isEventIdValid#TRUE;"
                "Dem_OpMoIsInitialized#TRUE;"
                "Dem_EvtAllEnableConditionsFulfilled#TRUE;"
                "Dem_EvtGetOperationCycleId#default;"
                "Dem_IsOperationCycleStarted#TRUE;"
                "Dem_EvtIsSuppressed#FALSE;"
                "Dem_IsEventReportingEnabledByDtcSetting#TRUE;"
                "Dem_EvtGetDebounceMethodIndex#Not_MONINTERNAL;"
                "Dem_EvtGetDebounceMethodIndex#ARCTRBASECLASS;"
                "Dem_EvtGetDebounceMethodIndex#MONINTERNAL;"
                "Dem_EvtGetDebounceParamSetIndex#default;"
                "Dem_EvtGetDebounceMethodIndex#ARCTRBASECLASS;"
                "Dem_getDebCtrBaseClassPassedThreshold#1;"
                "Dem_getDebCtrBaseClassFailedThreshold#4;"
                "Dem_getDebCtrBaseClassJumpDownValue#2;"
                "Dem_getDebCtrBaseClassJumpUpValue#2;"
                "Dem_getDebCtrBaseClassIsJumpDown#FALSE;"
                "Dem_getDebCtrBaseClassIsJumpUp#TRUE;"
                "Dem_EvtGetDebounceLevel#1;"
                "Dem_EvtIsResetFailureFilterRequested#FALSE;"
                "Dem_EvtGetLastReportedEvent#DEM_EVENT_STATUS_PREPASSED;"
                "Dem_EvtSetDebounceLevel#DEM_EVENT_STATUS_PREFAILED;"
                "Dem_EvtSetLastReportedEvent#prefail;"
                "Dem_DistMemIsReportFailedNecessary#FALSE_prefail;");

            /* Call SUT */
            returnValue = Dem_ManipulateEventDebounceStatus(EventId, debug0, debug1, manipulationValue);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Expected Result - Function returns E_OK */
            /* Checks on global data */
            check_global_data();
            /* GUID -
             * {405EF81F-D2F5-4f2d-ADD5-D191E3652A35};
             * {192BA674-421B-4f92-AF08-B5B2D492141A};
             * {7C5E08ED-0531-4632-848A-A40648F2AC01};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_ManipulateEventDebounceStatus_maxThreshold_2(int doIt){
if (doIt) {
    /* Test Method - EP */
    /* Tester define */
    /* Test case data declarations */
    Dem_EventIdType EventId = 0;
    Dem_DebugDataType debug0 = 0;
    Dem_DebugDataType debug1 = 0;
    sint16 manipulationValue = 1;
    Std_ReturnType returnValue;
    Std_ReturnType expected_returnValue = E_OK;

    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_ManipulateEventDebounceStatus_maxThreshold_2",
               "Check function returns E_OK and status is change to DEM_EVENT_STATUS_PREPASSED in case:"
               "- Function Dem_isEventIdValid() returns TRUE (line 193)"
               "- Function Dem_OpMoIsInitialized() returns TRUE (line 198)"
               "- Function Dem_EvtAllEnableConditionsFulfilled() returns TRUE (line 204)"
               "- Function Dem_IsOperationCycleStarted() returns TRUE (line 205)"
               "- Function Dem_EvtIsSuppressed() returns FALSE (line 206)"
               "- Function Dem_IsEventReportingEnabledByDtcSetting() returns TRUE (line 207)"
               "- Function Dem_EvtGetDebounceMethodIndex() returns DEM_DEBMETH_IDX_ARCTRBASECLASS (line 228)"
               "- debLevel is less than 0 (line 300)"
               "- Function Dem_DistMemIsReportFailedNecessary() returns FALSE (line 350)");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_isEventIdValid#TRUE;"
                "Dem_OpMoIsInitialized#TRUE;"
                "Dem_EvtAllEnableConditionsFulfilled#TRUE;"
                "Dem_EvtGetOperationCycleId#default;"
                "Dem_IsOperationCycleStarted#TRUE;"
                "Dem_EvtIsSuppressed#FALSE;"
                "Dem_IsEventReportingEnabledByDtcSetting#TRUE;"
                "Dem_EvtGetDebounceMethodIndex#Not_MONINTERNAL;"
                "Dem_EvtGetDebounceMethodIndex#ARCTRBASECLASS;"
                "Dem_EvtGetDebounceMethodIndex#MONINTERNAL;"
                "Dem_EvtGetDebounceParamSetIndex#default;"
                "Dem_EvtGetDebounceMethodIndex#ARCTRBASECLASS;"
                "Dem_getDebCtrBaseClassPassedThreshold#Neg;"
                "Dem_getDebCtrBaseClassFailedThreshold#4;"
                "Dem_getDebCtrBaseClassJumpDownValue#2;"
                "Dem_getDebCtrBaseClassJumpUpValue#2;"
                "Dem_getDebCtrBaseClassIsJumpDown#FALSE;"
                "Dem_getDebCtrBaseClassIsJumpUp#TRUE;"
                "Dem_EvtGetDebounceLevel#Neg;"
                "Dem_EvtIsResetFailureFilterRequested#FALSE;"
                "Dem_EvtGetLastReportedEvent#DEM_EVENT_STATUS_PREPASSED;"
                "Dem_EvtSetDebounceLevel#Neg;"
                "Dem_EvtSetLastReportedEvent#prepass;"
                "Dem_DistMemIsReportFailedNecessary#FALSE_prepass;");

            /* Call SUT */
            returnValue = Dem_ManipulateEventDebounceStatus(EventId, debug0, debug1, manipulationValue);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Expected Result - Function returns E_OK */
            /* Checks on global data */
            check_global_data();
            /* GUID -
             * {405EF81F-D2F5-4f2d-ADD5-D191E3652A35};
             * {192BA674-421B-4f92-AF08-B5B2D492141A};
             * {7C5E08ED-0531-4632-848A-A40648F2AC01};
             * {E8099F68-6B5C-4782-A06D-38373520CFF3};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_ManipulateEventDebounceStatus_other(int doIt){
if (doIt) {
    /* Test Method - EP */
    /* Tester define */
    /* Test case data declarations */
    Dem_EventIdType EventId = 0;
    Dem_DebugDataType debug0 = 0;
    Dem_DebugDataType debug1 = 0;
    sint16 manipulationValue = 1;
    Std_ReturnType returnValue;
    Std_ReturnType expected_returnValue = E_OK;

    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_ManipulateEventDebounceStatus_other",
               "Check function returns E_OK in case:"
               "- Function Dem_isEventIdValid() returns TRUE (line 193)"
               "- Function Dem_OpMoIsInitialized() returns TRUE (line 198)"
               "- Function Dem_EvtAllEnableConditionsFulfilled() returns TRUE (line 204)"
               "- Function Dem_IsOperationCycleStarted() returns TRUE (line 205)"
               "- Function Dem_EvtIsSuppressed() returns FALSE (line 206)"
               "- Function Dem_IsEventReportingEnabledByDtcSetting() returns TRUE (line 207)"
               "- Function Dem_EvtGetDebounceMethodIndex() returns DEM_DEBMETH_IDX_MONINTERNAL (line 228)");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_isEventIdValid#TRUE;"
                "Dem_OpMoIsInitialized#TRUE;"
                "Dem_EvtAllEnableConditionsFulfilled#TRUE;"
                "Dem_EvtGetOperationCycleId#default;"
                "Dem_IsOperationCycleStarted#TRUE;"
                "Dem_EvtIsSuppressed#FALSE;"
                "Dem_IsEventReportingEnabledByDtcSetting#TRUE;"
                "Dem_EvtGetDebounceMethodIndex#Not_MONINTERNAL;"
                "Dem_EvtGetDebounceMethodIndex#ARCTRBASECLASS;"
                "Dem_EvtGetDebounceMethodIndex#MONINTERNAL;"
                "Dem_EvtGetDebounceParamSetIndex#default;"
                "Dem_EvtGetDebounceMethodIndex#Not_MONINTERNAL;"
                "Dem_EvtGetDebounceLevel#0;"
                "Dem_EvtIsResetFailureFilterRequested#FALSE;");

            /* Call SUT */
            returnValue = Dem_ManipulateEventDebounceStatus(EventId, debug0, debug1, manipulationValue);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Expected Result - Function returns E_OK */
            /* Checks on global data */
            check_global_data();
            /* GUID -
             * {405EF81F-D2F5-4f2d-ADD5-D191E3652A35};
             */
        END_CALLS();
    END_TEST();
}}

/*****************************************************************************/
/* Dem_DebHandleResetConditions                                              */
/*****************************************************************************/

void test_Dem_DebHandleResetConditions_DtcSetting_TRUE(int doIt){
if (doIt) {
    /* Test Method - EP */
    /* Tester define */
    /* Test case data declarations */
    Dem_EventIdType EventId = 0;
    boolean returnValue;
    boolean expected_returnValue = FALSE;

    /* Set global data */
    initialise_global_data();

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_DebHandleResetConditions_DtcSetting_TRUE",
               "Check function returns FALSE in case:"
               "- Function Dem_IsEvtDebBehaviorReset() returns TRUE (line 382)"
               "- Function Dem_EvtAllEnableConditionsFulfilled() returns FALSE (line 415)");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_IsAnyDtcGroupSettingDisabled#TRUE;"
                "Dem_IsEventEnabledByDtcSetting#FALSE;"
                "Dem_IsEvtDebBehaviorReset#TRUE;"
                "Dem_EvtRequestResetFailureFilterAfterDtcSetting#TRUE;"
                "Dem_EvtGetStorageConditions#default;"
                "Dem_StoCoAreAllFulfilled#FALSE;"
                "Dem_EvtIsResetFailureFilterRequestedAfterStorageCondition#FALSE;"
                "Dem_IsEvtDebBehaviorReset#TRUE;"
                "Dem_EvtRequestResetFailureFilterAfterStorageCondition#TRUE;"
                "Dem_EvtAllEnableConditionsFulfilled#FALSE;"
                "Dem_IsEvtDebBehaviorReset#TRUE;"
                "Dem_EvtSetDebounceLevel#0;"
                "Dem_EvtSetLastReportedEvent#INVALIDREPORT;"
                "Dem_EvtIsResetFailureFilterRequested#FALSE;");

            /* Call SUT */
            returnValue = Dem_DebHandleResetConditions(EventId);

            /* Test case checks */
            CHECK_BOOLEAN(returnValue, expected_returnValue);
            /* Expected Result - Function returns FALSE */
            /* Checks on global data */
            check_global_data();
            /* GUID -
             * {BD49E924-3C53-4d0b-8D49-A680ABCA7549};
             * {6AE7046A-7EC0-4ad7-BF60-A206D8406E40};
             * {52CC929C-9230-4532-A702-AB27FE1D7503};
             * {2A99BFF1-CE2A-4dfc-94C3-E0B9C66F0104};
             * {86F8B0A6-BAF2-4392-8786-BD7829EAFD69};
             * {E7579B3B-3FA0-496b-B82E-8270962E08F6};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_DebHandleResetConditions_FilterRequested(int doIt){
if (doIt) {
    /* Test Method - EP */
    /* Tester define */
    /* Test case data declarations */
    Dem_EventIdType EventId = 0;
    boolean returnValue;
    boolean expected_returnValue = FALSE;

    /* Set global data */
    initialise_global_data();

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_DebHandleResetConditions_FilterRequested",
               "Check function returns FALSE in case:"
               "- Function Dem_IsEvtDebBehaviorReset() returns FALSE (line 382)"
               "- Function Dem_EvtAllEnableConditionsFulfilled() returns FALSE (line 415)"
               "- Function Dem_EvtIsResetFailureFilterRequested() returns TRUE (line 425)");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_IsAnyDtcGroupSettingDisabled#TRUE;"
                "Dem_IsEventEnabledByDtcSetting#FALSE;"
                "Dem_IsEvtDebBehaviorReset#FALSE;"
                "Dem_EvtGetStorageConditions#default;"
                "Dem_StoCoAreAllFulfilled#FALSE;"
                "Dem_EvtIsResetFailureFilterRequestedAfterStorageCondition#FALSE;"
                "Dem_IsEvtDebBehaviorReset#FALSE;"
                "Dem_EvtAllEnableConditionsFulfilled#FALSE;"
                "Dem_IsEvtDebBehaviorReset#FALSE;"
                "Dem_EvtSetLastReportedEvent#INVALIDREPORT;"
                "Dem_EvtIsResetFailureFilterRequested#TRUE;"
                "Dem_EvtRequestResetFailureFilter#default;"
                "Dem_EvtSetDebounceLevel#0;");

            /* Call SUT */
            returnValue = Dem_DebHandleResetConditions(EventId);

            /* Test case checks */
            CHECK_BOOLEAN(returnValue, expected_returnValue);
            /* Expected Result - Function returns FALSE */
            /* Checks on global data */
            check_global_data();
            /* GUID -
             * {BD49E924-3C53-4d0b-8D49-A680ABCA7549};
             * {6AE7046A-7EC0-4ad7-BF60-A206D8406E40};
             * {2A99BFF1-CE2A-4dfc-94C3-E0B9C66F0104};
             * {EDEFC9DE-59C4-4ea6-B1AF-AEB021E7CB35};
             * {E7579B3B-3FA0-496b-B82E-8270962E08F6};
             * {9D3A9B20-017F-40a1-A7F0-13970472F06F};
             * {A459AE2E-D13F-4f3a-AFF4-88D222CB7538};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_DebHandleResetConditions_DtcSetting_FALSE(int doIt){
if (doIt) {
    /* Test Method - EP */
    /* Tester define */
    /* Test case data declarations */
    Dem_EventIdType EventId = 0;
    boolean returnValue;
    boolean expected_returnValue = TRUE;

    /* Set global data */
    initialise_global_data();

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_DebHandleResetConditions_DtcSetting_FALSE",
               "Check function returns TRUE in case:"
               "- Function Dem_EvtIsResetFailureFilterRequestedAfterDtcSetting() returns TRUE (line 390)");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_IsAnyDtcGroupSettingDisabled#FALSE;"
                "Dem_EvtIsResetFailureFilterRequestedAfterDtcSetting#TRUE;"
                "Dem_EvtRequestResetFailureFilterAfterDtcSetting#FALSE;"
                "Dem_EvtSetDebounceLevel#0;"
                "Dem_EvtGetStorageConditions#default;"
                "Dem_StoCoAreAllFulfilled#TRUE;"
                "Dem_EvtIsResetFailureFilterRequestedAfterStorageCondition#FALSE;"
                "Dem_EvtAllEnableConditionsFulfilled#TRUE;"
                "Dem_EvtIsResetFailureFilterRequested#FALSE;");

            /* Call SUT */
            returnValue = Dem_DebHandleResetConditions(EventId);

            /* Test case checks */
            CHECK_BOOLEAN(returnValue, expected_returnValue);
            /* Expected Result - Function returns TRUE */
            /* Checks on global data */
            check_global_data();
            /* GUID -
             * {27FD5CFB-8FE3-41e2-83C3-3851151C5B42};
             * {2A99BFF1-CE2A-4dfc-94C3-E0B9C66F0104};
             * {86F8B0A6-BAF2-4392-8786-BD7829EAFD69};
             * {803317C7-77D3-4ac8-AFD0-BCC2CF0B0943};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_DebHandleResetConditions_StorageCondition_FALSE(int doIt){
if (doIt) {
    /* Test Method - EP */
    /* Tester define */
    /* Test case data declarations */
    Dem_EventIdType EventId = 0;
    boolean returnValue;
    boolean expected_returnValue = TRUE;

    /* Set global data */
    initialise_global_data();

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_DebHandleResetConditions_StorageCondition_FALSE",
               "Check function returns TRUE in case:"
               "- Function Dem_EvtIsResetFailureFilterRequestedAfterDtcSetting() returns TRUE (line 390)"
               "- Function Dem_EvtIsResetFailureFilterRequestedAfterStorageCondition() returns TRUE (line 407)");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_IsAnyDtcGroupSettingDisabled#FALSE;"
                "Dem_EvtIsResetFailureFilterRequestedAfterDtcSetting#FALSE;"
                "Dem_EvtGetStorageConditions#default;"
                "Dem_StoCoAreAllFulfilled#TRUE;"
                "Dem_EvtIsResetFailureFilterRequestedAfterStorageCondition#TRUE;"
                "Dem_EvtSetDebounceLevel#0;"
                "Dem_EvtRequestResetFailureFilterAfterStorageCondition#FALSE;"
                "Dem_EvtAllEnableConditionsFulfilled#TRUE;"
                "Dem_EvtIsResetFailureFilterRequested#FALSE;");

            /* Call SUT */
            returnValue = Dem_DebHandleResetConditions(EventId);

            /* Test case checks */
            CHECK_BOOLEAN(returnValue, expected_returnValue);
            /* Expected Result - Function returns TRUE */
            /* Checks on global data */
            check_global_data();
            /* GUID -
             * {27FD5CFB-8FE3-41e2-83C3-3851151C5B42};
             * {803317C7-77D3-4ac8-AFD0-BCC2CF0B0943};
             */
        END_CALLS();
    END_TEST();
}}

/*****************************************************************************/
/* Dem_getEventDebouncing                                                    */
/*****************************************************************************/

void test_Dem_getEventDebouncing_set_1(int doIt){
if (doIt) {
    /* Test Method - EP */
    /* Tester define */
    /* Test case data declarations */
    Dem_EventIdType EventId = 0;
    uint8 returnValue;
    uint8 expected_returnValue = DEM_TEMPORARILY_DEFECTIVE;

    /* Set global data */
    initialise_global_data();

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_getEventDebouncing_set_1",
               "Check function returns DEM_TEMPORARILY_DEFECTIVE in case: "
               "- FDC is set 1 by returned of function Dem_DebCalculateFaultDetectionCounter() (line 442)");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_DebGetDebounceCounter4Calculation#E_OK;"
                "Dem_DebCalculateFaultDetectionCounter#1;");

            /* Call SUT */
            returnValue = ACCESS_FUNCTION(Dem_Deb, Dem_getEventDebouncing)(EventId);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Expected Result - Function returns DEM_TEMPORARILY_DEFECTIVE */
            /* Checks on global data */
            check_global_data();
            /* GUID -
             * {AF28A476-0872-4567-8FD7-CB82DA69A612};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_getEventDebouncing_set_127(int doIt){
if (doIt) {
    /* Test Method - EP */
    /* Tester define */
    /* Test case data declarations */
    Dem_EventIdType EventId = 0;
    uint8 returnValue;
    uint8 expected_returnValue = 0x0A;

    /* Set global data */
    initialise_global_data();

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_getEventDebouncing_set_127",
               "Check function returns 0x0A in case:"
               "- FDC is set 127 by returned of function Dem_DebCalculateFaultDetectionCounter() (line 458)");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_DebGetDebounceCounter4Calculation#E_OK;"
                "Dem_DebCalculateFaultDetectionCounter#127;");

            /* Call SUT */
            returnValue = ACCESS_FUNCTION(Dem_Deb, Dem_getEventDebouncing)(EventId);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Expected Result - Function returns 0x0A */
            /* Checks on global data */
            check_global_data();
            /* GUID -
             * {AF28A476-0872-4567-8FD7-CB82DA69A612};
             * {9D66E8B8-2BFC-428f-8D12-55BB049B7D3B};
             * {7FE1D893-3D46-4374-9C92-A5E7748E6E5E};
             * {7A3866A6-5E1E-4269-A0E0-015027698EE1};
             * {BD7A9BF2-8E27-4392-8085-F335A4371014};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_getEventDebouncing_set_Neg(int doIt){
if (doIt) {
    /* Test Method - EP */
    /* Tester define */
    /* Test case data declarations */
    Dem_EventIdType EventId = 0;
    uint8 returnValue;
    uint8 expected_returnValue = DEM_TEMPORARILY_HEALED;

    /* Set global data */
    initialise_global_data();

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_getEventDebouncing_set_Neg",
               "Check function returns DEM_TEMPORARILY_HEALED in case:"
               "- FDC is set Negative value by returned of function Dem_DebCalculateFaultDetectionCounter() (line 454)");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_DebGetDebounceCounter4Calculation#E_OK;"
                "Dem_DebCalculateFaultDetectionCounter#Neg;");

            /* Call SUT */
            returnValue = ACCESS_FUNCTION(Dem_Deb, Dem_getEventDebouncing)(EventId);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Expected Result - Function returns DEM_TEMPORARILY_HEALED */
            /* Checks on global data */
            check_global_data();
            /* GUID -
             * {580AD8D8-1E14-4ce4-8CD6-317E958771AB};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_getEventDebouncing_set_0(int doIt){
if (doIt) {
    /* Test Method - EP */
    /* Tester define */
    /* Test case data declarations */
    Dem_EventIdType EventId = 0;
    uint8 returnValue;
    uint8 expected_returnValue = 0;

    /* Set global data */
    initialise_global_data();

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_getEventDebouncing_set_0",
               "Check function returns 0 in case:"
               "- FDC is set 0 by returned of function Dem_DebCalculateFaultDetectionCounter() (line 442)");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_DebGetDebounceCounter4Calculation#E_OK;"
                "Dem_DebCalculateFaultDetectionCounter#0;");

            /* Call SUT */
            returnValue = ACCESS_FUNCTION(Dem_Deb, Dem_getEventDebouncing)(EventId);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Expected Result - Function returns 0 */
            /* Checks on global data */
            check_global_data();
            /* GUID -
             * {BD7A9BF2-8E27-4392-8085-F335A4371014};
             */
        END_CALLS();
    END_TEST();
}}

/*****************************************************************************/
/* Dem_GetDebouncingOfEvent                                                  */
/*****************************************************************************/

void test_Dem_GetDebouncingOfEvent_Error(int doIt){
if (doIt) {
    /* Test Method - FI */
    /* Tester define */
    /* Test case data declarations */
    Dem_EventIdType EventId = 0;
    Dem_DebouncingStateType * DebouncingState = NULL_PTR;
    Std_ReturnType returnValue;
    Std_ReturnType expected_returnValue = E_NOT_OK;

    /* Set global data */
    initialise_global_data();
    Dem_OpMoState = 0;

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_GetDebouncingOfEvent_Error",
               "Check function returns error in case:"
               "- The entry condition is checked for preinitialization, Valid event Id and event availability (line 469)");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Det_ReportError#Dem_GetDebouncingOfEvent;");

            /* Call SUT */
            returnValue = Dem_GetDebouncingOfEvent(EventId, DebouncingState);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Expected Result - Function returns error */
            /* Checks on global data */
            check_global_data();
            /* GUID -
             * {8FB9EAE2-0872-4292-94BF-C4D0A92D3CAB};
             * {5BE89B99-86EB-402a-AB0A-7F2D39A3CC46};
             * {FE335164-5FB5-4c20-A439-EDECADFA61CC};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_GetDebouncingOfEvent_NULL(int doIt){
if (doIt) {
    /* Test Method - FI */
    /* Tester define */
    /* Test case data declarations */
    Dem_EventIdType EventId = 0;
    Dem_DebouncingStateType * DebouncingState = NULL_PTR;
    Std_ReturnType returnValue;
    Std_ReturnType expected_returnValue = E_NOT_OK;

    /* Set global data */
    initialise_global_data();
    Dem_OpMoState = 1;

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_GetDebouncingOfEvent_NULL",
               "Check function returns error in case:"
               "- Parameter Debouncing State is set NULL (line 470)");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_isEventIdValid#TRUE;"
                "Dem_EvtIsSuppressed#FALSE;"
                "Det_ReportError#Dem_GetDebouncingOfEvent_NULL;");

            /* Call SUT */
            returnValue = Dem_GetDebouncingOfEvent(EventId, DebouncingState);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Expected Result - Function returns error */
            /* Checks on global data */
            check_global_data();
            /* GUID -
             * {8FB9EAE2-0872-4292-94BF-C4D0A92D3CAB};
             * {5BE89B99-86EB-402a-AB0A-7F2D39A3CC46};
             * {FE335164-5FB5-4c20-A439-EDECADFA61CC};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_GetDebouncingOfEvent_DET(int doIt){
if (doIt) {
    /* Test Method - FI */
    /* Tester define */
    Dem_DebouncingStateType DebouncingState_entity;
    INITIALISE(DebouncingState_entity);

    /* Test case data declarations */
    Dem_EventIdType EventId = 0;
    Dem_DebouncingStateType * DebouncingState = &DebouncingState_entity;
    Std_ReturnType returnValue;
    Std_ReturnType expected_returnValue = E_NOT_OK;

    /* Set global data */
    initialise_global_data();
    Dem_OpMoState = 1;

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_GetDebouncingOfEvent_DET",
               "Check function returns error in case:"
               "- Parameter Debouncing State is set valid pointer (line 470)"
               "- Function Dem_EvtGetDebounceMethodIndex() returns DEM_DEBMETH_IDX_MONINTERNAL(line 473)");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_isEventIdValid#TRUE;"
                "Dem_EvtIsSuppressed#FALSE;"
                "Dem_EvtGetDebounceMethodIndex#MONINTERNAL;"
                "Det_ReportError#Dem_GetDebouncingOfEvent_DET;");

            /* Call SUT */
            returnValue = Dem_GetDebouncingOfEvent(EventId, DebouncingState);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Expected Result - Function returns error */
            /* Checks on global data */
            check_global_data();
            /* GUID -
             * {E6BAF666-32C0-41e7-B211-C620878885F3};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_GetDebouncingOfEvent_Update_State(int doIt){
if (doIt) {
    /* Test Method - EP */
    /* Tester define */
    Dem_DebouncingStateType DebouncingState_entity;
    INITIALISE(DebouncingState_entity);

    /* Test case data declarations */
    Dem_EventIdType EventId = 0;
    Dem_DebouncingStateType * DebouncingState = &DebouncingState_entity;
    Std_ReturnType returnValue;
    Std_ReturnType expected_returnValue = E_OK;

    /* Set global data */
    initialise_global_data();
    Dem_OpMoState = 1;

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_GetDebouncingOfEvent_Update_State",
               "Check function returns E_OK in case:"
               "- Parameter Debouncing State is set valid pointer (line 470)"
               "- Function Dem_EvtGetDebounceMethodIndex() returns value differ with DEM_DEBMETH_IDX_MONINTERNAL(line 473)");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_isEventIdValid#TRUE;"
                "Dem_EvtIsSuppressed#FALSE;"
                "Dem_EvtGetDebounceMethodIndex#Not_MONINTERNAL;"
                "Dem_getEventDebouncing#default;");

            /* Call SUT */
            returnValue = Dem_GetDebouncingOfEvent(EventId, DebouncingState);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            CHECK_U_INT(*DebouncingState, 0);
            /* Expected Result - Function returns E_OK */
            /* Checks on global data */
            check_global_data();
            /* GUID -
             * {49E09B80-9208-4e1b-B71E-090F1748309E};
             * {0AA3E049-FF1B-493b-BDF9-F5368DB852FA};
             */
        END_CALLS();
    END_TEST();
}}

/*****************************************************************************/
/* Dem_GetDebouncingOfEvent_GeneralEvtInfo                                   */
/*****************************************************************************/

void test_Dem_GetDebouncingOfEvent_GeneralEvtInfo(int doIt){
if (doIt) {
    /* Test Method - EP */
    /* Tester define */
    /* Test case data declarations */
    Dem_EventIdType EventId = 0;
    Dem_DebouncingStateType * DebouncingState = NULL_PTR;
    Std_ReturnType returnValue;
    Std_ReturnType expected_returnValue = 0;

    /* Set global data */
    initialise_global_data();

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_GetDebouncingOfEvent_GeneralEvtInfo",
               "Check function returns the returned value of function Dem_GetDebouncingOfEvent()");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_GetDebouncingOfEvent#default;");

            /* Call SUT */
            returnValue = Dem_GetDebouncingOfEvent_GeneralEvtInfo(EventId, DebouncingState);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, expected_returnValue);
            /* Expected Result - Function returns the returned value of function Dem_GetDebouncingOfEvent() */
            /* Checks on global data */
            check_global_data();
            /* GUID -
             * {092A8013-8891-4afa-AD51-B142C10D3179};
             */
        END_CALLS();
    END_TEST();
}}

/*****************************************************************************/
/* Dem_DebMainFunction                                                       */
/*****************************************************************************/

void test_Dem_DebMainFunction_DoNothing(int doIt){
if (doIt) {
    /* Test Method - EP */
    /* Tester define */
    /* Test case data declarations */
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_DebMainFunction_DoNothing",
               "Check function does nothing");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            Dem_DebMainFunction();

            /* Test case checks */
            /* Expected Result - Function does nothing */
            /* Checks on global data */
            check_global_data();
            /* GUID -
             * Not Applicable;
             */
        END_CALLS();
    END_TEST();
}}

/*****************************************************************************/
/* Dem_TimeBasedDebounceMainFunction                                         */
/*****************************************************************************/

void test_Dem_TimeBasedDebounceMainFunction_InvokedFnc(int doIt){
if (doIt) {
    /* Test Method - EP */
    /* Tester define */
    /* Test case data declarations */
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_TimeBasedDebounceMainFunction_InvokedFnc",
               "Check function Dem_TimeBasedDebounceInternMainFunction() is called in case:"
               "- Function Dem_OpMoIsInitialized() returns TRUE (line 500)");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_OpMoIsInitialized#TRUE;"
                "Dem_TimeBasedDebounceInternMainFunction#default;");

            /* Call SUT */
            Dem_TimeBasedDebounceMainFunction();

            /* Test case checks */
            /* Expected Result - Function Dem_TimeBasedDebounceInternMainFunction() is called */
            /* Checks on global data */
            check_global_data();
            /* GUID -
             * {8A3A7841-8434-4c6e-B8AD-62F055425680};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_TimeBasedDebounceMainFunction_DoNothing(int doIt){
if (doIt) {
    /* Test Method - EP */
    /* Tester define */
    /* Test case data declarations */
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_TimeBasedDebounceMainFunction_DoNothing",
               "Check function does nothing in case:"
               "- Function Dem_OpMoIsInitialized() returns FALSE (line 500)");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("Dem_OpMoIsInitialized#FALSE;");

            /* Call SUT */
            Dem_TimeBasedDebounceMainFunction();

            /* Test case checks */
            /* Expected Result - Function does nothing */
            /* Checks on global data */
            check_global_data();
            /* GUID -
             * Not Applicable;
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

    IF_INSTANCE("FALSE") {
        CHECK_U_INT(EventId, 0);
        return FALSE;
    }

    IF_INSTANCE("TRUE") {
        CHECK_U_INT(EventId, 0);
        return TRUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return FALSE;
}

/* Stub for function Dem_DistMemReportPassed */
void Dem_DistMemReportPassed(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_DistMemReportPassed");

    IF_INSTANCE("default") {
        CHECK_U_INT(EventId, 0);
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Stub for function Dem_EvtProcessPassedAndFailed */
void Dem_EvtProcessPassedAndFailed(Dem_EventIdType EventId,
                                   Dem_EventStatusType EventStatus){
    REGISTER_CALL("Dem_EvtProcessPassedAndFailed");

    IF_INSTANCE("pass") {
        CHECK_U_INT(EventId, 0);
        CHECK_U_INT(EventStatus, DEM_EVENT_STATUS_PASSED);
        return;
    }

    IF_INSTANCE("fail") {
        CHECK_U_INT(EventId, 0);
        CHECK_U_INT(EventStatus, DEM_EVENT_STATUS_FAILED);
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Stub for function Dem_DistMemReportFailed */
void Dem_DistMemReportFailed(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_DistMemReportFailed");

    IF_INSTANCE("default") {
        CHECK_U_INT(EventId, 0);
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

/* Isolate for function Det_ReportError */
Std_ReturnType ISOLATE_Det_ReportError(uint16 ModuleId,
                                       uint8 InstanceId,
                                       uint8 ApiId,
                                       uint8 ErrorId){
    REGISTER_CALL("Det_ReportError");

    IF_INSTANCE("MAXTHRESHOLD") {
        CHECK_U_INT(ModuleId, DEM_MODULE_ID);
        CHECK_U_INT(InstanceId, DEM_INSTANCE_ID);
        CHECK_U_INT(ApiId, DEM_DET_APIID_GETFAULTDETECTIONCOUNTER);
        CHECK_U_INT(ErrorId, 0);
        return 0;
    }

    IF_INSTANCE("MINTHRESHOLD") {
        CHECK_U_INT(ModuleId, DEM_MODULE_ID);
        CHECK_U_INT(InstanceId, DEM_INSTANCE_ID);
        CHECK_U_INT(ApiId, DEM_DET_APIID_GETFAULTDETECTIONCOUNTER);
        CHECK_U_INT(ErrorId, 1);
        return 0;
    }

    IF_INSTANCE("Dem_GetFaultDetectionCounter_0x20") {
        CHECK_U_INT(ModuleId, DEM_MODULE_ID);
        CHECK_U_INT(InstanceId, DEM_INSTANCE_ID);
        CHECK_U_INT(ApiId, DEM_DET_APIID_GETFAULTDETECTIONCOUNTER);
        CHECK_U_INT(ErrorId, 0x20);
        return 0;
    }

    IF_INSTANCE("Dem_GetFaultDetectionCounter_NULL") {
        CHECK_U_INT(ModuleId, DEM_MODULE_ID);
        CHECK_U_INT(InstanceId, DEM_INSTANCE_ID);
        CHECK_U_INT(ApiId, DEM_DET_APIID_GETFAULTDETECTIONCOUNTER);
        CHECK_U_INT(ErrorId, 0x11);
        return 0;
    }

    IF_INSTANCE("Dem_ResetEventDebounceStatus") {
        CHECK_U_INT(ModuleId, DEM_MODULE_ID);
        CHECK_U_INT(InstanceId, DEM_INSTANCE_ID);
        CHECK_U_INT(ApiId, DEM_DET_APIID_DEM_RESETEVENTDEBOUNCESTATUS);
        CHECK_U_INT(ErrorId, 0x20);
        return 0;
    }

    IF_INSTANCE("Dem_ManipulateEventDebounceStatus") {
        CHECK_U_INT(ModuleId, DEM_MODULE_ID);
        CHECK_U_INT(InstanceId, DEM_INSTANCE_ID);
        CHECK_U_INT(ApiId, DEM_DET_APIID_SETEVENTSTATUS);
        CHECK_U_INT(ErrorId, DEM_E_UNINIT);
        return 0;
    }

    IF_INSTANCE("Dem_GetDebouncingOfEvent") {
        CHECK_U_INT(ModuleId, DEM_MODULE_ID);
        CHECK_U_INT(InstanceId, DEM_INSTANCE_ID);
        CHECK_U_INT(ApiId, DEM_DET_APIID_DEM_GETDEBOUNCINGOFEVENT);
        CHECK_U_INT(ErrorId, 0x20);
        return 0;
    }

    IF_INSTANCE("Dem_GetDebouncingOfEvent_NULL") {
        CHECK_U_INT(ModuleId, DEM_MODULE_ID);
        CHECK_U_INT(InstanceId, DEM_INSTANCE_ID);
        CHECK_U_INT(ApiId, DEM_DET_APIID_DEM_GETDEBOUNCINGOFEVENT);
        CHECK_U_INT(ErrorId, 0x11);
        return 0;
    }

    IF_INSTANCE("Dem_GetDebouncingOfEvent_DET") {
        CHECK_U_INT(ModuleId, DEM_MODULE_ID);
        CHECK_U_INT(InstanceId, DEM_INSTANCE_ID);
        CHECK_U_INT(ApiId, DEM_DET_APIID_DEM_GETDEBOUNCINGOFEVENT);
        CHECK_U_INT(ErrorId, 0x10);
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
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
        CHECK_U_INT(EventId, 0);
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
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

    IF_INSTANCE("MONINTERNAL") {
        CHECK_U_INT(EventId, 0);
        return DEM_DEBMETH_IDX_MONINTERNAL;
    }

    IF_INSTANCE("Not_MONINTERNAL") {
        CHECK_U_INT(EventId, 0);
        return DEM_DEBMETH_IDX_ARTIME;
    }

    IF_INSTANCE("ARCTRBASECLASS") {
        CHECK_U_INT(EventId, 0);
        return DEM_DEBMETH_IDX_ARCTRBASECLASS;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return DEM_DEBMETH_IDX_MONINTERNAL;
}

/* Isolate for function Dem_EvtGetDebounceParamSetIndex */
uint16 ISOLATE_Dem_Deb_Dem_EvtGetDebounceParamSetIndex(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtGetDebounceParamSetIndex");

    IF_INSTANCE("default") {
        CHECK_U_INT(EventId, 0);
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EvtGetFDCThresholdReachedTOC */
Dem_boolean_least ISOLATE_Dem_Deb_Dem_EvtGetFDCThresholdReachedTOC(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtGetFDCThresholdReachedTOC");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EvtSetFDCThresholdReachedTOC */
void ISOLATE_Dem_Deb_Dem_EvtSetFDCThresholdReachedTOC(Dem_EventIdType EventId,
                                                      Dem_boolean_least setBit){
    REGISTER_CALL("Dem_EvtSetFDCThresholdReachedTOC");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_OpMoIsInitialized */
Dem_boolean_least ISOLATE_Dem_Deb_Dem_OpMoIsInitialized(){
    REGISTER_CALL("Dem_OpMoIsInitialized");

    IF_INSTANCE("FALSE") {
        return FALSE;
    }

    IF_INSTANCE("TRUE") {
        return TRUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return FALSE;
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
    return FALSE;
}

/* Isolate for function Dem_EvtGetStorageConditions */
Dem_StoCoList ISOLATE_Dem_Deb_Dem_EvtGetStorageConditions(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtGetStorageConditions");

    IF_INSTANCE("default") {
        CHECK_U_INT(EventId, 0);
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EvtSetFDCThresholdReached */
void ISOLATE_Dem_Deb_Dem_EvtSetFDCThresholdReached(Dem_EventIdType EventId,
                                                   Dem_boolean_least setBit){
    REGISTER_CALL("Dem_EvtSetFDCThresholdReached");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtIsSuspicious */
Dem_boolean_least ISOLATE_Dem_Deb_Dem_EvtIsSuspicious(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtIsSuspicious");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_DebHandleDebounceAction__processBits */
Dem_boolean_least ISOLATE_Dem_Deb_Dem_DebHandleDebounceAction__processBits(Dem_EventIdType EventId,
                                                                           Dem_DebouncedActionType debAction){
    REGISTER_CALL("Dem_DebHandleDebounceAction__processBits");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_EventIdIteratorNew */
void ISOLATE_Dem_Deb_Dem_EventIdIteratorNew(Dem_EventIdIterator * it){
    REGISTER_CALL("Dem_EventIdIteratorNew");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EventIdIteratorIsValid */
Dem_boolean_least ISOLATE_Dem_Deb_Dem_EventIdIteratorIsValid(const Dem_EventIdIterator * it){
    REGISTER_CALL("Dem_EventIdIteratorIsValid");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
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
        return CANTATA_DEFAULT_VALUE;
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

    IF_INSTANCE("FALSE") {
        CHECK_U_INT(EventId, 0);
        return FALSE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return FALSE;
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

    IF_INSTANCE("FALSE") {
        CHECK_U_INT(EventId, 0);
        return FALSE;
    }

    IF_INSTANCE("TRUE") {
        CHECK_U_INT(EventId, 0);
        return TRUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return FALSE;
}

/* Isolate for function Dem_EvtIsResetFailureFilterRequestedAfterDtcSetting */
Dem_boolean_least ISOLATE_Dem_Deb_Dem_EvtIsResetFailureFilterRequestedAfterDtcSetting(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtIsResetFailureFilterRequestedAfterDtcSetting");

    IF_INSTANCE("FALSE") {
        CHECK_U_INT(EventId, 0);
        return FALSE;
    }

    IF_INSTANCE("TRUE") {
        CHECK_U_INT(EventId, 0);
        return TRUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return FALSE;
}

/* Isolate for function Dem_EvtGetDebounceLevel */
sint16 ISOLATE_Dem_Deb_Dem_EvtGetDebounceLevel(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtGetDebounceLevel");

    IF_INSTANCE("CounterUpdate") {
        CHECK_U_INT(EventId, 0);
        return 1;
    }

    IF_INSTANCE("Neg") {
        CHECK_U_INT(EventId, 0);
        return -2;
    }

    IF_INSTANCE("0") {
        CHECK_U_INT(EventId, 0);
        return 0;
    }

    IF_INSTANCE("1") {
        CHECK_U_INT(EventId, 0);
        return 1;
    }

    IF_INSTANCE("2") {
        CHECK_U_INT(EventId, 0);
        return 2;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_isEventIdValid */
Dem_boolean_least ISOLATE_Dem_Deb_Dem_isEventIdValid(Dem_EventIdType checkID){
    REGISTER_CALL("Dem_isEventIdValid");

    IF_INSTANCE("TRUE") {
        CHECK_U_INT(checkID, 0);
        return TRUE;
    }

    IF_INSTANCE("FALSE") {
        CHECK_U_INT(checkID, 0);
        return FALSE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return FALSE;
}

/* Isolate for function Dem_DebGetDebounceCounter4Calculation */
Std_ReturnType ISOLATE_Dem_DebGetDebounceCounter4Calculation(Dem_EventIdType EventId,
                                                             sint16 * debounceCounter){
    REGISTER_CALL("Dem_DebGetDebounceCounter4Calculation");

    IF_INSTANCE("E_OK") {
        CHECK_U_INT(EventId, 0);
        *debounceCounter = 0;
        return E_OK;
    }

    IF_INSTANCE("E_NOT_OK") {
        CHECK_U_INT(EventId, 0);
        *debounceCounter = 0;
        return E_NOT_OK;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return E_NOT_OK;
}

/* Isolate for function Dem_DebCalculateFaultDetectionCounter */
sint8 ISOLATE_Dem_DebCalculateFaultDetectionCounter(Dem_EventIdType EventId,
                                                    sint16 debounceCounter){
    REGISTER_CALL("Dem_DebCalculateFaultDetectionCounter");

    IF_INSTANCE("127") {
        CHECK_U_INT(EventId, 0);
        CHECK_U_INT(debounceCounter, 0);
        return 127;
    }

    IF_INSTANCE("1") {
        CHECK_U_INT(EventId, 0);
        CHECK_U_INT(debounceCounter, 0);
        return 1;
    }

    IF_INSTANCE("0") {
        CHECK_U_INT(EventId, 0);
        CHECK_U_INT(debounceCounter, 0);
        return 0;
    }

    IF_INSTANCE("Neg") {
        CHECK_U_INT(EventId, 0);
        CHECK_U_INT(debounceCounter, 0);
        return -127;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_GetFaultDetectionCounter */
Std_ReturnType ISOLATE_Dem_GetFaultDetectionCounter(Dem_EventIdType EventId,
                                                    sint8 * FaultDetectionCounter){
    REGISTER_CALL("Dem_GetFaultDetectionCounter");

    IF_INSTANCE("GeneralEvtInfo") {
        CHECK_U_INT(EventId, 0);
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EvtSetLastReportedEvent */
void ISOLATE_Dem_Deb_Dem_EvtSetLastReportedEvent(Dem_EventIdType EventId,
                                                 Dem_EventStatusType EventStatus){
    REGISTER_CALL("Dem_EvtSetLastReportedEvent");

    IF_INSTANCE("INVALIDREPORT") {
        CHECK_U_INT(EventId, 0);
        CHECK_U_INT(EventStatus, DEM_EVENT_STATUS_INVALIDREPORT);
        return;
    }

    IF_INSTANCE("fail") {
        CHECK_U_INT(EventId, 0);
        CHECK_U_INT(EventStatus, DEM_EVENT_STATUS_FAILED);
        return;
    }

    IF_INSTANCE("pass") {
        CHECK_U_INT(EventId, 0);
        CHECK_U_INT(EventStatus, DEM_EVENT_STATUS_PASSED);
        return;
    }

    IF_INSTANCE("prefail") {
        CHECK_U_INT(EventId, 0);
        CHECK_U_INT(EventStatus, DEM_EVENT_STATUS_PREFAILED);
        return;
    }

    IF_INSTANCE("prepass") {
        CHECK_U_INT(EventId, 0);
        CHECK_U_INT(EventStatus, DEM_EVENT_STATUS_PREPASSED);
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtSetDebounceLevel */
void ISOLATE_Dem_Deb_Dem_EvtSetDebounceLevel(Dem_EventIdType EventId,
                                             sint16 debounceLevel){
    REGISTER_CALL("Dem_EvtSetDebounceLevel");

    IF_INSTANCE("DEM_EVENT_STATUS_PASSED") {
        CHECK_U_INT(EventId, 0);
        CHECK_U_INT(debounceLevel, DEM_EVENT_STATUS_PASSED);
        return;
    }

    IF_INSTANCE("DEM_EVENT_STATUS_FAILED") {
        CHECK_U_INT(EventId, 0);
        CHECK_U_INT(debounceLevel, DEM_EVENT_STATUS_FAILED);
        return;
    }

    IF_INSTANCE("DEM_EVENT_STATUS_PREFAILED") {
        CHECK_U_INT(EventId, 0);
        CHECK_U_INT(debounceLevel, DEM_EVENT_STATUS_PREFAILED);
        return;
    }

    IF_INSTANCE("Neg") {
        CHECK_U_INT(EventId, 0);
        CHECK_S_INT(debounceLevel, -1);
        return;
    }

    IF_INSTANCE("0") {
        CHECK_U_INT(EventId, 0);
        CHECK_U_INT(debounceLevel, 0);
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtAllEnableConditionsFulfilled */
Dem_boolean_least ISOLATE_Dem_Deb_Dem_EvtAllEnableConditionsFulfilled(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtAllEnableConditionsFulfilled");

    IF_INSTANCE("TRUE") {
        CHECK_U_INT(EventId, 0);
        return TRUE;
    }

    IF_INSTANCE("FALSE") {
        CHECK_U_INT(EventId, 0);
        return FALSE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_IsOperationCycleStarted */
boolean ISOLATE_Dem_Deb_Dem_IsOperationCycleStarted(Dem_OperationCycleIdType OperationCycleId){
    REGISTER_CALL("Dem_IsOperationCycleStarted");

    IF_INSTANCE("TRUE") {
        CHECK_U_INT(OperationCycleId, 0);
        return TRUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return FALSE;
}

/* Isolate for function Dem_IsEventReportingEnabledByDtcSetting */
Dem_boolean_least ISOLATE_Dem_Deb_Dem_IsEventReportingEnabledByDtcSetting(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_IsEventReportingEnabledByDtcSetting");

    IF_INSTANCE("TRUE") {
        CHECK_U_INT(EventId, 0);
        return TRUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return FALSE;
}

/* Isolate for function Dem_getDebCtrBaseClassPassedThreshold */
sint16 ISOLATE_Dem_Deb_Dem_getDebCtrBaseClassPassedThreshold(const void * paramSet,
                                                             uint16 paramIndex){
    REGISTER_CALL("Dem_getDebCtrBaseClassPassedThreshold");

    IF_INSTANCE("Neg") {
        CHECK_U_INT(paramIndex, 0);
        return -3;
    }

    IF_INSTANCE("0") {
        CHECK_U_INT(paramIndex, 0);
        return 0;
    }

    IF_INSTANCE("1") {
        CHECK_U_INT(paramIndex, 0);
        return 1;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_getDebCtrBaseClassFailedThreshold */
sint16 ISOLATE_Dem_Deb_Dem_getDebCtrBaseClassFailedThreshold(const void * paramSet,
                                                             uint16 paramIndex){
    REGISTER_CALL("Dem_getDebCtrBaseClassFailedThreshold");

    IF_INSTANCE("0") {
        CHECK_U_INT(paramIndex, 0);
        return 0;
    }

    IF_INSTANCE("1") {
        CHECK_U_INT(paramIndex, 0);
        return 1;
    }

    IF_INSTANCE("4") {
        CHECK_U_INT(paramIndex, 0);
        return 4;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_getDebCtrBaseClassJumpDownValue */
sint16 ISOLATE_Dem_Deb_Dem_getDebCtrBaseClassJumpDownValue(const void * paramSet,
                                                           uint16 paramIndex){
    REGISTER_CALL("Dem_getDebCtrBaseClassJumpDownValue");

    IF_INSTANCE("0") {
        CHECK_U_INT(paramIndex, 0);
        return 0;
    }

    IF_INSTANCE("2") {
        CHECK_U_INT(paramIndex, 0);
        return 2;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_getDebCtrBaseClassJumpUpValue */
sint16 ISOLATE_Dem_Deb_Dem_getDebCtrBaseClassJumpUpValue(const void * paramSet,
                                                         uint16 paramIndex){
    REGISTER_CALL("Dem_getDebCtrBaseClassJumpUpValue");

    IF_INSTANCE("0") {
        CHECK_U_INT(paramIndex, 0);
        return 0;
    }

    IF_INSTANCE("1") {
        CHECK_U_INT(paramIndex, 0);
        return 1;
    }

    IF_INSTANCE("2") {
        CHECK_U_INT(paramIndex, 0);
        return 2;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_getDebCtrBaseClassIsJumpDown */
boolean ISOLATE_Dem_Deb_Dem_getDebCtrBaseClassIsJumpDown(const void * paramSet,
                                                         uint16 paramIndex){
    REGISTER_CALL("Dem_getDebCtrBaseClassIsJumpDown");

    IF_INSTANCE("FALSE") {
        CHECK_U_INT(paramIndex, 0);
        return FALSE;
    }

    IF_INSTANCE("TRUE") {
        CHECK_U_INT(paramIndex, 0);
        return TRUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return FALSE;
}

/* Isolate for function Dem_getDebCtrBaseClassIsJumpUp */
boolean ISOLATE_Dem_Deb_Dem_getDebCtrBaseClassIsJumpUp(const void * paramSet,
                                                       uint16 paramIndex){
    REGISTER_CALL("Dem_getDebCtrBaseClassIsJumpUp");

    IF_INSTANCE("TRUE") {
        CHECK_U_INT(paramIndex, 0);
        return TRUE;
    }

    IF_INSTANCE("FALSE") {
        CHECK_U_INT(paramIndex, 0);
        return FALSE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_EvtRequestResetFailureFilter */
void ISOLATE_Dem_Deb_Dem_EvtRequestResetFailureFilter(Dem_EventIdType EventId,
                                                      Dem_boolean_least setBit){
    REGISTER_CALL("Dem_EvtRequestResetFailureFilter");

    IF_INSTANCE("default") {
        CHECK_U_INT(EventId, 0);
        CHECK_BOOLEAN(setBit, FALSE);
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_EvtGetLastReportedEvent */
Dem_EventStatusType ISOLATE_Dem_Deb_Dem_EvtGetLastReportedEvent(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtGetLastReportedEvent");

    IF_INSTANCE("DEM_EVENT_STATUS_PREFAILED") {
        CHECK_U_INT(EventId, 0);
        return DEM_EVENT_STATUS_PREFAILED;
    }

    IF_INSTANCE("DEM_EVENT_STATUS_PREPASSED") {
        CHECK_U_INT(EventId, 0);
        return DEM_EVENT_STATUS_PREPASSED;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
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

    IF_INSTANCE("TRUE") {
        CHECK_U_INT(eventId, 0);
        CHECK_U_INT(eventStatus, DEM_EVENT_STATUS_PASSED);
        return TRUE;
    }

    IF_INSTANCE("TRUE_fail") {
        CHECK_U_INT(eventId, 0);
        CHECK_U_INT(eventStatus, DEM_EVENT_STATUS_FAILED);
        return TRUE;
    }

    IF_INSTANCE("FALSE") {
        CHECK_U_INT(eventId, 0);
        CHECK_U_INT(eventStatus, DEM_EVENT_STATUS_PASSED);
        return FALSE;
    }

    IF_INSTANCE("FALSE_fail") {
        CHECK_U_INT(eventId, 0);
        CHECK_U_INT(eventStatus, DEM_EVENT_STATUS_FAILED);
        return FALSE;
    }

    IF_INSTANCE("FALSE_prefail") {
        CHECK_U_INT(eventId, 0);
        CHECK_U_INT(eventStatus, DEM_EVENT_STATUS_PREFAILED);
        return FALSE;
    }

    IF_INSTANCE("FALSE_prepass") {
        CHECK_U_INT(eventId, 0);
        CHECK_U_INT(eventStatus, DEM_EVENT_STATUS_PREPASSED);
        return FALSE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return FALSE;
}

/* Isolate for function Dem_EvMemGenReportFailedEvent */
void ISOLATE_Dem_Deb_Dem_EvMemGenReportFailedEvent(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvMemGenReportFailedEvent");

    IF_INSTANCE("default") {
        CHECK_U_INT(EventId, 0);
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function Dem_IsAnyDtcGroupSettingDisabled */
Dem_boolean_least ISOLATE_Dem_Deb_Dem_IsAnyDtcGroupSettingDisabled(){
    REGISTER_CALL("Dem_IsAnyDtcGroupSettingDisabled");

    IF_INSTANCE("TRUE") {
        return TRUE;
    }

    IF_INSTANCE("FALSE") {
        return FALSE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return FALSE;
}

/* Isolate for function Dem_IsEvtDebBehaviorReset */
Dem_boolean_least ISOLATE_Dem_Deb_Dem_IsEvtDebBehaviorReset(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_IsEvtDebBehaviorReset");

    IF_INSTANCE("TRUE") {
        CHECK_U_INT(EventId, 0);
        return TRUE;
    }

    IF_INSTANCE("FALSE") {
        CHECK_U_INT(EventId, 0);
        return FALSE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return FALSE;
}

/* Isolate for function Dem_EvtRequestResetFailureFilterAfterDtcSetting */
void ISOLATE_Dem_Deb_Dem_EvtRequestResetFailureFilterAfterDtcSetting(Dem_EventIdType EventId,
                                                                     Dem_boolean_least setBit){
    REGISTER_CALL("Dem_EvtRequestResetFailureFilterAfterDtcSetting");

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

/* Isolate for function Dem_EvtIsResetFailureFilterRequestedAfterStorageCondition */
Dem_boolean_least ISOLATE_Dem_Deb_Dem_EvtIsResetFailureFilterRequestedAfterStorageCondition(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_EvtIsResetFailureFilterRequestedAfterStorageCondition");

    IF_INSTANCE("TRUE") {
        CHECK_U_INT(EventId, 0);
        return TRUE;
    }

    IF_INSTANCE("FALSE") {
        CHECK_U_INT(EventId, 0);
        return FALSE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return FALSE;
}

/* Isolate for function Dem_EvtRequestResetFailureFilterAfterStorageCondition */
void ISOLATE_Dem_Deb_Dem_EvtRequestResetFailureFilterAfterStorageCondition(Dem_EventIdType EventId,
                                                                           Dem_boolean_least setBit){
    REGISTER_CALL("Dem_EvtRequestResetFailureFilterAfterStorageCondition");

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

/* Isolate for function Dem_getEventDebouncing */
uint8 ISOLATE_Dem_Deb_Dem_getEventDebouncing(Dem_EventIdType EventId){
    REGISTER_CALL("Dem_getEventDebouncing");

    IF_INSTANCE("default") {
        CHECK_U_INT(EventId, 0);
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Isolate for function Dem_GetDebouncingOfEvent */
Std_ReturnType ISOLATE_Dem_GetDebouncingOfEvent(Dem_EventIdType EventId,
                                                Dem_DebouncingStateType * DebouncingState){
    REGISTER_CALL("Dem_GetDebouncingOfEvent");

    IF_INSTANCE("default") {
        CHECK_U_INT(EventId, 0);
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
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
/* Stub for function Dem_GetFaultDetectionCounterOfIntDebMonitors_fnc */
Std_ReturnType Dem_GetFaultDetectionCounterOfIntDebMonitors_fnc(sint8 * faultDetCtr){
    REGISTER_CALL("Dem_GetFaultDetectionCounterOfIntDebMonitors_fnc");

    IF_INSTANCE("default") {
        *faultDetCtr = 1;
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Stub for function Dem_DebGetLimits_fnc */
void Dem_DebGetLimits_fnc(const void* paramSet,
                          uint16 paramIndex,
                          sint16_least* MinThreshold,
                          sint16_least* MaxThreshold){
    REGISTER_CALL("Dem_DebGetLimits_fnc");

    IF_INSTANCE("MaxThreshold_set_1") {
        CHECK_ADDRESS(paramSet, Dem_Cfg_DebClasses[0].paramSet);
        CHECK_U_INT(paramIndex, 0);
        *MaxThreshold = 1;
        return;
    }

    IF_INSTANCE("MaxThreshold_set_Neg") {
        CHECK_ADDRESS(paramSet, Dem_Cfg_DebClasses[0].paramSet);
        CHECK_U_INT(paramIndex, 0);
        *MaxThreshold = -1;
        return;
    }

    IF_INSTANCE("MinThreshold_set_1") {
        CHECK_ADDRESS(paramSet, Dem_Cfg_DebClasses[0].paramSet);
        CHECK_U_INT(paramIndex, 0);
        *MinThreshold = 1;
        return;
    }

    IF_INSTANCE("MinThreshold_set_Neg") {
        CHECK_ADDRESS(paramSet, Dem_Cfg_DebClasses[0].paramSet);
        CHECK_U_INT(paramIndex, 0);
        *MinThreshold = -1;
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}


/* pragma qas cantata testscript end */
/*****************************************************************************/
/* End of test script                                                        */
/*****************************************************************************/
