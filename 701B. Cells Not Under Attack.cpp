#include <iostream>
#include <bits/stdtr1c++.h>
#include<algorithm>
#define ll  long long
using namespace std;

const int N = int(1e5 + 3);

int main()
{

ll n , m , r, c, rowin , colin;
cin>>n>>m;
bool arrRows[n];
bool arrCols[n];
r = n;
c = n;
for(int i=1 ; i<=n ; i++)
{
    arrCols[i]=true;
    arrRows[i]=true;
}
while (m--)
{
    cin>>rowin>>colin;
    if(arrRows[rowin])
    {
        arrRows[rowin]=false;
        r--;
    }
    if(arrCols[colin])
    {
        arrCols[colin]=false;
        c--;
    }
    cout<<r*c<<endl;
}
}
