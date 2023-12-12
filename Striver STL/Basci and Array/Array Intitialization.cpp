#include<bits/stdc++.h>
using namespace std;

array<int,3>a; //{0,0,0} All the elment if array is taking zero by default

int main()
{
    int n=7;
    //array<int,n>e; // Ya galat ha
    array<int,3>b; //{gb,gb,gb} All the elment if array is taking garbage value by default
    array<int,5>c={1,2}; //{1,2,0,0,0};
    cout<<a[0]<<endl;
    cout<<b[0]<<endl;
    cout<<c[2]<<endl;
    return 0;

}
