#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<int>ust={1,0,8,3,9,8,9};  // Store Unique element in any order
    for(auto it: ust)
    {
        cout<<it<<" ";
    }
    ust.clear();
}
