#include<iostream>
using namespace std;

main()
{
	int n,i;
	char s[20];
	
	cout<<"Enter the size of string : ";
	cin>>n;
	
	cout<<"Enter the string : ";
	for(i=0;i<n;i++)
	{
	     cin>>s[i];	
	}
	cout<<s[i]; 
	
	for(i=0;i<n;i++)
	{
	     if(s[i]>=97 && s[i]<=122)   
	     {
	     	s[i]-=32;
		 }
		 else 
		 {
		 	s[i]+=32;
		 }
	}
	cout<<"The string in toggle case is : ";
	for(i=0;i<n;i++)
	{
		cout<<s[i];
	}
}
