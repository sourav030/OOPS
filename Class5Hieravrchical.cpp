#include <iostream>
using namespace std;

class Parent {
public:
    void display() {
        cout << "This is the parent class." << endl;
    }
};

class Child1 : public Parent {
public:
    void show1() {
        cout << "This is child 1 class." << endl;
    }
};

class Child2 : public Parent {
public:
    void show2() {
        cout << "This is child 2 class." << endl;
    }
};

// Example usage
int main() {
    Child1 child1;
    child1.display();
    child1.show1();

    Child2 child2;
    child2.display();
    child2.show2();
    return 0;
}
