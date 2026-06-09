// Write a program for swapping the values of two variables.
#include "iostream"

using namespace std;
int main()
{
    int m, n;
    cout << "Enter two numbers" << endl;
    cin >> m;
    cin >> n;
    cout << "Values before swapping" << endl;
    cout << "m=" << m << endl
         << "n=" << n << endl;
    int temp;
    temp = m;
    m = n;
    n = temp;
    cout << "After swapping the values are " << endl;
    cout << "m=" << m << endl
         << "n=" << n << endl;
    return 0;
}