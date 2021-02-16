#include <iostream>
#include <bits/stdtr1c++.h>
#include<algorithm>
#define ll  long long
using namespace std;
const int N = int(1e5 + 3);
const long double PI = 3.1415926536;
//freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
int a[int(1e6)];
int sum[int(1e6)];

int main()
{
    string s;
    int l , r, m;
    cin>>s;
    int n = s.size();
    int i , k=0;
    a[1]=0;
    for( i=1; i<n; i++)
    {
        if(s[i]==s[i-1])
            {
               a[i+1] = a[i] +1;
            }
            else
            {
                a[i+1]=a[i];
            }

    }
    cin>>m;
    while(m--)
    {
        cin>>l>>r;
        cout<<a[r]-a[l]<<endl;
    }

}
