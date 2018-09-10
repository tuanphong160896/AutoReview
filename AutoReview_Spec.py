import os
import re
import xlrd
from PyQt5.QtWidgets import QMessageBox

#################################################

#################################################


def main_Spec(dir):
    global report_Spec
    report_Spec = open("Report_Spec.txt", "w")
    global directory_Spec
    directory_Spec = dir + "/01_TestSpecification/"
    global workbook_Spec
    global all_sheet_Spec

    list_TestSpecs_files = findAllTestSpecs()
    for TestSpec_file in list_TestSpecs_files:
        report_Spec.write("Checking file " + TestSpec_file + "...\n")
        TestSpec_path = directory_Spec + TestSpec_file
        
        try:
            workbook_Spec = xlrd.open_workbook(TestSpec_path)
        except Exception as e:
            QMessageBox.warning(None,'Auto Review Tool', str(e))
            continue
        
        all_sheet_Spec = workbook_Spec.sheet_names()
        Check_Stream_Spec()
        Check_Date_TestPlan_Sheet()
        Find_TCSheet_Spec()
        report_Spec.write("\n\n\n*********************************************************\n\n\n")
        workbook_Spec.release_resources()
        del workbook_Spec

    report_Spec.close()
    QMessageBox.warning(None,'Auto Review Tool', 'Auto Review for Test Script DONE!')





#################################################


def findAllTestSpecs():
    list_files = []
    try:
        for root, dirs, files in os.walk(directory_Spec):
            for filename in files:
                list_files.insert(len(list_files), filename)

        if (len(list_files) == 0):
            QMessageBox.warning(None,'Auto Review Tool', 'Cannot find any Test Spec file !')

        return list_files
        
    except Exception as e:
        QMessageBox.warning(None,'Auto Review Tool', str(e))



#################################################


def Check_Stream_Spec():
    report_Spec.write("\nChecking TestResultSummary sheet...")
    TestReultSummary_sheet = workbook_Spec.sheet_by_name('TestResultSummary')

    try:
        Stream = TestReultSummary_sheet.cell(3, 2).value
        Check_Stream_Spec = re.search('CUBAS', Stream)
        if not (Check_Stream_Spec):
            report_Spec.write("\n- WARNING: Stream was not filled")

    except Exception as e:
        QMessageBox.warning(None,'Auto Review Tool', str(e))
        report_Spec.write("\n- WARNING: Can not check the Stream value")


    report_Spec.write("\n")


#################################################


def Check_Date_TestPlan_Sheet():
    report_Spec.write("\nChecking TestPlan sheet...")
    TestPlan_sheet = workbook_Spec.sheet_by_name('TestPlan')

    # Check Execution Date format #
    try:
        Execution_Date = TestPlan_sheet.cell(2, 10).value
        if (Execution_Date != "<Execution Date>"):
            report_Spec.write("\n- WARNING: Wrong Execution Date")
    except Exception as e:
        QMessageBox.warning(None,'Auto Review Tool', str(e))
        report_Spec.write("\n- WARNING: Can not check the Execution Date value")

    ###############################

    report_Spec.write("\n")


#################################################


def Find_TCSheet_Spec():
    list_TC_sheet = []
    for sheet_name in all_sheet_Spec:
        try:
            checkTCUnit = re.search('TC_Unit_', sheet_name)
        except Exception as e:
            QMessageBox.warning(None,'Auto Review Tool', str(e))
			
        if checkTCUnit:
            list_TC_sheet.insert(len(list_TC_sheet), sheet_name)

    Check_TC_Unit_Sheet_Spec(list_TC_sheet)


#################################################


def Check_TC_Unit_Sheet_Spec(list_TCSheet_Spec):
    #global workbook_Spec, list_TCSheet_Spec
    for TCSheet in list_TCSheet_Spec:
        report_Spec.write("\nChecking sheet: " + TCSheet + "...")
        Current_Sheet = workbook_Spec.sheet_by_name(TCSheet)

        # Check Test Case Expected Results #
        try:
            Expected_Results = Current_Sheet.cell(11, 1).value
        except Exception as e:
            MessageBox.warning(None,'Auto Review Tool', str(e))

        if (len(Expected_Results) == 0):
            report_Spec.write("\n- WARNING: Lack of Test Case Expected Results")

        ####################################

        # Check Covered Design_Id #
        try:
            Design_Id = Current_Sheet.cell(20, 1).value
        except Exception as e:
            QMessageBox.warning(None,'Auto Review Tool', str(e))

        if ((Design_Id == "Missing GUID") or (len(Design_Id) == 0)):
            report_Spec.write("\n- WARNING: Lack of GUID")

        ###########################

        # Check Set Global Variables mistake #
        try:
            Glob_Var = Current_Sheet.cell(27, 1).value
        except Exception as e:
            QMessageBox.warning(None,'Auto Review Tool', str(e))
        
        check_ptr_Glob_Var = len(re.findall(r'_ptr|ptr_', Glob_Var))
        check_entity_Glob_Var = len(re.findall(r'_entity', Glob_Var))
        check_fnc_Glob_Var = len(re.findall(r'_fnc|fnc_', Glob_Var))
        check_asteris_Glob_Var = Glob_Var.count('*')

        if (check_ptr_Glob_Var > 0):
            report_Spec.write("\n- WARNING: Remaining " + str(check_ptr_Glob_Var) + " (ptr) in Global Variables")

        if (check_entity_Glob_Var > 0):
            report_Spec.write("\n- WARNING: Remaining " + str(check_entity_Glob_Var) + " (_entity) in Global Variables")

        if (check_fnc_Glob_Var > 0):
            report_Spec.write("\n- WARNING: Remaining " + str(check_fnc_Glob_Var) + " (fnc) in Global Variables")

        if (check_asteris_Glob_Var > 0):
            report_Spec.write("\n- WARNING: Remaining " + str(check_asteris_Glob_Var) + " (*) in Global Variables")

        ###########################

        # Check Set Parameters mistake #
        try:
            Param = Current_Sheet.cell(28, 1).value
        except Exception as e:
            QMessageBox.warning(None,'Auto Review Tool', str(e))

        check_ptr_param = len(re.findall(r'_ptr|ptr_', Param))
        check_entity_param = len(re.findall(r'_entity', Param))
        check_asteris_param = Param.count('*')

        if (check_ptr_param > 0):
            report_Spec.write("\n- WARNING: Remaining " + str(check_ptr_param) + " (ptr) in Paramters")

        if (check_entity_param > 0):
            report_Spec.write("\n- WARNING: Remaining " + str(check_entity_param) + " (_entity) in Paramters")

        if (check_asteris_param > 0):
            report_Spec.write("\n- WARNING: Remaining " + str(check_asteris_param) + " (*) in Paramters")

        ###########################

        # Check Stub Functon mistake #
        try:
            Stub_Func = Current_Sheet.cell(29, 1).value
        except Exception as e:
            QMessageBox.warning(None,'Auto Review Tool', str(e))
			
        check_fnc_Stub_Func = len(re.findall(r'_fnc|fnc_', Stub_Func))
        if (check_fnc_Stub_Func > 0):
            report_Spec.write("\n- WARNING: Remaining " + str(check_fnc_Stub_Func) + " (fnc) in Stub Functions")

        ###########################
        report_Spec.write("\n")


#################################################
