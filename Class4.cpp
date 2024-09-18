#include<iostream>
using namespace std;

// inheritance
// Capability of class to derive the property oc characteristics from one class to another class
// inherit the property from parent class to child class

//              ExternalCode     withinClass   derived class
// Public           1               1               1
// Protected        0               1               1
// private          0               1               0

// 1 Means access in this class
// 0 means not access in this class

class Human {
    string name;
    int age;
    public:
    Human(string name, int age) {
        this->name = name;
        this->age = age;
    }
    void getName() {
        cout << "Name: " << name << endl;
    }
    void getAge() {
        cout << "Age: " << age << endl;
    }
};
class Men : public Human {
    string gender="male";
    string jobProfile;
    int salary;
    public:
        Men( string name, int age,  string jobProfile, int salary) :Human(name,age) // calling a base class constructor from derived class
         {
            
            this->jobProfile = jobProfile;
            this->salary = salary;
        }
        void displayDetails() {
            cout << "Name: " ;  // here we print the name and age of base class from getter becuase this is private member
            getName(); // calling a member function from base class from derived class
            cout << "Age: " ;
            getAge();
            cout << "Gender: " << gender << endl;
            cout << "Job Profile: " << jobProfile << endl;
            cout << "Salary: " << salary << endl;
        }
};

int main ()
{
    Men m1("dhoni",43,"WicketKeppers Batsman", 1800000);
    m1.displayDetails();
    return 0;
}

