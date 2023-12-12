#include<bits/stdc++.h>
using namespace std;


char  findone(const string &a, const string &b)
{
    int  count[256];

    fill(count,count+256,0);

    for(auto x: a)
    {
        count[x]++;
    }


    for(auto x: b)
    {
        count[x]--;
    }


    for(int i=0;i<256;i++)
    {
        if(count[i]==1)
        {
            return char(i);
        }
    }
}


int main()
{
    string a;
    string b;

    cout<<"Enter the first string=";
    cin>>a;

   cout<<"Enter the second string=";
   cin>>b;

   cout<<"Extra character is="<<findone(a,b);
   return 0;

}