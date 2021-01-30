#include <bits/stdc++.h>
using namespace std;
#define ll long long
// double PI = 3.1415926536;
ll mod = 1e9 + 7;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
    ll n; cin >> n;
    ll s =(n*(n+1))/2;
    ll pow = 1;
    while (pow<=n)
    {
        s-=pow*2;
        pow*=2;
    }
    cout<<s<<endl;
    }
}
