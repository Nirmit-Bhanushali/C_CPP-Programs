#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    int &ref = a; // ref is a reference to a
    cout << "Value of a: " << a << endl; // Output: 10
    cout << "Value of ref: " << ref << endl; // Output: 10
    //memory address of a and ref
    cout << "Memory address of a: " << &a << endl; // Output: address of a
    cout << "Memory address of ref: " << &ref << endl; // Output: address of a (same as a)
    return 0;
}
