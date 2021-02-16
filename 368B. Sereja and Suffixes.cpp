#include <iostream>
#include <bits/stdtr1c++.h>
#include<algorithm>
#define ll  long long
using namespace std;
vector <int> ans;

int main()
{
    ll n,m , l;
    cin>>n>>m;
    vector<ll>vec(n);
    set<ll>st;
    int result[n+1];
    for(ll i=0 ; i<n ; i++)
    {
        cin>>vec[i];
    }
    for( int j=n-1 ; j>=0 ; j--)
    {
        st.insert(vec[j]);
        result[j]=st.size();
    }

    while(m--)
    {
        cin>>l;
        cout<<result[l-1]<<endl;
    }

}
