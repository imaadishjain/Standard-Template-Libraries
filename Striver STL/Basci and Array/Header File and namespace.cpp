#include<bits/stdc++.h> // Its include all type of Header File
using namespace std;
namespace raj
{
    int val=50;
    int getval(int x)
    {
        return x;
    }
}
int main()
{
    double val=10.0;

    cout<<val<<endl; // print 10
    cout<<raj::val<<endl; // print 50
    cout<<raj::getval(80)<<endl; //print 80
    return 0;
}
