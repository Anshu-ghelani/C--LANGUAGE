#include <iostream>
using namespace std;

class GroceryItem {
	
public:
    int itemNumber;
    string itemName;
    double itemPrice;
    string itemUnit;

    GroceryItem(int number, string name, double price, string unit) {
    	
        itemNumber = number;
        itemName = name;
        itemPrice = price;
        itemUnit = unit;
    }
};

int main() {

    GroceryItem a[10] = {
    	
    	  {1, "Sugar", 90, "kg"},
        {2, "potatoes", 40, "kg"},
        {3, "Tomatoes", 30, "kg"},
        {4, "Rise", 100, "kg"},  
        {5, "Bananas", 45, "kg"},
        {6, "Apples", 60, "kg"},
        {7, "Bread", 50, "unit"},
        {8, "Milk", 55, "liter"},
        {9, "Salt", 20, "kg"},
        {10, "Cheese", 275, "kg"},
          
    };

    for (int i = 0; i < 10; i++) {
    	
        cout<<"Item "<<i+1<<":"<<a[i].itemName<<","<<a[i].itemPrice<<" rupees per "<<a[i].itemUnit<<endl;
    }

	int cart[20];
	int choice=1, i=0 ; 
	float price=0;
	cout<<endl;
	while(choice!=0)
	{
		cout<<"Pick an item by number or press 0 to get bill : "; cin>>cart[i]; 
		choice=cart[i];
		i++; 
	}
	cout<<"\n\n\n\t\t-------------------------------------";
	cout<<"\n\t\tItems in your shopping cart : \n";
	cout<<"\t\t--------------------------------------\n";
	 for (int i=0;cart[i]!=NULL;i++) 
	 {
	  int j=cart[i];
	 	
        cout<<"\t\tItem "<< j << ": "<<a[j-1].itemName<<","<<a[j-1].itemPrice<<" rupees per "<<a[j-1].itemUnit<<endl;
        price=price+a[j-1].itemPrice;
        
       }	
   
	cout<<"\t\t-------------------------------------";
	cout<<"\n\t\tYour Bill is : "<<price<<" Rupees.";
	cout<<"\n\t\t-------------------------------------";
	cout<<"\n\t\tAfter 10 % discount : "<<price-price/10<<" Rupees.";
	cout<<"\n\t\t--------------------------------------";
			
    return 0;
}
