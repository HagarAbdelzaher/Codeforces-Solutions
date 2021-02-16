#include <iostream>
#include <bits/stdtr1c++.h>
#include<algorithm>
#define ll  long long
using namespace std;

int main()
{
int n;
string s, s1 , s2;
cin >> n >> s;
s1= s.substr(0, n);
s2= s.substr(n, n);
sort(s1.begin(), s1.end());
sort(s2.begin(), s2.end());
bool smaller = true;
bool great = true;

for( int i=0 ; i<n ; i++)
{
        if(s1[i] >= s2[i])
        {
            smaller = false;
            break;
        }
}

for( int i=0 ; i<n; i++)
{
        if(s1[i]<=s2[i])
        {
            great = false;
            break;
        }
}


if(smaller || great)
   cout<<"YES"<<endl;
else
    cout<<"NO"<<endl;


}


 
