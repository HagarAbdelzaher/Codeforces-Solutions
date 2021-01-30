#define  FOR(i,n) for(int i=0;i<n;i++)
#define rFOR(i,x,n) for(int i=x;i>n;i--)
#define SZ(x) (int)x.size()
#define pb push_back
#define fi first
#define se second
typedef long long ll;
#include <stdio.h>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void run() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
}

int main()
{
run();
int t;
cin>>t;
while (t--)
{
    map<int, int> mp;
    bool flag = false;
    int n , x;
    cin>>n;
    for(int i=0 ; i<n ; i++)
        {
            cin>>x;
            mp[x]++;
        }
        for(auto i : mp)
        {
            if(i.second > 1 )
            {
                flag = true;
                break;
            }
        }
        cout<< (flag? "YES\n" :"NO\n");

}
}

 
