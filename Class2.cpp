#include<iostream>
using namespace std;

class Student {
    string name;
    string roll_name;

    public:
    Student(){
        cout<<"constructor is called"<<endl;
        // Default constructor
    }
    Student(string name, string roll_name){
        this->name = name;
        this->roll_name = roll_name;
        // parameterized constructor
        // this store the address of object being passed to constructor
    }
    Student(Student &obj){
        name = obj.name;
        roll_name = obj.roll_name;
        // copy constructor
        // it is used to create a copy of existing object
    }
    void print(){
        cout<<"Name: "<<name<<", Roll Name: "<<roll_name<<endl;
    }
    // constructor is a method which is invoked automatic when object is created
    // It is used to initialize member variables of object
    // constructor name is same as class name and does not return type 

    // destructor is a method which is invoked automatic when object is destroyed
    // It is used to clean up the memory allocated by object
    ~Student(){
        cout<<endl<<"destructor is called"<<endl;
      
    }
    //constructor is called orderwise 
    // destructor is called in reverse order of constructor

};

int main(){
    Student s1  ;// default constructor is called
    Student s2("John Doe", "12345"); // parameterized constructor is called
    Student s3(s2); // copy constructor is called
    s3.print();
}