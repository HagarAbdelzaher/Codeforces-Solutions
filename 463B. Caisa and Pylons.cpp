#include <iostream>
#include <bits/stdtr1c++.h>
#include<algorithm>
#define ll  long long
using namespace std;

const int N = int(1e5 + 3);
const long double PI = 3.1415926536;
//freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
int g[6][6];
int main()
{
  ll n;
  cin>>n;
  int x =0 , y , energy =0 , cnt =0;
  for( int i=0 ; i<n ; i++)
  {
    cin>>y;
    energy+= (x-y);
    if(energy <0)
    {
        cnt+= (-energy);
        energy=0;
    }
    x=y;
  }
  cout<<cnt;

}








