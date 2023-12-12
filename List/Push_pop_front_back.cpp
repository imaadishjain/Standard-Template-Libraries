#include<bits/stdc++.h>
using namespace std;

void print(list<int>l)
{
    for(auto it:l)
    {
        cout<<it<<" ";
    }
    cout<<endl;
}

int main()
{
    list<int>l{20,30};

    l.push_front(10);
    l.push_front(5);
    print(l);

    l.push_back(40);
    l.push_back(50);
    print(l);

    l.pop_front();
    l.pop_back();
    print(l);

    cout<<l.front()<<endl;
    cout<<l.back()<<endl;
    
    l.front()=0;
    l.back()=0;
    print(l);

    cout<<l.size()<<endl;
    return 0;
}