// 2.2 WAP to exchange contents of two variables using call by value.
// 2.2CallByValue.cpp
#include <iostream>
using namespace std;

// Function using call by value
void swapNumbers(int a, int b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;

    cout << "\nInside Function:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

int main()
{
    int x, y;

    cout << "Enter first number: ";
    cin >> x;

    cout << "Enter second number: ";
    cin >> y;

    cout << "\nBefore Swapping:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    // Function call
    swapNumbers(x, y);

    cout << "\nAfter Function Call:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}