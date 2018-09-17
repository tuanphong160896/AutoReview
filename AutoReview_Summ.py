import os
import re
import xlrd
import re
from git import Repo
from datetime import datetime

list_TestSumm_files = []
list_TCSheet_Summ = []

#################################################


def main_Summ():
    dir = "C:/Users/tuanp/Desktop/New folder/New folder/AutoRview"
    global report_Summ
    report_name = getReportName(dir)
    report_Summ = open(report_name, "w")

    directory_Summ = dir + "/04_TestReportSummary/"
    directory_Spec = dir + "/01_TestSpecification/"

    # global workbook_Summ, all_sheet_Summ, workbook_Spec

    # list_TestSumm_files = findAllTestSumm(directory_Summ)
    # for TestSumm_file in list_TestSumm_files:
    #     print_writetoReport("Checking file " + TestSumm_file + "...\n")
    #     TestSumm_path = directory_Summ + TestSumm_file

    #     try:
    #         workbook_Summ = xlrd.open_workbook(TestSumm_path)
    #     except Exception as e:
    #         print_writetoReport("Cannot open "+ TestSumm_path + "\n" + str(e))
    #         continue
    #     all_sheet_Summ = workbook_Summ.sheet_names()

    #     TestSpec_file = TestSumm_file.replace("_TestReportSummary", "Spec")
    #     TestSpec_path = directory_Spec + TestSpec_file
    #     try:
    #         workbook_Spec = xlrd.open_workbook(TestSpec_path)
    #     except Exception as e:
    #         print_writetoReport("Cannot open "+ TestSpec_path + "\n" + str(e))
    #         continue
    #     Check_Stream_Summ()
    #     Check_TestPlan_Sheet()
    #     Find_TCSheet_Summ()

    #     print_writetoReport("\n\n\n*********************************************************\n\n\n")
    #     workbook_Summ.release_resources()
    #     del workbook_Summ
    #     workbook_Spec.release_resources()
    #     del workbook_Spec

    # report_Summ.close()

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
    report_name = "ReviewReport_TestSummary_" + active_branch + "_" + time + ".txt"
    
    return report_name

#################################################


def findAllTestSumm(directory_Summ):
    list_Summfiles = []
    for root, dirs, files in os.walk(directory_Summ):
        for filename in files:
            if not (filename[0:2] == '~$'): #check for temporary if file is opening
                list_Summfiles.append(filename)

    if (len(list_Summfiles) == 0):
        print_writetoReport("\n- WARNING: Cannot find any Test Summ file.\nThe tool stopped here.")

    return list_Summfiles


#################################################


def Check_Stream_Summ():
    print_writetoReport("\nChecking TestResultSummary sheet...")
    try:
        TestReultSummary_sheet = workbook_Summ.sheet_by_name('TestResultSummary')
    except Exception as e:
        print_writetoReport("\n- WARNING: Cannot find TestResultSummary sheet\n" + str(e))
        return

    check_feature_under_tests = 0
    stream = 0
    for column_index in range(TestReultSummary_sheet.ncols):
        for row_index in range(TestReultSummary_sheet.nrows):
            cell_content = str(TestReultSummary_sheet.cell(row_index,column_index).value)
            if (cell_content.strip() == "Feature under tests name"):
                check_feature_under_tests = 1
                stream = TestReultSummary_sheet.cell(row_index,column_index+2).value
                break
        if (check_feature_under_tests == 1):
            break
        
    if not (check_feature_under_tests):
        print_writetoReport("\n- WARNING: Cannot find Feature under tests name in TestResultSummary sheet")
        return

    Check_Stream_Spec = re.search('CUBAS', stream)
    if not (Check_Stream_Spec):
        print_writetoReport("\n- WARNING: CUBAS Stream was not filled")

    print_writetoReport("\n")


#################################################


