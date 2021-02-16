#include <iostream>
#include <bits/stdtr1c++.h>
#include<algorithm>
#define ll  long long
using namespace std;

const int N = int(1e5 + 3);
ll arr [N];
int main()
{

ll n,m,x,l,r,t;
cin>>n;
vector<ll> vec1 , vec2 ;
vec1.push_back(0);
for(int i=1; i<=n ; i++)
{
    cin>>x;
    vec1.push_back(x);
}
vec2=vec1;
sort(vec2.begin() , vec2.end());
for(int i=1 ; i<=n ; i++)
{
    vec1[i]+=vec1[i-1];
    vec2[i]+=vec2[i-1];
}
cin>>m;
while (m--)
{
    cin>>t>>l>>r;
    if(t==1)
    {
        cout<<vec1[r]-vec1[l-1] << endl;
    }
    else
    {
        cout<<vec2[r]-vec2[l-1] <<endl;
    }



}
}
