#ifndef HR_H
#define HR_H

 #include<stdio.h>
 #include<iostream>
 #include<string.h>
 #include<bits/stdc++.h>
 #include<conio.h>
 using namespace std;
 class hr
 {
 	public:
 	string tname,tsur;                             //teacher or employee name & surname
 	string tdesig;                                 // designation of teacher or employee
 	float tid;                                     // teacher or employee id
 	float yr;                                      // year or simply the age of employee 
 	float sal_index;                               // sal_index is the absolute determining factor for salary for an emoloyee 
 	float salary=15000;                            // the base salary declared in float which is 15000 rs 
 	float exp;                                     // experience of employee 
 	void addata();                                 // function to add data , function declaration
 	void displaydat();                             // function to dsiplay the data,  function declaration
 	void deletedat();                              // function to delete the data,  function declaration
 	int option();
 };
	void hr::addata()                // fucntion declaration 
	 {
		 	    int j=j+1;
			 	cout<<"Enter the name of employee "<<j<<":";
			 	cin>>tname;
			 	transform(tname.begin(), tname.end(), tname.begin(), ::toupper);                   // transform function to convert to upper case 
			 	
				cout<<"\nEnter the Surname of employee "<<j<<":";
			 	cin>>tsur;
			 	transform(tsur.begin(), tsur.end(), tsur.begin(), ::toupper);                  
			 	
				cout<<"Enter the designation of employee "<<j<<":";
                cin>>tdesig;
                transform(tdesig.begin(), tdesig.end(), tdesig.begin(), ::toupper);
			 	
				cout<<"\nEnter the employee id of employee "<<j<<":";
			 	cin>>tid;
			 	
				cout<<"\nEnter the age of employee "<<j<<":";
			 	cin>>yr;
			 	
				cout<<"\nEnter the experience of employee "<<j<<":";
			 	cin>>exp;
			 	
				 	if(yr>=45 && exp>=10)
				 	{
				 		sal_index=3;
				 		
					 }
					if(yr>=45 && 10>exp<3)                                                    // SALARY CALCULATION MECHANISM 
					{
						sal_index=2;
					}
					if(yr>=30 && 10>exp>=3)
					{
						sal_index=2.5;
					}
					if(45>yr>=24 && 10>exp>=1)
					 {
					 	sal_index=1.5;
					 }
		        cout<<"Salary of the employee "<<j<<"is:";
		        salary=sal_index*salary;                                                // OVERALL SALARY IS SAL_INDEX * BASE SALARY
		        cout<<salary<<endl;
    }
	 	
	void hr::displaydat()                                                             // FUNCTION TO DISPLAY DATA 
	{   
	    int j=j+1;
		cout<<"The name of employee "<<j<<" is:"<<tname<<" "<<tsur<<endl;
		cout<<"The designation of employee "<<j<<" is:"<<tdesig<<endl;
		cout<<"The id of employee "<<j<<" is:"<<tid<<endl;
		cout<<"The age of employee "<<j<<" is:"<<yr<<endl;
		cout<<"The Salary of employee "<<j<<" is:"<<salary<<endl;
		
	}
	void hr::deletedat()                                                             // FUNCTION TO DELETE DATA 
	{
		 
		tname='\0';
		tsur='\0';
		tdesig='\0';
		tid=0;
		yr=0;
		sal_index=0;
		salary=0;
		cout<<"Your data has been sucessfully deleted!"<<endl;
		
	}
	
	 
	 int hr::option()                                                         // MAIN FUNCTION 
	 {  
	 	int ch,i,maxtno,empid,age,ch1,se_choose;
	 	string delchoose,modchoose,name,desig;
	 	cout<<"Please enter the no of employees you want to enter the data for "<<endl;
	 	cin>>maxtno;
	 	hr hrs[maxtno];         //  OBJECT CREATED UNDER CLASS HR 
	 	while(1){
	 		cout<<"Enter \n1.To Change,review or dsiplay data \n2.To search through our database \n3. Exit"<<endl;
	 		cout<<"**************************************************************************************************"<<endl;
	 		cin>>ch1;
	 		if(ch1==1)
	 		{
	 	cout<<"Enter \n1. to add data \n2. to delete data \n3. to modify data \n4. to display data "<<endl;
	 	cin>>ch;
		 	switch(ch)                     // SWITCH CASE TO CHOOSE THE MENU OPTIONS 
		 	{
			 		case 1:
			 			cout<<"you've choosen to add data "<<endl;
			 			for(i=0;i<maxtno;i++)
			 			{
			 			hrs[i].addata();
			 		    }
			 			break;
			 		case 2: 
			 		    cout<<"You've choosen to delete data "<<endl;
			 		    cout<<"Are you sure you want to delete the data "<<endl;
						cout<<"\n1.yes \n2.no "<<endl;
						cin>>delchoose;
						if(delchoose=="yes"||delchoose=="YES")
						{
							for(i=0;i<maxtno;i++)
							{
								hrs[i].deletedat();
							}
						}
						if(delchoose=="no"||delchoose=="NO")
						{
							cout<<"Your data is intact "<<endl;
							
						}
			 		    break;
			 		case 3:
			 			cout<<"you've choosen to modify data "<<endl;
			 			cout<<"The Data of employees will be displayed you can choose to either modify it or keep it intact "<<endl;
				 			for(i=0;i<maxtno;i++)
				 			{
				 				hrs[i].displaydat();
				 				cout<<"*******************************************************************************************"<<endl;
				 			}
				 				cout<<"Do you want to make any changes to the data ?"<<endl;
				 				cout<<"1.yes\n2.no"<<endl;
				 				cin>>modchoose;
					 				if(modchoose=="yes"||modchoose=="YES")
								{
									for(i=0;i<maxtno;i++)
									{
										hrs[i].addata();
									}
								}
								if(modchoose=="no"||modchoose=="NO")
								{
									cout<<"Your data is intact "<<endl;
									
								}
						    
						break;
			 	    case 4: 
			 	        cout<<"you've choosen to display data "<<endl;
			 	        for(i=0;i<maxtno;i++)
			 	        {
			 	        	hrs[i].displaydat();
			 	        	cout<<"**********************************************************************"<<endl;
			 	        	
						}
					   break;
					default :
						cout<<"Wrong choice "<<endl;
						break;
					   
	        }
	    }
	        
	   if(ch1==2)
        {
        	cout<<"Hey there what do you want to search by : \n1.Name \n2.Designation \n3.Employee id \n4.Age "<<endl;
					    cin>>se_choose;
					    switch(se_choose)        //SWITCH FOR SEARCHING THE DATABASE
					    {
					    	case 1: 
					    	      cout<<"You've choosen to search by Name, please enter the Name to find it in our database "<<endl;
					    	      cin>>name;
					    	      for(i=0;i<maxtno;i++)
					    	      {
						    	      	if(name==hrs[i].tname)
						    	      	{
						    	      		hrs[i].displaydat();
						    	      		cout<<"------------------------------------------------------------------------------------------"<<endl;
										}
										else
										{
											cout<<"Error name not found in our database "<<endl;
											
										}
										break;
								  }
								  break;
							case 2:
								  cout<<"You've choosen to search by designation, please enter the designation to find it in our database "<<endl;
								  cin>>desig;
								  for(i=0;i<maxtno;i++)
							      {			  
								        if(desig==hrs[i].tdesig)
								        {
								        	hrs[i].displaydat();
								        	cout<<"------------------------------------------------------------------------------------------------------------------------------"<<endl;
										}
										else
										{
											cout<<"Error designation not found in our database "<<endl;
										}
										break;
										
								  }
								  break;
						    case 3: 
						        cout<<"You've choosen to search by Employee id, please enter the Employee id to find it in our database  "<<endl;
						        cin>>empid;
						        for(i=0;i<maxtno;i++)
						        {
						        	if(hrs[i].tid==empid)
						        	{
						        		hrs[i].displaydat();
						        		cout<<"----------------------------------------------------------------------------------------------------------------------------------"<<endl;
						        		
									}
									else{
										cout<<"Error Employee id not found "<<endl;
										
									}
									break;
						        	
								}
								break;
						    case 4: 
							    cout<<"You've choosen to search by Age, please enter the age of Employee to find it in our database "<<endl;
								cin>>age;
								for(i=0;i<maxtno;i++)
								{
									if(hrs[i].yr==age)
									{
										hrs[i].displaydat();
										cout<<"--------------------------------------------------------------------------------------------------------------------------------"<<endl;
									}
									else
									{
									   cout<<"Error Employee age not found "<<endl;
									}
									break;
								 } 
								 break;
					}
	}
	if(ch1==3)
	return 0;
}
	
	}





#endif
