#ifndef IT_H
#define IT_H

#include<stdio.h>
#include<iostream>
#include<string.h>
#include<conio.h>
#include<bits/stdc++.h>
using namespace std;
int rt_el,rt_in,tno,stno,flag;
string tname,tsur;
class stu
{
	public:
		float sturl,stuyr,stult,gb_cns,exp_st;
		string stuname,stusur;
		void itaddatas();
		void itdeldata();
		void itcalexp();
		void disrecor();
		int option();
	    
};
void stu::itaddatas()
	{
		string ovichoose;
		cout<<"Do you want to overwrite the existing student data \n1.Yes \n2.No (Please Enter the String)"<<endl;
		cin>>ovichoose;

			if(ovichoose=="yes"||ovichoose=="YES"||ovichoose=="Yes")
			{   
			    int j=j+1;
				cout<<"Enter the name of the student "<<j<<":"<<endl;
				cin>>stuname;
				transform(stuname.begin(), stuname.end(), stuname.begin(), ::toupper); 
				   
				cout<<"Enter the surname of the student "<<j<<":"<<endl;
				cin>>stusur;
				transform(stusur.begin(), stusur.end(), stusur.begin(), ::toupper);  
				  
				cout<<"Enter the roll no of student "<<j<<":"<<endl;
				cin>>sturl;
				
				cout<<"\nEnter the academic year of the student \n1.First Year \n2.Second Year \n3.Third Year \n4.Fourth Year (Enter the Numeral)"<<j<<":";
				cin>>stuyr;
		
			}
		   if(ovichoose=="no"||ovichoose=="No"||ovichoose=="NO")
		   {
			   	cout<<"As you don't want to overwrite the student data we'll get the student data from Master Database "<<endl;
			   	cout<<"We strongly recommend you to import data in order to avoid any issues............."<<endl;
		   	
		   }
		 
		
	}
void stu::itdeldata()
	{   string ch1;
	    cout<<"are you sure you want to delete the entire student data ? [Data won't be deleted from our master database] \n1.Yes \n2.No "<<endl;
	    cin>>ch1;
	    if(ch1=="yes"||ch1=="YES"||ch1=="Yes")
	    {
		stuname="\0";
		stusur="\0";
		sturl=0;
		stuyr=0;	
		cout<<"All the data has been deleted from our records :) "<<endl;
	    }
	    if(ch1=="no"||ch1=="No"||ch1=="NO")                             //Noice
	    {
	    	cout<<"You're data is intact "<<endl;
	    	
		}
    }
	
void stu::itcalexp()
	{
		int j=j+1;
		cout<<"\n Please enter the total no of lectures attended by the student in the current semister, for student  "<<j<<":";
		cin>>stult;
		cout<<"\n Please enter the total gigabits consumed by the student "<<j<<":";
		cin>>gb_cns;
		exp_st=(stult*rt_el)+(rt_in*gb_cns);
		cout<<"The total expense on student "<<j<<"is:"<<exp_st<<endl;
		
			
    }
    
void stu::disrecor()
{
	 int j=j+1;
		cout<<"The name of student "<<j<<" is:"<<stuname<<" "<<stusur<<endl;
		cout<<"The roll no of student "<<j<<" is:"<<sturl<<endl;
		cout<<"The year of study of student "<<j<<" is:"<<stuyr<<endl;
		cout<<"The no of lectures attended by student "<<j<<" is:"<<stult<<endl;
		cout<<"The expense of student "<<j<<" is:"<<exp_st<<endl;
}
	 void adna_cniv();
	 void itcompl();  
