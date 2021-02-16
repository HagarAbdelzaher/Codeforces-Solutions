#include <iostream>
#include <bits/stdtr1c++.h>
#include<algorithm>
#define ll  long long
using namespace std;

const int N = int(1e5 + 3);

int main()
{
ll n , ans = 0;
cin>>n;
for (int i=0 ; i<n ; i++)
{
    ans+=((n-i)*i);

}
cout<<ans+n;

}
