#include<iostream>
using namespace std;

main()
{
	int n,a[n];
	
	cout<<"Enter the size of array : ";
	cin>>n;
	
	int i;
	
	for(i=0;i<n;i++)
	{
		cout<<"Enter elements : ";
		cin>>a[i];
	}
	cout<<"\n";
	
	for(i=0;i<n;i++)
	{
		cout<< a[i] ;	
	}
	cout<<"\n";
	cout<<"\n";
	cout<<"Even number of the array is : ";
	for(i=0;i<n;i++)
	{
		if(i%2!=0)
		{
		cout<< a[i];	
		}	
	}
}
