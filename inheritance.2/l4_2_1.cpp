#include<iostream>
using namespace std;

class A{
	int RBI;
	
	public :
		void ROI(){
			cout<<"Enter the interest of RBI : ";
			cin>>RBI;
			cout<<"Interest rate of RBI is : "<<RBI<<endl;
			cout<<"=====================================\n";
		}
		
};

class B : public A
{
	int SBI;
	
	public : 
	   void getROI(){
	   	    cout<<"Enter the interest of SBI : ";
			cin>>SBI;
			cout<<"Interest rate of SBI is : "<<SBI<<endl;
			cout<<"=====================================\n";
	   } 
};

class C : public A
{
	int BOB;
	
	public : 
	   void getROI(){
	   	    cout<<"Enter the interest of BOB : ";
			cin>>BOB;
			cout<<"Interest rate of BOB is : "<<BOB<<endl;
			cout<<"=====================================\n";
	   } 
};

class D : public A
{
	int ICIC;
	
	public : 
	   void getROI(){
	   	    cout<<"Enter the interest of ICIC : ";
			cin>>ICIC;
			cout<<"Interest rate of ICIC is : "<<ICIC<<endl;
			cout<<"=====================================\n";
	   } 
};

main(){
	
	B b1;
	C c1;
	D d1;
	b1.ROI();
	b1.getROI();
	c1.getROI();
	d1.getROI();
	
}
