import os
import datetime
import re
import xlrd
import re
import datetime
from PyQt5.QtWidgets import QMessageBox

list_TestSumm_files = []
list_TCSheet_Summ = []

#################################################


def main_Summ(dir):
    global report_Summ
    report_Summ = open("Report_Summ.txt", "w")

    global directory_Summ
    directory_Summ = dir + "/04_TestReportSummary/"
    global directory_Spec
    directory_Spec = dir + "/01_TestSpecification/"
    global workbook_Summ, all_sheet_Summ, workbook_Spec
    global directory_Report
    directory_Report = dir + "/03_TestReport/"

    findAllTestSumm()
    global index_TC_Unit
    index_TC_Unit = 0
    for TestSumm_file in list_TestSumm_files:
        report_Summ.write("Checking file " + TestSumm_file + "...")
        TestSumm_path = directory_Summ + TestSumm_file
        workbook_Summ = xlrd.open_workbook(TestSumm_path)
        workbook_Summ = xlrd.open_workbook(TestSumm_path)
        all_sheet_Summ = workbook_Summ.sheet_names()

        TestSpec_file = TestSumm_file.replace("_TestReportSummary", "Spec")
        TestSpec_path = directory_Spec + TestSpec_file
        workbook_Spec = xlrd.open_workbook(TestSpec_path)

        #Get date in Test Report html file#
        TestReport_file = TestSumm_file.replace("_TestReportSummary",
                                                "_Report")
        TestReport_file = TestReport_file.replace("xlsm", "html")
        TestReport_path = directory_Report + TestReport_file
        ###################################

        Check_Stream_Summ()
        Check_TestPlan_Sheet(readDateinTestReport(TestReport_path))
        Find_TCSheet_Summ()
        report_Summ.write(
            "\n\n\n*********************************************************\n\n\n"
        )
        workbook_Summ.release_resources()
        del workbook_Summ
        workbook_Spec.release_resources()
        del workbook_Spec

    report_Summ.close()
    QMessageBox.warning(None,'Auto Review Tool', 'Auto Review for Test Summary DONE!')


#################################################


def findAllTestSumm():
    for root, dirs, files in os.walk(directory_Summ):
        for filename in files:
            list_TestSumm_files.insert(len(list_TestSumm_files), filename)


#################################################


def readDateinTestReport(TestReport_path):
    try:
        file_object = open(TestReport_path, "r")
        TestReport_file = file_object.readlines()
        line_counter = 0
        date = ""
        for lineofcode in TestReport_file:
            line_counter += 1
            if (line_counter == 130):
                #print(lineofcode)
                date = lineofcode.strip()
                break

        ref_date = date[30:34].strip()
        if (len(ref_date) == 1):
            ref_date = "0" + ref_date
        ref_month = date[34:42].strip()
        ref_month = ConvertMonth(ref_month)
        ref_year = date[42:47].strip()
        ref_date_report = ref_year + "-" + ref_month + "-" + ref_date
        file_object.close()
        return ref_date_report

    except Exception as e:
        QMessageBox.warning(None,'Auto Review Tool', str(e))
        report_Spec.write("\n- WARNING: Can not read date in TestReport")
        return 0

#################################################


def ConvertMonth(month_text):
    if (month_text == 'January'):
        return str("01")
    elif (month_text == 'February'):
        return str("02")
    elif (month_text == 'March'):
        return str("03")
    elif (month_text == 'April'):
        return str("04")
    elif (month_text == 'May'):
        return str("05")
    elif (month_text == 'June'):
        return str("06")
    elif (month_text == 'July'):
        return str("07")
    elif (month_text == 'August'):
        return str("08")
    elif (month_text == 'September'):
        return str("09")
    elif (month_text == 'October'):
        return str("10")
    elif (month_text == 'November'):
        return str("11")
    elif (month_text == 'December'):
        return str("12")


#################################################


def Check_Stream_Summ():
    report_Summ.write("\nChecking TestResultSummary sheet...")
    TestReultSummary_sheet = workbook_Summ.sheet_by_name('TestResultSummary')
    Stream = TestReultSummary_sheet.cell(3, 2).value
    Check_Stream_Summ = re.search('CUBAS', Stream)

    if not (Check_Stream_Summ):
        report_Summ.write("\n- WARNING: Stream was not filled")

    report_Summ.write("\n")


#################################################


def Check_TestPlan_Sheet(ref_date_report):
    report_Summ.write("\nChecking TestPlan sheet...")
    TestPlan_sheet = workbook_Summ.sheet_by_name('TestPlan')
    Ref_Spec_Sheet = workbook_Spec.sheet_by_name('TestPlan')

    # Check Execution Date format #
    try:
        Execution_Date = TestPlan_sheet.cell_value(2, 10)
        Execution_Date_check = isinstance(Execution_Date, float)
        if not (Execution_Date_check):
            report_Summ.write("\n- WARNING: Execution Date was not filled")
        else:
            Execution_Date = str(
                datetime.datetime(
                    *xlrd.xldate_as_tuple(Execution_Date, workbook_Summ.datemode)))
            if (Execution_Date[0:10] != ref_date_report):
                report_Summ.write("\n- WARNING: Execution Date is NOT consistent with Test Report")

    except Exception as e:
        QMessageBox.warning(None,'Auto Review Tool', str(e))
        report_Spec.write("\n- WARNING: Can not check the Execution Date value")





    ###############################

    # Check Compilation Flag synchronization #
    for i in range(4, TestPlan_sheet.nrows):
        Cell_Content = TestPlan_sheet.cell(i, 7).value
        Ref_Content = Ref_Spec_Sheet.cell(i, 7).value

        if (re.search('Compilation Flags', Cell_Content)):
            Cell_Content = re.sub(r'\s+', '', Cell_Content)
            Ref_Content = re.sub(r'\s+', '', Ref_Content)

            if (Cell_Content != Ref_Content):
                report_Summ.write("\n- WARNING: Synchronization of Compilations Flag OK at cell H" + str(i + 1))

    ########################################
    report_Summ.write("\n")


