#include <iostream>
#include <bits/stdtr1c++.h>
#include<algorithm>
#define ll  long long
using namespace std;
const int N = int(1e5 + 3);
const long double PI = 3.1415926536;
//freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
int arr[N];
int main()
{
    vector<int> ans;
    int n;
    cin>>n;
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
    int mx = arr[n-1];
    ans.push_back(0);
    for( int i= n-2 ; i>=0 ; i--)
    {
        if(arr[i]>mx)
        {
            mx = arr[i];
            ans.push_back(0);
        }
        else
        {
            ans.push_back(mx - arr[i]+1);
        }
    }
    for( int i = n-1 ; i>=0 ; i--)
    {
        cout<<ans[i]<<" ";
    }

}
