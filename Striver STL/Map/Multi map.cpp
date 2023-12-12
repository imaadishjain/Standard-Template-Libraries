#include<bits/stdc++.h>
using namespace std;

int main()
{
    multimap<char,int>mmpp; //Stores each and every element in sorted manner

    mmpp['A']=99;
    mmpp['M']=78;
    mmpp['B']=45;
    mmpp['a']=01;
    mmpp['A']=99;
    mmpp['B']=89;
    mmpp['B']=12;

    cout<<"Printing Multi map"<<endl;
    for(auto it: mmpp)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
    cout<<endl;

    cout<<"Printing Multi map"<<endl;
    for(auto it=mmpp.begin(); it!=mmpp.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }

    int c;
    c=mmpp.count('A');
    cout<<"The number of time A repeted="<<c<<endl;
    return 0;
}
