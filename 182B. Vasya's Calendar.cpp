#include <iostream>
#include <bits/stdtr1c++.h>
#include<algorithm>
#define ll  long long
using namespace std;

const int N = int(1e5 + 3);

int main()
{
int n , d, x , ans=0;
cin>>d>>n;
for( int i=0 ; i<n ; i++)
{
    cin>>x;
    if(i==n-1)
        break;
    else
        ans+=(d-x);
}


cout<<ans;
}
