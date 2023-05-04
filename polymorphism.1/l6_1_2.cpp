#include<iostream>
using namespace std;

class cricket{
	public :
		int t20_over=20,test_over=90;
		void getTotalOvers()
		{
		cout<<"\nCricket is very famous game in India.";
		}
};

class t20 : public cricket{
	public :
		void getTotalOvers()
		{
			cout << "\nT20 over is : "<<t20_over;
		}
};

class test : public t20{
	public :
		void getTotalOvers()
		{
			cout << "\nTest match over : " <<test_over;
		}
};

int main()
{

	test t;
	
	t.getTotalOvers();
	t.t20::getTotalOvers();
	t.cricket::getTotalOvers();
}
