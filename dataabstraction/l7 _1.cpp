#include<iostream>
using namespace std;

class div{
	int a,b,c;
	public :
		
		void input(){
			cout<<"Enter the value of a : "; cin>>a; 
			cout<<"Enter the value of b : "; cin>>b;		
		}
	try{
		if(b==0){
			throw b;
		}else{
			c=a/b;
			cout<<c<<endl;
		}catch(int b){
			cout<<"Can't divided by zero"<<endl;
		}
	}
};
class ageverification{
	int age;
	public :
		void input(){
			cout<<"\nEnter the age : "; cin>>age; 
		}
    	try{
		if(age>=18){
			throw age;
		}else{
	     	cout<<"\nYou are eligible to vote, because your age is greater than 18"<<endl;
		}catch(int age){
			cout<<"\nYou can not vote!";
		}
	}	
	
};
class passverification{
	string pass;
	int flag=0;
	
	public :
		
		void input()
		{
			cout<<"\n\nEnter the password : "; cin>>pass;
		}
		
		void check_pass()
		{
			for(int i=0 ; pass[i]!=NULL ; i++)
			{
				if(pass[i]>=65 && pass[i]<=90)
				{
					flag++;
				}
			}
			
			try{
				if(flag>=1)
				{
					cout<<"\nThe password is valid and it contains at least one capital letter.";
				}
				else
				{
					throw flag;
				}
			}
			
			catch(int flag)
			{
				cout<<"\nThe password must contain at least one capital letter. ";
			}
		}
};
main()
{
	int x;
	
	cout<<"press 1 for division \n";
	cout<<"press 2 to verify age \n";
	cout<<"press 3 to verify password \n";
	cout<<"Press 1 , 2 or 3 : "; cin>>c;
	
	switch(c)
	{
		case 1 :
					
			div d1;
			d1.input();
			d1.output();
			break;
	
		case 2 :
			
			age_verify a1;
			a1.input();
			a1.output();
			break;
	
		case 3 :
			
			pass_verify p1;
			p1.input();
			p1.check_pass();
			break;
	
	}
}
