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
#include <stdio.h>
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
  int n , x1 , y1 , x2 , y2 ;
  string s;
  cin>>n>>x1>>y1>>x2>>y2>>s;
  int x = x2-x1;
  int y = y2-y1;
  int ex=0 , ey=0;
  if(x>0)
  {
      for(int i=0 ; i<n; i++)
          if(s[i]=='E')
         {
             x--;
                if(!x)
            {
                ex = i+1;
                break;
         }
        }
       if(x)
            {
                cout<<-1<<endl;
                exit(0);
            }
    }

else if (x<0)
{
    for(int i=0 ; i<n; i++)
          if(s[i]=='W')
          {
              x++;
                if(!x)
            {
                ex = i+1;
                break;
            }
        }
       if(x)
            {
                cout<<-1<<endl;
                exit(0);
            }

}
if(y>0)
{
    for(int i=0 ; i<n ; i++)
        if(s[i]=='N')
        {
            y--;
            if(!y)
            {
                ey=i+1;
                break;
            }

    }

    if(y)
    {
        cout<<-1<<endl;
        exit(0);
    }
}
else if(y<0)
{
    for(int i=0 ; i<n ; i++)
        if(s[i]=='S')
        {
            y++;
            if(!y)
            {
                ey=i+1;
                break;
            }
        }
    if(y)
    {
        cout<<-1<<endl;
        exit(0);
    }
}
cout<<max(ex , ey)<<endl;
}
