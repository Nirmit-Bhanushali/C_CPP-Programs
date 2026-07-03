// 3.2 WAP to add two complex numbers using friend function.
// 3.2FriendFunc.cpp
#include <iostream>
using namespace std;

class Complex
{
    int real, imag;

public:
    // Function to input values
    void getData()
    {
        cout << "Enter real part: ";
        cin >> real;

        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    // Friend function declaration
    friend Complex addComplex(Complex c1, Complex c2);

    // Function to display result
    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

// Friend function definition
Complex addComplex(Complex c1, Complex c2)
{
    Complex temp;

    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;

    return temp;
}

int main()
{
    Complex c1, c2, result;

    cout << "Enter first complex number:" << endl;
    c1.getData();

    cout << "\nEnter second complex number:" << endl;
    c2.getData();

    // Call friend function
    result = addComplex(c1, c2);

    cout << "\nSum of complex numbers = ";
    result.display();

    return 0;
}