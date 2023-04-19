#include<iostream>
using namespace std;

class c{
	int id,reve,i_r_dmd,e_dmd,s_quantity;
	string name,c_name;
	
	public:
		    c(int i_r_dmd,int e_dmd, int s_quantity){
			cout<<"Enter the name of diamond company : ";
			cin>>name;
			cout<<"Enter the name of CEO : ";
			cin>>c_name;
			cout<<"Enter the id of the company : ";
			cin>>id;
			cout<<"Enter the revenue of diamond company : ";
			cin>>reve;
			this->i_r_dmd=i_r_dmd;
			this->e_dmd=e_dmd;
			this->s_quantity=s_quantity;
			
		}

		void output2(){
			cout<<endl;
			cout<<"The name of diamond company is : "<<name<<endl;
			cout<<"The name of CEO of diamond company is : "<<c_name<<endl;
			cout<<"The id of diamond company is : "<<id<<endl;
			cout<<"The revenue of diamond company is : "<<reve<<endl;
			cout<<"The number of imported raw diamond of the diamond company is : "<<i_r_dmd<<endl<<endl;
			cout<<"The number of exported diamond of diamond company is : "<<e_dmd<<endl;
			cout<<"The staff quantity of diamond company is : "<<s_quantity<<endl;
		}		
};

int main(){
	int i,n;
	
	cout<<"Enter the number of cafe : ";
	cin>>n;
	       
	        int i_r_dmd,e_dmd,s_quantity;
	        cout<<"Enter the imported raw diamonds of diamond company : ";
			cin>>i_r_dmd;
			cout<<"Enter the exported diamonds of diamond company : ";
			cin>>e_dmd;
			cout<<"Enter the staff quantity of diamond company : ";
			cin>>s_quantity;
			
	c h[n];

	
	for(i=0;i<n;i++)
	{
	
		h[i].output2();
	
		cout<<"======================================"<<endl<<endl;
	}
	return 0;
}
