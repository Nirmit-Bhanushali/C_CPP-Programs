#define ROW 3
#define COL 3

#include "iostream"

using namespace std;
int main()
{
    int A[ROW][COL];
    // int T[ROW][COL];
    int i, j;

    cout << "Enter 9 elements of original matrix" << endl;
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            cin >> A[i][j];
        }
    }

    cout << "The original matrix is" << endl;

    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }

    int temp;

    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {

            if (i <= j)
            {
                temp = A[i][j];
                A[i][j] = A[j][i];
                A[j][i] = temp;
            }
        }
    }

    cout << "The trasponse of the given matrix is" << endl;

    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}