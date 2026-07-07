// 4.5 Create a class item, having two data members x & y, overload ‘-‘(unary operator) to change the sign of x and y.
// 4.5OverloadingUnary.cpp
#include <iostream>
using namespace std;

class Item
{
private:
    int x, y;

public:
    // Function to input values
    void getData()
    {
        cout << "Enter value of x: ";
        cin >> x;

        cout << "Enter value of y: ";
        cin >> y;
    }

    // Unary - operator overloading
    void operator-()
    {
        x = -x;
        y = -y;
    }

    // Function to display values
    void display()
    {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }
};

int main()
{
    Item obj;

    // Input values
    obj.getData();

    cout << "\nBefore Changing Sign:" << endl;
    obj.display();

    // Unary operator call
    -obj;

    cout << "\nAfter Changing Sign:" << endl;
    obj.display();

    return 0;
}