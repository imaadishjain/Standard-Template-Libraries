#include<bits/stdc++.h>
using namespace std;

int main()
{

    deque<int>dq1; // We can initialized here

    dq1.push_front(5);
    dq1.push_front(9);
    dq1.push_front(4);
    dq1.push_front(0);
     int n;
     n=dq1.size();
     cout<<"Size of dq1="<<n<<endl;

     cout<<"Element in First position of dq1="<<dq1[0]<<endl;
     cout<<"Element in Second position of dq1="<<dq1.at(1)<<endl;

    for(auto it=dq1.begin();it!=dq1.end();it++)
    {
        cout<<*it<<" ";
    }
    dq1.clear();
    cout<<endl;

    deque<int>dq2;

    dq2.push_back(5);
    dq2.push_back(9);
    dq2.push_back(4);
    dq2.push_back(0);

    for(auto it: dq2)
    {
        cout<<it<<" ";
    }
    cout<<endl;

     deque<int>dq3;

    dq3.push_back(5);
    dq3.push_front(9);
    dq3.push_back(4);
    dq3.push_front(0);
    dq3.push_front(8);

    while(!dq3.empty())
    {
        cout<<*dq3.begin()<<" ";
        dq3.pop_front();
    }
    cout<<endl;

    deque<int>dq4={8,0,9,5,4};

    while(!dq4.empty())
    {
        cout<<*dq4.begin()<<" ";
        dq4.pop_back();
    }

    return 0;

}
