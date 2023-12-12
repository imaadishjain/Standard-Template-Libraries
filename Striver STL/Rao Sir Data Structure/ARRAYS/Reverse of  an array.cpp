#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[10];
    int i,l,t;
    cout<<"Enter the size of array=";
    cin>>l;

    for(i=0;i<l;i++)
    {
        cin>>a[i];
    }

    for(i=0;i<l/2;i++)
    {
        t=a[i];
        a[i]=a[l-i-1];
        a[l-i-1]=t;
    }

    cout<<"Printig reversal array"<<endl;

    for(i=0;i<l;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
