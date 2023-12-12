#include<bits/stdc++.h>
using namespace std;


void sortone(int a[], char b[], int n)
{
    pair<int,char>p[n];

    for(int i=0;i<n;i++)
    {
        p[i]=make_pair(a[i],b[i]);
    }

    sort(p,p+n);

    for(int i=0;i<n;i++)
    {
        cout<<p[i].second<<endl;
    }
}

int main()
{
    int arr[]={3,1,2};
    char ch[]={'G','E','K'};
    
    cout<<"Printing character array sorted by First array\n";
    sortone(arr,ch,3);
    return 0;
}