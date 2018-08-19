/*****************************************************************************/
/*                            Cantata Test Script                            */
/*****************************************************************************/
/*
 *    Filename: test_Dem_DebBase_Var1.c
 *    Author: hiu81hc
 *    Generated on: 07-Aug-2018 15:04:59
 *    Generated from: Dem_DebBase.c
 */
/*****************************************************************************/
/* Environment Definition                                                    */
/*****************************************************************************/

#define TEST_SCRIPT_GENERATOR 2

/* Include files from software under test */
#include "Dem.h"
#include "Rte_Dem.h"
#include "Dem_DebBase.h"
#include "Dem_DebSharing.h"
#include "Dem_DebArTime.h"
#include "Dem_DebCtrBaseClass.h"
#include "Dem_DebMonInternal.h"
#include "Dem_Cfg_ExtPrototypes.h"
#include "Dem_Lib.h"
#define DEM_START_SEC_ROM_CONST
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
extern void Dem_DebSwitchToAlternativeParameters();
extern Std_ReturnType Dem_DebSwitchToParameters(uint8 CounterParamSetId);

/* Global data */
extern Dem_DebClass Dem_Cfg_DebClasses[3];
typedef struct Dem_DebBase_av_struct { const Dem_DebCounterBaseClass_ParamSet(* ref_Dem_Cfg_DebCounterBaseClass_Paramsets)[2][6]; } Dem_DebBase_av_struct;
extern Dem_DebBase_av_struct av_Dem_DebBase;

/* Expected variables for global data */
Dem_DebClass expected_Dem_Cfg_DebClasses[3];
typedef struct expected_Dem_DebBase_av_struct { Dem_DebCounterBaseClass_ParamSet ref_Dem_Cfg_DebCounterBaseClass_Paramsets[2][6]; } expected_Dem_DebBase_av_struct;
expected_Dem_DebBase_av_struct expected_av_Dem_DebBase;

/* This function initialises global data to default values. This function       */
/* is called by every test case so must not contain test case specific settings */
static void initialise_global_data(){
    INITIALISE(Dem_Cfg_DebClasses);
    /* No initialisation for const data: Dem_Cfg_DebCounterBaseClass_Paramsets */
}

/* This function copies the global data settings into expected variables for */
/* use in check_global_data(). It is called by every test case so must not   */
/* contain test case specific settings.                                      */
static void initialise_expected_global_data(){
    COPY_TO_EXPECTED(Dem_Cfg_DebClasses, expected_Dem_Cfg_DebClasses);
}

/* This function checks global data against the expected values. */
static void check_global_data(){
    CHECK_MEMORY("Dem_Cfg_DebClasses", Dem_Cfg_DebClasses, expected_Dem_Cfg_DebClasses, sizeof(expected_Dem_Cfg_DebClasses));
}

/* Prototypes for test functions */
void run_tests();
void test_Dem_DebSwitchToAlternativeParameters_set_address_for_paramSet(int);
void test_Dem_DebSwitchToParameters_returns_E_OK(int);
void test_Dem_DebSwitchToParameters_returns_E_NOT_OK(int);

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
    OPEN_LOG("test_Dem_DebBase_Var1.ctr", false, 100);
    START_SCRIPT("Dem_DebBase", true);

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
    test_Dem_DebSwitchToAlternativeParameters_set_address_for_paramSet(1);
    test_Dem_DebSwitchToParameters_returns_E_OK(1);
    test_Dem_DebSwitchToParameters_returns_E_NOT_OK(1);

    rule_set("*", "*");
    EXPORT_COVERAGE("test_Dem_DebBase_Var1.cov", cppca_export_replace);
}

/*****************************************************************************/
/* Test Cases                                                                */
/*****************************************************************************/

