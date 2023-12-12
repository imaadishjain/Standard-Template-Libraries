#include<bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int>mst={1,8,5,9,8,6,9,9}; // Stores each and every elememt in sorted manner
  cout<<endl;
    for(auto it: mst)
    {
        cout<<it<<" ";
    }
    cout<<endl;

    int c;
    c=mst.count(9);
    cout<<"The Number of times 9 number repeted="<<c<<endl;
    cout<<"The Numerof of the time 1 element is repeted="<<mst.count(*mst.begin())<<endl;
    mst.clear();
    return 0;
}
