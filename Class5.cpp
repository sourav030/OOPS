//                          Inheritance
// capabilities of class to derive the property of another class
// Type of inheritance
// single inheritance
// multiple inheritance
// multilevel inheritance
// hierarchical inheritance
// hybrid inheritance

// Single inheritance : Single inheritance allows a derived class to inherit properties and methods from one base class
// multilevel inheritance: inherit the property of class that are already inherited by another class
// multiple inheritnace: inherit the property of more than one base class
// hierarchical inheritance: A sub class that are inherited by more than one clas
// hybrid inheritance: It is combination of more than one type of inheritance 

#include<iostream>
using namespace std;

class Animal{
    public:
    void eat(){
        cout<<"Animal is eating"<<endl;
    }
};

class Dog: public Animal{
    public:
    void bark(){
        cout<<"Dog is barking"<<endl;
    }
};

int main(){
    Dog d;
    d.eat(); // Animal is eating
    d.bark(); // Dog is barking

    return 0;
}
