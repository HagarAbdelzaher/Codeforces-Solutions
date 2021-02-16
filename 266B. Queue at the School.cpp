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

int main()
{
    int n ,t;
    string s;
    char ans[55];
    cin>>n>>t>>s;
    while (t--)
    {

        for(int i=0 ; i<n ; i++)
            {
                if(s[i]=='B' && s[i+1]=='G')
                {
                    ans[i]= 'G';
                    ans[i+1]='B';
                    i++;
                }
                else
                {
                    ans[i]=s[i];
                }
            }
            s=ans;
    }
 for(int i=0 ; i<n ; i++)
    cout<<ans[i];
}
 
