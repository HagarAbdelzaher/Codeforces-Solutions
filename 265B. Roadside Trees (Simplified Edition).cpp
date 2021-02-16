#include <iostream>
#include <bits/stdtr1c++.h>
#include<algorithm>
#define ll  long long
using namespace std;

const int N = int(1e5 + 3);

int main()
{
int n , x , ans = -1, h = 0;
cin>>n;
for (int i=0 ; i<n ; i++)
{
    cin>>x;
    ans+=fabs(h-x)+2;
    h=x;
}
cout<<ans;

}
