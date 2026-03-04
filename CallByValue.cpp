#include <iostream>
using namespace std;
void swap(int a, int b)
{
    cout << "Before swapping a=" << a << " b=" << b;
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "\nAfter swapping a=" << a << " b=" << b;
}
int main()
{
    int x = 10, y = 20;
    swap(x, y);
    return 0;
}
