#include<iostream>
using namespace std;

class time{
	int h,h1,h2,m,m1,m2,s,s1,s2;
	
	public :
		void input(){
			cout<<"Enter the first time : ";
			cout<<"\nEnter the hours : ";
			cin>>h1;
			cout<<"Enter the minutes : ";
			cin>>m1;
			cout<<"Enter the seconds : ";
			cin>>s1;
			
			cout<<"Enter the second time : ";
			cout<<"\nEnter the hours : ";
			cin>>h2;
			cout<<"Enter the minutes : ";
			cin>>m2;
			cout<<"Enter the seconds : ";
			cin>>s2;
		}
		
		void output(){
			h=h1+h2;
			m=m1+m2;
			s=s1+s2;
			
			while(s>=60)
			{
				s-=60;
				m++;
			}
			while(m>=60)
			{
				m-=60;
				h++;
			}
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

