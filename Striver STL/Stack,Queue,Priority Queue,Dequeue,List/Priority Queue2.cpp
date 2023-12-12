#include<bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int,vector<int>,greater<int>>pq;  // Store all element in Ascending manner

    pq.push(4);
    pq.push(6);
    pq.push(0);
    pq.push(1);
    pq.push(9);
    pq.push(3);

    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    return 0;
}
