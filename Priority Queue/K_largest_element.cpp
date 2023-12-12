#include<bits/stdc++.h>
using namespace std;


void klargestelement(int arr[],int n,int k)
{
    priority_queue<int,vector<int>,greater<int>>pq(arr,arr+k);

    for(int i=k;i<n;i++)
    {
        if(arr[i]>pq.top())
        {
            pq.pop();
            pq.push(arr[i]);
        }
    }

    while(!pq.empty())
  {
    cout<<pq.top()<<" ";
    pq.pop();
  }

}


int main()
{
    int *arr;
    int n;
    arr=new int[n];
    cout<<"Enter the size of array\n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr[i]=x;
    }
    int k;
    cout<<"Enter the value of K=";
    cin>>k;
    klargestelement(arr,n,k);
    return 0;
}