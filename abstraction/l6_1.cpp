#include<iostream>
using namespace std;

class Admin
{
	string company_name;
	int manager_salary;
    char can_terminate;
    public:
    void input(){
    	cout<<"Enter the name of company : "; cin>>company_name;
    	cout<<"Enter the salary of manager : "; cin>>manager_salary;
    	cout<<"Enter the y for terminate and n for not terminate : "; cin>>can_terminate;
	}
	void myAccess(){
		cout<<"The name of the comapny is : "<<company_name<<endl;
		cout<<"The salary of the manager is : "<<manager_salary<<endl;
	    cout<<"Can company terminate ? : "<<can_terminate<<endl;
	}	
};
class Manager : public Admin 
{
	int total_staff,total_annual_revenue;
	public:
    void input(){
    	cout<<"Enter the number of staff : "; cin>>total_staff;
    	cout<<"Enter the annual revenue : "; cin>>total_annual_revenue;
	}
	void myAccess(){
		cout<<"The number of staff is : "<<total_staff<<endl;
		cout<<"The total revenue is : "<<total_annual_revenue<<endl;
	}
};
class Employee : public Manager
{
	int employee_salary;
	public:
    void input(){
    	cout<<"Enter the salary of employee : "; cin>>employee_salary;
    	cout<<"================================================="<<endl;
	}
	void myAccess(){
		cout<<"The salary of the employee is : "<<employee_salary<<endl;
	}
};

main(){
	Employee e;
	e.Admin::input();
	e.Manager::input();
	e.Employee::input();
	
	e.Admin::myAccess();
	e.Manager::myAccess();
	e.Employee::myAccess();
}
