#define  FOR(i,n) for(int i=0;i<n;i++)
#define rFOR(i,x,n) for(int i=x;i>n;i--)
#define SZ(x) (int)x.size()
#define pb push_back
#define mp make_pair
#define fi first
#define se second
typedef long long ll;
//const int oo=(1LL<<30);
//const ll  OO=(1LL<<62);
//const int MaxSize=1e2+2;
//const double PI=3.141592653589;
#include <stdio.h>
#include <iostream>
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void run() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
}

int main()
{
    run();
    int t;
    cin>>t;
    while (t--)
{
ll s , a , b , c;
 cin>>s>>a>>b>>c;
 ll offCnt = (s/(a*c));
 ll chocCnt = offCnt *(a+b);
 ll rest = s%(a*c);
 ll buy = rest/c;
 ll ans = chocCnt + buy;
 cout<<ans<<endl;
}
}



 
