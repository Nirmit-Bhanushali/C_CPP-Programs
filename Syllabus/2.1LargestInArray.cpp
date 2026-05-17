// 2.1 WAP to read a set of numbers in an array & to find the largest of them.
// 2.1LargestInArray.cpp
#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    // Input array elements
    cout << "Enter " << n << " numbers: " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Assume first element is largest
    int largest = arr[0];

    // Find largest element
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    cout << "Largest number = " << largest;

    return 0;
}