#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int>l={1,5,8,9};

    for(auto it: l)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    l.remove(5);
    for(auto it=l.begin(); it!=l.end();it++)
    {
        cout<<*it<<" ";
    }
    return 0;

}
