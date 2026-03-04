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
    cout<<"The smallest value you entered is:"<<endl;
    int max=arr[0];
    for(int i=1;i<5;i++)
    {
        if(arr[i]<max)
        {
            max=arr[i];
        }
    }
    cout<<max<<endl;
    return 0;
}
