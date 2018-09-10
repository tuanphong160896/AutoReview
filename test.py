Skip to content
 
Search or jump to…

Pull requests
Issues
Marketplace
Explore
 @tuanphong160896 Sign out
0
0 0 tuanphong160896/AutoReview
 Code  Issues 0  Pull requests 0  Projects 0  Wiki  Insights  Settings
AutoReview/AutoReview_main.pyw
669bc35  22 days ago
 tuanphong first commit at home
     
123 lines (84 sloc)  3.63 KB
#################################################

#packing to exe command: pyinstaller -F -w AutoReview_main.py

#################################################


import os
from tkinter import Tk, Button, Entry, filedialog, messagebox

import AutoReview_Script as AutoReview_Script
import AutoReview_Spec as AutoReview_Spec
import AutoReview_Summ as AutoReview_Summ


#################################################


def main():
    mainGUI()


#################################################


def mainGUI():
    window = Tk()
    window.title("Auto Review Tool")

    window.geometry('350x200')
    root_directory_entry = Entry(window, width=50)
    root_directory_entry.place(x=20, y=5)

    def browse_button():
        global root_dir
        path_name = filedialog.askdirectory()
        root_directory_entry.insert(0, path_name)
        root_dir = root_directory_entry.get()

    btn_browse = Button(window, text="Browse Directory",
                        command=browse_button, height=1, width=18, borderwidth=2)
    btn_browse.place(x=20, y=30)

    def run_AR_Script():

        if (len(root_dir) == 0):
            messagebox.showinfo('Auto Review', 'Plese input directory')
        else:
            try:
                AutoReview_Script.main_Script(root_dir)
            except Exception as e:
                messagebox.showinfo('Auto Review', e)
            #messagebox.showinfo('Auto Review', 'Auto Review for Test Script DONE!')


    def run_AR_Spec():

        if (len(root_dir) == 0):
            messagebox.showinfo('Auto Review', 'Plese input directory')
        else:
            try:
                AutoReview_Spec.main_Spec(root_dir)
            except Exception as e:
                messagebox.showinfo('Auto Review', e)


    def run_AR_Summ():

        if (len(root_dir) == 0):
            messagebox.showinfo('Auto Review', 'Plese input directory')
        else:
            try:
                if (CheckNumberofFiles(root_dir)):
                    AutoReview_Summ.main_Summ(root_directory_entry.get())
                    messagebox.showinfo('Auto Review', 'Auto Review for Test Summary DONE!')
                else:
                    print("Can not continue...")
            except Exception as e:
                messagebox.showinfo('Auto Review', e)


    btn_AR_Script = Button(window, text="AutoReview Test Script",
                           command=run_AR_Script, height=1, width=18, borderwidth=2)
    btn_AR_Script.place(x=20, y=80)

    btn_AR_Spec = Button(window, text="AutoReview Test Spec",
                         command=run_AR_Spec, height=1, width=18, borderwidth=2)
    btn_AR_Spec.place(x=20, y=120)

    btn_AR_Summ = Button(window, text="AutoReview Test Summ",
                         command=run_AR_Summ, height=1, width=18, borderwidth=2)
    btn_AR_Summ.place(x=20, y=160)

    window.mainloop()


#################################################


def CheckNumberofFiles(dir):
    directory_Spec = dir + "/01_TestSpecification"
    directory_Summ = dir + "/04_TestReportSummary"
    directory_Rep = dir + "/03_TestReport"
    Spec_files_count = 0
    Summ_files_count = 0
    Rep_files_count = 0

    Spec_files_count = len(next(os.walk(directory_Spec))[2])
    Rep_files_count = len(next(os.walk(directory_Rep))[2])
    Summ_files_count = len(next(os.walk(directory_Summ))[2])

    if ((Spec_files_count == Summ_files_count) and (Summ_files_count == Rep_files_count)):
        print("The numbers of files in 3 folders (01_ , 03_ , 04_) are the same \nStart Auto Review...")
        return 1
    else:
        print("The numbers of files in 3 folders are different")
        return 0


#################################################

main()
© 2018 GitHub, Inc.
Terms
Privacy
Security
Status
Help
Contact GitHub
Pricing
API
Training
Blog
About
Press h to open a hovercard with more details.