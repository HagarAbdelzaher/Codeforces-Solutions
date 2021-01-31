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
//ll b[int(1e6)];
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        if(n <= 30)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            if(n==36|| n==40 || n==44)
            {
                cout<<"YES"<<endl;
                cout<< 6 << " " <<10 <<" " << 15 <<" " <<  n-31<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
                  cout<< 6 << " " <<10 <<" " << 14 <<" "<<  n-30<<endl;
            }

        }
    }
}
 