void test_Dem_DebSwitchToAlternativeParameters_set_address_for_paramSet(int doIt){
if (doIt) {
    /* Compilation Flag
     * - Define DEM_CFG_DEBCOUNTERBASECLASS as DEM_CFG_DEBCOUNTERBASECLASS_ON;
     * - Define DEMRB_DEBOUNCECOUNTERSETS_SIZE as different 0;
     */
    /* Test method - EP */
    /* Set global data */
    initialise_global_data();

    /* Set expected values for global data checks */
    initialise_expected_global_data();

    expected_Dem_Cfg_DebClasses[DEM_DEBMETH_IDX_ARCTRBASECLASS].paramSet = &(ACCESS_VARIABLE(Dem_DebBase, Dem_Cfg_DebCounterBaseClass_Paramsets)[DemConf_DemRbDebounceCounterSet_Alternative]);

    /* Test case data declarations */

    START_TEST("test_Dem_DebSwitchToAlternativeParameters_set_address_for_paramSet",
               "Check that: Setting the address for paramSet variable");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            Dem_DebSwitchToAlternativeParameters();

            /* Test case checks */
            /* Expected result - Setting the address for paramSet variable;*/
            /* Checks on global data */
            check_global_data();
            /* GUID
             * - {0E469339-64D0-43e3-8798-47002FA34B62};
             * - {8CD141EF-C3C6-4321-96FF-C4FA8AE89458};
             */
        END_CALLS();
    END_TEST();
}}

void test_Dem_DebSwitchToParameters_returns_E_OK(int doIt){
if (doIt) {
    /* Test method - EP */
    /* Test case data declarations */
    Std_ReturnType returnValue;
    uint8 CounterParamSetId = 1;
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    expected_Dem_Cfg_DebClasses[DEM_DEBMETH_IDX_ARCTRBASECLASS].paramSet = &(ACCESS_VARIABLE(Dem_DebBase, Dem_Cfg_DebCounterBaseClass_Paramsets)[CounterParamSetId]);

    START_TEST("test_Dem_DebSwitchToParameters_returns_E_OK",
               "Check that: Function returns E_OK"
               "In case: The value of CounterParamSetId variable is less than DEMRB_DEBOUNCECOUNTERSETS_SIZE at line 65");

        /* Expected Call Sequence */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = Dem_DebSwitchToParameters(CounterParamSetId);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, E_OK);
            /* Expected result - Function returns E_OK;*/
            /* Checks on global data */
            check_global_data();
            /* GUID - Not Applicable */
        END_CALLS();
    END_TEST();
}}

