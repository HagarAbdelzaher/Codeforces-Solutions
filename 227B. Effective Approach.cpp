#include <iostream>
#include <bits/stdtr1c++.h>
#include<algorithm>
#define ll  long long
using namespace std;

const int N = int(1e5 + 3);


int arr [N];
int main()
{

ll n , m , vas =0 , pet =0 ,q, x;
cin>>n;
for(int i=0 ; i<n ; i++)
{
    cin>>x;
   arr[x]=i+1;
}
cin>>m;
for(int i=0 ; i<m ; i++)
{
    cin>>q;
    vas += arr[q];
    pet += n - arr[q] +1;
}


cout<< vas << " " << pet << " "<<endl;
}
