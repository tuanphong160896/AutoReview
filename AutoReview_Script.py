import os
import re
from datetime import datetime
import git
#################################################


def main_Script():
    dir = "C:Users/tuanp/Desktop/AutoReview/test"
    
    global report_Script
    report_name = getReportName(dir)
    report_Script = open(report_name, "w")

    directory_Script = dir + "/02_TestScript/"
    list_dir_TestScript_files = findAllTestScripts(directory_Script)

    for dir_TestScript_file in list_dir_TestScript_files:
        #get .c filename
        try:
            inverse_dir = dir_TestScript_file[::-1]
            first_slash_index = inverse_dir.index("/")
            inverse_Cfile_name = inverse_dir[:first_slash_index]
            Cfile_name = inverse_Cfile_name[::-1]
        except Exception as e:
            print_writetoReport("Cannot get Test Script name in " + dir_TestScript_file + "\n" + str(e))
            continue

        print_writetoReport("Checking file " + Cfile_name + "...")
        checkTestScript_ConventionName(Cfile_name)
        checkTestCase_ConventionName(dir_TestScript_file)
        print_writetoReport("\n\n\n*********************************************************\n\n\n")

    report_Script.close()

#################################################

def getReportName(dir):
    #get current active branch
    try:
        active_branch = str(Repo(dir).active_branch)
    except Exception as e:
        print("Cannot find current active branch in git")
        active_branch = 'defaultbranch'
    
    #get datetime
    time = str(datetime.now().strftime("%H%M%S") + '.txt')
    #print(time)

    #Report name
    report_name = "ReviewReport_TestScript_" + active_branch + "_" + time + ".txt"
    
    return report_name

#################################################


def findAllTestScripts(directory_Script):
    list_dir_Cfiles = []
    
    for root, dirs, Files in os.walk(directory_Script):
        check_tests = re.search('tests', root)
        if (check_tests):
            for filename in Files:
                inverse_name = filename[::-1]
                if (inverse_name[0:2] == 'c.'):
                    dir_Cfile = root + "/" + filename
                    list_dir_Cfiles.append(dir_Cfile)

    if (len(list_dir_Cfiles) == 0):
        print_writetoReport("\n- WARNING: Cannot find any Test Script file.\nThe tool stopped here.")

    return list_dir_Cfiles


#################################################


def checkTestScript_ConventionName(Cfile_name):
    check_UT = len(re.findall('_UT', Cfile_name))
    check_Cfg = len(re.findall('_Cfg', Cfile_name))

    if ((check_UT == 0) or (check_Cfg == 0)):
        print_writetoReport("\n- WARNING: Wrong naming convention of Test Script file")


#################################################


def checkTestCase_ConventionName(dir_TestScript_file):
    C_file = open(dir_TestScript_file, "r")
    all_codes = C_file.readlines()
    line_counter = 0
    declare_TC_flag = 0
    list_TestCases = []
    for LineofCode in all_codes:
        line_counter += 1

        if (LineofCode.find('TEST_SCRIPT_WARNING("Verify') != -1):
            print_writetoReport("\n- WARNING: Remaining TEST_SCRIPT_WARNING at line " + str(line_counter))

        if ((LineofCode.find('void run_tests()') != -1) and (LineofCode.find(';') == -1)):
            declare_TC_flag = 1

        if (declare_TC_flag == 1):
            if (LineofCode.find('(1)') != -1):
                TestCase_name = (LineofCode.strip())[0:-4]

                if (LineofCode.find('_Cfg0') == -1):
                    print_writetoReport("\n- WARNING: Wrong naming convention of Test Case: " + TestCase_name + " at line " + str(line_counter))

                list_TestCases.append(TestCase_name)

            if (LineofCode.find('rule_set') != -1):
                declare_TC_flag = 0
                print_writetoReport("\n")
                break

    Stub_Functions_list = checkTestCase_format(all_codes, list_TestCases)
    check_Stub_Functions(all_codes, Stub_Functions_list)

    C_file.close()
    del C_file


#################################################


