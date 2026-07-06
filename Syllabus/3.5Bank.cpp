// 3.5 Write a class bank, containing data member: Name of Depositor, A/c type, Type of A/c, Balance amount. Member function: To assign initial value, To deposit an amount, to withdraw an amount after checking the balance (which should be greater than Rs. 500) , To display name & balance
// 3.5Bank.cpp
#include <iostream>
using namespace std;

class Bank
{
private:
    string depositorName;
    string accType;
    int accNumber;
    float balance;

public:
    // Function to assign initial values
    void assign()
    {
        cout << "Enter Depositor Name: ";
        cin >> depositorName;

        cout << "Enter Account Number: ";
        cin >> accNumber;

        cout << "Enter Account Type: ";
        cin >> accType;

        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    // Function to deposit amount
    void deposit()
    {
        float amount;

        cout << "\nEnter amount to deposit: ";
        cin >> amount;

        balance = balance + amount;

        cout << "Amount Deposited Successfully!" << endl;
    }

    // Function to withdraw amount
    void withdraw()
    {
        float amount;

        cout << "\nEnter amount to withdraw: ";
        cin >> amount;

        if (balance - amount >= 500)
        {
            balance = balance - amount;
            cout << "Withdrawal Successful!" << endl;
        }
        else
        {
            cout << "Insufficient Balance! Minimum Rs.500 must remain in account." << endl;
        }
    }

    // Function to display details
    void display()
    {
        cout << "\n----- Account Details -----" << endl;
        cout << "Depositor Name : " << depositorName << endl;
        cout << "Account Number : " << accNumber << endl;
        cout << "Account Type   : " << accType << endl;
        cout << "Balance Amount : Rs." << balance << endl;
    }
};

int main()
{
    Bank b;

    // Assign initial values
    b.assign();

    // Deposit amount
    b.deposit();

    // Withdraw amount
    b.withdraw();

    // Display final details
    b.display();

    return 0;
}