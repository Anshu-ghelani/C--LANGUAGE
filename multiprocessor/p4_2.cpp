#include<iostream>
using namespace std;

class A {
    int km, km1, km2, m, m1, m2;
	
    public:
    void input() {
    	cout << "Enter first distance :\n ";
        cout << "Enter kilometer : ";
        cin >> km1;
        cout << "Enter meter : ";
        cin >> m1;
        
        cout << "Enter second distance :\n ";
        cout << "Enter kilometer : ";
        cin >> km2;
        cout << "Enter meter : ";
        cin >> m2;
        
    }

    A operator+(A a2) {
        km = km1 + km2;
        m = m1 + m2;
    
        if (m >= 1000) {
        km += 1;
        m -= 1000;
        
        }
        cout << "The total distance is : " << km << " kilometer " << m << " meter ";
        A a3;
        return a3;
    }
};

int main() {
    A a1;
    A a2;
    A a3;
	
    
    a2.input();
    a3 = a1 + a2;

    return 0;
}

