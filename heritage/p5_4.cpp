#include <iostream>
using namespace std;

class emp1 {
	
	protected :
		
		int ID;
		string name,role;
		
	public :
		
		setdata1()
		{
			cout<<"Enter the ID : "; cin>>ID ;
			cout<<"Enter the name : "; cin>>name ;
			cout<<"Enter the role : "; cin>>role ;
		}
	
};


class emp2 {
	
	protected :
		
		int ID2;
		string name2,role2;
		
	public :
		
		setdata2()
		{
			cout<<"Enter the ID : "; cin>>ID2 ;
			cout<<"Enter the name : "; cin>>name2 ;
			cout<<"Enter the role : "; cin>>role2 ;
		}
	
};

class final : public emp1,public emp2
{
	
	public :
		
		printdata()
		{
			cout<<"Employee 1 :\n";
			cout<<"\t ID : "<<ID<<endl ;
			cout<<"\t Name : "<<name<<endl ;
			cout<<"\t Role : "<<role<<endl ;
			
			
			cout<<"Employee 2 :\n";
			cout<<"\t ID : "<<ID2<<endl ;
			cout<<"\t Name : "<<name2<<endl ;
			cout<<"\t Role : "<<role2<<endl ;
		}

};



main() {
	
	final f ;
	f.setdata1() ;
	f.setdata2() ;
	f.printdata() ;
	
}
