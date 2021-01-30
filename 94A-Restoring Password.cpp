
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
map<string , int> mp;
string S;
cin>>S;
for(int i=0 ; i<10 ; i++)
{
    string c;
    cin>>c;
    mp.insert(pair<string , int> (c,i));
}
for(int i=0 ; i<8 ; i++)
{
    map<string , int> :: iterator it;
    it = mp.find(S.substr(i*10 , 10));
    cout<< it->second ;
}

}


 
