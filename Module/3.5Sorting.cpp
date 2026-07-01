#include "iostream"

using namespace std;
int main()
{

    int temp;
    int a[10] = {10, 8, 7, 3, 11, 12, 7, 8, 9, 1};
    int i, j;

    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {

            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for (i = 0; i < 10; i++)
    {
        cout << a[i] << endl;
    }
    return 0;
}