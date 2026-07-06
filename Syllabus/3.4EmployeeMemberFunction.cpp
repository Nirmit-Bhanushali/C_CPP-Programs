// 3.4 WAP to increment the employee salaries on the basis of there designation (Manager-5000, General Manager-10000, CEO-20000, worker-2000). Use employee name, id, designation and salary as data member and inc_sal as member function (Use array of object).
// 3.4EmployeeMemberFunction.cpp
#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    string name;
    string designation;
    float salary;

public:
    // Function to input employee details
    void getData()
    {
        cout << "\nEnter Employee ID: ";
        cin >> id;

        cout << "Enter Employee Name: ";
        cin >> name;

        cout << "Enter Designation: ";
        cin >> designation;

        cout << "Enter Salary: ";
        cin >> salary;
    }

    // Function to increment salary
    void inc_sal()
    {
        if (designation == "Manager")
        {
            salary += 5000;
        }
        else if (designation == "GeneralManager")
        {
            salary += 10000;
        }
        else if (designation == "CEO")
        {
            salary += 20000;
        }
        else if (designation == "worker")
        {
            salary += 2000;
        }
        else
        {
            cout << "Invalid Designation!" << endl;
        }
    }

    // Function to display details
    void display()
    {
        cout << "\n----- Employee Details -----" << endl;
        cout << "Employee ID   : " << id << endl;
        cout << "Employee Name : " << name << endl;
        cout << "Designation   : " << designation << endl;
        cout << "Updated Salary: " << salary << endl;
    }
};

int main()
{
    int n;

    cout << "Enter number of employees: ";
    cin >> n;

    Employee emp[n]; // Array of objects

    // Input details
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details of Employee " << i + 1 << endl;
        emp[i].getData();
    }

    // Increment salary
    for (int i = 0; i < n; i++)
    {
        emp[i].inc_sal();
    }

    // Display updated details
    for (int i = 0; i < n; i++)
    {
        emp[i].display();
    }

    return 0;
}