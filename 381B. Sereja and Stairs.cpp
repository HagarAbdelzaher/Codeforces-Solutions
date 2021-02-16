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
//int sum[int(1e6)];
int main()
{
 ll n , x;
 cin>>n;
 vector<int> vec;
 deque <int> dq;
 int cnt = 0;
 for(int i=0 ; i<n ; i++)
 {
     cin>>x;
     vec.pb(x);
     a[x]++;
 }
 sort(vec.begin() , vec.end());
 int mx = vec[n-1];
 int i = n-1;
 while (vec[i] == mx)
 {
     ++cnt;
     --i;
 }
 dq.pb(mx);
 for(int i= n - cnt-1 ; i>=0 ; --i)
 {
     if(i!=0 && vec[i] == vec[i-1])
        continue;
     if(a[vec[i]] >=2)
     {
         dq.push_back(vec[i]);
         dq.push_front(vec[i]);
     }
     else
     {
         dq.push_front(vec[i]);
     }
 }
 cout<<dq.size()<<endl;
 for(int i=0 ; i<dq.size(); i++)
    cout<<dq[i]<<" ";



}
 
