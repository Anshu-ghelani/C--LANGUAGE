#include<iostream>
using namespace std ;

class X 
{
  	public :
		int a,b,c ; 
};

class Y : public X
{
	int sum ;
	
	public :	
		void setData()
		{
			cout<<"Enter a : "; 
			cin>>a ;
			cout<<"Enter b : "; 
			cin>>b ;
			cout<<"Enter c : "; 
			cin>>c ;
		}
	
		void getData()
		{
			
		sum = a*a*a + b*b*b + c*c*c ;	
		cout<<"The answer is : "<<sum ;
			
		}
};

main()
{
	Y a1 ;
	a1.setData();
	a1.getData();
	
}
