// 1.1	WAP to calculate factorial of a given number n.
// 1.1Factorial.cpp
#include <iostream>
using namespace std;

int main()
{
    int n, fact = 1;

    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    cout << "Factorial of " << n << " is " << fact;

    return 0;
}