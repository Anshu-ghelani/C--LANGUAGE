#include<iostream>
using namespace std;

class time{
	int h,t,m,s;
	
	public :
		void input(){
			
			cout<<"Enter the seconds : ";
			cin>>t;
		}
		
		void output(){
			h=t/3600;
			t=t%3600;
			m=t/60;
			t=t%60;
			s=t;
			
			cout<<"\nseconds : "<<s<<"\nminutes : "<<m<<"\nhours : "<<h;
		}
};

int main()
{
    time t;
	t.input();
	t.output();
	
	return 0;
}

