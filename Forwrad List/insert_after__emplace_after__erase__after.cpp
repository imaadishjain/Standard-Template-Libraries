#include<bits/stdc++.h>
using namespace std;

void print(forward_list<int>l)
{
    for(auto  it:l)
    {
        cout<<it<<" ";
    }
    cout<<endl;
}


int main()
{
    forward_list<int>l{10,20,30};

    auto it=l.insert_after(l.begin(),15);
    print(l);

    it=l.insert_after(it,{16,17,18});
    print(l);

   it=l.emplace_after(it,19);
   print(l);
   cout<<endl;

   it=l.erase_after(l.begin());
   print(l);
   
   it=l.erase_after(it,l.end());
   print(l);

   if(it==l.end())
   {
    cout<<"True"<<endl;
   }
    return 0;

}