#################################################


def Find_TCSheet_Summ():
    list_TC_sheet = []
    for sheet_name in all_sheet_Summ:
        checkTCUnit = re.search('TC_Unit_', sheet_name)

        if checkTCUnit:
            list_TC_sheet.insert(len(list_TC_sheet), sheet_name)

    Check_TC_Unit_Sheet_Summ(list_TC_sheet)


#################################################


def Check_TC_Unit_Sheet_Summ(list_TCSheet_Summ):
    for TCSheet in list_TCSheet_Summ:
        report_Summ.write("\nChecking sheet: " + TCSheet + "...")
        Current_Sheet = workbook_Summ.sheet_by_name(TCSheet)
        Ref_Spec_Sheet = workbook_Spec.sheet_by_name(TCSheet)

        # Check Expected Results synchronization #
        Expected_Results = Current_Sheet.cell(11, 1).value
        Ref_Expected_Results = Ref_Spec_Sheet.cell(11, 1).value

        Expected_Results = re.sub(r'\s+', '', Expected_Results)
        Ref_Expected_Results = re.sub(r'\s+', '', Ref_Expected_Results)

        if (Expected_Results.strip() != Ref_Expected_Results.strip()):
            report_Summ.write(
                "\n- WARNING: Synchronization of Test Case Expected Results NOT OK")

        ##############################################

        # Check Covered Design ID synchronization #
        Design_Id = Current_Sheet.cell(20, 1).value
        Ref_Design_Id = Ref_Spec_Sheet.cell(20, 1).value

        Design_Id = re.sub(r'\s+', '', Design_Id)
        Ref_Design_Id = re.sub(r'\s+', '', Ref_Design_Id)

        if (Design_Id.strip() != Ref_Design_Id.strip()):
            report_Summ.write(
                "\n- WARNING: Synchronization of Covered Desgin ID (GUID) NOT OK")

        ##############################################

        # Check Set Global Variables synchronization #
        Glob_Var = Current_Sheet.cell(27, 1).value
        Ref_Glob_Var = Ref_Spec_Sheet.cell(27, 1).value

        Glob_Var = re.sub(r'\s+', '', Glob_Var)
        Ref_Glob_Var = re.sub(r'\s+', '', Ref_Glob_Var)

        if (Glob_Var.strip() != Ref_Glob_Var.strip()):
            report_Summ.write("\n- WARNING: Synchronization of Set Global Variables NOT OK")

        ##############################################

        # Check Set Parameters synchronization #
        Param = Current_Sheet.cell(28, 1).value
        Ref_Param = Ref_Spec_Sheet.cell(28, 1).value

        Param = re.sub(r'\s+', '', Param)
        Ref_Param = re.sub(r'\s+', '', Ref_Param)

        if (Param.strip() != Ref_Param.strip()):
            report_Summ.write("\n- WARNING: Synchronization of Set Parameters NOT OK")

        ##############################################

        # Check Set Stub Functions synchronization #
        Stub_Func = Current_Sheet.cell(29, 1).value
        Ref_Stub_Func = Ref_Spec_Sheet.cell(29, 1).value

        Stub_Func = re.sub(r'\s+', '', Stub_Func)
        Ref_Stub_Func = re.sub(r'\s+', '', Ref_Stub_Func)

        if (Stub_Func.strip() != Ref_Stub_Func.strip()):
            report_Summ.write("\n- WARNING Synchronization of Set Stub Functions NOT OK")

        ##############################################

        # Check Check Call Sequences synchronization #
        Call_Seq = Current_Sheet.cell(31, 1).value
        Ref_Call_Seq = Ref_Spec_Sheet.cell(31, 1).value

        Call_Seq = re.sub(r'\s+', '', Call_Seq)
        Ref_Call_Seq = re.sub(r'\s+', '', Ref_Call_Seq)

        if (Call_Seq.strip() != Ref_Call_Seq.strip()):
            report_Summ.write("\n- WARNING: Synchronization of Check Call Sequence NOT OK")

        ##############################################

        # Check Check Data Changes synchronization #
        Data_Change = Current_Sheet.cell(32, 1).value
        Ref_Data_Change = Ref_Spec_Sheet.cell(32, 1).value

        Data_Change = re.sub(r'\s+', '', Data_Change)
        Ref_Data_Change = re.sub(r'\s+', '', Ref_Data_Change)

        if (Data_Change.strip() != Ref_Data_Change.strip()):
            report_Summ.write("\n- WARNING: Synchronization of Check Data Changes NOT OK")

        ##############################################
        report_Summ.write("\n")


#################################################
