#include "iostream"
#include <stdlib.h>

using namespace std;
class A
{
private:
    int x;
    float y;

public:
    A();
    A(int);
    A(int, float);

    ~A();

    void setValue(int, float);
    int getValueInt();
    float getValueFloat();
};

A::~A()
{
    cout << " \n \n The destructor Invoked !!\n\n"
         << endl;
}

A::A() // default constructor
{
    x = 10;
    y = 45.5;
    cout << "The Default constructor is invoked" << endl;
}

A::A(int a) // parameterized constructor
{
    x = a;
}

A::A(int a, float b)
{
    x = a;
    y = b;
}

void A::setValue(int a, float b)
{
    x = a;
    y = b;
}
int A::getValueInt()
{
    return (x);
}

float A::getValueFloat()
{
    return (y);
}

int main()
{
    A obj1; // this will invoke default constructor
    cout << "\n \n The value of variable=" << obj1.getValueInt() << "\n\n";

    A obj2(99);
    cout << "The value of variable=" << obj2.getValueInt() << endl;

    A obj3(88, 67.8);
    cout << "The value of variable=" << obj3.getValueInt() << endl;
    cout << "The value of variable=" << obj3.getValueFloat() << endl;

    obj1.setValue(50, 56.8);
    cout << "The value of variable=" << obj1.getValueInt();
    return 0;
}