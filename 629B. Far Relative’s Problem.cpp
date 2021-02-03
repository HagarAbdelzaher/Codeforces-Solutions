#include <iostream>
#include <bits/stdtr1c++.h>
using namespace std;
#define ll  long long
#define ld long double
#define pb push_back
#define INF 0x3f3f3f3f
//#define for(i,n) for(int i = 0 ; i < n ; i++)
#define vi vector<int>
#define vl vector<long long>
#define print(el) cout<<(el)<<endl;
//    freopen ("input.txt", "r", stdin);
//    freopen ("output.txt", "w", stdout);

const int N = int(1e5 + 3);
const long double PI = 3.1415926536;
ll a[int(1e6)];
ll b[int(1e6)];

int boys[366] , girls [366];
//vector<ll> vis;
int main()
{
    int n ,x,y;
    char c;
    cin>>n;
    for(int i=0 ; i < n ; i++)
    {
        cin>>c>>x>>y;
        for( int i = x-1 ; i<y ; i++)
       {
          if(c =='M')
            boys[i]++;
        else
            girls[i]++;
       }

    }
    int  mx = -INF;
    for(int i = 0 ; i<366 ;i++)
    {
       mx = max (mx ,min(boys[i], girls[i]));
    }
    cout<<2*mx<<endl;
}
 
