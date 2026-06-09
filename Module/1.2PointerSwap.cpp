#include "iostream"

using namespace std;
void swap(int *x, int *y) // call by pointers mechanism
{
    int temp = *x;
    *x = *y;
    *y = temp;
    cout << "x=" << *x << endl
         << "y=" << *y << endl;
    cout << "after swapping in swap function" << endl;
}
int main()
{
    int a, b;
    a = 10;
    b = 20;
    cout << endl
         << "Before callign swap function" << endl;
    cout << "a=" << a << endl
         << "b=" << b;
    swap(&a, &b); // call by pointers
    cout << endl
         << "After callign swap function" << endl;
    cout << "a=" << a << endl
         << "b=" << b;
    return 0;
}