#include <iostream>
#include <bits/stdtr1c++.h>
using namespace std;
#define ll  long long
#define ld long double
#define pb push_back
#define INF 0x3f3f3f3f
//#define for(i,n) for(int i = 0 ; i < n ; i++)
#define vi vector<int>
#define vl vector<long long>
#define print(el) cout<<(el)<<endl;
//    freopen ("input.txt", "r", stdin);
//    freopen ("output.txt", "w", stdout);

const int N = int(1e5 + 3);
const long double PI = 3.1415926536;
ll a[int(1e6)];
ll b[int(1e6)];
//vector<ll> vis;

int main()
{
ll n , m;
cin>>n>>m;
for(int i=0 ; i<n ; i++)
    cin>>a[i];
for(int i=0 ; i<m ; i++)
    cin>>b[i];

    ll cnt = 0;
    sort(a,a+n);
    sort(b,b+m);
for(int i=0 ; i<n ; i++)
{
    int el = a[i];
    bool flag = false ;
    for(int j=0 ; j<m ; j++)
    {
        if(el<=b[j])
        {
            flag = true;
            b[j]=-1;
            break;
        }
    }
    if(!flag)
        cnt++;
}
cout<<cnt;
}
