#include <iostream>
#include <bits/stdtr1c++.h>
using namespace std;
#define ll  long long
#define ld long double
#define pb push_back
#define INF 0x3f3f3f3f
//#define for(i,n) for(int i = 0 ; i < n ; i++)
#define vi vector<int>
#define print(el) cout<<(el)<<endl;
//    freopen ("input.txt", "r", stdin);
//    freopen ("output.txt", "w", stdout);

const int N = int(1e5 + 3);
const long double PI = 3.1415926536;
ll a[int(1e6)];
ll s[int(1e6)];
//vector<ll> vis;

//int sum[int(1e6)];

int main()
{
    ll n, m , x, y;
    cin>>n>>m;
    a[0]=0;
    for(int i=1 ; i<=n ; i++)
    {
        cin>>x>>y;
        a[i]=a[i-1]+ x*y;
    }
    int song = 1;
    for(int i=1 ; i<=m ; i++)
    {
        cin>>x;
        while (x>a[song])
            song++;
        cout<<song<<endl;
    }

}
 
