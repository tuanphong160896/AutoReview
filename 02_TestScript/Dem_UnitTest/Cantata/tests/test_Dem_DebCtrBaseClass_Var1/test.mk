#
# Generated makefile for test "test_Dem_DebCtrBaseClass_Var1"
#

#
# Stop the MAKEFLAGS variable being exported.
# This is needed for sub-make processes to use different options.
#
unexport MAKEFLAGS

#
# The name of the test
#
THIS_TEST := test_Dem_DebCtrBaseClass_Var1

#
# Test script file
#
test_Dem_DebCtrBaseClass_Var1_TESTOBJ := test_Dem_DebCtrBaseClass_Var1

#
# Software under test
#
test_Dem_DebCtrBaseClass_Var1_SUTOBJ := src/deb/Dem_DebCtrBaseClass

#
# Compile and link as 'C' or 'CXX'
#
test_Dem_DebCtrBaseClass_Var1_C_OR_CPP_MODE := C

#
# Additional libraries to link
#
test_Dem_DebCtrBaseClass_Var1_EXTLIBS := 

#
# Additional object files to link
#
test_Dem_DebCtrBaseClass_Var1_EXTOBJS := 

#
# Additional defines for this test
#
test_Dem_DebCtrBaseClass_Var1_DEFINES := 

#
# Additional includes for this test
#
test_Dem_DebCtrBaseClass_Var1_INCLUDES := ../../../../../../../CUBAS/Diagnosis/Dem/api \
                                          ../../../../../../../CUBAS/Diagnosis/Dem/src \
                                          ../../inc \
                                          ../../incVar/var1 \
                                          ../../../../../../../CUBAS/Diagnosis/Dem/src/client \
                                          ../../../../../../../CUBAS/Diagnosis/Dem/src/consischk \
                                          ../../../../../../../CUBAS/Diagnosis/Dem/src/deb \
                                          ../../../../../../../CUBAS/Diagnosis/Dem/src/distmem \
                                          ../../../../../../../CUBAS/Diagnosis/Dem/src/dtc \
                                          ../../../../../../../CUBAS/Diagnosis/Dem/src/enco \
                                          ../../../../../../../CUBAS/Diagnosis/Dem/src/env \
                                          ../../../../../../../CUBAS/Diagnosis/Dem/src/evbuff \
                                          ../../../../../../../CUBAS/Diagnosis/Dem/src/evdep \
                                          ../../../../../../../CUBAS/Diagnosis/Dem/src/event \
                                          ../../../../../../../CUBAS/Diagnosis/Dem/src/evmem \
                                          ../../../../../../../CUBAS/Diagnosis/Dem/src/indct \
                                          ../../../../../../../CUBAS/Diagnosis/Dem/src/lib \
                                          ../../../../../../../CUBAS/Diagnosis/Dem/src/main \
                                          ../../../../../../../CUBAS/Diagnosis/Dem/src/map \
                                          ../../../../../../../CUBAS/Diagnosis/Dem/src/nvm \
                                          ../../../../../../../CUBAS/Diagnosis/Dem/src/stoco

#
# Include the test definitions makefile
#
include ../configuration/test_defs.mk

