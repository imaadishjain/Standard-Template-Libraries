#include<bits/stdc++.h>
using namespace std;


int  main()
{

    int n;
    cout<<"Enter the number=";
    cin>>n;
    string str=to_string(n);
    cout<<"Number is converted to string="<<str<<endl;


    string ch;
    cout<<"Enter the string=";
    cin>>ch;
    
    int m=stoi(ch);
    cout<<"String is converted to integer="<<m<<endl;

    return 0;
}