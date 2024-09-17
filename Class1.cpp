#include<iostream>
using namespace std;
// class is user define data type which store variable and method
// It is bluedprint of object
class Stduent{
    
    public:
    // member variable
    string name;
    int age, roll_number;
    string grade;

    void print (){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll Number: " << roll_number << endl;
        cout << "Grade: " << grade << endl;
    }


};
// public private and protected are access specifier

int main(){
    Stduent s1;
    Stduent s2;
    // s1 is object  it is instance of class student
    // object is entity that has state and behaviour
    // object is real world thing like student, employee etc.
    // cout<<sizeO(s1) print the size of object

// dynamic object Student *s3= new Student;
    s1.name="Sourav Kumar Tiwari";
    s1.age=18;
    s1.roll_number=123;
    s1.grade="A+";
    s1.print();

    Stduent *s3= new Stduent;
    s3->name="rohit";
    s3->age=19;
    s3->roll_number=124;
    cout<<"s3 data if printed below";
    s3->print();
    
    cout<<sizeof(s1);
    return 0;
}

