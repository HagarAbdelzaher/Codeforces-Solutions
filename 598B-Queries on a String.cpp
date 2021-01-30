#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{

    string s;
    cin>>s;
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,k;
        cin>>a>>b>>k;
        k = k% (b-a+1);
        string tmp="";
        for(int i=b-k;i<b;i++)
            tmp+=s[i];
        for(int i=a-1;i<b-k;i++)
            tmp+=s[i];
        for(int i=a-1;i<b;i++)
            s[i]=tmp[i-a+1];
    }
    cout<<s<<endl;
}
