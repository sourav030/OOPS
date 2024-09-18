#include<iostream>
using namespace std;
// Static Data Members 
// This is attribute of class or class member
// only one copy of the member is created and share by all object
//by default is intialized with 0
class Employee {
        string name;
        int id;
        static int count; // static data member
        public:
        Employee(string name, int id){
            this->name = name;
            this->id = id;
            count++;
        }
// static member function
// it is function of class it only access only static data member function
        static int getCount(){
            return count;
        }
        void display(){
            cout<<"Name: "<<name<<", ID: "<<id<<", Count: "<<count<<endl;
        }
};
int Employee::  count=0;
//Encapsulation
// binding a data member and member function into single unit
// while controlling access to them
int main()
{
    Employee e("Dhoni",7); 
    Employee e1("Rohit",8);
    e.display();
    e1.display();
    cout<<"Total Employee: "<<Employee::getCount()<<endl;
    return 0;  
    // Abstraction
    // hiding internal details of class from user
    // only providing necessary information
}