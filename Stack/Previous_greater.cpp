#include<bits/stdc++.h>
using namespace std;

void previous(vector<int>&vec)
{
    stack<int>st;

    for(int i=0;i<vec.size();i++)
   {
       while(!st.empty() && vec[i]>=st.top())
       {
        st.pop();
       }
       cout<<" ";
       st.empty()?cout<<"-1":cout<<st.top();

       st.push(vec[i]);
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

   previous(vec);
   return 0;
}