def checkTestCase_format(all_codes, list_TestCases):
    line_counter = 0
    Begin_TC_flag = 0
    First_TC_check = 0
    Comp_Flag_check = 0
    Test_Method_check = 0
    Tester_Define_check = 0
    Tester_Define_flag = 0
    list_Tester_Define_Declaration = []
    list_Tester_Define_Init = []
    TestCase_data_Declaration_check = 0
    Set_Global_Data_check = 0
    Initialise_check = 0
    Set_expected_check = 0
    Initialise_expected_check = 0
    Expected_Call_Sequences_check = 0
    Expected_Calls_check = 0
    Expected_Calls_flag = 0
    Stub_Functions_list = []
    Call_SUT_check = 0
    TC_checks_check = 0
    Expected_Result_check = 0
    Checks_global_data_check = 0
    check_global_check = 0
    GUID_check = 0

    for LineofCode in all_codes:
        line_counter += 1
        if (LineofCode.find('/* Call Interface Control') != -1):
            return Stub_Functions_list

        if ((LineofCode.find('void') != -1) and (LineofCode.find('(int doIt)') != -1) and (Begin_TC_flag == 0)):
            TestCase_name = (LineofCode.strip())[5:-11]
            print_writetoReport("\nChecking format of TC: " + TestCase_name + " at line " + str(line_counter))
            Begin_TC_flag = 1

            if (TestCase_name == list_TestCases[0]):
                First_TC_check = 1

        if (Begin_TC_flag == 1):

            # Check Compilation Flag #
            if (First_TC_check == 1):
                if ((LineofCode.find('Compilation Flag') != -1) or (LineofCode.find('Compilation flag') != -1)):
                    Comp_Flag_check = 1
            ##########################

            # Check Test Method #
            if ((LineofCode.find('Test Method') != -1) or (LineofCode.find('Test method') != -1)):
                Test_Method_check = 1
            ##########################

            # Check Tester define #
            if ((LineofCode.find('Tester define') != -1) or (LineofCode.find('Tester Define') != -1)):
                Tester_Define_check = 1
                Tester_Define_flag = 1

            if (Tester_Define_flag == 1):
                if ((LineofCode.find('INITIALISE') == -1) and (LineofCode.find('_entity') != -1)):
                    var_Declare = LineofCode.strip()
                    space_index = var_Declare.index(' ')
                    var_Declare = var_Declare[space_index + 1:-1]
                    list_Tester_Define_Declaration.append(var_Declare)

                if ((LineofCode.find('INITIALISE') != -1) and (LineofCode.find('_entity') != -1)):
                    var_Init = LineofCode.strip()
                    var_Init = var_Init[11:-2]
                    list_Tester_Define_Init.append(var_Init)

                if ((LineofCode.find('/*') != -1) and (LineofCode.find('*/') != -1) and (LineofCode.find('Tester define') == -1)):
                    for i in range(len(list_Tester_Define_Declaration)):
                        check = 0
                        for j in range(len(list_Tester_Define_Init)):
                            if (list_Tester_Define_Declaration[i].find(list_Tester_Define_Init[j]) != -1):
                                check = 1
                                break

                        if (check == 0):
                            print_writetoReport("\n- WARNING: " + list_Tester_Define_Declaration[i] + " was not INITIALISED")

                    Tester_Define_flag = 0

            ##########################

            # Check Test case data declarations #
            if (LineofCode.find('Test case data declarations') != -1):
                TestCase_data_Declaration_check = 1

            if (LineofCode.find('Set global data') != -1):
                Set_Global_Data_check = 1

            if (LineofCode.find('initialise_global_data()') != -1):
                Initialise_check = 1

            if (LineofCode.find('Set expected values for global data checks') != -1):
                Set_expected_check = 1

            if (LineofCode.find('initialise_expected_global_data()') != -1):
                Initialise_expected_check = 1

            if (LineofCode.find('Expected Call Sequence') != -1):
                Expected_Call_Sequences_check = 1

            # Expected Calls #
            if (LineofCode.find('EXPECTED_CALLS') != -1):
                Expected_Calls_check = 1
                Expected_Calls_flag = 1

            if (Expected_Calls_flag == 1):
                if ((LineofCode.find('"') != -1) and LineofCode.find('#') != -1):
                    first_index = LineofCode.index('"')
                    second_index = LineofCode.index(';')
                    function_name = LineofCode[first_index + 1:second_index]
                    check = 0
                    if (len(Stub_Functions_list) == 0):
                        Stub_Functions_list.append(function_name)
                    else:
                        for i in range(len(Stub_Functions_list)):
                            if (function_name == Stub_Functions_list[i]):
                                check = 1
                                break
                        if (check == 0):
                            Stub_Functions_list.append(function_name)

                if (LineofCode.find(');') != -1):
                    Expected_Calls_flag = 0

            ##################

            if (LineofCode.find('Call SUT') != -1):
                Call_SUT_check = 1

            if (LineofCode.find('Test case checks') != -1):
                TC_checks_check = 1

            if ((LineofCode.find('Expected Result') != -1) or (LineofCode.find('Expected result') != -1)):
                Expected_Result_check = 1

            if (LineofCode.find('Checks on global data') != -1):
                Checks_global_data_check = 1

            if (LineofCode.find('check_global_data()') != -1):
                check_global_check = 1

            if (LineofCode.find('GUID') != -1):
                GUID_check = 1

            #####################################

            # Check End of Test Case #
            if (LineofCode.find('END_TEST();') != -1):
                if ((Comp_Flag_check == 0) and (First_TC_check == 1)):
                    print_writetoReport("\n- WARNING: Lack of Compilation Flag")

                if (Test_Method_check == 0):
                    print_writetoReport("\n- WARNING: Lack of Test Method")

                if (Tester_Define_check == 0):
                    print_writetoReport("\n- WARNING: Lack of Tester Define")

                if (TestCase_data_Declaration_check == 0):
                    print_writetoReport("\n- WARNING: Lack of Test case data declarations")

                if (Set_Global_Data_check == 0):
                    print_writetoReport("\n- WARNING: Lack of Set global data")

                if (Initialise_check == 0):
                    print_writetoReport("\n- WARNING: Lack of initialise_global_data()")

                if (Set_expected_check == 0):
                    print_writetoReport("\n- WARNING: Lack of Set expected values for global data checks")

                if (Initialise_expected_check == 0):
                    print_writetoReport("\n- WARNING: Lack of initialise_expected_global_data()")

                if (Expected_Call_Sequences_check == 0):
                    print_writetoReport("\n- WARNING: Lack of Expected Call Sequence")

                if (Expected_Calls_check == 0):
                    print_writetoReport("\n- WARNING: Lack of EXPECTED_CALLS")

                if (Call_SUT_check == 0):
                    print_writetoReport("\n- WARNING: Lack of Call SUT")

                if (TC_checks_check == 0):
                    print_writetoReport("\n- WARNING: Lack of Test case checks")

                if (Expected_Result_check == 0):
                    print_writetoReport("\n- WARNING: Lack of Expected Result")

                if (Checks_global_data_check == 0):
                    print_writetoReport("\n- WARNING: Lack of Checks on global data")

                if (check_global_check == 0):
                    print_writetoReport("\n- WARNING: Lack of check_global_data()")

                if (GUID_check == 0):
                    print_writetoReport("\n- WARNING: Lack of GUID")

                print_writetoReport("\n")

                list_Tester_Define_Declaration = []
                list_Tester_Define_Init = []
                Begin_TC_flag = 0
                First_TC_check = 0
                Comp_Flag_check = 0
                Test_Method_check = 0
                Tester_Define_flag = 0
                TestCase_data_Declaration_check = 0
                Set_Global_Data_check = 0
                Initialise_check = 0
                Set_expected_check = 0
                Initialise_expected_check = 0
                Expected_Call_Sequences_check = 0
                Expected_Calls_check = 0
                Call_SUT_check = 0
                TC_checks_check = 0
                Expected_Result_check = 0
                Checks_global_data_check = 0
                check_global_check = 0
                GUID_check = 0

            ##########################


