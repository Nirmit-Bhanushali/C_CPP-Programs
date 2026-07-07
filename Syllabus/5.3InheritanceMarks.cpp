// 5.3 WAP to create a class student containing Name & class as parameters, create another class marks which inherit student class taking own data members as mark1 & mark2 &show result.
// 5.3InheritanceMarks.cpp
#include <iostream>
using namespace std;

// Base class
class Student
{
protected:
    string name;
    string studentClass;

public:
    void getStudentData()
    {
        cout << "Enter Student Name: ";
        cin >> name;

        cout << "Enter Class: ";
        cin >> studentClass;
    }

    void displayStudentData()
    {
        cout << "Student Name : " << name << endl;
        cout << "Class        : " << studentClass << endl;
    }
};

// Derived class
class Marks : public Student
{
private:
    float mark1, mark2, total, average;

public:
    void getMarks()
    {
        cout << "Enter Marks 1: ";
        cin >> mark1;

        cout << "Enter Marks 2: ";
        cin >> mark2;
    }

    void calculate()
    {
        total = mark1 + mark2;
        average = total / 2;
    }

    void displayResult()
    {
        cout << "\n----- Student Result -----" << endl;

        displayStudentData();

        cout << "Marks 1      : " << mark1 << endl;
        cout << "Marks 2      : " << mark2 << endl;
        cout << "Total Marks  : " << total << endl;
        cout << "Average      : " << average << endl;
    }
};

int main()
{
    Marks m;

    // Input student details
    m.getStudentData();

    // Input marks
    m.getMarks();

    // Calculate result
    m.calculate();

    // Display result
    m.displayResult();

    return 0;
}