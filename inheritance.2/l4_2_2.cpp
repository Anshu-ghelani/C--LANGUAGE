#include<iostream>
using namespace std;

class A{
	public:
	int a;
	
	public :
		void get(){
			cout<<"Enter the a : ";
			cin>>a;
			cout<<"=====================================\n";
		}
		
};

class B : public A
{
	public:
	int b;
	
	public : 
	   void get2(){
	   	    cout<<"Enter the b : ";
			cin>>b;
			cout<<"=====================================\n";
	   } 
};

class C : public A
{
	public:
	int c;
	
	public : 
	   void get3(){
	   	    cout<<"Enter the c : ";
			cin>>c;
			cout<<"=====================================\n";
	   } 
};

class D : public B,public C
{
	public:
	int d;
	
	public : 
	   void get4(){
	   	    cout<<"Enter the d : ";
			cin>>d;
			cout<<"=====================================\n";
			cout<<"The sum of all numbers is : "<<B::a+b+c+d<<endl;
			cout<<"=====================================\n";
	   } 
};

main(){

	D d1;
	d1.B::get();
	d1.get2();
	d1.get3();
	d1.get4();


}
