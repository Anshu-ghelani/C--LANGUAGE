#include <iostream>
using namespace std;

class Mother {
public:
    void display() {
        cout << "I'm the mother." << endl;
    }
};

class Daughter : public Mother {
public:
    void display() {
        cout << "I'm the daughter." << endl;
    }
};

main() {
    Daughter d;
    d.display();
    d.Mother::display();
}
