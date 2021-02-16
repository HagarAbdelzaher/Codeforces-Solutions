#include <iostream>
#include <bits/stdtr1c++.h>
#include<algorithm>
#define ll  long long
using namespace std;
const int N = int(1e5 + 3);
const long double PI = 3.1415926536;
//freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
ll a[int(1e6)];

int main()
{
   string s;
   cin>>s;
   int n = s.size() , i=0 ;

  int cntx =0 , cnty = 0;
  for( int i=0 ; i<n ; i++)
  {
      if(s[i]=='x')
        cntx++;
      else
        cnty++;
  }
  int sz = fabs(cntx-cnty);
  if(cntx > cnty)
    for(int i=0 ; i<sz ; i++)
  {
      cout<<'x';
  }
  else
  {
       for(int i=0 ; i<sz ; i++)
  {
      cout<<'y';
  }

  }
}



 
