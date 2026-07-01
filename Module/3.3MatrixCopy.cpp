#include "iostream"

using namespace std;
class Matrix
{
private:
    int mat[2][2];

public:
    // Constructor to initialize matrix values
    Matrix()
    {
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                mat[i][j] = 0;
            }
        }
    }

    // Function to input matrix elements
    void input()
    {
        cout << "Enter 4 elements for 2x2 matrix:\n";
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> mat[i][j];
            }
        }
    }

    // Overloading Assignment Operator (=)
    void operator=(const Matrix &m)
    {
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                this->mat[i][j] = m.mat[i][j];
            }
        }
    }

    // Function to display matrix
    void display()
    {
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cout << mat[i][j] << " ";
            }
            cout << "\n";
        }
    }
};

int main()
{
    Matrix m1, m2;

    cout << "For Matrix 1:\n";
    m1.input();

    // Using overloaded assignment operator
    m2 = m1;

    cout << "\nMatrix 1 (Original):\n";
    m1.display();

    cout << "\nMatrix 2 (Copied via = operator):\n";
    m2.display();
    return 0;
}