#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>a;
    cout<<a.size()<<endl;

    a.push_back(5);//{5};
    a.push_back(7);//{5,7} // a.emplace_back(7)

    cout<<a.size()<<endl; //2

    a.pop_back(); //{5};

    cout<<a.size()<<endl; //1

    a.clear();
    cout<<a.size()<<endl; //0

    return 0;
}
