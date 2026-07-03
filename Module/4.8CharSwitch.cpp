#include "iostream"
#include "conio.h"

using namespace std;
int main() // driver function
{
    cout << "Enter a Character M or F to Select Gender Option\n";
    char ch;
    cin >> ch;

    switch (ch)
    {
    case 'M':
    case 'm':
        cout << "Gender Selection is Male" << endl;
        break;
    case 'F':
    case 'f':
        cout << "Gender Selection is Female" << endl;
        break;
    default:
        cout << "Invalid Selection" << endl;
    }
    return 0;
}