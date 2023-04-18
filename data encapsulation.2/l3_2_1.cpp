#include<iostream>
using namespace std;

class hotel{
	int id,rating,e_year,s_quantity,r_quantity;
	char type;
	string name;
	static string city;
	
	public:
		void input(){
			cout<<"Enter the name of hotel : ";
			cin>>name;
			cout<<"Enter the type of hotel (type h for hotel or type m for motel): ";
			cin>>type;
			cout<<"Enter the id of hotel : ";
			cin>>id;
			cout<<"Enter the establish year of hotel : ";
			cin>>e_year;
			cout<<"Enter the staff quantity of hotel : ";
			cin>>s_quantity;
			cout<<"Enter the room quantity of hotel : ";
			cin>>r_quantity;
			cout<<"Enter the rating for hotel : ";
			cin>>rating;
		}

		void output2(){
			cout<<endl;
			cout<<"The name of hotel is : "<<name<<endl;
			cout<<"The type of hotel is : "<<type<<endl;
			cout<<"The id of hotel is : "<<id<<endl;
			cout<<"The establish year of hotel is : "<<e_year<<endl;
			cout<<"The staff quantity of hotel is : "<<s_quantity<<endl;
			cout<<"The room quantity of hotel is : "<<r_quantity<<endl;
			cout<<"The rating for hotel is : "<<rating<<endl;
		}
		
		void output1(){
			cout<<"The location of hotel is : "<<city<<endl<<endl;
		}
};
string hotel::city="Surat";

int main(){
	int i,n;
	
	cout<<"Enter the number of hotel : ";
	cin>>n;
	
	hotel h[n];
	
	for(i=0;i<n;i++)
	{
		h[i].input();
		h[i].output2();
		h[i].output1();
		cout<<"======================================"<<endl<<endl;
	}
	return 0;
}
