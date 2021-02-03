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


//vector<ll> vis;
int main()
{
    int m , n ;
    cin>>m>>n;
    int arr [m][n];
    for(int i=0 ; i<m ;i++)
    {
        for(int j=0 ; j<n ; j++)
            cin>>arr[i][j];
    }
    vector<int> ans(m);
    for(int i=0 ; i<n ; i++)
    {
        int free = 0;
        for(int j=0 ; j<m ; j++)
        {
            int s = max(free , ans[j]);
            ans[j] = s+ arr[j][i];
            free = ans[j];
        }
    }

    for(int i=0 ; i<m ; i++)
        cout<<ans[i]<<" ";

}
 