def Check_TestPlan_Sheet():
    print_writetoReport("\nChecking TestPlan sheet...")
    try:
        TestPlan_sheet_Summ = workbook_Summ.sheet_by_name('TestPlan')
    except Exception as e:
        print_writetoReport("\n- WARNING: Cannot find TestPlan sheet\n" + str(e))
        return

    try: 
        TestPlan_sheet_Spec = workbook_Spec.sheet_by_name('TestPlan')
    except Exception as e:
        print_writetoReport("\n- WARNING: Cannot open TestPlan sheet in Test Spec file\n" + str(e))
        print_writetoReport("\n- WARNING: Cannot check the synchronization of TestPlan sheet" )
        return

    for row_index in range(TestPlan_sheet_Summ.nrows):
        cell_content = str(TestPlan_sheet_Summ.cell(row_index,7).value)
        if ((re.search("Compilation flag", cell_content)) or (re.search("Compilation Flag", cell_content))):
            compilation_spec = str(TestPlan_sheet_Spec.cell(row_index,7).value)
            cell_content = re.sub(r'\s+', '', cell_content)
            compilation_spec = re.sub(r'\s+', '', compilation_spec)
            if not (cell_content == compilation_spec):
                print_writetoReport("\n- WARNING: Compilation Flag is not synchronized with Test Spec at row " + str(row_index +1 ))

    print_writetoReport("\n")    

#################################################


def Find_TCSheet_Summ():
    list_TC_sheets = []
    for sheet_name in all_sheet_Summ:
        checkTCUnit_sheet = re.search('TC_Unit_', sheet_name)
        if checkTCUnit_sheet:
            list_TC_sheets.append(sheet_name)

    if not (list_TC_sheets == []):
        Scan_TCSheet(list_TC_sheets)
        pass
    else:
        print_writetoReport("\nWARNING: Cannot find any TC_Unit sheet. \nThe tool stopped here.")
        return


#################################################

def Scan_TCSheet(list_TC_sheets):
    list_to_check = ["Test Case Expected Results","Covered Design_Id",
                    "Set Global Variables","Set Parameters","Set Stub Functions",
                    "Check Call Sequences", "Check Data Changes"]

    for TCSheet in list_TC_sheets:
        list_checked = []
        print_writetoReport("\nChecking sheet: " + TCSheet + "...")
        Current_Sheet_Summ = workbook_Summ.sheet_by_name(TCSheet)

        try: 
            Current_Sheet_Spec = workbook_Spec.sheet_by_name(TCSheet)
        except Exception as e:
            print_writetoReport("Cannot open "+ TCSheet + " in Test Spec file\n" + str(e))
            continue

        for row_index in range(Current_Sheet_Summ.nrows):
            content_reference = (Current_Sheet_Summ.cell(row_index, 0).value).strip()
            if not (content_reference == "" ):
                content_summ = Current_Sheet_Summ.cell(row_index, 1).value
                content_summ = re.sub(r'\s+', '', content_summ)
                content_spec = Current_Sheet_Spec.cell(row_index, 1).value
                content_spec = re.sub(r'\s+', '', content_spec)
                Compare_TCSheet_content(content_reference, content_summ, content_spec, list_checked)
        Compare_Checked_toCheck(list_checked, list_to_check, TCSheet)
        print_writetoReport("\n")

#################################################

def Compare_TCSheet_content(content_reference,content_summ, content_spec, list_checked):
    # Check Covered Design_Id #
    identity = ""
    if ((content_reference == "Test Case Expected Results") or (content_reference == "Covered Design_Id")):
        identity = content_reference
    elif (content_reference == "Set"):
        if (re.search("Global", content_summ)):
            identity = "Set Global Variables"
        elif (re.search("Parameters", content_summ)):
            identity = "Set Parameters"
        elif (re.search("Stub", content_summ)):
            identity = "Set Stub Functions"
        else: return
    elif (content_reference == "Check"):
        if (re.search("Call", content_summ)):
            identity = "Check Call Sequences"
        elif (re.search("Data", content_summ)):
            identity = "Check Data Changes"
        else: return

    if not (identity == ""):
        list_checked.append(identity)
        if not (content_summ == content_spec):
            print_writetoReport("\n- WARNING: " + identity + " is not synchronized with Test Spec.")


#################################################

def Compare_Checked_toCheck(list_checked, list_to_check, TCSheet):
    for tocheck in list_to_check:
        if tocheck not in list_checked:
            print_writetoReport("\n- WARNING: Cannot find " + tocheck + " in " + TCSheet)


#################################################

def print_writetoReport(content):
    print(content)
    report_Summ.write(content)

#################################################
main_Summ()