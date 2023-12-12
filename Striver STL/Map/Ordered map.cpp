#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string,int>mpp;// Store Unquie element in sorted manner(Asccending order) with respect to ke

    mpp["raj"]=27;
    mpp["hima"]=31;
    mpp["sandeep"]=67;
    mpp["tank"]=89;
    mpp.emplace("neha",89);
    mpp["raj"]=29; //This will Overwrite 27 to 29

    cout<<"Printing Ordered map"<<endl;
    for(auto it: mpp)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
    cout<<endl;

    cout<<"Printing Ordered map"<<endl;
    for(auto it=mpp.begin();it!=mpp.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;

    }
    cout<<endl;

    int c;
    c=mpp.count("raj");
    cout<<"The number of time the raj occurs="<<c<<endl; // Gives only one because ordered map stores only unique elements

    mpp.erase("tank"); // Erase tank;
    mpp.erase(mpp.begin());//This Will Erase the First element
    mpp.erase(mpp.begin(),mpp.end());// This will erase the first element

    mpp.clear(); // This will clear all the elements

    if(mpp.empty())
    {
      cout<<"Yes it is empty";
    }
    else
    {
        cout<<"No it is not empty";
    }

    return 0;
}
