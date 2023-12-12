#include<bits/stdc++.h>
using namespace std;


void merge(vector<int>&a, vector<int>&b)
{
    make_heap(b.begin(),b.end(),greater<int>());
    

    for(int i=0;i<a.size();i++)
    {
        if(a[i]>b[0])
        {
            pop_heap(b.begin(),b.end(),greater<int>());
            swap(a[i],b[b.size()-1]);
            push_heap(b.begin(),b.end(),greater<int>());
        }
    }
     sort(b.begin(),b.end());
}


int main()
{
    vector<int>a={3,20,40};
    vector<int>b={2,10,12};
    
    merge(a,b);

    for(auto x: a)
    {
        cout<<x<<" ";
    }
   cout<<endl;
    for(auto x:b)
    {
        cout<<x<<" ";
    }

    return 0;
}