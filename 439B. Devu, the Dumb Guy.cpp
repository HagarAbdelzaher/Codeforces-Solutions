#include <iostream>
#include <bits/stdtr1c++.h>
#include<algorithm>
#define ll  long long
using namespace std;

const int N = int(1e9 + 3);

int main()
{
    ll n , m , x;
    vector<ll> vec1;
    cin>>n>>x;
    for(int i=0 ; i<n ; i++)
    {
        cin>>m;
        vec1.push_back(m);
    }
    sort(vec1.begin() , vec1.end());
    ll cnt=vec1[0]*x;
    for( int i=1 ; i<n ; i++)
    {
        if(x-1 < 1)
            x=1;
        else
            --x;

        cnt+=(vec1[i]*x);
    }
    cout<<cnt;

}
 
