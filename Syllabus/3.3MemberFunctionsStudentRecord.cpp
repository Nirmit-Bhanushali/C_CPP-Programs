// 3.3 WAP to maintain the student record which contains Roll number, Name, Marks1, Marks2, Marks3 as data member and getdata(), display() and setdata() as member functions.
// 3.3MemberFunctionsStudentRecord.cpp
#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;
    float marks1, marks2, marks3;

public:
    // Function to input data
    void getData()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Marks 1: ";
        cin >> marks1;

        cout << "Enter Marks 2: ";
        cin >> marks2;

        cout << "Enter Marks 3: ";
        cin >> marks3;
    }

    // Function to set data
    void setData(int r, string n, float m1, float m2, float m3)
    {
        rollNo = r;
        name = n;
        marks1 = m1;
        marks2 = m2;
        marks3 = m3;
    }

    // Function to display data
    void display()
    {
        cout << "\n----- Student Record -----" << endl;
        cout << "Roll Number : " << rollNo << endl;
        cout << "Name        : " << name << endl;
        cout << "Marks 1     : " << marks1 << endl;
        cout << "Marks 2     : " << marks2 << endl;
        cout << "Marks 3     : " << marks3 << endl;
    }
};

int main()
{
    Student s1;

    // Input student details
    s1.getData();

    // Display student details
    s1.display();

    return 0;
}