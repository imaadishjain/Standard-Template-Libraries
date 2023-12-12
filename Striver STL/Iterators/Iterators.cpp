#include<bits/stdc++.h>
using namespace std;

int main()
{
    array<int,5>a={1,4,9,6,7};

    for(auto it=a.begin();it!=a.end();it++)  // it point to address of the element
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    for(auto it=a.rbegin();it!=a.rend();it++) // it point to address of the element
    {
        cout<<*it<<" ";
    }

    cout<<endl;
     // For Each Loop

     for(auto it:a)
     {
        cout<<it<<" "; // it points direct to element
     }
     cout<<endl;
     array<char,10>b={"Aadish"};
     for(auto c: b)
     {
         cout<<c<<" ";
     }
    return 0;
}
