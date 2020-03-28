#ifndef ADMINISTRATION_H
#define ADMINISTRATION_H

#include <iostream>
#include<strings.h>
using namespace std;
// transport, house keeping, time table, exam
class Administration {
	public:
		int option();
		void transport();
		void houskeep();
		int tita();
		void exam();
};

int Administration::option(){
	cout<<"Please Choose What you want to do: \n1.Transport \n2.Housekeeping \n3.Time Table \n4.Exam \n5.Exit";
	int ch;
	cin>>ch;
	switch(ch){
		case 1:
			transport();
			break;
		case 2:
			houskeep();
			break;
		case 3:
			tita();
			break;
		case 4:
			exam();
			break;
		case 5:
			return 0;
		default:
			cout<<"Please Choose The correct option!!";
	}
}
void Administration::transport(){
	//license plate, driver phone number, kilometers travelled, 
	cout<<"Enter the total number of buses:";
	int busno;
	cin>>busno;
	cout<<"Enter the last 4 digits of license plate, Driver Phone Number, Kilometers travelled:";
	int linno[busno],phno[busno],kiltra[busno];
	for(int i=0;i<busno;i++){
		cin>>linno[i];
		cin>>phno[i];
		cin>>kiltra[i];
	}
	cout<<"All the data have been entered!!";
}
void Administration::houskeep(){
	//mattress, costing, no of beds, 
	cout<<"Enter the Total Number of Matteress:";
	int matno;
	cin>>matno;
	cout<<"Enter the total costing of the items:";
	int cost;
	cin>>cost;
	cout<<"Enter the total number of bed in hostel";
	int nobed;
	cin>>nobed;
	cout<<"All the entries have been registered!!";
}
int Administration::tita(){
	int Time[5] = { 8,9,10,11,12 };
string Day[6] = { "Monday","Tuesday","Wednesday","Thursday","Friday","Saturday" };                     //Noice

string Monday[5] = { "Physics","Chemistry","Maths","PCE","Programming" };
string Tuesday[5] = { "PCE","Maths","Chemistry","Physics","Programming" };
string Wednesday[5] = { "Physics","Maths","PCE","Programming","Chemistry" };
string Thursday[5] = { "Chemistry","Physics","Maths","PCE","Programming"};
string Friday[5] = { "Chemistry","Maths","PCE","Programming","Physics" };
//string Saturday[5] = { "Physics","Programming","Maths","PCE","Chemistry" };

    int time;
    string day;

    cout << "Enter the Time (any digit between 8 to 12)" << endl;
    cin  >> time;

    cout << "Enter the day (Enter the string)";
    cin  >> day;


    bool foundday = false;
    bool foundtime = false;
    int timesub = 0;
    int daysub  = 0;

    for (timesub = 0; timesub < 5; timesub++)
    {
        if (Time[timesub] == time)
        {
            foundtime = true;
            break;
        }
    }

    for (daysub = 0; daysub < 6; daysub++)
    {
        if (Day[daysub] == day)
        {
            foundday = true;
            break;
        }
    }

    if (!foundday || !foundtime)
    {
        cout << "no activity found for that time and day\n";
        return 0;
    }

    string activity;
    string next;

    switch (daysub)
    {
        case 0: activity = Monday   [timesub]; if (timesub < 7) next = Monday   [timesub+1]; break;
        case 1: activity = Tuesday  [timesub]; if (timesub < 7) next = Tuesday  [timesub+1]; break;
        case 2: activity = Wednesday[timesub]; if (timesub < 7) next = Wednesday[timesub+1]; break;
        case 3: activity = Thursday [timesub]; if (timesub < 7) next = Thursday [timesub+1]; break;
        case 4: activity = Friday   [timesub]; if (timesub < 7) next = Friday   [timesub+1]; break;
        //case 5: activity = Saturday [timesub]; if (timesub < 7) next = Saturday [timesub+1]; break;
        default: activity = "Day Not found";   break;
    }

    cout << activity << "  " << next << '\n';
}
void Administration::exam(){
	//no of students, marks for five subjects, average for each
	cout<<"Enter the total number of students:";
	int nostu;
	cin>>nostu;
int stdm[5][7];  
int total =0,i=0,j=0;  
for(i=0;i<nostu;i++)  
{  
stdm[i][0] = i+1;  
cout<<"Enter sub 1 mark for roll  " << (i+1);  
cin>>stdm[i][1];  
cout<<"Enter sub 2 mark for roll  " << (i+1);  
cin>>stdm[i][2];  
cout<<"Enter sub 3 mark for roll  " << (i+1);  
cin>>stdm[i][3];  
cout<<"Enter sub 4 mark for roll  " << (i+1);  
cin>>stdm[i][4];  
cout<<"Enter sub 5 mark for roll  " << (i+1);  
cin>>stdm[i][5];   
stdm[i][6] = stdm[i][1] + stdm[i][2] + stdm[i][3] + stdm[i][4] + stdm[i][5];  
  
}  
  
cout<<"Roll \t Total"<<endl;  
  
for(i=0;i<nostu;i++)  
{  
  
cout<<"Average for "<<stdm[i][0] <<"is:\t"<<stdm[i][6] <<endl;  
}  
}
//niche
//niche
//niche
//bas perfect
#endif
