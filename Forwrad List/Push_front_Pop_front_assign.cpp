#include<bits/stdc++.h>
using namespace std;

void print(forward_list<int>l)
{
    for(auto it: l)
    {
        cout<<it<<" ";
    }
    cout<<endl;
}


int main()
{
    forward_list<int>l1{15,20,30,40};
    l1.push_front(10);
    l1.push_front(5);
    print(l1);
    cout<<endl;

    l1.pop_front();
    l1.pop_front();
    print(l1);
    cout<<endl;

    forward_list<int>l2;
    l2.assign({1,2,3,4});
    print(l2);
    cout<<endl;

    forward_list<int>l3;
    l3.assign(l2.begin(),l2.end());
    print(l3);
    cout<<endl;
    

    forward_list<int>l4;
    l4.assign(5,10);
    l4.push_front(5);

    print(l4);
    l4.remove(10);

    print(l4);
    return 0;
}