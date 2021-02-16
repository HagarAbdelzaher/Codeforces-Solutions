#include <iostream>
#include <bits/stdtr1c++.h>
#include<algorithm>
#define ll  long long
using namespace std;
const int N = int(1e5 + 3);
const long double PI = 3.1415926536;

int a[int(1e6)];
int sum[int(1e6)];

int main()
{
//    freopen ("input.txt", "r", stdin);
//    freopen ("output.txt", "w", stdout);
    ll n , k , x;
    cin>>n>>k;
    vector<int> vec;
    for(int i=0 ; i<n ; i++)
    {
        cin>>x;
        vec.push_back(x);
    }
    sort(vec.begin() , vec.end() , greater<int>());
    vec.push_back(0);
    if(k>n)
        cout<<"-1"<<endl;
    else
    {
        cout<<vec[k-1]<< " 0 " <<endl;
    }
}
