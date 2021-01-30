#define  FOR(i,n) for(int i=0;i<n;i++)
#define rFOR(i,x,n) for(int i=x;i>n;i--)
#define SZ(x) (int)x.size()
#define pb push_back
#define fi first
#define se second
typedef long long ll;
#include <stdio.h>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void run() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
}
ll arr[105][105];
int main()
{
run();
ll t;
cin>>t;
while (t--)
{
    int n,m;
    cin>>n>>m;
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<m ; j++)
          {
              cin>>arr[i][j];
          }
    }
    bool f1 = 0;
    for(int i=0 ; i<n ; i++)
    {
        bool f2 = f1;
        for(int j=0 ; j<m ; j++)
        {
            if((arr[i][j]&1)!= f2)
             {
                  arr[i][j]++;
             }
             f2 = !f2;
        }
        f1 = !f1;
    }

     for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<m ; j++)
         {
              cout<<arr[i][j]<<" ";
         }
        cout<<"\n";
}
}

}
