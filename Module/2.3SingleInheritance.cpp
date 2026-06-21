#include <iostream>
#include <string.h>

using namespace std;
class Person
{
private:
    char name[10];
    int age;

public:
    void setData()
    {
        strcpy(name, "Nirmit");
        age = 21;
    }
    void printData()
    {
        cout << "Name = " << name << endl;
        cout << "Age = " << age << endl;
    }
};

class Student : public Person
{
private:
    char program[10];
    int enrol;

public:
    void setStudent()
    {
        strcpy(program, "MCA");
        enrol = 52;
    }

    void printStudent()
    {
        cout << "Enrolment Number = " << enrol << endl;
        cout << "Program = " << program << endl;
    }
};

int main()
{
    Student obj;
    obj.setData();
    obj.setStudent();
    obj.printData();
    obj.printStudent();
    return 0;
}