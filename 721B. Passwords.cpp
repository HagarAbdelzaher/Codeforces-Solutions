#include <iostream>
#include <bits/stdtr1c++.h>
#include<algorithm>
#define ll  long long
using namespace std;
const int N = int(1e5 + 3);
const long double PI = 3.1415926536;
//freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
int arr[N];
int main()
{
  vector <string> vec;
  string s;
  int n , k , len , same =0 , diff =0;
  cin>>n>>k;
  for( int i=0 ; i<n ; i++)
  {
      cin>>s;
      vec.push_back(s);
  }
  string pass;
  cin>>pass;
  len = pass.size();
  for(int i=0 ; i< vec.size() ; i++)
  {
      if(vec[i].size() < len)
        diff++;
      if (vec[i].size() <= len)
        same++;
  }
  int b,w;
    b = 1+5*(diff/k)+diff;
    w = (same+(same-1)/k*5);

  cout<<b<< " " <<w <<endl;

}


