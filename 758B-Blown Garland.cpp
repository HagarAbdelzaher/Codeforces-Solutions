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
    string s;
    vector<int>ind;
    int ir , ig , iy , ib , r=0 , y=0 , b=0 ,g=0;
    cin>>s;
    for(int i=0 ; i<s.size() ; ++i)
    {
        if(s[i]=='R')
            ir = i%4;
        else if (s[i]=='B')
            ib = i%4;
        else if(s[i]=='Y')
            iy = i%4;
        else if (s[i]=='G')
            ig = i%4;
        else if(s[i]=='!')
            ind.push_back(i%4);
    }
    for(int i=0 ; i<ind.size() ; i++)
    {
        if(ind[i]==ir)
            r++;
        else if(ind[i]==ig)
            g++;
        else if(ind[i]==iy)
            y++;
       else if(ind[i]==ib)
            b++;

    }
    cout<<r<<" "<<b<<" " << y <<" "<< g <<endl;

}
