#include "iostream"
#include "string.h"

using namespace std;
struct Employee // the members are by default public
{
    int emp_no;
    char name[20];
    int get_emp_no()
    {
        return (emp_no);
    }
};

class Student // the members are by default private
{
    // private:
    int roll;
    char name[20];

public:
    Student(int r)
    {
        this->roll = r;
    }

    void set_values(int r, char *n)
    {
        this->roll = r;
        strcpy(name, n);
    }

    int get_roll()
    {
        return (roll);
    }

    void set_name()
    {
        cout << "Enter student name" << endl;
        gets(name);
    }

    char *get_name()
    {
        return (name);
    }
};

int main()
{
    Employee e;
    Student s(20);

    e.emp_no = 100;
    cout << "Employee No." << e.get_emp_no() << endl;
    cout << "Roll No." << s.get_roll() << endl;
    s.set_name();
    cout << "Student Name=" << s.get_name() << endl;

    s.set_values(8, "Akash");
    cout << "Roll No." << s.get_roll() << endl;
    cout << "Student Name=" << s.get_name() << endl;

    cout << "Use of Pointer to object" << endl;

    Student *obj;
    obj = &s; // Point to the Student object
    obj->set_name();
    cout << "Name of the Student=" << obj->get_name() << endl;
}