#################################################


def check_Stub_Functions(all_codes, Stub_Functions_list):
    print_writetoReport("\nChecking Stub & Isolate Functions...")

    line_counter = 0
    Begin_Stub_Function_flag = 0
    Stub_Function_name = ""
    Declare_param_flag = 0
    open_paren = 0
    close_paren = 0
    param_count = 0
    Instance_flag = 0
    Instance_name = ""
    CHECK_count = 0

    for LineofCode in all_codes:
        line_counter += 1
        if (LineofCode.find('End of test script ') != -1):
            break

        if ((LineofCode.find('Stub for function') != -1) or (LineofCode.find('Isolate for function') != -1)):
            Stub_Function_name = getStubFunctionName(LineofCode)

            for i in range(len(Stub_Functions_list)):
                if (Stub_Functions_list[i].find(Stub_Function_name) != -1):
                    Begin_Stub_Function_flag = 1
                    Declare_param_flag = 1
                    break

        if (Begin_Stub_Function_flag == 1):
            if (Declare_param_flag == 1):
                open_paren += LineofCode.count('(')
                close_paren += LineofCode.count(')')
                param_count += LineofCode.count(',')
                if ((open_paren > 0) and (open_paren == close_paren)):
                    if (param_count > 0):
                        param_count += 1
                    else:
                        first_index = LineofCode.index('(')
                        second_index = LineofCode.index(')')
                        if (len((LineofCode[first_index + 1:second_index]).strip()) > 0):
                            param_count = 1

                    Declare_param_flag = 0

            if (LineofCode.find('IF_INSTANCE') != -1):
                Instance_flag = 1
                Instance_name = getInstanceName(LineofCode)

            if (Instance_flag == 1):
                for i in range(len(Stub_Functions_list)):
                    if (Stub_Functions_list[i].find(Stub_Function_name) != -1):
                        if (Stub_Functions_list[i].find(Instance_name) != -1):
                            CHECK_count += LineofCode.count('CHECK_')
                            if (LineofCode.find('return') != -1):
                                if (CHECK_count < param_count):
                                    print_writetoReport("\n- WARNING: Lack of checking parameters in INSTANCE: " + Instance_name + " at Function " + Stub_Function_name)
                                        
                                Instance_flag = 0
                                CHECK_count = 0
                                break

            if (LineofCode.find('LOG_SCRIPT_ERROR') != -1):
                Begin_Stub_Function_flag = 0
                open_paren = 0
                close_paren = 0
                param_count = 0


#################################################


def getStubFunctionName(LineofCode):
    LineofCode = LineofCode[::-1]
    LineofCode = LineofCode[4::]
    first_index = LineofCode.index(' ')
    function_name = LineofCode[0:first_index]
    function_name = function_name[::-1].strip()

    return function_name


#################################################


def getInstanceName(LineofCode):
    first_index = LineofCode.index('(')
    second_index = LineofCode.index(')')
    LineofCode = LineofCode[first_index + 1:second_index]
    LineofCode = re.sub(r'\s+', '', LineofCode)
    instance_name = LineofCode[1:-1]

    return instance_name


#################################################

def print_writetoReport(content):
    print(content)
    report_Script.write(content)

main_Script()