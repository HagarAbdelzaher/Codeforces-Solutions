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
int n;
cin>>n;
for(int i=0 ; i<n ; i++)
{
    cin>>a[i];
}
for(int i=0 ; i<n-1 ; i++)
{
    if(a[i]%2 == 1)
    {
        if(a[i+1] == 0)
        {
            cout<<"NO"<<endl;
            exit(0);
        }
        a[i+1]--;
    }

}

if(a[n-1]%2)
    cout<<"NO"<<endl;
else
    cout<<"YES"<<endl;
}



 
