#ifndef STUDENT_H
#define STUDENT_H

//
// Created by pande on 07-03-2020.
//
#include <iostream>
#include<strings.h>

using namespace std;
#ifndef UNTITLED_HR_H
#define UNTITLED_HR_H

class Stud {
public:
    char name[20];
    int age, sal;
    char address[50], dept[10];
    void display();
    void calcsal();
    void input();
    int option();
}stu1[100];
int Stud::option() {
    while(1) {
        cout << "Enter Your Choice:" << endl << "1. Display Info" << endl << "2. Calculate fees" << endl
             << "3.Input Values" << endl<<"4. Exit"<<endl;
        int op;
        cin >> op;
        switch (op) {
            case 1:
                display();
                break;
            case 2:
                calcsal();
                break;
            case 3:
                input();
                break;
            case 4:
                return 0;
            default:
                cout << "Enter the correct value!!";
        }
    }
}
void Stud::display() {
    cout << "How Many Entries You want to see:";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
            cout << "The Name is:" << stu1[i].name << endl;
        cout << "The age:" << stu1[i].age<< endl;
        cout << "The Address is:" << stu1[i].address << endl;
        cout << "The Department is:" << stu1[i].dept << endl;
        cout << "The Fees to be paid is:" << stu1[i].sal << endl;
    }

}

void Stud::calcsal(){
    int n;
    cout<<"How Many total entries are there?";
    cin>>n;
    for(int i=0;i<n;i++) {
        stu1[i].sal = 50000;          //placeholder here
    }
    cout<<"Done Please go to Display to see the fees";
}                                     //Noice

void Stud::input() {
    cout << "Enter the Total number of entries:";
    int n;
    cin >> n;
    cout << "Enter the Name, Age, Address, Department:" << endl;
    for (int i = 0; i < n; i++) {
            cin>>stu1[i].name;
            cin >> stu1[i].age;
            cin >> stu1[i].address;
            cin >> stu1[i].dept;
        }
}
#endif //UNTITLED_HR_H
	

#endif
