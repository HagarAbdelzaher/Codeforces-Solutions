#include <iostream>
#include <bits/stdtr1c++.h>
#include<algorithm>
#define ll  long long
using namespace std;

const int N = int(1e5 + 3);
ll arr [N];
int main()
{
ll n , m, v,y,t,q,x;
cin>>n>>m;
for(ll i=1 ; i<=n ; i++)
{
    cin>>arr[i];
}
int c = 0;
while (m--)
{
    cin>>t;
    if(t==1)
    {
        cin>>v>>x;
        arr[v]=x-c;
    }
    else if(t==2)
    {
        cin>>y;
        c+=y;
    }
    else
    {
        cin>>q;
        cout<<arr[q]+c<<endl;
    }


    }
}
 
