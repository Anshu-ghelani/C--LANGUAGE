#include<iostream>
using namespace std;

class c{
	int id,rating,e_year,s_quantity;
	char type;
	string name;
	
	public:
		    c(){
			cout<<"Enter the name of cafe : ";
			cin>>name;
			cout<<"Enter the type of cafe (type r for rooftop or type n for normal): ";
			cin>>type;
			cout<<"Enter the id of cafe : "<<endl;
			cin>>id;
			cout<<"Enter the establish year of cafe : ";
			cin>>e_year;
			cout<<"Enter the staff quantity of cafe : ";
			cin>>s_quantity;
			cout<<"Enter the rating for cafe : ";
			cin>>rating;
		}

		void output2(){
			cout<<endl;
			cout<<"The name of cafe is : "<<name<<endl;
			cout<<"The type of cafe is : "<<type<<endl;
			cout<<"The id of cafe is : "<<id<<endl;
			cout<<"The establish year of cafe is : "<<e_year<<endl;
			cout<<"The staff quantity of cafe is : "<<s_quantity<<endl;
			cout<<"The rating for cafe is : "<<rating<<endl<<endl;
		}		
};

int main(){
	int i,n;
	
	cout<<"Enter the number of cafe : ";
	cin>>n;
	
	c h[n];
	
	for(i=0;i<n;i++)
	{
	
		h[i].output2();
	
		cout<<"======================================"<<endl<<endl;
	}
	return 0;
}
