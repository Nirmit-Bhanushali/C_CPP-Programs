#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter a number"<<endl;
    int a;
    cin>>a;
    int sum=0;
    for(int i=1;i<=a;i++)
    {
        sum+=i;
    }
    cout<<"The sum of first "<<a<<" natural numbers is "<<sum<<endl;
    return 0;
}
