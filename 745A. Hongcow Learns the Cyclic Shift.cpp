#include <iostream>
#include <bits/stdtr1c++.h>
#include<algorithm>
#define ll  long long
using namespace std;

int main()
{
string s;
cin>>s;
set<string> st;
int n = s.size()-1;

st.insert(s);
while(n--)
{
    s.push_back(s[0]);
    s.erase(0,1);
    st.insert(s);
}
cout<<st.size();




}
