#include<bits/stdc++.h>
using namespace std;


void printGreater(int arr[], int n)
{
    map<int,int>mpp;

    for(int i=0;i<n;i++)
    {
        mpp[arr[i]]++;
    }


    int cum=0;

    for(auto it=mpp.rbegin();it!=mpp.rend();it++)
    {
        int freq=it->second;
        it->second=cum;
        cum+=freq;
    }
    for(int i=0;i<n;i++)
    {
        cout<<mpp[arr[i]]<<"  ";
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
   printGreater(arr,n);

   return 0;   
}