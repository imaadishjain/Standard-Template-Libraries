#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<string,int>umpp;// Store Unique element in any order
    char c;
   do
   {
     string ch;
     int num;
     cout<<"Enter the String and Number=";
     cin>>ch>>num;
     umpp[ch]=num;
     cout<<"Do you want to enter another record(y/n)=";
     cin>>c;
   }while(c=='y');

   cout<<"Printing the Unordered Map"<<endl;

   for(auto it: umpp)
   {
       cout<<it.first<<" "<<it.second<<endl;
   }
   cout<<endl;

   cout<<"Printing Unordered map"<<endl;
   for(auto it=umpp.begin();it!=umpp.end();it++)
   {
       cout<<it->first<<" "<<it->second<<endl;
   }
   return 0;
}
