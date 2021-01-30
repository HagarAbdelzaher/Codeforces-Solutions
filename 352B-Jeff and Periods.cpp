#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void run() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
}
long long mod = 1073741824, sum = 0;
vector<vector<int>>vec(100050);
int prog(int i)
{
    if(vec[i].size()==1)
        return 0;
    int diff = vec[i][1]-vec[i][0];
    for(int j=1 ; j<vec[i].size()-1 ; j++)
    {
        if(vec[i][j+1]-vec[i][j]!=diff)
            return -1;
    }
    return diff;
}
vector<pair<int,int>> vp;
int main()
{
   run();
   int n , x;
   cin>>n;
   for(int i=0 ;i<n ; i++)
   {
       cin>>x;
       vec[x].push_back(i);
   }
   for(int i=0 ; i<vec.size() ; i++)
   {
       if(vec[i].size() && prog(i)!=-1)
       {
        int e = prog(i);
        vp.push_back(make_pair(i,e));
       }
   }
   cout<<vp.size()<<endl;
   for(int i=0 ; i<vp.size();i++)
    cout<<vp[i].first<<" "<<vp[i].second<<endl;

}
