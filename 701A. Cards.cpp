#include <iostream>
#include <bits/stdtr1c++.h>
#include<algorithm>
#define ll  long long
using namespace std;
vector <pair<int,int>> vec;
int main()
{
int n ,x;
cin>>n;
for(int i=0 ; i<n ; i++)
{
    cin>>x;
    vec.push_back(make_pair(x,i));
}
sort(vec.begin() , vec.end());
for(int i=0 ; i < (n/2) ; i++)
{

    cout<< (vec[i].second)+1 << " " << (vec[n-i-1].second)+1 <<endl;
}

}
