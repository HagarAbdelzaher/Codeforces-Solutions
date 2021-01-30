#define  FOR(i,n) for(int i=0;i<n;i++)
#define rFOR(i,x,n) for(int i=x;i>n;i--)
#define SZ(x) (int)x.size()
#define pb push_back
#define mp make_pair
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
ll calc ( ll x)
{
    return (x*(x - 1))/2;
}
int main()
{
run();
ll v , e;
cin>>v>>e;
if(e==0)
{
    cout<<v<<" "<<v<<endl;
    exit(0);
}
ll  d = v - (e*2);
ll mn  = max((ll)0,d);

ll i = 0;
while (calc(i)<= e)
    {i++;}

int con = (calc(i-1) == e ? i-1 : i);
int  mx = v-con;

 cout << mn << " " << mx << "\n";
}
