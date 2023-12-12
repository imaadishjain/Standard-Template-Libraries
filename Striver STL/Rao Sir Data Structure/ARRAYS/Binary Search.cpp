#include<bits/stdc++.h>
using namespace std;

int main()
{

    int a[10];
    int  i,x,n,low ,mid ,high,t=0;
    cout<<"Enter the size of sorted array"<<endl;
    cin>>n;
    cout<<"Enter the Element"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<"Ente the element to be search=";
    cin>>x;

    low=0;
    high=n-1;

    while(low<=high)
    {
        mid=(low+high)/2;

        if(a[mid]==x)
        {
            cout<<"Found and Position="<<mid+1<<endl;
            t++;
            break;
        }
        else if(a[mid]<x)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    if(t==0)
    {
        cout<<"Data Not Found";
    }
    return 0;

}
