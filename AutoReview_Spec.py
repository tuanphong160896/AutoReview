import os
import re
import xlrd

#################################################


def main_Spec():
    dir = "C:/Users/tuanp/Desktop/New folder/AutoReview_Spec/TestAppl"
    global report_Spec
    report_Spec = open("Report_Spec.txt", "w")
    report_name = getReportName(dir)
    report_Spec = open(report_name, "w")

    directory_Spec = dir + "/01_TestSpecification/"
    global workbook_Spec, all_sheet_Spec
    list_TestSpecs_files = findAllTestSpecs(directory_Spec)

    for TestSpec_file in list_TestSpecs_files:
        print_writetoReport("Checking file " + TestSpec_file + "...\n")
        TestSpec_path = directory_Spec + TestSpec_file
        try:
            workbook_Spec = xlrd.open_workbook(TestSpec_path)
        except Exception as e:
            print_writetoReport("Cannot open "+ TestSpec_path + "\n" + str(e))
            continue

        all_sheet_Spec = workbook_Spec.sheet_names()
        Check_Stream_Spec()
        Find_TCSheet_Spec()
        workbook_Spec.release_resources()
        del workbook_Spec

        print_writetoReport("\n\n\n*********************************************************\n\n\n")
    report_Spec.close()

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
    report_name = "ReviewReport_TestSpec_" + active_branch + "_" + time + ".txt"
    
    return report_name


#################################################


def findAllTestSpecs(directory_Spec):
    list_Specfiles = []
    for root, dirs, files in os.walk(directory_Spec):
        for filename in files:
            if not (filename[0:2] == '~$'): #check for temporary if file is opening
                list_Specfiles.append(filename)

    if (len(list_Specfiles) == 0):
        print_writetoReport("\n- WARNING: Cannot find any Test Spec file.\nThe tool stopped here.")

    return list_Specfiles


#################################################


def Check_Stream_Spec():
    print_writetoReport("\nChecking TestResultSummary sheet...")
    try:
        TestReultSummary_sheet = workbook_Spec.sheet_by_name('TestResultSummary')
    except Exception as e:
        print_writetoReport("\n- WARNING: Cannot open TestResultSummary sheet\n" + str(e))
        return

    check_feature_under_tests = 0
    for column_index in range(TestReultSummary_sheet.ncols):
        for row_index in range(TestReultSummary_sheet.nrows):
            feature_under_test = str(TestReultSummary_sheet.cell(row_index,column_index).value)
            if (feature_under_test.strip() == "Feature under tests name"):
                check_feature_under_tests = 1
                stream = TestReultSummary_sheet.cell(row_index,column_index+2).value
                break
        if (check_feature_under_tests == 1):
            break
        
    if not (check_feature_under_tests):
        print_writetoReport("\n- WARNING: Cannot find Feature under tests name in TestResultSummary sheet")

    Check_Stream_Spec = re.search('CUBAS', stream)
    if not (Check_Stream_Spec):
        print_writetoReport("\n- WARNING: CUBAS Stream was not filled")

    print_writetoReport("\n")


#################################################


def Find_TCSheet_Spec():
    list_TC_sheets = []
    for sheet_name in all_sheet_Spec:
        checkTCUnit_sheet = re.search('TC_Unit_', sheet_name)
        if checkTCUnit_sheet:
            list_TC_sheets.append(sheet_name)

    if not (list_TC_sheets == []):
        Scan_TCSheet(list_TC_sheets)
    else:
        print_writetoReport("\nWARNING: Cannot find any TC_Unit sheet. \nThe tool stopped here.")
        return

#################################################


def Scan_TCSheet(list_TC_sheets):
    list_to_check = ["Test Case Expected Results","Covered Design_Id","Set Global Variables","Set Parameters","Set Stub Functions"]
    for TCSheet in list_TC_sheets:
        list_checked = []
        print_writetoReport("\nChecking sheet: " + TCSheet + "...")
        Current_Sheet = workbook_Spec.sheet_by_name(TCSheet)
        for row_index in range(Current_Sheet.nrows):
            content_reference = (Current_Sheet.cell(row_index, 0).value).strip()
            if not (content_reference == "" ):
                content = Current_Sheet.cell(row_index, 1).value
                Check_TCSheet_content(content_reference,content,list_checked)
        Compare_Checked_toCheck(list_checked, list_to_check, TCSheet)
        print_writetoReport("\n")


#################################################


def Check_TCSheet_content(content_reference,content,list_checked):
    # Check Covered Design_Id #
    if (content_reference == "Test Case Expected Results"):
        list_checked.append(content_reference)
        if (len(content) == 0):
            print_writetoReport("\n- WARNING: Test Case Expected Results was not filled")

    # Check Covered Design_Id #
    elif (content_reference == "Covered Design_Id"):
        list_checked.append(content_reference)
        if ((content == "Missing GUID") or (len(content) == 0)):
            print_writetoReport("\n- WARNING: GUID was not filled")

    # Check Set #
    elif (content_reference == "Set"):
        identity = ""
        if (re.search("Global", content)):
            identity = "Set Global Variables"
        elif (re.search("Parameters", content)):
            identity = "Set Parameters"
        elif (re.search("Stub", content)):
            identity = "Set Stub Functions"
        else: return
        list_checked.append(identity)    
        check_Set_Global_Variables(content,identity)


#################################################

def check_Set_Global_Variables(content, indentity):
    check_ptr = content.count('ptr_') + content.count('_ptr')
    check_entity = content.count('_entity')
    check_fnc = content.count('_fnc') + content.count('fnc_')
    check_asteris = content.count('*')

    if (check_ptr > 0):
        print_writetoReport("\n- WARNING: Remaining " + str(check_ptr) + " (ptr) in " + indentity)
    if (check_entity > 0):
        print_writetoReport("\n- WARNING: Remaining " + str(check_entity) + " (_entity) in " + indentity)
    if (check_fnc > 0):
        print_writetoReport("\n- WARNING: Remaining " + str(check_fnc) + " (fnc) in " + indentity)
    if (check_asteris > 0):
        print_writetoReport("\n- WARNING: Remaining " + str(check_asteris) + " (*) in " + indentity)


#################################################

def Compare_Checked_toCheck(list_checked, list_to_check, TCSheet):
    for tocheck in list_to_check:
        if tocheck not in list_checked:
            print_writetoReport("\n- WARNING: Cannot find " + tocheck + " in " + TCSheet)


#################################################


def print_writetoReport(content):
    print(content)
    report_Spec.write(content)


#################################################
main_Spec()