// 5.1 Create a class Employee. Derive 3 classes from this class namely, Programmer, Analyst & Project Leader. Take attributes and operations on your own. WAP to implement this with array of pointers.
// 5.1PointerEmployee.cpp
#include <iostream>
using namespace std;

class Employee
{
protected:
    int id;
    string name;
    float salary;

public:
    void getData()
    {
        cout << "Enter Employee ID: ";
        cin >> id;

        cout << "Enter Employee Name: ";
        cin >> name;

        cout << "Enter Salary: ";
        cin >> salary;
    }

    virtual void display()
    {
        cout << "\nEmployee ID   : " << id << endl;
        cout << "Employee Name : " << name << endl;
        cout << "Salary        : " << salary << endl;
    }
};

class Programmer : public Employee
{
private:
    string language;

public:
    void getData()
    {
        Employee::getData();

        cout << "Enter Programming Language: ";
        cin >> language;
    }

    void display()
    {
        cout << "\n----- Programmer Details -----";
        Employee::display();
        cout << "Language      : " << language << endl;
    }
};

class Analyst : public Employee
{
private:
    string tool;

public:
    void getData()
    {
        Employee::getData();

        cout << "Enter Analysis Tool: ";
        cin >> tool;
    }

    void display()
    {
        cout << "\n----- Analyst Details -----";
        Employee::display();
        cout << "Tool Used     : " << tool << endl;
    }
};

class ProjectLeader : public Employee
{
private:
    int teamSize;

public:
    void getData()
    {
        Employee::getData();

        cout << "Enter Team Size: ";
        cin >> teamSize;
    }

    void display()
    {
        cout << "\n----- Project Leader Details -----";
        Employee::display();
        cout << "Team Size     : " << teamSize << endl;
    }
};

int main()
{
    Employee *emp[3];

    Programmer p;
    Analyst a;
    ProjectLeader pl;

    emp[0] = &p;
    emp[1] = &a;
    emp[2] = &pl;

    cout << "\nEnter Programmer Details:\n";
    p.getData();

    cout << "\nEnter Analyst Details:\n";
    a.getData();

    cout << "\nEnter Project Leader Details:\n";
    pl.getData();

    cout << "\n\n===== Employee Details =====\n";

    for (int i = 0; i < 3; i++)
    {
        emp[i]->display();
    }

    return 0;
}