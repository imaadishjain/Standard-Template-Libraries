#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int>st1; // Stores unique element in sorted manner(Ascending)
    st1.insert(5);
    st1.insert(3);
    st1.insert(9);
    st1.insert(5);
    st1.emplace(1);

    for(int i=0;i<st1.size();i++)  // 1  5  3  9
    {
        cout<<*st1.begin()+i<<" ";
    }
    cout<<endl;

    set<int>st2={1,8,4,8,0}; //0 1 4 8
    set<int>st3(st1);// 0 1 4 8
    set<int>st4(st3.begin(),st3.end());// 0 1 4 8

    st2.erase(*st2.begin()+1);
    for(auto it: st2)
    {
        cout<<it<<" ";  //0 4 8
    }
    cout<<endl;
    st3.erase(0);//1 4 8
    st4.erase(st4.begin(),st4.end());//  Full Erase

    auto it=st1.find(1);
    cout<<*it<<endl;

    st1.clear();
}
