#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair<int,int>pr1={1,2};
    cout<<pr1.first<<" "<<pr1.second<<endl;

    pair<pair<int, float>,int>pr2={{1,2.4},5};
    cout<<pr2.first.first<<" "<<pr2.first.second<<" "<<pr2.second<<endl;

   pair<pair<char , int>,pair<int ,int>>pr3={{'A',01},{4,9}};
   cout<<pr3.first.first<<" "<<pr3.first.second<<" "<<pr3.second.first<<" "<<pr3.second.second<<endl;
    return 0;
}
