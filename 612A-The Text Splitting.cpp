#include <bits/stdc++.h>
using namespace std;
vector <string> v1;
vector<pair<int , int>> vec;



int main()
{
    long long  n,p,q,i,j,a,b,k;
    string s;
    cin>>n>>p>>q>>s;
    for( i=0; i<=n ; i++)
    {
        for( j=0 ; j<=n ; j++)
        {
            if(i*p+j*q==n)
                break;
        }
        if(j<=n)
            break;
    }
    if(i>n && j>n)
    {
        cout<<-1<<endl;
        exit(0);
    }
     a = i , b = j , k = 0;
    cout<<a+b<<endl;
    for(i = 0 ; i<a ; i++)
    {
        for( j=0 ; j<p ; j++)
            cout<<s[k++];
        cout<<endl;
    }
    for( i = a ; i<a+b ; i++)
    {
        for( j=0 ; j<q; j++)
            cout<<s[k++];
        cout<<endl;
    }

}
