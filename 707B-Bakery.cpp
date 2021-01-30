#include <iostream>
#include<bits/stdc++.h>
typedef long long ll;
const int sz = 1e5+5;
using namespace std;
void run() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
}

int l[sz] , r[sz] , d[sz];
bool storage [sz];
int main()
{
  run();
int n ,m , k;
cin>>n>>m>>k;
for(int i=0 ; i<m ; i++)
{
    cin>>l[i]>>r[i]>>d[i];
}
int x;
for(int i=0 ; i<k ; i++)
{
    cin>>x;
    storage[x]=true;
}
int mn = 2e9;
for(int i=0 ; i<m ; i++)
{
    if(storage[l[i]] ^ storage[r[i]])
    {
        mn = min(mn , d[i]);
    }
}

if(mn==2e9)
    cout<<-1<<endl;
else
    cout<<mn<<endl;

}
