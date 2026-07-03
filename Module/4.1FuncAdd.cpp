#include "iostream"

using namespace std;
long int sum(long int num1, long int num2)
{
    return (num1 + num2);
}

int main() // driver function
{
    long int a;
    long int b;
    cout << "Enter two numbers" << endl;
    cin >> a;
    cin >> b;
    long int res;
    res = sum(a, b);
    cout << "The Results=" << res;
    return 0;
}