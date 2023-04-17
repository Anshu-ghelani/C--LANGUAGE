#include<iostream>
using namespace std;

	class customer {
		
		int id,age,validity,mobile_no;
		string name,telecome_name,city;	
		
		public :
			
			setcust(int id,int age,int validity,int mobile_no,string name,string telecome_name,string city){
				
				this->id=id;
				this->age=age;
				this->validity=validity;
				this->mobile_no=mobile_no;
				this->name=name;
				this->telecome_name=telecome_name;
				this->city=city;	
			}
			
			getcust(){
				
			    cout<<"\nCustomer Name : "<<name ;
				cout<<"\nCustomer Telecome Brand Name : "<<telecome_name ;
				cout<<"\nCustomer City : "<<city ;
				cout<<"\nCustomer ID : "<<id ;
				cout<<"\nCustomer Age : "<<age ;
				cout<<"\nCustomer Validity : "<<validity ;
				cout<<"\nCustomer Mobile Number : "<<mobile_no ;
								
				cout<<"\n\n";
			}	
	};
	
main(){
	
	customer c;
		
	int id,age,validity,mobile_no;
	string name,telecome_name,city;	
			
	for(int i=0;i<5;i++)
	{	
		
		cout<<"Customer Name: "; 
		cin>>name ;
		cout<<"Customer Telecome Brand Name : "; 
		cin>>telecome_name ;
		cout<<"Customer City : "; 
		cin>>city ;
		cout<<"Customer ID : "; 
		cin>>id ;
		cout<<"Customer Age : "; 
		cin>>age ;
		cout<<"Simcard Validity : "; 
		cin>>validity ;
		cout<<"Customer Mobile Number : "; 
		cin>>mobile_no ;
				
		cout<<"\n";
		
		c.setcust(id,age,validity,mobile_no,name,telecome_name,city);
		c.getcust();		
	}
		
}