#
# Rules for compiling the software under test
#
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../../../../../../CUBAS/Diagnosis/Dem/src/deb/Dem_DebCtrBaseClass.c
	$(MKDIR_CMD) -p test_Dem_DebCtrBaseClass_Var1/src/deb
	@$(RM_CMD) $(DYNAMIC_THIS_TEST)/*.cov $(DYNAMIC_THIS_TEST)/*.ctr $(DYNAMIC_THIS_TEST)/*.ctg
	@$(ECHO_CMD_MED) ,,$(NUMBER_OF_TESTS),$(firstword $(subst /, ,$(dir $@))),1,0,0,0,0 >> $(CANTPP_TOP_LEVEL_LOG)
	-@$(ECHO_CMD_MED) ../../../../../../../CUBAS/Diagnosis/Dem/src/deb/Dem_DebCtrBaseClass.c > $(DYNAMIC_THIS_TEST)/filelist.lst
	-@$(QAC_CMD)
	$(subst %DEFINES%, $(foreach define,$(test_Dem_DebCtrBaseClass_Var1_ALL_DEFINES),$(DEFINE_OPT)$(define)), $(subst %INCLUDES%, $(foreach include,$(test_Dem_DebCtrBaseClass_Var1_ALL_INCLUDES),$(subst %s,$(include),$(INCLUDE_PATH_OPT))), $(subst %n,$(DYNAMIC_THIS_TEST)/$(test_Dem_DebCtrBaseClass_Var1_SUTOBJ),$(COMPILE_CC_CMD))))

#
# Rule for compiling the test script
#
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.c
	$(MKDIR_CMD) -p test_Dem_DebCtrBaseClass_Var1
	@$(RM_CMD) $(DYNAMIC_THIS_TEST)/*.cov $(DYNAMIC_THIS_TEST)/*.ctr $(DYNAMIC_THIS_TEST)/*.ctg
	@$(ECHO_CMD_MED) ,,$(NUMBER_OF_TESTS),$(firstword $(subst /, ,$(dir $@))),1,0,0,0,0 >> $(CANTPP_TOP_LEVEL_LOG)
	-@$(ECHO_CMD_MED) test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.c > $(DYNAMIC_THIS_TEST)/filelist.lst
	$(subst %DEFINES%, $(foreach define,$(test_Dem_DebCtrBaseClass_Var1_ALL_DEFINES),$(DEFINE_OPT)$(define)), $(subst %INCLUDES%, $(foreach include,$(test_Dem_DebCtrBaseClass_Var1_ALL_INCLUDES),$(subst %s,$(include),$(INCLUDE_PATH_OPT))), $(subst %n,$(DYNAMIC_THIS_TEST)/$(test_Dem_DebCtrBaseClass_Var1_SUTOBJ),$(COMPILE_CC_CMD))))

#
# Rule for linking the test executable
#
$(test_Dem_DebCtrBaseClass_Var1_TEST_EXE) : \
	$(test_Dem_DebCtrBaseClass_Var1_TESTOBJ_FILENAMES) \
	$(test_Dem_DebCtrBaseClass_Var1_SUTOBJ_FILENAMES) \
	$(test_Dem_DebCtrBaseClass_Var1_EXTRA_DEPENDS)
	@$(RM_CMD) $(DYNAMIC_THIS_TEST)/*.cov $(DYNAMIC_THIS_TEST)/*.ctr $(DYNAMIC_THIS_TEST)/*.ctg
	@$(ECHO_CMD_MED) ",,$(NUMBER_OF_TESTS),$(firstword $(subst /, ,$(dir $@))),1,0,0,1,0" >> $(CANTPP_TOP_LEVEL_LOG)
	$(subst %EXTLIBS%, $(foreach extlib,$(test_Dem_DebCtrBaseClass_Var1_ALL_EXTLIBS),$(subst %s,$(extlib),$(test_Dem_DebCtrBaseClass_Var1_LINK_EXTLIBOPT))), $(subst %n,$(DYNAMIC_THIS_TEST)/test_Dem_DebCtrBaseClass_Var1,$(subst %EXTOBJS%,$(test_Dem_DebCtrBaseClass_Var1_EXTOBJS),$(CC_LINK_CMD))))
	@$(ECHO_CMD_MED) Built test_Dem_DebCtrBaseClass_Var1 successfully

#
# Rule for running the test executable
#
$(test_Dem_DebCtrBaseClass_Var1_CTR_FILE) : $(test_Dem_DebCtrBaseClass_Var1_TEST_EXE)
	@$(ECHO_CMD_MED) ,,$(NUMBER_OF_TESTS),$(firstword $(subst /, ,$(dir $@))),0,1,0,1,0 >> $(CANTPP_TOP_LEVEL_LOG)
	@$(RUN_CMD)
	@$(ECHO_CMD_MED) ,,$(NUMBER_OF_TESTS),$(firstword $(subst /, ,$(dir $@))),0,0,1,0,0 >> $(CANTPP_TOP_LEVEL_LOG)

#
# Rule for ensuring nothing is built/run unless the ctr file is out of date
#
$(test_Dem_DebCtrBaseClass_Var1_RUN) : $(test_Dem_DebCtrBaseClass_Var1_CTR_FILE)

#
# Rule for controlling the building and running of the test executable
#
ifeq ($(EXECUTE),1)
ifeq ($(PUSH_TO_SERVER),1)
$(test_Dem_DebCtrBaseClass_Var1_BUILD_AND_RUN) : 
	-@$(MAKE) $(test_Dem_DebCtrBaseClass_Var1_RUN) --warn-undefined-variables -s -f $(DYNAMIC_THIS_TEST)/test.mk 2>&1 | tee -a $(DYNAMIC_THIS_TEST)/$($(DYNAMIC_THIS_TEST)_LOG)
	@$(ECHO_CMD_MED) Uploading test results to Cantata Server...
	@$(JAVA_CMD) -cp "$(CANTATA_INSTALL_DIR)/bin/client.jar" com.qas.cantata.client.control.CCLC filesToLoad=$(DYNAMIC_THIS_TEST)/.*.ctr,$(DYNAMIC_THIS_TEST)/.*.ctg,$(DYNAMIC_THIS_TEST)/.*.cov,../../../../../../../CUBAS/Diagnosis/Dem/src/deb/Dem_DebCtrBaseClass.c,$(DYNAMIC_THIS_TEST)/test_Dem_DebCtrBaseClass_Var1.c optionsFiles=../../ipg.cop,$(DYNAMIC_THIS_TEST)/ipg.cop 2>&1 | tee -a $(DYNAMIC_THIS_TEST)/$($(DYNAMIC_THIS_TEST)_LOG)
	@$(CTR_STATE_CMD)
else
$(test_Dem_DebCtrBaseClass_Var1_BUILD_AND_RUN) : 
	-@$(MAKE) $(test_Dem_DebCtrBaseClass_Var1_RUN) --warn-undefined-variables -s -f $(DYNAMIC_THIS_TEST)/test.mk 2>&1 | tee -a $(DYNAMIC_THIS_TEST)/$($(DYNAMIC_THIS_TEST)_LOG)
	@$(CTR_STATE_CMD)
endif
else
$(test_Dem_DebCtrBaseClass_Var1_BUILD_AND_RUN) : 
	@$(MAKE) $(test_Dem_DebCtrBaseClass_Var1_TEST_EXE) --warn-undefined-variables -s -f $(DYNAMIC_THIS_TEST)/test.mk 2>&1 | tee -a $(DYNAMIC_THIS_TEST)/$($(DYNAMIC_THIS_TEST)_LOG)
	@$(ECHO_CMD_MED) Finished $(DYNAMIC_THIS_TEST)
endif

#
# Rules for generating the required folder structure
#
test_Dem_DebCtrBaseClass_Var1/src/deb : test_Dem_DebCtrBaseClass_Var1/src
	-@$(MKDIR_CMD) $@
test_Dem_DebCtrBaseClass_Var1/src : 
	-@$(MKDIR_CMD) $@

#
# Additional dependencies
#
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../../../../../../CUBAS/Diagnosis/Dem/api/Dem_Types.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../../../../../../CUBAS/Diagnosis/Dem/src/deb/Dem_Deb.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../../../../../../CUBAS/Diagnosis/Dem/src/deb/Dem_DebBase.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../../../../../../CUBAS/Diagnosis/Dem/src/deb/Dem_DebCtrBaseClass.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../../../../../../CUBAS/Diagnosis/Dem/src/deb/Dem_DebSharing.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/Bsw_MemMap.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/Compiler_Cfg.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/Dcm_Types.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/Dem.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/Dem_Array.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/Dem_Bfm.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/Dem_BitArray.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/Dem_Cfg_MemMap.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/Dem_Cfg_SchM.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/Dem_Clear.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/Dem_Client.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/Dem_ClientBaseHandling.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/Dem_ClientClearMachine.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/Dem_ClientHandlingTypes.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/Dem_CustomStatusByte.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/Dem_DTCStatusByte.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/Dem_Dcm.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../../../../../../CUBAS/Diagnosis/Dem/src/deb/Dem_Deb.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/Dem_Dependencies.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/Dem_DisturbanceMemory.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/Dem_Dlt.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/Dem_Dtcs.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/Dem_EnableCondition.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/Dem_EnvTrigger.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/Dem_EvBuff.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/Dem_EvBuffEvent.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/Dem_EvMem.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/Dem_EvMemAging.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/Dem_EvMemApi.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/Dem_EvMemBase.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/Dem_EvMemGenTypes.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/Dem_EvMemTypes.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/Dem_EventAttribute.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/Dem_EventCategory.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/Dem_EventFHandling.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/Dem_EventStatus.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/Dem_Events.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/Dem_GenericNvData.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/Dem_Helpers.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/Dem_ISO14229Byte.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/Dem_Indicator.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/Dem_IndicatorAttributes.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/Dem_InternalEnvData.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/Dem_J1939Dcm.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/Dem_Lib.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/Dem_Lock.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/Dem_Main.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/Dem_Mapping.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/Dem_MemMap.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/Dem_Nvm.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/Dem_Nvm_Types.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/Dem_OperationCycle.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/Dem_PrjDisturbanceMemory.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/Dem_PrjEvmemProjectExtension.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/Dem_PrjSpecificFailureMemoryType.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/Dem_Prv_Det.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/Dem_StorageCondition.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/Dem_Types.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/MemMap.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/NvM.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/Rte.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/Rte_Cfg.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/Rte_Dem_Type.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/Rte_MemMap.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/Rte_Type.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/Rte_UserCfg.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/SchM_Default.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/rba_BswSrv.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/rba_DemBfm.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/rba_DemBfm_Buffer.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/rba_DemBfm_Counter.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/rba_DemBfm_CounterTypes.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/rba_DemBfm_Event.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/rba_DemBfm_PB.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/rba_DemBfm_Record.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/rba_DemBfm_RecordTypes.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/rba_DemBfm_Types.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/rba_DiagLib_Bits16.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/rba_DiagLib_Bits32.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/rba_DiagLib_Bits8.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/rba_DiagLib_MemMap.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../inc/rba_DiagLib_MemUtils.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../incVar/var1/Compiler.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../incVar/var1/Dem_Cfg.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../incVar/var1/Dem_Cfg_Clear.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../incVar/var1/Dem_Cfg_DTCs.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../incVar/var1/Dem_Cfg_Deb.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../incVar/var1/Dem_Cfg_DistMem.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../incVar/var1/Dem_Cfg_DtcId.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../incVar/var1/Dem_Cfg_EnableCondition.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../incVar/var1/Dem_Cfg_EnvDataElement.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../incVar/var1/Dem_Cfg_EnvMain.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../incVar/var1/Dem_Cfg_EvBuff.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../incVar/var1/Dem_Cfg_EvMem.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../incVar/var1/Dem_Cfg_EventCategory.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../incVar/var1/Dem_Cfg_EventId.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../incVar/var1/Dem_Cfg_EventIndicators.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../incVar/var1/Dem_Cfg_Events.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../incVar/var1/Dem_Cfg_Main.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../incVar/var1/Dem_Cfg_NodeId.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../incVar/var1/Dem_Cfg_Nodes.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../incVar/var1/Dem_Cfg_Nvm.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../incVar/var1/Dem_Cfg_OperationCycle.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../incVar/var1/Dem_Cfg_OperationCycle_DataStructures.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../incVar/var1/Dem_Cfg_StorageCondition.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../incVar/var1/Dem_Cfg_Version.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../incVar/var1/Platform_Types.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../incVar/var1/Std_Types.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../incVar/var1/rba_DemBfm_Cfg.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../incVar/var1/rba_DemBfm_Cfg_Nvm.h
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : ../../ipg.cop
test_Dem_DebCtrBaseClass_Var1/src/deb/Dem_DebCtrBaseClass.o : test_Dem_DebCtrBaseClass_Var1/ipg.cop
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../../../../../../CUBAS/Diagnosis/Dem/api/Dem_Types.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../../../../../../CUBAS/Diagnosis/Dem/src/deb/Dem_Deb.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../../../../../../CUBAS/Diagnosis/Dem/src/deb/Dem_DebBase.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../../../../../../CUBAS/Diagnosis/Dem/src/deb/Dem_DebCtrBaseClass.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../../../../../../CUBAS/Diagnosis/Dem/src/deb/Dem_DebSharing.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/Bsw_MemMap.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/Compiler_Cfg.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/Dcm_Types.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/Dem.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/Dem_Array.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/Dem_Bfm.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/Dem_BitArray.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/Dem_Cfg_MemMap.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/Dem_Cfg_SchM.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/Dem_Clear.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/Dem_Client.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/Dem_ClientBaseHandling.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/Dem_ClientClearMachine.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/Dem_ClientHandlingTypes.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/Dem_CustomStatusByte.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/Dem_DTCStatusByte.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/Dem_Dcm.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../../../../../../CUBAS/Diagnosis/Dem/src/deb/Dem_Deb.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/Dem_Dependencies.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/Dem_DisturbanceMemory.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/Dem_Dlt.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/Dem_Dtcs.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/Dem_EnableCondition.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/Dem_EnvTrigger.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/Dem_EvBuff.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/Dem_EvBuffEvent.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/Dem_EvMem.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/Dem_EvMemAging.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/Dem_EvMemApi.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/Dem_EvMemBase.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/Dem_EvMemGenTypes.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/Dem_EvMemTypes.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/Dem_EventAttribute.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/Dem_EventCategory.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/Dem_EventFHandling.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/Dem_EventStatus.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/Dem_Events.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/Dem_GenericNvData.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/Dem_Helpers.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/Dem_ISO14229Byte.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/Dem_Indicator.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/Dem_IndicatorAttributes.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/Dem_InternalEnvData.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/Dem_J1939Dcm.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/Dem_Lib.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/Dem_Lock.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/Dem_Main.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/Dem_Mapping.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/Dem_MemMap.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/Dem_Nvm.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/Dem_Nvm_Types.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/Dem_OperationCycle.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/Dem_PrjDisturbanceMemory.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/Dem_PrjEvmemProjectExtension.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/Dem_PrjSpecificFailureMemoryType.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/Dem_Prv_Det.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/Dem_StorageCondition.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/Dem_Types.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/MemMap.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/NvM.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/Rte.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/Rte_Cfg.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/Rte_Dem_Type.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/Rte_MemMap.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/Rte_Type.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/Rte_UserCfg.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/SchM_Default.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/rba_BswSrv.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/rba_DemBfm.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/rba_DemBfm_Buffer.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/rba_DemBfm_Counter.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/rba_DemBfm_CounterTypes.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/rba_DemBfm_Event.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/rba_DemBfm_PB.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/rba_DemBfm_Record.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/rba_DemBfm_RecordTypes.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/rba_DemBfm_Types.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/rba_DiagLib_Bits16.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/rba_DiagLib_Bits32.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/rba_DiagLib_Bits8.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/rba_DiagLib_MemMap.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../inc/rba_DiagLib_MemUtils.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../incVar/var1/Compiler.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../incVar/var1/Dem_Cfg.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../incVar/var1/Dem_Cfg_Clear.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../incVar/var1/Dem_Cfg_DTCs.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../incVar/var1/Dem_Cfg_Deb.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../incVar/var1/Dem_Cfg_DistMem.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../incVar/var1/Dem_Cfg_DtcId.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../incVar/var1/Dem_Cfg_EnableCondition.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../incVar/var1/Dem_Cfg_EnvDataElement.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../incVar/var1/Dem_Cfg_EnvMain.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../incVar/var1/Dem_Cfg_EvBuff.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../incVar/var1/Dem_Cfg_EvMem.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../incVar/var1/Dem_Cfg_EventCategory.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../incVar/var1/Dem_Cfg_EventId.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../incVar/var1/Dem_Cfg_EventIndicators.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../incVar/var1/Dem_Cfg_Events.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../incVar/var1/Dem_Cfg_Main.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../incVar/var1/Dem_Cfg_NodeId.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../incVar/var1/Dem_Cfg_Nodes.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../incVar/var1/Dem_Cfg_Nvm.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../incVar/var1/Dem_Cfg_OperationCycle.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../incVar/var1/Dem_Cfg_OperationCycle_DataStructures.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../incVar/var1/Dem_Cfg_StorageCondition.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../incVar/var1/Dem_Cfg_Version.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../incVar/var1/Platform_Types.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../incVar/var1/Std_Types.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../incVar/var1/rba_DemBfm_Cfg.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../incVar/var1/rba_DemBfm_Cfg_Nvm.h
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : ../../ipg.cop
test_Dem_DebCtrBaseClass_Var1/test_Dem_DebCtrBaseClass_Var1.o : test_Dem_DebCtrBaseClass_Var1/ipg.cop


