#include "iostream"

using namespace std;
class Employee
{
private:
    char name[30];
    int employee_id;
    float salary;
    char designation[20];

public:
    // Function to take user input
    void getDetails()
    {
        cout << "\nEnter Employee Name: ";
        gets(name); // Using gets to allow spaces in names
        cout << "Enter Employee ID: ";
        cin >> employee_id;
        cout << "Enter Salary: ";
        cin >> salary;
        cout << "Enter Designation: ";
        cin >> designation;
    }

    // Function to display data
    void displayDetails()
    {
        cout << "\n--- Employee Profile ---";
        cout << "\nID: " << employee_id;
        cout << "\nName: " << name;
        cout << "\nDesignation: " << designation;
        cout << "\nSalary: " << salary;
        cout << "\n------------------------";
    }
};

int main()
{
    Employee emp;
    emp.getDetails();
    emp.displayDetails();
    return 0;
}