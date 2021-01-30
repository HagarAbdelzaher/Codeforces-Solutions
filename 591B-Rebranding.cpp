#define  FOR(i,x,n) for(int i=x;i<n;i++)
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
#include <iostream>
#include<bits/stdc++.h>
typedef long long ll;
const int sz = 1e5+5;
using namespace std;
void run() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
}
string alpha="abcdefghijklmnopqrstuvwxyz";
int arr[50];
int main()
{
    run();
    int n,k; cin>>n>>k;
    char a,b;
    string s; cin>>s;
    for(int i=0;i<alpha.size();i++){
        arr[alpha[i]-'a']=i;
    }
    for(int i=0;i<k;i++){
        cin>>a>>b;
        swap(arr[a-'a'],arr[b-'a']);
        swap(alpha[arr[a-'a']],alpha[arr[b-'a']]);
    }
    string x="";
    for(int i=0;i<s.size();i++){
        x+=alpha[s[i]-'a'];
    }
    cout<<x;
    return 0;
}
