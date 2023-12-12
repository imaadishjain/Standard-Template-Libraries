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

    auto it=l.insert(l.begin(),5);
    print(l);
    it++;
    it=l.insert(it,2,9);
    print(l);

    it=l.erase(l.begin());
    print(l);

    list<int>l2;
    l2.insert(l2.begin(),l.begin(),l.end());
    print(l2);

    l2.remove(9);
    print(l2);
    return 0;
}