#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<int>q; // First in First Out

    //cout<<q.front()<<endl; // Wrong kyuki Queue khali ha

    q.push(9);
    q.push(0);
    q.push(1);
    q.push(10);
    q.push(8);
    q.push(2);

     int n=q.size();
     cout<<"Size of the Queue="<<n<<endl;

    cout<<q.front()<<endl; // Print 9
    cout<<q.front()<<endl; // Print 9

    q.pop(); //Delete 9

    cout<<q.front()<<endl; // Print 0

    q.pop();// Delete 0

    cout<<q.front()<<endl; // Print 1
    cout<<q.front()<<endl; // Print 1

    q.pop();
    cout<<q.front()<<endl; //Print 10

    while(!q.empty())
    {
        q.pop();
    }
    //cout<<q.front()<<endl; // Wrong kyuki Queue khali hochuka ha
    return 0;

}

