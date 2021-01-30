#define  FOR(i,x,n) for(int i=x;i<n;i++)
#define rFOR(i,x,n) for(int i=x;i>n;i--)
#define SZ(x) (int)x.size()
#define pb push_back
#define mp make_pair
#define fi first
#define se second
typedef long long ll;
const int oo=(1LL<<30);
const ll  OO=(1LL<<62);
const int MaxSize=1e2+2;
const double PI=3.141592653589;
#include <iostream>
#include<bits/stdc++.h>
typedef long long ll;
const int sz = 1e5+5;
using namespace std;
void run() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
}


int a1[10005] , a2[10005];
int main()
{
run();

string s , t , ans;
int diff=0 , equal;
cin>>s>>t;
FOR(i,0,SZ(s))
    diff+=(s[i]!=t[i]);

if(diff%2!=0)
{
    cout<<"impossible";
    exit(0);
}
 equal = diff/2;
FOR(i,0,SZ(t))
{
    if(s[i]==t[i])
        ans+=t[i];
    else
    {
        if(equal)
        {
            ans+=s[i];
            equal--;
        }
        else
            ans+=t[i];
    }
}
cout<<ans;



}
 
