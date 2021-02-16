#include <iostream>
#include <bits/stdtr1c++.h>
#include<algorithm>
#define ll  long long
using namespace std;
const int N = int(1e5 + 3);
const long double PI = 3.1415926536;
//freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
int n , l , rez , a[100500];
int main()
{
    scanf("%d%d" , &n , &l);
    for(int i=0 ; i<n ; i++)
    {
       scanf("%d" , &a[i]);
    }
    sort(a , a+n);
      rez = 2*max( a[0] , l-a[n-1]);
    for(int i= 0 ; i<n-1 ; i++)
    {
        rez = max(rez, a[i+1] - a[i]);
    }
    printf("%.10f\n" , rez/2. );
    return 0;

}









 