int stu::option()
{   
    int ch3,ch4;
    string delchoose1;
    cout<<"Welcome to IT managment services "<<endl;
	cout<<"Please enter the max no of students "<<endl;
	cin>>stno;
	cout<<"Please enter the max no of teachers "<<endl;
	cin>>tno;
	stu sts[stno];
	Label2:
		cout<<"Enter \n1.To Change,review or display data \n2.To search through our database \n3.exit"<<endl;
		cout<<"*************************************************************************************************"<<endl;
		cin>>ch3;
		if(ch3==1)
		{
			cout<<"Enter \n1. to add data \n2. to delete data \n3. to display records  \n4. to enter IT complexities \n5. to calculate per student expense"<<endl;
			cin>>ch4;
			
				switch(ch4)
				 {
				 		case 1:
				 			cout<<"you've choosen to add data "<<endl;
				 			for(int i=1;i<=stno;i++)
				 			{
				 			 sts[i].itaddatas();
				 		    }
				 		    goto Label2;
				 			break;
				 		case 2: 
				 		    cout<<"You've choosen to delete data "<<endl;
				 		    cout<<"Are you sure you want to delete the data "<<endl;
							cout<<"\n1.yes \n2.no "<<endl;
							cin>>delchoose1;
							if(delchoose1=="yes"||delchoose1=="YES"||delchoose1=="Yes")
							{
								for(int i=1;i<=stno;i++)
								{
									sts[i].itdeldata();
								}
							}
							if(delchoose1=="no"||delchoose1=="NO"||delchoose1=="No")
							{
								cout<<"Your data is intact "<<endl;
								
							}
				 		    break;
				 		case 3: 
				 	        cout<<"you've choosen to display records "<<endl;
				 	        Label3:
				 	        adna_cniv();
				 	        if(flag==1)
				 	        {
					 	        for(int i=1;i<=stno;i++)
					 	        {
					 	        	sts[i].disrecor();
					 	        
					 	        	cout<<"*******************************************************************************"<<endl;
					 	        	
								}
						    }
						    if(flag==0)
						    {  
							    int ch5;
						    	cout<<"\n1.Try again \n2.Exit "<<endl;
						    	cin>>ch5;
						    	if(ch5==1)
						    	  {
						    	  	goto Label3;
								  }
								if(ch5==2)
								  {
								  	goto Label2;
								  	
								  }
						    }
						    
						    break;
						case 4:
							cout<<"You've choosen to enter the IT complexities "<<endl;
							itcompl();
							break;
						case 5:
							cout<<"You've choosen to caculate the student expenses "<<endl;
							for(int i=1;i<=stno;i++)
							   {
							   	sts[i].itcalexp();
							   	
							   }
						default :
							cout<<"Wrong choice "<<endl;
							break;
							
				 }
		
		}
		if(ch3==2)
		  {   
		      int se_choose1;
		      string name1;
		  	  cout<<"Hey there what do you want to search by : \n1.Name \n2.student expense \n3.student roll no \n4.year of study  "<<endl;
					    cin>>se_choose1;
					    switch(se_choose1)        //SWITCH FOR SEARCHING THE DATABASE
					    {
					    	case 1: 
					    	      cout<<"You've choosen to search by Name, please enter the Name to find it in our database "<<endl;
					    	      cin>>name1;
					    	      for(int i=1;i<=stno;i++)
					    	      {
						    	      	if(name1==sts[i].stuname)
						    	      	{
						    	      		sts[i].disrecor();
						    	      		cout<<"------------------------------------------------------------------------------------------------------------------------------"<<endl;
										}
										else
										{
											cout<<"Error name not found in our database "<<endl;
											
										}
										break;
								  }
								  break;
							case 2:
								  float stuexp;
								  cout<<"You've choosen to search by student expense, please enter the expense to find it in our database "<<endl;
								  cin>>stuexp;
								  for(int i=1;i<=stno;i++)
							      {			  
								        if(stuexp==sts[i].exp_st)
								        {
								        	sts[i].disrecor();
								        	cout<<"------------------------------------------------------------------------------------------------------------------------------"<<endl;
										}
										else
										{
											cout<<"Error expense record not found in our database "<<endl;
										}
										break;
										
								  }
								  break;
						    case 3: 
						        float sturoll;
						        cout<<"You've choosen to search by student roll no., please enter the student roll no. to find it in our database  "<<endl;
						        cin>>sturoll;
						        for(int i=1;i<=stno;i++)
						        {
						        	if(sts[i].sturl==sturoll)
						        	{
						        		sts[i].disrecor();
						        		cout<<"----------------------------------------------------------------------------------------------------------------------------------"<<endl;
						        		
									}
									else{
										cout<<"Error roll no not found "<<endl;
										
									}
									break;
						        	
								}
								break;
						    case 4: 
						        float stuyer;
							    cout<<"You've choosen to search by student year of study, please enter the year to find it in our database "<<endl;
								cin>>stuyer;
								for(int i=1;i<=stno;i++)
								{
									if(sts[i].stuyr==stuyer)
									{
										sts[i].disrecor();
										cout<<"--------------------------------------------------------------------------------------------------------------------------------"<<endl;
									}
									else
									{
									   cout<<"Error year not found "<<endl;
									}
									break;
								 } 
								 break;
								 
				    	}
		  }
		  if(ch3==3)
		  {
		  	while(1==1)
		  	{
		  		cout<<"Byee NIGGA "<<endl;
			  }
		  }
		
	
	
	
}
void itcompl()
	{
		cout<<"Enter the rate of electricity per unit "<<endl;
		cin>>rt_el;
		cout<<"Enter the rate of internet per gigabit "<<endl;
		cin>>rt_in;
		
	}
void adna_cniv()
{    
	int j=j+1,ch2;
	string Adname,Adpswrd;
	cout<<"To enter the Master database you've to Login with Secure key \n1.Enter login details and continue \n2.I don't have a secure login id and password'"<<endl;
	cin>>ch2;
		if(ch2==1)
		{   Label1:
		    cout<<"Welcome! to the Master Record display system "<<endl;
			cout<<"Enter user name: ";
			cin>>Adname;
			cout<<"\n Enter the password: ";
			cin>>Adpswrd;
			if(Adname=="Admin" && Adpswrd=="NIGGA69")
			{   
				flag=1;
			}
			else
			{   
			    flag=0;
				cout<<"INVALID CREDENTIALS PLEASE ENTER THE CORRECT PASSWORD "<<endl;
				goto Label1;
				
			}
			
		}
		else
		{
			flag=0;
			cout<<"You don't have the privilage to access the Master Database "<<endl;
			
		}
	
	 
}
    
//this is a comment





























//EPYC
#endif
