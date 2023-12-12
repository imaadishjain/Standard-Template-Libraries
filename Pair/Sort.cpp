#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of array\n";
    cin>>n;
    pair<int,int>p[n];

    cout<<"Enter the pairs\n";
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a;cin>>b;
        p[i].first=a;
        p[i].second=b;
    }

    sort(p,p+n);
    
    cout<<"Printing the pairs in sorted order\n";
    for(int i=0;i<n;i++)
    {
        cout<<p[i].first<<" "<<p[i].second<<endl;
    }

    return 0;
}