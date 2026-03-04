#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    if(num1 > num2)
    {
        cout << "The first number is greater than the second number.";
    }
    else if(num1 < num2)
    {
        cout << "The first number is less than the second number.";
    }
    else
    {
        cout << "The first number is equal to the second number.";
    }

    return 0;
}
