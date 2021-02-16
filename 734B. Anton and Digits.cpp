#include <iostream>
#include <bits/stdtr1c++.h>
#include<algorithm>
#define ll  long long
using namespace std;

const int N = int(1e5 + 3);

int main()
{
int k2 , k3 , k5 , k6;
cin>>k2>>k3>>k5>>k6;

int min1 = min(min(k2,k5) , k6);
k2-=min1;
k5-=min1;
k6-=min1;
int min2 = min(k2,k3);

cout<<(256* min1)+(32*min2);
}
