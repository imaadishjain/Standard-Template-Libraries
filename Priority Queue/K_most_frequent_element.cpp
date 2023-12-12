#include<bits/stdc++.h>
using namespace std;

void kmostfreq(int arr[], int n,int k)
{
    unordered_map<int,int>mpp;

    for(int i=0;i<n;i++)
    {
        mpp[arr[i]]++;
    }

    vector<int>freq[n+1];

    for(int i=0;i<n;i++)
    {
        int f=mpp[arr[i]];
        if(f!=-1)
        {
        freq[f].push_back(arr[i]);
        mpp[arr[i]]=-1;
        }
    }
    
    int count=0;

    for(int i=n-1;i>=0;i--)
    {
        for(auto x: freq[i])
        {
            cout<<x<<" ";
            count++;
            if(count==k)
            {
                return ;
            }
        }
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
    kmostfreq(arr,n,k);
    return 0;
}