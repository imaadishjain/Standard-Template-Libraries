#include<bits/stdc++.h>
using namespace std;


void ceilright(int arr[], int n)
{
    set<int>st;
    int res[n];

    for(int i=n-1;i>=0;i--)
    {
        auto it=st.lower_bound(arr[i]);
        if(it!=st.end())
        {
            res[i]=*it;
        }
        else{
            res[i]=-1;
        }
        st.insert(arr[i]);
    }

    for(int i=0;i<n;i++)
    {
        cout<<res[i]<<" ";
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

    ceilright(arr,n);

    return 0;
}
