#include <iostream>
#include <bits/stdtr1c++.h>
#include<algorithm>
#define ll  long long
using namespace std;
const int N = int(1e5 + 3);
const long double PI = 3.1415926536;
//freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
int a[int(1e6)];
int main()
{
int n , m , l , r , temp;
cin>>n>>m;
for(int i=1 ; i<=n ; i++)
{
    cin>>a[i];
}
int re = 0;
for(int k=1 ; k<=m ; k++)
{
    temp = 0;
    cin>>l>>r;
    for( int i=l ; i<=r;i++)
    {
        temp+=a[i];
    }
    if(temp>0)
        re+=temp;
}
cout<<re<<endl;
}



 
