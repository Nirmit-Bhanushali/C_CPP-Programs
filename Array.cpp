#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    cout<<"Enter 5 numbers"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    cout<<"The numbers you entered are:"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
