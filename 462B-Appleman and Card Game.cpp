 
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void run() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
}

vector<long long > f(30);
int main()
{
   run();
  long long n,k;
  cin>>n>>k;
  for(int i=0 ; i<n ; i++)
  {
      char c;
      cin>>c;
      f[(int)c-64]++;

  }
  sort(f.begin(),f.end() );
  reverse(f.begin() , f.end());
  long long ans = 0;
  int i=0;
  while (k)
  {
      if(f[i]>=k)
      {
          ans += k*k;
          k-=k;
      }
      else
      {
          ans += f[i]*f[i];
          k-=f[i];
      }
      i++;
  }
  cout<<ans<<endl;

}
