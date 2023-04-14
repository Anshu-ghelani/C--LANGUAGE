#include<iostream>
using namespace std;

class dis{
	int inch,inch1,inch2,feet,feet1,feet2;
	
	public :
		void input(){
			cout<<"Enter the first distance : ";
			cout<<"\nEnter the inch : ";
			cin>>inch1;
			cout<<"Enter the feet : ";
			cin>>feet1;
			cout<<"Enter the second distance : ";
			cout<<"\nEnter the inch : ";
			cin>>inch2;
			cout<<"Enter the feet : ";
			cin>>feet2;
		}
		void output(){
			inch=inch1+inch2;
			feet=feet1+feet2;
			
			while(inch>=12)
			{
				inch-=12;
				feet++;
			}
			cout<<"inch : "<<inch<<"\nfeet : "<<feet;
		}
};

main()
{
	dis d;
	d.input();
	d.output();
}
