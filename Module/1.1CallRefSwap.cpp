/* For swapping the values of two variables */
#include "iostream"

using namespace std;
void swap(int &m, int &n)
{
    cout << "The values of m and n before swapping- Within function" << endl;
    cout << "m=" << m << endl
         << "n=" << n << endl;
    int temp;
    temp = m;
    m = n;
    n = temp;
    cout << "The values of m and n after swapping - Within Function" << endl;
    cout << "m=" << m << endl
         << "n=" << n << endl;
}

int main()
{
    int x, y;
    x = 10;
    y = 20;
    cout << "The values of x and y before swapping" << endl;
    cout << "x=" << x << endl
         << "y=" << y << endl;
    swap(x, y);
    cout << "The values of x and y after swapping" << endl;
    cout << "x=" << x << endl
         << "y=" << y << endl;
    return 0;
}