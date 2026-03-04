#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int *ptr = &a; // ptr is a pointer to a
    cout << "Value of a: " << a << endl; // Output: 10
    cout << "Memory address of a: " << &a << endl; // Output: address of a
    cout << "Memory address stored in ptr: " << ptr << endl; // Output: address of a (same as &a)
    cout << "Value pointed to by ptr: " << *ptr << endl; // Output: 10
    return 0;
}
