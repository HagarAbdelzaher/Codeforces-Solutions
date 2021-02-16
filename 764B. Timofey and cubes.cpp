#include <iostream>
#include <bits/stdtr1c++.h>
#include<algorithm>
#define ll  long long
using namespace std;
const int N = int(1e5 + 3);
const long double PI = 3.1415926536;

ll a[int(1e6)];
int sum[int(1e6)];

int main()
{
//    freopen ("input.txt", "r", stdin);
//    freopen ("output.txt", "w", stdout);
  ll n , x;
  cin>>n;
  for(int i=0 ; i<n ; i++)
  {
      cin>>a[i];
  }
  for( int i=0 ; i<n/2 ; i+=2 )
  {
        swap(a[i] , a[n-i-1]);
  }
  for(int i=0 ; i<n ; i++)
  {
      cout<<a[i]<<" ";
  }
}
 
