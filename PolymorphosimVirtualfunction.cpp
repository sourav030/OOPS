#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() { 
        cout << "Base class show function." << endl;
    }

    void display() { 
        cout << "Base class display function." << endl;
    }
};

class Derived : public Base {
public:
    void show() override { 
        cout << "Derived class show function." << endl;
    }

    void display() { 
        cout << "Derived class display function." << endl;
    }
};

int main() {
    Base* basePtr;
    Derived derivedObj;

    basePtr = &derivedObj;

    
    basePtr->show();  

    
    basePtr->display(); 

    return 0;
}
