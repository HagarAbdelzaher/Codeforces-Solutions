#include <bits/stdc++.h>
using namespace std;
vector <int> v1 , v2;

int main()
{ int n , m ,x;
cin>>n>>m;
for(int i=0 ; i< n ; i++)
{   cin>>x;
    v1.push_back(x);
}
for( int i=0 ; i<m ; i++)
{
    cin>>x;
    v2.push_back(x);
}
sort(v1.begin() , v1.end());

for( int i=0 ; i< m ; i++)
    cout<< upper_bound(v1.begin() , v1.end() , v2[i])-v1.begin()<<" ";

}
