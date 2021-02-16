#include <iostream>
#include <bits/stdtr1c++.h>
#include<algorithm>
#define ll  long long
using namespace std;

const int N = int(1e5 + 3);

int main()
{


double long avg,  n , x , sum=0;
cin>>n;
for(int i=0 ; i<n ; i++)
{
    cin>>x;
    sum+=x;
}
avg = sum/n;
cout<<avg;
}
