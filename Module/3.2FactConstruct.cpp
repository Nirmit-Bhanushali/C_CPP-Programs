#include "iostream"

using namespace std;
class Factorial
{
private:
    int n;
    long fact;

public:
    // Parameterized constructor
    Factorial(int num)
    {
        n = num;
        fact = 1;

        // Automatically calculating factorial
        if (n < 0)
        {
            fact = 0; // Indicating error for negative numbers
        }
        else
        {
            for (int i = 1; i <= n; i++)
            {
                fact = fact * i;
            }
        }

        // Automatically display the result
        display();
    }

    void display()
    {
        if (fact == 0)
        {
            cout << "\nFactorial of negative numbers is not defined.";
        }
        else
        {
            cout << "\nFactorial of " << n << " is: " << fact;
        }
    }
};

int main()
{
    int val;

    cout << "Enter a number to find its factorial: ";
    cin >> val;

    // Creating object automatically triggers the constructor
    Factorial obj(val);
    return 0;
}