#include <iostream>
#include <cmath> // For M_PI
using namespace std;

class Area {
public:
    // Method to calculate area of a circle
    void calculateArea(int r) {
        cout << "Area of circle: " << M_PI * r * r << endl; // Use M_PI for better precision
    }

    // Method to calculate area of a rectangle
    void calculateArea(int l, int b) {
        cout << "Area of rectangle: " << l * b << endl;
    }
};

int main() {
    Area a;
    a.calculateArea(5);      // Calls the circle area method
    a.calculateArea(4, 5);   // Calls the rectangle area method
    
    return 0;
}
