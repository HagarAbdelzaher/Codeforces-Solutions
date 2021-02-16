#include <iostream>
#include <bits/stdtr1c++.h>
#include<algorithm>
#define ll  long long
using namespace std;

const int N = int(1e5 + 3);
const long double PI = 3.1415926536;
//freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
int countOne(long n)
{
    int c=0;
    while(n!=0)
    {
        n=n&n-1;
        c++;
    }
    return c;
}
int main()
{
  int n,m,k,x;
  cin>>n>>m>>k;
  vector<int> a;
  for(int i=0 ; i<=m ; i++)
  {
      cin>>x;
      a.push_back(x);
  }
  int cnt = 0;
  for(int i=0; i<m ; i++)
  {
      int r = a[m] ^ a[i];
      if(countOne(r)<=k)
        cnt++;
  }
cout<<cnt;


}

 
