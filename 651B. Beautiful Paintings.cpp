#include <iostream>
#include <bits/stdtr1c++.h>
#include<algorithm>
#define ll  long long
using namespace std;

const int N = int(1e9 + 3);
int arr[1005] = {0};
int main()
{
    ll n , m , res=0;

    cin>>n;
    for(int i=0 ; i<n ; i++)
    {
        cin>>m;
        if(res< ++arr[m])
            res=arr[m];
    }
    cout<<n-res;



}
 
