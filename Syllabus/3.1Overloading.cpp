// 3.1 Calculate area of different geometrical figures (circle, rectangle, square, triangle) using function overloading.
// 3.1Overloading.cpp
#include <iostream>
using namespace std;

// Area of Circle
float area(float r)
{
    return 3.14 * r * r;
}

// Area of Rectangle
int area(int l, int b)
{
    return l * b;
}

// Area of Square
int area(int s)
{
    return s * s;
}

// Area of Triangle
float area(float b, float h)
{
    return 0.5 * b * h;
}

int main()
{
    int side, length, breadth;
    float radius, base, height;

    // Square
    cout << "Enter side of square: ";
    cin >> side;
    cout << "Area of Square = " << area(side) << endl;

    // Rectangle
    cout << "\nEnter length and breadth of rectangle: ";
    cin >> length >> breadth;
    cout << "Area of Rectangle = " << area(length, breadth) << endl;

    // Circle
    cout << "\nEnter radius of circle: ";
    cin >> radius;
    cout << "Area of Circle = " << area(radius) << endl;

    // Triangle
    cout << "\nEnter base and height of triangle: ";
    cin >> base >> height;
    cout << "Area of Triangle = " << area(base, height) << endl;

    return 0;
}