#include <iostream>
#include <bits/stdtr1c++.h>
#include<algorithm>
#define ll  long long
using namespace std;

const int N = int(1e5 + 3);
const long double PI = 3.1415926536;

int main()
{
int n , x;
vector<int> vec;
cin>>n;
for(int i=0 ; i<n ; i++)
{
    cin>>x;
    vec.push_back(x);
}
sort(vec.begin() , vec.end());
long double area=0;
for( int i=n-1 ; i>=0 ; i-=2)
{
    area += pow(vec[i],2);
}
for( int i=n-2 ; i>=0 ; i-=2)
{
    area -= pow(vec[i],2);
}
cout<<area*PI;
}
 
