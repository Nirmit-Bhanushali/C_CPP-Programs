#include "iostream"

using namespace std;
class B;
class Student
{
private: // hidden - encapsulation
    int marks1;
    int marks2;
    int total;
    char name[10]; // Array of characters is called as string
public:            // not hidden
    friend int main();
    // friend void B::getSData(Student s1);
    friend class B;
    void read();
    void display();
};

class B
{
public:
    void getSData(Student s1)
    {
        cout << endl
             << "the Student name=" << s1.name << endl;
    }
};

void Student::read()
{
    cout << endl
         << "Enter student name" << endl;
    cin >> name;
    cout << "Enter marks of subject 1" << endl;
    cin >> marks1;
    cout << "Enter marks of subject 2" << endl;
    cin >> marks2;
    total = marks1 + marks2;
}
void Student::display()
{
    cout << endl
         << "Student Name=" << name;
    cout << endl
         << "\t Marks 1=" << marks1;
    cout << endl
         << "\t Marks 2=" << marks2 << endl;
    cout << endl
         << "\t Total marks=" << total << endl;
}

int main() // driver function
{
    Student obj;
    obj.marks1 = 50;
    cout << endl
         << "the marks are" << obj.marks1 << endl;

    obj.read();
    obj.display();

    cout << endl
         << "Calling class B function" << endl;

    B Objb;
    Objb.getSData(obj);
    return 0;
}