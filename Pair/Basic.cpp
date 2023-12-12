#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair<int,int>p1(10,20);
    pair<int,int>p2;
    p2={30,40};

    pair<int,int>p3;
    pair<int,int>p4;


    int x,y;
    cout<<"Enter the element of pair 3\n";
    cin>>x;cin>>y;
    p3={x,y};
    
    int a,b;
    cout<<"Enter the element of pair 4\n";
    cin>>a;cin>>b;

    p4.first=a;
    p4.second=b;

    cout<<"Printing Pairs\n";
    cout<<p1.first<<" "<<p1.second<<endl;
    cout<<p2.first<<" "<<p2.second<<endl;
    cout<<p3.first<<" "<<p3.second<<endl;
    cout<<p4.first<<" "<<p4.second<<endl;

    std::boolalpha;

    cout<<(p1==p2)<<endl;
    cout<<(p3==p4)<<endl;
    cout<<(p1>p2)<<endl;
    cout<<(p1<p4)<<endl;

    return 0;


}