#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>>a(4,vector<int>(5,1));

    a.push_back(vector<int>(6,3));
    for(auto it1: a)
    {
        for(auto it2: it1)
        {
            cout<<it2<<" ";
        }
        cout<<endl;
    }
}
