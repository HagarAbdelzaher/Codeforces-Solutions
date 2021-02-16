#include <iostream>
#include <bits/stdtr1c++.h>
using namespace std;
#define ll  long long
#define ld long double
#define pb push_back
//#define for(i,n) for(int i = 0 ; i < n ; i++)
#define vi vector<int>
#define print(el) cout<<(el)<<endl;
//    freopen ("input.txt", "r", stdin);
//    freopen ("output.txt", "w", stdout);

const int N = int(1e5 + 3);
const long double PI = 3.1415926536;
//ll a[int(1e6)];
//int sum[int(1e6)];
int main()
{
   int n,m,x;
   cin>>n>>m;
   vector <int> vec;
   for(int i=0 ; i<m ; i++)
   {
       cin>>x;
       vec.pb(x);
   }
   ll sum = vec[0]-1;
   for(int i=0 ; i<m-1 ; i++)
   {
       if(vec[i+1] >= vec[i])
       {
        sum = sum + (vec[i+1] - vec[i]);
        }
       else if (vec[i+1] < vec[i])
       {
           sum = sum + ( n - vec[i]);
           sum = sum + ( vec[i+1]);
        }
   }
   print(sum);

}
 
