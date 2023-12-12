#include<bits/stdc++.h>
using namespace std;


void pattern(string str, string patt)
{
    int pos=str.find(str);
    while(pos!=string::npos)
    {
        cout<<pos<<" ";

        pos=str.find(patt,pos+1);
    }
}

int main()
{
  string str;
  string patt;

  cout<<"Enter the string=";
  cin>>str;


  cout<<"Enter the pattern=";
  cin>>patt;

 pattern(str,patt);

 return 0;

}