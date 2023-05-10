#include<iostream>
using namespace std;
 
class A {
    public:
 
    void input() {
        cout << " This is class A " << endl;
    }
};
 
class B {
    public:
 
    void input() {
        cout << " This is class B " << endl;
    }
};

class C: public A, public B {
  
};

 
int main() {
 

    C c1;
    c1.A::input();
    c1.B::input();
 
    return 0;
}
