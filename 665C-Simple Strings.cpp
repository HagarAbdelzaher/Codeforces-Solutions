#define  FOR(i,n) for(int i=0;i<n;i++)
#define rFOR(i,x,n) for(int i=x;i>n;i--)
#define SZ(x) (int)x.size()
#define pb push_back
#define mp make_pair
#define fi first
#define se second
typedef long long ll;
const int oo=(1LL<<30);
const ll  OO=(1LL<<62);
const int MaxSize=1e2+2;
const double PI=3.141592653589;
#include <iostream>
#include<bits/stdc++.h>
typedef long long ll;
const int sz = 1e5+5;
using namespace std;
void run() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
}
int freq[26];
int main()
{
    run();
   string s;
   cin>>s;

   for(int i=1 ; i<SZ(s) ; i++)
   {
       if(s[i]==s[i-1])
       {
           for(int j = 'a' ; j<='z' ; j++)
           {
               if(s[i+1]!=j &&s[i-1]!=j)
               {
                   s[i]=j;
                   break;
               }
           }
       }
   }
   cout<<s<<endl;

}
