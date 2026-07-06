// 4.1 WAP to define nested class ‘student_info’ which contains data members such as name, roll number and sex and also consists of one more class ‘date’ ,whose data members are day, month and year. The data is to be read from the keyboard & displayed on the screen.
// 4.1NestedClass.cpp
#include <iostream>
using namespace std;

class student_info
{
private:
    string name;
    int rollNo;
    char sex;

    // Nested class
    class date
    {
    private:
        int day, month, year;

    public:
        // Function to input date
        void getDate()
        {
            cout << "Enter Day: ";
            cin >> day;

            cout << "Enter Month: ";
            cin >> month;

            cout << "Enter Year: ";
            cin >> year;
        }

        // Function to display date
        void displayDate()
        {
            cout << day << "/" << month << "/" << year;
        }
    };

    // Object of nested class
    date dob;

public:
    // Function to input student details
    void getData()
    {
        cout << "Enter Student Name: ";
        cin >> name;

        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter Sex (M/F): ";
        cin >> sex;

        cout << "\nEnter Date of Birth:" << endl;
        dob.getDate();
    }

    // Function to display student details
    void display()
    {
        cout << "\n----- Student Information -----" << endl;
        cout << "Name        : " << name << endl;
        cout << "Roll Number : " << rollNo << endl;
        cout << "Sex         : " << sex << endl;

        cout << "Date of Birth : ";
        dob.displayDate();
    }
};

int main()
{
    student_info s;

    // Input details
    s.getData();

    // Display details
    s.display();

    return 0;
}