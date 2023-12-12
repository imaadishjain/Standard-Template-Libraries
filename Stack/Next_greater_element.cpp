#include<bits/stdc++.h>
using namespace std;

vector<int> nextgreater(vector<int>&vec)
{
    vector<int>ans;

    stack<int>st;

    for(int i=vec.size()-1;i>=0;i--)
    {
        while(!st.empty() && vec[i]>=st.top())
        {
            st.pop();
        }

       st.empty()?ans.push_back(-1):ans.push_back(st.top());
       st.push(vec[i]);
    }
     reverse(ans.begin(),ans.end());

     return ans;
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

   vector<int>ans;
   ans=nextgreater(vec);

   for(int i=0;i<ans.size();i++)
   {
    cout<<ans[i]<<" ";
   }
   return 0;
}