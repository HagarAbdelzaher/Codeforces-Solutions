#include <iostream>
#include <bits/stdtr1c++.h>
#include<algorithm>
#define ll  long long
using namespace std;
const int N = int(1e5 + 3);
const long double PI = 3.1415926536;

int vec[int(1e6)];
int sum[int(1e6)];

int main()
{
//    freopen ("input.txt", "r", stdin);
//    freopen ("output.txt", "w", stdout);
    ll n;
    cin>>n;
    for(int i=1 ; i<=n ; i++)
    {
        cin>>vec[i];
    }
    int ans =0;
    for( int i=0 ; i<n ; i++)
    {
        if(vec[i]==1 && vec[i+1]==1)
            ans++;
        else if (vec[i]==1 && vec[i+1]==0)
            ans+=2;

    }
    if(vec[n]==0 && ans!=0)
        ans--;
    else if(vec[n]==1)
        ans++;

    cout<<ans<<endl;
}






 
