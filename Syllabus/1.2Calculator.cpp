// 1.2	WAP to do the following:
// Generate the following menu:
// 1.	Add two numbers.
// 2.	Subtract two numbers.
// 3.	Multiply two numbers.
// 4.	Divide two numbers.
// 5.	Exit.
// Ask the user to input two integers and then input a choice from the menu. Perform all the arithmetic operations which have been offered by the menu. Checks for errors caused due to inappropriate entry by user and output a statement accordingly.
// 1.2Calculator.cpp
#include <iostream>
using namespace std;

int main()
{
    int num1, num2, choice;

    for (;;) // Infinite for loop
    {
        cout << "\n===== MENU =====" << endl;
        cout << "1. Add two numbers" << endl;
        cout << "2. Subtract two numbers" << endl;
        cout << "3. Multiply two numbers" << endl;
        cout << "4. Divide two numbers" << endl;
        cout << "5. Exit" << endl;

        cout << "\nEnter first number: ";
        cin >> num1;

        cout << "Enter second number: ";
        cin >> num2;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Addition = " << num1 + num2 << endl;
            break;

        case 2:
            cout << "Subtraction = " << num1 - num2 << endl;
            break;

        case 3:
            cout << "Multiplication = " << num1 * num2 << endl;
            break;

        case 4:
            if (num2 != 0)
            {
                cout << "Division = " << (float)num1 / num2 << endl;
            }
            else
            {
                cout << "Error! Division by zero is not allowed." << endl;
            }
            break;

        case 5:
            cout << "Program Exited." << endl;
            return 0;

        default:
            cout << "Invalid choice! Please enter between 1 and 5." << endl;
        }
    }

    return 0;
}