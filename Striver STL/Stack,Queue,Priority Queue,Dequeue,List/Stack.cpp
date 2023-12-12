#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int>stk;  // Last In First Out

    // cout<<stk.top()<<endl;  // Ya galat ha kyuki stack khali ha

    stk.push(1);
    stk.push(8);
    stk.push(4);
    stk.push(0);
    stk.push(7);

    int n=stk.size();
    cout<<"The size of the stack="<<n<<endl;

    cout<<stk.top()<<endl; // Print the last element 7
    cout<<stk.top()<<endl; // Print the last element 7

    stk.pop();// Delete the last element 7

    cout<<stk.top()<<endl; // Print 0
    stk.pop(); // Delete 0

    cout<<stk.top()<<endl;// Print 4
    cout<<stk.top()<<endl;// Print 4
    stk.pop(); // Delete 4

    // To empty the stack

    while(!stk.empty())
    {
        stk.pop();
    }

    // cout<<stk.top()<<endl; //Ya wrong ha kyu ki stack kahli hochuka ha
    return 0;
}
