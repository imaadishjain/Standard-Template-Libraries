#include<bits/stdc++.h>
using namespace std;

int main()
{
    array<int,5>a={1,2};

    a.fill(10); // a.fill(10) Sara Eement ko 10 sa bhar dega
    for(int i=0;i<5;i++)
    {
        cout<<a.at(i)<<" ";// a.at(i) particular element ki value dega
    }
    return 0;
}