void test_Dem_DebSwitchToParameters_returns_E_NOT_OK(int doIt){
if (doIt) {
    /* Test method - EP */
    /* Test case data declarations */
    Std_ReturnType returnValue;
    uint8 CounterParamSetId = 3;
    /* Set global data */
    initialise_global_data();
    /* Set expected values for global data checks */
    initialise_expected_global_data();

    START_TEST("test_Dem_DebSwitchToParameters_returns_E_NOT_OK",
               "Check that: Function returns E_NOT_OK"
               "In case: The value of CounterParamSetId variable is greater than DEMRB_DEBOUNCECOUNTERSETS_SIZE at line 70");

        /* Expected Call Sequence  */
        EXPECTED_CALLS("");

            /* Call SUT */
            returnValue = Dem_DebSwitchToParameters(CounterParamSetId);

            /* Test case checks */
            CHECK_U_CHAR(returnValue, E_NOT_OK);
            /* Expected result - Function returns E_NOT_OK;*/
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

/* Isolate for function rba_DiagLib_Bit8SetBit */
void ISOLATE_Dem_DebBase_rba_DiagLib_Bit8SetBit(uint8 * buffer,
                                                uint8 bit_position){
    REGISTER_CALL("rba_DiagLib_Bit8SetBit");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function rba_DiagLib_Bit8ClearBit */
void ISOLATE_Dem_DebBase_rba_DiagLib_Bit8ClearBit(uint8 * buffer,
                                                  uint8 bit_position){
    REGISTER_CALL("rba_DiagLib_Bit8ClearBit");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function rba_DiagLib_Bit8ClearBits */
void ISOLATE_Dem_DebBase_rba_DiagLib_Bit8ClearBits(uint8 * value,
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
void ISOLATE_Dem_DebBase_rba_DiagLib_Bit16SetBit(uint16 * buffer,
                                                 uint8 bit_position){
    REGISTER_CALL("rba_DiagLib_Bit16SetBit");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function rba_DiagLib_Bit16ClearBit */
void ISOLATE_Dem_DebBase_rba_DiagLib_Bit16ClearBit(uint16 * buffer,
                                                   uint8 bit_position){
    REGISTER_CALL("rba_DiagLib_Bit16ClearBit");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function rba_DiagLib_Bit16ClearBits */
void ISOLATE_Dem_DebBase_rba_DiagLib_Bit16ClearBits(uint16 * value,
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
void ISOLATE_Dem_DebBase_rba_DiagLib_Bit32SetBit(uint32 * buffer,
                                                 uint8 bit_position){
    REGISTER_CALL("rba_DiagLib_Bit32SetBit");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function rba_DiagLib_Bit32ClearBit */
void ISOLATE_Dem_DebBase_rba_DiagLib_Bit32ClearBit(uint32 * buffer,
                                                   uint8 bit_position){
    REGISTER_CALL("rba_DiagLib_Bit32ClearBit");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Isolate for function rba_DiagLib_Bit32ClearBits */
void ISOLATE_Dem_DebBase_rba_DiagLib_Bit32ClearBits(uint32 * value,
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
Dem_boolean_least ISOLATE_Dem_DebBase_Dem_isDtcIdValid(Dem_DtcIdType id){
    REGISTER_CALL("Dem_isDtcIdValid");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_DtcGroupIdIsValid */
Dem_boolean_least ISOLATE_Dem_DebBase_Dem_DtcGroupIdIsValid(Dem_DTCGroupIdType dtcGroupID){
    REGISTER_CALL("Dem_DtcGroupIdIsValid");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Isolate for function Dem_J1939IsNodeIdValid */
Dem_boolean_least ISOLATE_Dem_DebBase_Dem_J1939IsNodeIdValid(Dem_J1939NodeIdType nodeId){
    REGISTER_CALL("Dem_J1939IsNodeIdValid");

    IF_INSTANCE("default") {
        return CANTATA_DEFAULT_VALUE;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return CANTATA_DEFAULT_VALUE;
}

/* Tester define */

/* Stub for function Dem_DebArTime_GetLimits */
void Dem_DebArTime_GetLimits(const void* paramSet,
                             uint16 paramIndex,
                             sint16_least* MinThreshold,
                             sint16_least* MaxThreshold){
    REGISTER_CALL("Dem_DebArTime_GetLimits");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Stub for function Dem_DebArTime_Filter */
uint8_least Dem_DebArTime_Filter(Dem_EventIdType EventId,
                                 Dem_EventStatusType* status,
                                 const void* paramSet,
                                 uint16 paramIndex
                                 DEM_DEB_LOCAL_CALC_PARAMS){
    REGISTER_CALL("Dem_DebArTime_Filter");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Stub for function Dem_DebArTime_Cyclic */
void Dem_DebArTime_Cyclic(Dem_EventIdType EventId,
                          const void* paramSet,
                          uint16 paramIndex
                          DEM_DEB_LOCAL_CALC_PARAMS){
    REGISTER_CALL("Dem_DebArTime_Cyclic");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Stub for function Dem_DebCounterBaseClass_GetLimits */
void Dem_DebCounterBaseClass_GetLimits(const void* paramSet,
                                       uint16 paramIndex,
                                       sint16_least* MinThreshold,
                                       sint16_least* MaxThreshold){
    REGISTER_CALL("Dem_DebCounterBaseClass_GetLimits");

    IF_INSTANCE("default") {
        return;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return;
}

/* Stub for function Dem_DebCounterBaseClass_Filter */
uint8_least Dem_DebCounterBaseClass_Filter(Dem_EventIdType EventId,
                                           Dem_EventStatusType* status,
                                           const void* paramSet,
                                           uint16 paramIndex
                                           DEM_DEB_LOCAL_CALC_PARAMS){
    REGISTER_CALL("Dem_DebCounterBaseClass_Filter");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Stub for function Rte_Call_Dem_CBFaultDetectCtr_Monitoring_01_GetFaultDetectionCounter */
Std_ReturnType Rte_Call_Dem_CBFaultDetectCtr_Monitoring_01_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_APPL_DATA) FaultDetectionCounter){
    REGISTER_CALL("Rte_Call_Dem_CBFaultDetectCtr_Monitoring_01_GetFaultDetectionCounter");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Stub for function CB_DemGetFaultDetectionCounter_Monitoring_08 */
Std_ReturnType CB_DemGetFaultDetectionCounter_Monitoring_08(sint8 * const faultDetCtr){
    REGISTER_CALL("CB_DemGetFaultDetectionCounter_Monitoring_08");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Stub for function CB_DemGetFaultDetectionCounter_Monitoring_13 */
Std_ReturnType CB_DemGetFaultDetectionCounter_Monitoring_13(sint8 * const faultDetCtr){
    REGISTER_CALL("CB_DemGetFaultDetectionCounter_Monitoring_13");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Stub for function CB_DemGetFaultDetectionCounter_Monitoring_14 */
Std_ReturnType CB_DemGetFaultDetectionCounter_Monitoring_14(sint8 * const faultDetCtr){
    REGISTER_CALL("CB_DemGetFaultDetectionCounter_Monitoring_14");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Stub for function CB_DemGetFaultDetectionCounter_Monitoring_16 */
Std_ReturnType CB_DemGetFaultDetectionCounter_Monitoring_16(sint8 * const faultDetCtr){
    REGISTER_CALL("CB_DemGetFaultDetectionCounter_Monitoring_16");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Stub for function CB_DemGetFaultDetectionCounter_Monitoring_17 */
Std_ReturnType CB_DemGetFaultDetectionCounter_Monitoring_17(sint8 * const faultDetCtr){
    REGISTER_CALL("CB_DemGetFaultDetectionCounter_Monitoring_17");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Stub for function CB_DemGetFaultDetectionCounter_Monitoring_22 */
Std_ReturnType CB_DemGetFaultDetectionCounter_Monitoring_22(sint8 * const faultDetCtr){
    REGISTER_CALL("CB_DemGetFaultDetectionCounter_Monitoring_22");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Stub for function CB_DemGetFaultDetectionCounter_Monitoring_24 */
Std_ReturnType CB_DemGetFaultDetectionCounter_Monitoring_24(sint8 * const faultDetCtr){
    REGISTER_CALL("CB_DemGetFaultDetectionCounter_Monitoring_24");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Stub for function CB_DemGetFaultDetectionCounter_Monitoring_25 */
Std_ReturnType CB_DemGetFaultDetectionCounter_Monitoring_25(sint8 * const faultDetCtr){
    REGISTER_CALL("CB_DemGetFaultDetectionCounter_Monitoring_25");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Stub for function CB_DemGetFaultDetectionCounter_Monitoring_27 */
Std_ReturnType CB_DemGetFaultDetectionCounter_Monitoring_27(sint8 * const faultDetCtr){
    REGISTER_CALL("CB_DemGetFaultDetectionCounter_Monitoring_27");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Stub for function CB_DemGetFaultDetectionCounter_Monitoring_31 */
Std_ReturnType CB_DemGetFaultDetectionCounter_Monitoring_31(sint8 * const faultDetCtr){
    REGISTER_CALL("CB_DemGetFaultDetectionCounter_Monitoring_31");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}

/* Stub for function Rte_Call_Dem_CBFaultDetectCtr_Monitoring_29_GetFaultDetectionCounter */
Std_ReturnType Rte_Call_Dem_CBFaultDetectCtr_Monitoring_29_GetFaultDetectionCounter(P2VAR(sint8, AUTOMATIC, RTE_APPL_DATA) FaultDetectionCounter){
    REGISTER_CALL("Rte_Call_Dem_CBFaultDetectCtr_Monitoring_29_GetFaultDetectionCounter");

    IF_INSTANCE("default") {
        return 0;
    }

    LOG_SCRIPT_ERROR("Call instance not defined.");
    return 0;
}
/* pragma qas cantata testscript end */
/*****************************************************************************/
/* End of test script                                                        */
/*****************************************************************************/
