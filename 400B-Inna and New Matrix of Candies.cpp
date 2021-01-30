#define  FOR(i,n) for(int i=0;i<n;i++)
#define rFOR(i,x,n) for(int i=x;i>n;i--)
#define SZ(x) (int)x.size()
#define pb push_back
#define mp make_pair
#define fi first
#define se second
typedef long long ll;
const int oo=(1LL<<30);
const ll  OO=(1LL<<62);
const int MaxSize=1e2+2;
const double PI=3.141592653589;
#include <stdio.h>
#include <iostream>
#include<bits/stdc++.h>
typedef long long ll;
const int sz = 1e5+5;
using namespace std;
void run() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
}
int main()
{
    run();
    int n , m;
    cin>>n>>m;
    string s;
    bool neg = false;
    int ans = 0;
    vector<string> v;
    for(int i=0 ; i<n ; i++)
    {
        cin>>s;
        v.push_back(s);
    }
    set <int> st;
    for(int i=0 ; i<v.size() ; i++)
    {
        string s = v[i];
        size_t gind = s.find('G');
        size_t sind = s.find('S');
        int steps = sind - gind - 1;
        if(steps <0)
            {
                cout<<"-1"<<endl;
                exit(0);
            }
        else
          st.insert(steps);
    }
    cout<<st.size();


}




 
