#include <iostream>
#include <bits/stdtr1c++.h>
#include<algorithm>
#define ll  long long
using namespace std;

const int N = int(1e9 + 3);

int main()
{
int n ,x,y , minn = N , maxx = -1;
vector <pair<int, int> > vec;
cin>>n;
for( int i=0 ; i<n ; i++)
{
    cin>>x>>y;
    vec.push_back(make_pair(x,y));
    minn = min(minn,x);
    maxx = max(maxx , y);
}

for( int i=0 ; i<n ; i++)
{
    if(vec[i].first == minn && vec[i].second == maxx)
    {
        cout<<i+1<<endl;
        exit(0);
    }
}
cout<<-1<<endl;
}
