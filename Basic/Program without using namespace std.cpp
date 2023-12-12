#include<bits/stdc++.h>

namespace raj
{
    int val=50;
    int getval(int x)
    {
        return x;
    }
}
using namespace raj; // No need to write raj::val, raj::getval(x)
int main()
{
    int a,b;
    int c;

    std::cout<<"Enter the two number="; // std::cout kyuki namespace nahi likha ha
    std::cin>>a>>b;

    c=a+b;

    std::cout<<"Sum of the two number="<<c;

    std::cout<<"Raj val="<<val;
    std::cout<<"Raj getval="<<getval(80);
    return 0;
}
