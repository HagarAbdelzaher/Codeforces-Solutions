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
vector<int> v1 , v2 , v , vv;
const int maxn = 1e3+5;
const int maxm = 1e6+5;
int a [maxn];
bool isPrime[2*maxm];

void sett()
{
    memset(isPrime , true , sizeof(isPrime));
    isPrime[1]=false;
    for(int i=2 ; i< 2*maxm ; i++)
    {
        if(isPrime[i])
       {
           for(int j= 2*i ; j< 2*maxm ; j+=i)
        {
            isPrime[j] = false;
        }
    }
    }
}


int main()
{
    run();
    int n;
    sett();
    cin>>n;
    bool flg = false;
    for(int i=0 ; i<n ; i++)
    {
         cin>>a[i];
         if(a[i]==1)
         {
             flg=true;
             v.push_back(1);
         }
         else if(a[i]&1)
            v1.push_back(a[i]);
         else
            v2.push_back(a[i]);
    }

    if(flg)
    {
        for(int i=0 ;i< v2.size() ; i++)
        {
            if(isPrime[v2[i]+1])
            {
                v.push_back(v2[i]);
                break;
            }
        }

    }
    bool flag = true;
    if(v.size() < 2)
    {
        for(int i=0 ; i< v1.size() ; i++)
        {
            for(int j=0 ; j<v2.size() ; j++)
            {
                if(isPrime[v1[i]+v2[j]])
                {
                    vv.push_back(v1[i]);
                    vv.push_back(v2[j]);
                    flag = false;
                    break;
                }

            }
              if(!flag)
                    break;
        }
    }

    if(v.size()==0)
        v.push_back(a[0]);
    if(vv.size() <v.size())
    {
        cout<<v.size()<<endl;
        for(int i=0 ; i<v.size();i++)
            cout<<v[i]<<" ";

    }
    else
    {
         cout<<vv.size()<<endl;
        for(int i=0 ; i<vv.size();i++)
            cout<<vv[i]<<" ";

    }



}
