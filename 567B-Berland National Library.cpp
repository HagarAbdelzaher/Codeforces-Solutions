 
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void run() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
}

bool freq[1000005];
int main()
{
   run();
   int n;
   int ans = 0 , curr = 0;
   cin>>n;
  for(int i=0 ; i<n; i++)
   {
       char x;
       int r;
       cin>>x>>r;
       if(x=='+')
       {
           curr++;
           freq[r]=true;
           ans = max(ans , curr);
       }
       else
       {
           if(freq[r])
           {
               curr--;
               freq[r]=false;
           }
           else
           {
               ans++;
           }
       }
   }
   cout<<ans<<endl;

}
