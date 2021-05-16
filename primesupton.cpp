#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    int i,count=0;
    cout<<"Enter number";
    cin>>n;
    cin>>m;
    while (n)
    {
        for(i=1;i<m;i++)
        {
            if(m%i==0)
            {
                count=count+1;
            }
        }
        if(count==1)
        {
            cout<<m<<endl;
        }
        m=m+1;
        count=0;
        if(m>n)
        {
            break;
        }
    }
    return 0;
}