#include<iostream>
using namespace std;
// Operators overloading meani redefine the meaning of operator
class Complex{

    int real, img;
    public:
     Complex(int real, int img){
        this->real = real;
        this->img = img;
     }
    void display(){
        cout<<real<<" + "<<img<<"i"<<endl;
    }
    Complex operator+(Complex const &obj){
        Complex res(real + obj.real, img + obj.img);
        return res;
    }
};
int main (){
    Complex c1(3,4);
    Complex c2(2,1);
    Complex c3 = c1 + c2;
    c3.display();
}