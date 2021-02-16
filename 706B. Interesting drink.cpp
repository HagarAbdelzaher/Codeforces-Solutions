#include <iostream>
#include <bits/stdtr1c++.h>
#include<algorithm>
#define ll  long long
using namespace std;
vector <int> ans;

int main()
{
    int n,q,x;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++)
        cin>>arr[i];
    sort(arr , arr+n );
    cin>>q;
    int arr2[q];
    for(int i=0 ; i<q ; i++)
    {
        cin>>arr2[i];
    }

    for( int i=0 ; i<q ; i++)
    {
        cout<<upper_bound(arr,arr+n , arr2[i])-arr<<endl;

    }
}
