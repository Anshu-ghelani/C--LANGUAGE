#include<iostream>

using namespace std;

class div{
	
	float a,b,c;
	
	public :
		
		void input(){
			cout<<"Enter the value of a : "; cin>>a; 
			cout<<"Enter the value of b : "; cin>>b;		
		}
		
		void output(){
			
			try{
				if(b!=0)
				{
					c=a/b;
					cout<<"\nThe division of "<<a<<" and "<<b<<" is : "<<c<<endl;
				}
				else
				{
					throw b ;
				}
			}
			catch(...)
			{
				cout<<"\nCan not divide by zero ";
			}
		}	
};

main()
{						
			div d1;
			d1.input();
			d1.output();
}
