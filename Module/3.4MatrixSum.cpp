#include "iostream"

using namespace std;
int main()
{

    int mat[3][3];
    int i, j, rowSum;

    // Input the 3x3 matrix
    cout << "Enter elements for a 3x3 matrix:\n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> mat[i][j];
        }
    }

    // Calculate and display row-wise sum
    cout << "\nMatrix with Row-wise Sum:\n";
    for (i = 0; i < 3; i++)
    {
        rowSum = 0; // Reset sum for each new row
        for (j = 0; j < 3; j++)
        {
            cout << mat[i][j] << "\t";
            rowSum = rowSum + mat[i][j];
        }
        cout << "| Sum = " << rowSum << "\n";
    }
    return 0;
}