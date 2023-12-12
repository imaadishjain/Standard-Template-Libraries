#include<bits/stdc++.h>
using namespace std;

void span(vector<int>&vec)
{
    stack<int>st;
    for(int i=0;i<vec.size();i++)
    {
        while(!st.empty() && vec[i]>=vec[st.top()])
            {
                st.pop();
            }
            cout<<" ";
        st.empty()?cout<<i+1:cout<<i-st.top();
            st.push(i);
    }
}

int main()
{
    int n;
   cout<<"Enter the size of data=";
   cin>>n;
   vector<int>vec;
   for(int i=0;i<n;i++)
   {
    int x;
    cin>>x;
    vec.push_back(x);
   }

   span(vec);
}