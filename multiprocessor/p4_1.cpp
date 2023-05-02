#include<iostream>
using namespace std;

class Message{
	string s1="Hi!!";
	
	public:
		
		Message(){
			
			cout<<s1;
		}
		
		Message(string s2){
			 
			cout<<endl<<s2;
		}
};

main(){
	
	string s;
	
	cout<<"\nEnter String : "; 
	cin>>s;

	Message m ;
	Message m0(s);
	
}
