#include<iostream>
using namespace std;

class car {
	char color[20],model[20],company_name[20];
	int id,r_year,i;
	
	public :
		void input (){
		      
		       for(i=0;i<2;i++)
		       {
		       		cout<<"Enter the company name : ";
		       		cin>>company_name;
		       		cout<<"Enter the car model : ";
		       		cin>>model;
		       		cout<<"Enter the color : ";
		       		cin>>color;
		            cout<<"Enter the id : ";
		       		cin>>id;
					cout<<"Enter the release year : ";
		       		cin>>r_year;
						
			   }
			
		}
		void output(){
			
			for(i=0;i<2;i++)
			{
				cout<<"\n===========================================";
				cout<<"\nThe name of the car company is : "<<company_name;
				cout<<"\nThe model of the car is  : "<<model;
				cout<<"\nThe color of car is : "<<color;
				cout<<"\nThe id of car is : "<<id;
				cout<<"\nThe release year of car is  : "<<r_year;
				
			}
			
		}
};

main(){
      
        car c;
        c.input();
        c.output();
}
