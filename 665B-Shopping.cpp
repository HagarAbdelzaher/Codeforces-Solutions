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

int main()
{
    run();
    int n ,m ,k , x;
    cin>>n>>m>>k;
    map<int,int> pos;

    for(int i=1 ; i<=k ; i++)
    {
        cin>>x;
        pos[x]=i;
    }
    long cnt =0;
    for(int t=0 ; t<n ; t++)
    {
        for(int j=0 ; j<m ; j++)
        {
            cin>>x;
            int ele = pos[x];
            cnt+=ele;
            pos[x]=1;
            for(int i=1 ; i<=k ; i++)
            {
                if(i!=x && pos[i]<= ele)
                    ++pos[i];
            }
        }
    }
    cout<<cnt<<endl;
}
