#include<iostream>
using namespace std;

class stud {
	int id,age,i;
	string name,crs,email,city,clg;
    
     public :
     	void setter (int s_id,int s_age,string s_name,string s_crs,string s_email,string s_city,string s_clg){
     		id=s_id;
     		age=s_age;
     		name=s_name;
     		crs=s_crs;
     		email=s_email;
     		city=s_city;
     		clg=s_clg;
		 }
		 void getter(){
		 	cout<<"\n=====================================\n";
		 	cout<<"The name of student : "<<name<<endl;
		 	cout<<"The id of student : "<<id<<endl;
		 	cout<<"The age of student : "<<age<<endl;
		 	cout<<"The course of student : "<<crs<<endl;
		 	cout<<"The email of student : "<<email<<endl;
		 	cout<<"The city of student : "<<city<<endl;
		 	cout<<"The college of student : "<<clg<<endl;
        	}
};

main()
{
	int s_id,s_age;
	string s_name,s_crs,s_email,s_city,s_clg;
	int i;
	stud s;
	
	for(i=0;i<2;i++)
	{
		
	cout<<"\n=====================================\n";
	cout<<"Enter the name : ";
	cin>>s_name;
	cout<<"Enter the course name : ";
	cin>>s_crs;
	cout<<"Enter the email : ";
	cin>>s_email;
	cout<<"Enter the city : ";
	cin>>s_city;
	cout<<"Enter the name of college : ";
	cin>>s_clg;
	cout<<"Enter the id : ";
	cin>>s_id;
	cout<<"Enter the age : ";
	cin>>s_age;
	
	s.setter(s_id,s_age,s_name,s_crs,s_email,s_city,s_clg);
    s.getter();
    }  
}

