#include "iostream"
#include <string.h>

using namespace std;
class Student
{
private:
    int roll;      // data member of a class
    char name[30]; // data member of a class
    int marks1, marks2;

public:
    Student();
    Student(int, int);
    ~Student();
    int add(int, int);
    int add();
};
int Student::add()
{
    return (marks1 + marks2);
}

int Student::add(int a, int b)
{
    marks1 = a;
    marks2 = b;
    return (marks1 + marks2);
}

Student::Student() // default constructor
{
    roll = 1;
    strcpy(name, "amity_student");
    cout << "The constructor is invoked" << endl;
    cout << "Roll =" << roll << endl
         << "Name=" << name;
}

Student::~Student() // destructor
{
    cout << "\n \n Destructor invoked!" << endl;
}
Student::Student(int x, int y)
{
    cout << "\n The Parameterized constructor is invoked" << endl;
    marks1 = x;
    marks2 = y;
    cout << "the marks are =\n"
         << marks1 << endl
         << marks2;
}

int main()
{
    Student obj(60, 80);
    int total;
    cout << "\n\nthe total after parameterized constructor is called" << endl;
    cout << obj.add();

    total = obj.add(67, 87);
    cout << "\n The total=" << total;
    return 0;
}