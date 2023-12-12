#include<bits/stdc++.h>
using namespace std;

int getSurvival(int n, int k)
{
    list<int>l;
    for(int i=0;i<n;i++)
    {
        l.push_back(i);
    }

    auto it=l.begin();

    while(l.size()>1)
    {
        for(int i=1;i<k;i++)
        {
            it++;
            if(it==l.end())
            {
                it=l.begin();
            }
        }
        it=l.erase(it);
        if(it==l.end())
        {
            it=l.begin();
        }
    }

    return  *l.begin();
}


int main()
{
    int n,k;
    cout<<"Enter the total number of people=";
    cin>>n;

    cout<<"Enter the round of killing=";
    cin>>k;

    cout<<"Survival="<<getSurvival(n,k);
    return 0;
}