// 4.3 Write a class string to compare two strings overload (= =) operator.
// 4.3Overload.cpp
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

    // Overloading == operator
    bool operator==(String s)
    {
        if (str == s.str)
            return true;
        else
            return false;
    }
};

int main()
{
    String s1, s2;

    cout << "Enter first string:" << endl;
    s1.getString();

    cout << "\nEnter second string:" << endl;
    s2.getString();

    // Compare strings
    if (s1 == s2)
    {
        cout << "\nStrings are Equal.";
    }
    else
    {
        cout << "\nStrings are Not Equal.";
    }

    return 0;
}