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
//ll a[int(1e6)];
ll b[int(1e6)];
//vector<ll> vis;
int main()
{
int a [3][3] , s=0;
for(int i=0 ; i<3 ; i++)
{
    for(int j=0 ; j<3 ; j++)
    {
        cin>>a[i][j];
        s+=a[i][j];
    }
}
a[1][1]=s/6;
a[0][0]=(a[1][0]+a[1][1]+a[1][2])-(a[0][1]+a[0][2]);
a[2][2]=(a[1][0]+a[1][1]+a[1][2])-(a[2][0]+a[2][1]);

for(int i=0 ; i<3 ; i++)
{
    for(int j=0 ; j<3 ; j++)
    {
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
}
}
