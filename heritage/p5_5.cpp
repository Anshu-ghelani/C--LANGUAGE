#include<iostream>

using namespace std ;

class val{
	
	protected :
	int a ;
	
	public :
		
		geta()
		{
			cout<<"Enter a value : "; cin>>a ;
		}
	
	
	
};

class square : public val
{
	
	public :
		sqr()
		{
			cout<<"\nThe sqaure of "<<a<<" is "<<a*a<<endl ;
		}
};


class cube : public val
{
	
	public :
		cb()
		{
			cout<<"\nThe cube of "<<a<<" is "<<a*a*a<<endl ;
		}
};


main()
{
	square s ; 
	cube c ;
	
	s.geta();
	s.sqr();
	
	c.geta();
	c.cb();
}
