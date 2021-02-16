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
ll pre[int(1e6)];
//int sum[int(1e6)];
int main()
{
 int n,c,t;
 cin>>n>>t>>c;
 a[0]=0;
for(int i=1 ; i<=n ; i++)
 {
     cin>>a[i];
 }
 pre[0]=0;
 for(int i=1 ; i<=n ; i++)
 {
     if(a[i]<=t)
        pre[i]= pre[i-1]+1;
    else
        pre[i]= pre[i-1];
 }
 int ans=0;
 for(int i=0 ; i<=n-c ; i++)
 {
    int diff = pre[i+c]- pre[i];
     if(diff==c)
        ans++;
 }
 cout<<ans<<endl;

}
 
