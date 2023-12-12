#include<bits/stdc++.h>
using namespace std;

void maxinsub(vector<int>&vec,int k)
{
    deque<int>dq;
    
    for(int i=0;i<k;i++)
    {
       while(!dq.empty() && vec[dq.back()]<=vec[i])
       {
        dq.pop_back();
       }
       dq.push_back(i);
    }
    
    for(int i=k;i<vec.size();i++)
    {
        cout<<vec[dq.front()]<<" ";
        if(i-dq.front()>=k)
        {
            dq.pop_front();
        }
        while(!dq.empty() && vec[dq.back()]<=vec[i])
       {
        dq.pop_back();
       }
       dq.push_back(i);
    }
    cout<<vec[dq.front()]<<" ";
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
  int k;
    cout<<"Enter the value of k=";
    cin>>k;
    maxinsub(vec,k);
    return 0;
}
