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
    freopen ("input.txt", "r", stdin);
    freopen ("output.txt", "w", stdout);
    int n , k , x;
    cin>>n>>k;
    vector <pair<int,int>> vec;
    for(int i=0 ; i<n ; i++)
    {
        cin>>x;
        vec.push_back(make_pair(x,i));
    }
    sort(vec.begin() , vec.end());
    vector<int> ans;
    int temp;
    for(int j = 0 ; j<k ; j++)
    {
        ans.push_back(vec[--n].second);
        if(j==k-1)
        {
            temp = vec[n].first;
        }
    }
    sort(ans.begin() , ans.end());
    cout<<temp<<endl;
    for(int i=0 ; i<ans.size() ; i++)
    {
        cout<<ans[i]+1<<" ";
    }
}
 
