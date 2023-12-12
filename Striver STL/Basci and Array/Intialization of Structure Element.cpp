#include<bits/stdc++.h>
using namespace std;

struct node
{
    string str;
    int num;
    double doub;
    char x;
    node(str_,num_,doub_,x_)
    {
        str=str_;
        num=num_;
        doub=doub_;
        x=x_;
    }
};
int main()
{
    struct node raj;
    /*raj.str="Aadish";
    raj.num=45;
    raj.doub=19.9;
    raj.x='A';*/ // Wrong way of Declaring

    node raj= node("Aadish",45,19.9,'A');

    cout<<raj.str<<endl;
    cout<<raj.num<<endl;
    cout<<raj.doub<<endl;
    cout<<raj.x<<endl;
    return 0;

}
