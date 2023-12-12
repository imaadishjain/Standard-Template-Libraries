#include<bits/stdc++.h>
using namespace std;


void reversefirstk(queue<int>&q,int k)
{
    stack<int>st;
    int n=q.size();
    for(int i=1;i<=k;i++)
    {
        st.push(q.front());
        q.pop();
    }

    for(int i=1;i<=k;i++)
    {
        q.push(st.top());
        st.pop();
    }

    for(int i=1;i<=n-k;i++)
    {
        int x=q.front();
        q.pop();
        q.push(x);
    }

}


int main()
{
    queue<int>q;
    int n;
    cout<<"Enter the number of Element\n";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }    
    int k;
    cout<<"Enter the value of k=";
    cin>>k;
  reversefirstk(q,k);
  cout<<"New queue\n";
  while(!q.empty())
  {
    cout<<q.front()<<" ";
    q.pop();
  }
  return 0;
}