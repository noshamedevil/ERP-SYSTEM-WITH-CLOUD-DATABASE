#include <iostream>
#include "HR.h"
#include "Student.h"
#include "Administration.h"
#include "IT.h"
using namespace std;
int main() {
    hr hr1;
    Stud s1;
    Administration ad1;
    stu i1;
    cout<<"######################### WELCOME TO COLLEGE MANAGEMENT SYSTEM########################"<<endl;
    while(1) {
        cout << "Please Select What You Want TO Do" << endl << "1. Human Resource" << endl
             << "2. Student Data" << endl << "3. Housekeeping and Administration" << endl
             << "4. IT and Infrastructure" << endl<<"5. Exit"<<endl;
        int ch;
        cin >> ch;
        switch (ch) {
            case 1:
                hr1.option();
                break;
            case 2:
                s1.option();
                break;
            case 3:
                ad1.option();
                break;
            case 4:
                i1.option();
                break;
            case 5:
                goto one;
            default:
                cout << "Enter the correct variable!!"; 
        }
    }
    one:
    cout<<"####################################### Thank you For Using College management system #############################"<<endl;
    return 0;
}
//This is a comment


























//Noice
