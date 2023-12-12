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
    list<int>l{10,20,30};

    l.sort(greater<int>());
    print(l);

    l.reverse();
    print(l);
    cout<<endl;

    list<int>l2{10,10,10,15,15,20,30,30,30};
    l2.unique();
    print(l2);

    l.merge(l2);
    print(l);
    return 0;
}