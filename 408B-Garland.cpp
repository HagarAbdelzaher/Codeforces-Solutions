#include <iostream>
#include<bits/stdc++.h>
typedef long long ll;
const int sz = 1e5+5;
using namespace std;
void run() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
}


int a1[10005] , a2[10005];
int main()
{
run();
string s1 , s2;
cin>>s1>>s2;
sort(s1.begin() , s1.end());
sort(s2.begin() , s2.end());
for(int i=0 ; i<s1.size() ; i++)
{
    a1[((int)s1[i]-'a')]++;
}
for(int i=0 ; i<s2.size() ; i++)
{
    a2[((int)s2[i]-'a')]++;
}
int ans = 0;
for(int i=0 ; i<28 ; i++)
{
    if(a2[i]!=0 && a1[i]==0)
    {
        cout<<-1<<endl;
        exit(0);
    }
    ans+=min(a1[i],a2[i]);
}
if(ans==0)
    cout<<-1<<endl;
else
    cout<<ans<<endl;
}
