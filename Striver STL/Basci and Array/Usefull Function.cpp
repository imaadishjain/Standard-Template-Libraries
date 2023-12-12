#include<bits/stdc++.h>
using namespace std;

int main()
{
    array<int,10>a={1,4,8,7,9}; //{1,4,8,7,9,0,0,0,0,0}

     int s=a.size();
     int f=a.front();
     int b=a.back();

     cout<<"Size of array="<<s<<endl; //10
     cout<<"Front Element="<<f<<endl; //1
     cout<<"Back Element="<<b<<endl;  //0
     return 0;

}
