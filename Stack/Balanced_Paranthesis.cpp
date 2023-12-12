#include<bits/stdc++.h>
using namespace std;


bool isBalanced(string vec)
{
    if(vec.length()%2!=0)
    {
        return 0;
    }
    stack<char>st;

    for(int i=0;i<vec.length();i++)
    {
        if(vec[i]==')' || vec[i]=='}' || vec[i]==']')
        {
          if(st.empty())
          {
             return 0;
           }
           else if(vec[i]-st.top()==2 || vec[i]-st.top()==1)
           {
            st.pop();
           }
           else
           {
            return 0;
           }
        }
        else
        {
            st.push(vec[i]);
        }
    }
    return st.empty();
}
int main()
{
    string vec;
    
    cout<<"Enter the string\n";
    cin>>vec;
    cout<<std::boolalpha;
    cout<<"Bracket are Balanced="<<isBalanced(vec);

    return 0;
}
