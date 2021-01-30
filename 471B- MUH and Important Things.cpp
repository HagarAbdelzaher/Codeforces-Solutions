#include <iostream>
#include<bits/stdc++.h>
typedef long long ll;
const int sz = 1e5+5;
using namespace std;
void run() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
}

int main()
{
  run();
int n , x;
vector<pair<int,int>>v;
cin>>n;
for(int i=1 ; i<=n ; i++)
{
    cin>>x;
    v.push_back(make_pair(x,i));
}
int swaps = 0;
sort(v.begin() , v.end());
vector<int> ind;
for(int i=0 ; i<n; ++i)
{
    if(v[i].first == v[i+1].first)
    {
        ++swaps;
        ind.push_back(i);
        ind.push_back(i+1);
    }
}
if(swaps<2)
{
    cout<<"NO"<<endl;
}
else
{
    cout<<"YES"<<endl;
    for(int i=0 ; i<n ; i++)
        cout<<v[i].second<<" ";
    cout<<endl;
  swap(v[ind[0]] , v[ind[1]]);
   for(int i=0 ; i<n ; i++)
        cout<<v[i].second<<" ";
    cout<<endl;
      swap(v[ind[2]] , v[ind[3]]);
    for(int i=0 ; i<n ; i++)
        cout<<v[i].second<<" ";
    cout<<endl;

}



}
 
