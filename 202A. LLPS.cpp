#include <iostream>
#include <bits/stdtr1c++.h>
#include<algorithm>
#define ll  long long
using namespace std;

int main()
{
string s;
cin>>s;
map<char , int> mp;
for ( int i=0 ; s[i] ; i++)
    mp[s[i]]++;

map<char,int> :: reverse_iterator r = mp.rbegin();


char c = r->first;
int n = r->second;

for ( int i=0 ; i<n ; i++)
    cout<<c;



}
 
