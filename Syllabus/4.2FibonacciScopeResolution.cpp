// 4.2 WAP to generate a series of Fibonacci numbers using copy constructor, where it is defined outside the class using scope resolution operator.
// 4.2FibonacciScopeResolution.cpp
#include <iostream>
using namespace std;

class Fibonacci
{
private:
    int a, b;

public:
    // Default constructor
    Fibonacci()
    {
        a = 0;
        b = 1;
    }

    // Copy constructor declaration
    Fibonacci(Fibonacci &f);

    // Function to display Fibonacci series
    void display(int n)
    {
        cout << a << " " << b << " ";

        int c;

        for (int i = 3; i <= n; i++)
        {
            c = a + b;
            cout << c << " ";

            a = b;
            b = c;
        }
    }
};

// Copy constructor defined outside class
Fibonacci::Fibonacci(Fibonacci &f)
{
    a = f.a;
    b = f.b;
}

int main()
{
    int n;

    cout << "Enter number of terms: ";
    cin >> n;

    Fibonacci f1;      // Original object
    Fibonacci f2 = f1; // Copy constructor called

    cout << "Fibonacci Series: ";
    f2.display(n);

    return 0;
}