#include <iostream>
#include <bits/stdtr1c++.h>
#include<algorithm>
#define ll  long long
using namespace std;
vector <int> ans;

int main()
{
vector<int> vec;
int n,k,x , cnt=0;
cin>>n>>k;
for(int i=0 ; i<n ; i++)
{
    cin>>x;
    vec.push_back(x);
}

for(int i=0 ; i<n-1 ; i++)
{
    int sum = vec[i]+vec[i+1];
    if(sum<k)
    {
        vec[i+1]=vec[i+1]+(k-sum);
        cnt = cnt+ (k-sum);
    }
}
cout<<cnt<<endl;
for(int i=0 ; i<n ; i++)
    cout<<vec[i]<<" ";
}
