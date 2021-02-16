#include <iostream>
#include <bits/stdtr1c++.h>
#include<algorithm>
#define ll  long long
using namespace std;

const int N = int(1e5 + 3);

int main()
{
ll  n , l , r , L =0 , R=0 , maxK , currK , tempmaxK ,ind;
vector<pair<int,int>> vec;
cin>>n;
for(int i=0 ; i<n ; i++)
{
    cin>>l>>r;
    vec.push_back(make_pair(l,r));
    L+=l;
    R+=r;
}
maxK = fabs(L-R);
tempmaxK = maxK;

for(int i=0 ; i<n ; i++)
{
    currK = fabs((L-vec[i].first + vec[i].second)- (R - vec[i].second + vec[i].first));
    if(currK > maxK)
    {
        ind = i;
        maxK = currK;
    }
}
if(maxK == tempmaxK)
    cout<<0<<endl;
else
    cout<<ind+1<<endl;





}
 
