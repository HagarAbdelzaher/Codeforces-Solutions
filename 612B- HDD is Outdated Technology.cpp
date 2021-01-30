#include <bits/stdc++.h>
using namespace std;
vector <string> v1;
vector<pair<int , int>> vec;
int main()
{
  long long n  , x;
  cin>>n;
  for(int i=0 ; i<n ; i++)
  {
      cin>>x;
      vec.push_back(make_pair(x,i+1));
  }
  sort(vec.begin() , vec.end());
  long long tot = 0;

  for(int i=0 ; i<n-1 ; i++)
  {
      tot = tot + fabs(vec[i].second - vec[i+1].second);
  }
  cout<<tot<<endl;


}
