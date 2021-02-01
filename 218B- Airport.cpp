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
//ll a[int(1e6)];
//ll b[int(1e6)];
int main()
{
ll n  , m , mx=0 , mn=0 , MAX=0 , MIN=0;
cin>>n>>m;
vi a (m) , b(m);
for(int i=0 ; i<m ; i++)
{
    cin>>a[i];
}
b=a;
for(int i=0 ; i<n ; i++)
{
    int mx = *max_element(b.begin() , b.end());
    MAX+=mx;
    for(int j=0  ; j<m ; j++)
    {
        if(b[j] == mx)
        {
            b[j]--;
            break;
        }
    }
}
b=a;
for(int i=0 ; i<n ; i++)
{
    int mn = *min_element(b.begin() , b.end());
    MIN+=mn;
    for(int j=0  ; j<m ; j++)
    {
        if(b[j] == mn)
        {
            b[j]--;
            if(b[j]==0)
                b[j]=1000000;
            break;
        }
    }
}
cout<<MAX<<" " << MIN;
}
 
