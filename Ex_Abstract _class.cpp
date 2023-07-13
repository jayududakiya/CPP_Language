// C++ program to calculate the area of a square and a circle

#include <iostream>
using namespace std;

// Abstract class
class Shape {
   protected:
    float dimension;

   public:
    void get_Area() {
        cin >> dimension;
    }

    // pure virtual Function with Sam Name In All Derived Class Using Different Methods
    virtual float calculateArea() = 0; 
};

// First Derived class
class Square : public Shape {
   public:
    float calculateArea() {
        return dimension * dimension;
    }
};

// Second Derived class
class Circle : public Shape {
   public:
    float calculateArea() {
        return 3.14 * dimension * dimension;
    }
};

int main() {
    Square square; // first derived class 
    Circle circle; // second derived class 

// call form first derived class 
    cout << "Enter the length of the square: ";
    square.get_Area();
    cout << "Area of square is : " << square.calculateArea() << endl;

// call form second derived class 
    cout << "\nEnter radius of the circle: ";
    circle.get_Area();
    cout << "Area of circle is : " << circle.calculateArea() << endl;

    return 0;
}