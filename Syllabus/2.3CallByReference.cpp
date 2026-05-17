// 2.3 WAP to exchange contents of two variables using call by reference.
// 2.3CallByReference.cpp
#include <iostream>
using namespace std;

// Function using call by reference
void swapNumbers(int &a, int &b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;
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

    cout << "\nAfter Swapping:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}