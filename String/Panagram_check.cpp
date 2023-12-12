#include<bits/stdc++.h>
using namespace std;


bool checkpanagram(string str)
{

    if(str.length()<26)
    {
        return 0;
    }
     bool check[26]={0};
    for(int i=0;i<str.length();i++)
    {
        char x=str[i];
        if(x>='a' && x<='z')
        {
            check[x-'a']=true;
        }
        if(x>='A' && x<='Z')
        {
            check[x-'A']=true;
        }
    }

    for(int i=0;i<26;i++)
    {
        if(check[i]==0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    string str;

    cout<<"Enter the string=";
    cin>>str;

    cout<<std::boolalpha;


    cout<<"String is panagram="<<checkpanagram(str);


    return 0;
}