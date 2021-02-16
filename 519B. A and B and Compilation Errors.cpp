#include <iostream>
#include <bits/stdtr1c++.h>
#include<algorithm>
#define ll  long long
using namespace std;
const int N = int(1e5 + 3);
const long double PI = 3.1415926536;
//freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
ll a1[100500] , a2[100500] , a3[100500];
int main()
{
ll n;
cin>>n;
for( int i=0 ; i<n ; i++)
{
    cin>>a1[i];
}
for( int i=0 ; i<n-1 ; i++)
{
    cin>>a2[i];
}
for( int i=0 ; i< n-2 ; i++)
{
    cin>>a3[i];
}

sort(a1 , a1+n );
sort(a2 , a2+n-1);
sort(a3 , a3+n-2);

for( int i=0 ; i<n ; i++)
{
    if(a1[i]!=a2[i])
    {
        cout<<a1[i]<<endl;
        break;
    }
}
for(int i=0 ; i<n-1 ; i++)
{
      if(a2[i]!=a3[i])
    {
        cout<<a2[i]<<endl;
        break;
    }
}


}
