#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>>a;// a is a two dimensional vector

    vector<int>raj1;
    raj1.push_back(2);
    raj1.push_back(7);
    raj1.push_back(4);
    raj1.push_back(5);

    vector<int>raj2(4,2);//{2,2,2,2}
    vector<int>raj3(5);//{0,0,0,0,0}

    a.push_back(raj1);
    a.push_back(raj2);
    a.push_back(raj3);

    cout<<"Size of Two Dimensional vector a="<<a.size()<<endl;

    // Printing a

    cout<<"Printing By Traditional Method"<<endl;

    for(int i=0;i<a.size();i++)
    {
        for(int j=0;j<a[i].size();j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Printing By Iterators"<<endl;
    for(auto it1: a)
    {
        for(auto it2: it1)
        {
            cout<<it2<<" ";
        }
        cout<<endl;
    }
    return 0;


}

