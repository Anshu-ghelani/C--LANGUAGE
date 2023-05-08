#include <iostream>
using namespace std;

class Animal {
public:
    string name;
    int age;
public:
    void set_value(string n, int a) {
        name = n;
        age = a;
    }
};


class Zebra : public Animal {
public:
    void set_value(string n, int a) {
        Animal::set_value(n, a);
        cout << "Name of the animal is " << name << ". It is " << age << " years old." << endl;
        cout << "It comes from new zeland." << endl;
        cout<<endl;
    }
};

class Dolphin : public Animal {
public:
    void set_value(string n, int a) {
        Animal::set_value(n, a);
        cout << "Name of the animal is " << name << ". It is " << age << " years old." << endl;
        cout << "It comes from deep inside of the ocean." << endl;
    }
};

main() {
	
	Animal a[2];
	
	cout<<"\nEnter the Name : "; cin>>a[0].name;
	cout<<"Enter the Age : "; cin>>a[0].age;
	
	cout<<"\nEnter the Name : "; cin>>a[1].name;
	cout<<"Enter the Age : "; cin>>a[1].age;
	cout<<"========================================================\n\n";
	
    Zebra z;
    z.set_value(a[0].name,a[0].age);

    Dolphin d;
    d.set_value(a[1].name,a[1].age);

}
