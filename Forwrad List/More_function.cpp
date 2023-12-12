#include<bits/stdc++.h>
using namespace std;


void print(forward_list<int>l)
{
    for(auto x: l)
    {
        cout<<x<<" ";
    }
    cout<<endl;
}

int main()
{
   forward_list<int>l1;
   l1.assign({10,20,30,40});
   l1.reverse();
   print(l1);

   l1.sort();
   print(l1);
   cout<<endl;
   forward_list<int>l2{5,15};

   l1.merge(l2);
   print(l1);

  if(l2.empty())
  {
    cout<<"True"<<endl;
  }

  l1.clear();
  if(l1.empty())
  {
    cout<<"True"<<endl;
  }
   return 0;
}