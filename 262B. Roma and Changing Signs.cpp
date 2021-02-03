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
ll n ,k, sum=0;
cin>>n>>k;
for(int i=0 ; i<n ; i++)
{
    cin>>a[i];
}
//reverse (a , a+n);
for(int i=0 ; i<n  ; i++)
{
    if(a[i]<0&& k>0)
    {
        a[i]=a[i]*-1;
        k--;
    }
}
sort(a,a+n);
if(k%2==1)
{
    a[0]*=-1;
}
for(int i=0 ; i<n ; i++)
    sum+=a[i];
cout<<sum;
}
