#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v={10,20,30,40};

    vector<int>:: iterator it1=v.begin();
    cout<<(*it1)<<endl;
    *it1=11;
    cout<<(*it1)<<endl;

    auto it2=v.end()-1;
    cout<<(*it2)<<endl;
    *it2=41;
    cout<<(*it2)<<endl;

    cout<<endl;

    auto it3=v.rbegin();
    cout<<(*it3)<<endl;
    *it3=40;
    cout<<(*it3)<<endl;

   /* Imp*/
    auto it4=v.rend()-1; 
    cout<<(*it4)<<endl;
    *it4=10;
    cout<<(*it4)<<endl;
    
    cout<<endl;   
    return 0;
}