// 4.4 Write a class to concatenate two strings, overload (+) operator.
// 4.4OpeverloadConcat.cpp
#include <iostream>
using namespace std;

class String
{
private:
    string str;

public:
    // Function to input string
    void getString()
    {
        cout << "Enter string: ";
        cin >> str;
    }

    // Overloading + operator
    String operator+(String s)
    {
        String temp;
        temp.str = str + s.str;
        return temp;
    }

    // Function to display string
    void display()
    {
        cout << "Concatenated String = " << str << endl;
    }
};

int main()
{
    String s1, s2, s3;

    cout << "Enter first string:" << endl;
    s1.getString();

    cout << "\nEnter second string:" << endl;
    s2.getString();

    // Concatenate strings
    s3 = s1 + s2;

    // Display result
    s3.display();

    return 0;
}