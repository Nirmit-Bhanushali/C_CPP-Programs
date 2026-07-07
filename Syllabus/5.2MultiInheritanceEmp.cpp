// 5.2 Create two classes namely Employee and Qualification. Using multiple inheritance derive two classes Scientist and Manager. Take suitable attributes & operations. WAP to implement this class hierarchy.
// 5.2MultiInheritanceEmp.cpp
#include <iostream>
using namespace std;

// Base class 1
class Employee
{
protected:
    int empId;
    string empName;
    float salary;

public:
    void getEmployeeData()
    {
        cout << "Enter Employee ID: ";
        cin >> empId;

        cout << "Enter Employee Name: ";
        cin >> empName;

        cout << "Enter Salary: ";
        cin >> salary;
    }

    void displayEmployeeData()
    {
        cout << "Employee ID   : " << empId << endl;
        cout << "Employee Name : " << empName << endl;
        cout << "Salary        : " << salary << endl;
    }
};

// Base class 2
class Qualification
{
protected:
    string degree;
    string university;

public:
    void getQualificationData()
    {
        cout << "Enter Degree: ";
        cin >> degree;

        cout << "Enter University: ";
        cin >> university;
    }

    void displayQualificationData()
    {
        cout << "Degree        : " << degree << endl;
        cout << "University    : " << university << endl;
    }
};

// Derived class Scientist
class Scientist : public Employee, public Qualification
{
private:
    string researchField;

public:
    void getScientistData()
    {
        getEmployeeData();
        getQualificationData();

        cout << "Enter Research Field: ";
        cin >> researchField;
    }

    void displayScientistData()
    {
        cout << "\n----- Scientist Details -----" << endl;

        displayEmployeeData();
        displayQualificationData();

        cout << "Research Field: " << researchField << endl;
    }
};

// Derived class Manager
class Manager : public Employee, public Qualification
{
private:
    int teamSize;

public:
    void getManagerData()
    {
        getEmployeeData();
        getQualificationData();

        cout << "Enter Team Size: ";
        cin >> teamSize;
    }

    void displayManagerData()
    {
        cout << "\n----- Manager Details -----" << endl;

        displayEmployeeData();
        displayQualificationData();

        cout << "Team Size     : " << teamSize << endl;
    }
};

int main()
{
    Scientist s;
    Manager m;

    cout << "\nEnter Scientist Details:\n";
    s.getScientistData();

    cout << "\nEnter Manager Details:\n";
    m.getManagerData();

    cout << "\n\n===== Displaying Details =====\n";

    s.displayScientistData();
    m.displayManagerData();

    return 0;
}