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
       int arr[] = {4,7,44,47,74,77,444,447,474,477,744,747,774,777};
        int n;
        cin>>n;
        for(int i=0 ; i< 14 ; i++)
        {
            if(n%arr[i]==0)
            {
                cout<<"YES"<<endl;
                exit(0);
            }
        }
        cout<<"NO"<<endl;
}
 
