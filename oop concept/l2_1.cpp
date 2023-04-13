#include<iostream>
using namespace std;

class emp {
	char name[20],role[20],city[20],company_name[20];
	int id,age,salary,experience,i;
	
	public :
		void input (){
		      
		       for(i=0;i<5;i++)
		       {
		       		cout<<"Enter the name : ";
		       		cin>>name;
		       		cout<<"Enter the company name : ";
		       		cin>>company_name;
		       		cout<<"Enter the role in company : ";
		       		cin>>role;
		       		cout<<"Enter the city : ";
		       		cin>>city;
		            cout<<"Enter the id : ";
		       		cin>>id;
					cout<<"Enter the age : ";
		       		cin>>age;
					cout<<"Enter the salary : ";
		       		cin>>salary;
					cout<<"Enter the experience : ";
		       		cin>>experience;	
			   }
			
		}
		void output(){
			
			for(i=0;i<5;i++)
			{
				cout<<"\n===========================================";
				cout<<"\nThe name of employee is : "<<name;
				cout<<"\nThe name of the company is : "<<company_name;
				cout<<"\nThe role of employee is : "<<role;
				cout<<"\nThe city of employee is : "<<city;
				cout<<"\nThe id of employee is : "<<id;
				cout<<"\nThe age of employee is : "<<age;
				cout<<"\nThe salary of employee is : "<<salary;
				cout<<"\nThe employee has given year of experience  : "<<experience;
			}
			
		}
};

main(){
      
        emp e;
        e.input();
        e.output();
}
