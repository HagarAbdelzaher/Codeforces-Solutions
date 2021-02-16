#include <iostream>
#include <bits/stdtr1c++.h>
#include<algorithm>
#define ll  long long
using namespace std;

const int N = int(1e9 + 3);

int main()
{
ll n,k;
int x , ind;
vector<int>vec;
cin>>n>>k;
vec.push_back(0);
int minn = N;
for( int i=1; i<=n ; i++)
{
    cin>>x;
    vec.push_back(x);
}

for( int i=1 ; i<=n; i++)
{
    vec[i]+=vec[i-1];
}
int s;
for( int i=1 ; i<=n-k+1 ; i++)
{
    s= vec[i+k-1] - vec[i-1];
    if(s<minn)
    {
        minn=s;
        ind=i;
    }
}
cout<<ind;
}
