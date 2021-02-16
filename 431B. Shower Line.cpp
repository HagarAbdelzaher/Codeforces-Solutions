#include <iostream>
#include <bits/stdtr1c++.h>
#include<algorithm>
#define ll  long long
using namespace std;

const int N = int(1e5 + 3);
const long double PI = 3.1415926536;
//freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
int g[6][6];
int main()
{
    int n=5;
    for( int i=0 ; i<n ; i++)
        for(int j=0 ; j<n; j++)
            cin>>g[i][j];
 int p[6] , ans = -1 , tmp=0;
 for( int i=0 ; i<n ; i++)
    p[i]=i;

 do{

tmp  = g[p[0]][p[1]] +  g[p[1]][p[0]];
tmp += g[p[2]][p[3]] +  g[p[3]][p[2]];

tmp += g[p[1]][p[2]] +  g[p[2]][p[1]];
tmp += g[p[3]][p[4]] +  g[p[4]][p[3]];

tmp += g[p[2]][p[3]] +  g[p[3]][p[2]];

tmp += g[p[4]][p[3]] +  g[p[3]][p[4]];

if(tmp> ans )
    ans = tmp;
 }
 while (next_permutation(p , p+n));
cout<<ans;

}




