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
    int n;
    cin>>n;
    cin>>s;
    int  A=0 , I=0;
    for( int i=0 ; i<n ; i++)
    {
        if(s[i]=='A')
            A++;
        if(s[i]=='I')
            I++;
    }
        if(I==0)
            cout<<A;
        else if (I==1)
            cout<<1;
        else if(I>1)
            cout<<0;

}



 
