#define  FOR(i,n) for(int i=0;i<n;i++)
#define rFOR(i,x,n) for(int i=x;i>n;i--)
#define SZ(x) (int)x.size()
#define pb push_back
#define mp make_pair
#define fi first
#define se second
typedef long long ll;
#include <stdio.h>
#include <iostream>
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void run() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
}
int arr[50];
vector<int> even , odd;
int main()
{
    run();

        int n;
       cin>>n;
       if( n%2!=0 || n < 3 )
        cout<<"NO"<<endl;
       else
        cout<<"YES"<<endl;


}
