#include<iostream>
using namespace std;
int main()
{
    int n,count=0,i;
    cout<<"enter number";
    cin>>n;
    for(i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
        count=count+1;
        break;
        }
    }
    if(count==0)
    {
        cout<<"Given number is prime";
    }
    else
    {
        cout<<"Not prime";
    }
    return 0;
}