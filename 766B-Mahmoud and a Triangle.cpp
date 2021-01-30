#define  FOR(i,n) for(int i=0;i<n;i++)
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
#include <stdio.h>
#include <iostream>
#include<bits/stdc++.h>
typedef long long ll;
const int sz = 1e5+5;
using namespace std;
void run() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
}
int main()
{
    run();
    ll n;
    cin>>n;
    vector<ll> v;
    ll  x;
    for(int i=0 ; i<n ; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin() , v.end());
    for(int i=0 ; i<n-2 ; i++)
    {
        int a = v[i] , b= v[i+1] , c =v[i+2];
            if( a+b > c &&  a+c >b  && c+b > a)
        {
            cout<<"YES"<<endl;
            exit(0);
        }
    }
cout<<"NO"<<endl;

}




 
