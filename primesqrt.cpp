#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,count=0;
    cout<<"enter number";
    cin>>n;
    for(i=2;i<sqrt(n);i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==0)
    {
        cout<<"PRIME";
    }
    else
    {
        cout<<"not prime";
    }
    return 0;

}
