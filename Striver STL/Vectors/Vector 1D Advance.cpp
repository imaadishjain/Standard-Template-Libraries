#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>a(4,1); //{1,1,1,1};
    vector<int>b(5,10); //{10,10,10,10,10} // Element mention nahi karoga toh by default zero hoga

    vector<int>c(a);

    for(auto it:c)
    {
        cout<<it<<" ";
    }
    cout<<endl;

    vector<int>d(b.begin(),b.end());
    cout<<"Size="<<d.size()<<endl;

    for(auto it:d)
    {
        cout<<it<<" ";
    }

    cout<<endl<<d.at(0)<<" "<<d[0];
    return 0;

}
