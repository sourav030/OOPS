#include <iostream>
using namespace std;

class Grandparent {
public:
    void display_grandparent() {
        cout << "This is the grandparent class." << endl;
    }
};

class Parent : public Grandparent {
public:
    void display_parent() {
        cout << "This is the parent class." << endl;
    }
};

class Child : public Parent {
public:
    void display_child() {
        cout << "This is the child class." << endl;
    }
};

// Example usage
int main() {
    Child child;
    child.display_grandparent();
    child.display_parent();
    child.display_child();
    return 0;
}
