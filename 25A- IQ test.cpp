#define  FOR(i,n) for(int i=0;i<n;i++)
#define rFOR(i,x,n) for(int i=x;i>n;i--)
#define SZ(x) (int)x.size()
#define pb push_back
#define mp make_pair
#define fi first
#define se second
typedef long long ll;
//const int oo=(1LL<<30);
//const ll  OO=(1LL<<62);
//const int MaxSize=1e2+2;
//const double PI=3.141592653589;
#include <stdio.h>
#include <iostream>
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void run() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
}
int arr[50];
vector<int> even , odd;
int main()
{
    run();

        int n , x;
        cin>>n;
        for(int i=1 ; i<=n ; i++)
          {
              cin>>x;
              if(x%2==0)
                even.push_back(i);
              else
                odd.push_back(i);
          }
          if(even.size()==1)
            cout<<even[0]<<"\n";
          else if(odd.size()==1)
            cout<<odd[0]<<"\n";


}
