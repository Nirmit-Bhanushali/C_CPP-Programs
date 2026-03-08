#include <iostream>
using namespace std;

int main()
{
    int myNum;
    double myFloatNum;
    char myLetter;
    string myText;
    bool myBoolean;

    cout << "Enter an integer: ";
    cin >> myNum;

    cout << "Enter a decimal number: ";
    cin >> myFloatNum;

    cout << "Enter a character: ";
    cin >> myLetter;

    cout << "Enter a word: ";
    cin >> myText;

    cout << "Enter 1 for true or 0 for false: ";
    cin >> myBoolean;

    cout << "\nYou entered:\n";
    cout << myNum << endl;
    cout << myFloatNum << endl;
    cout << myLetter << endl;
    cout << myText << endl;
    cout << myBoolean << endl;

    return 0;
}