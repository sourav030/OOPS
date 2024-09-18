#include <iostream>
using namespace std;

class Base {
public:
    void display() {
        cout << "This is the base class." << endl;
    }
};

class Derived1 : public Base {
public:
    void show1() {
        cout << "This is derived class 1." << endl;
    }
};

class Derived2 : public Base {
public:
    void show2() {
        cout << "This is derived class 2." << endl;
    }
};

class HybridDerived : public Derived1, public Derived2 {
public:
    void show_hybrid() {
        cout << "This is the hybrid derived class." << endl;
    }
};
// ambiguity : It is the problem that arise due to more than one copy is create for one variable
// we can solve this problem by using virtual keywod in derived1 and derived2
// other method is using scope resolution operator tha is used in this code
int main() {
    HybridDerived hybrid;
    hybrid.Derived1::display(); // Specify the base class to call the display method
    hybrid.show1();
    hybrid.show2();
    hybrid.show_hybrid();
    return 0;
}
