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
int arr[1005][1005];
int main()
{
    run();
    int n ,m ;
    cin>>n>>m;
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<m ; j++)
            cin>>arr[i][j];
    }
    int ans = 0;
    for(int i=0 ; i<n ; i++)
    {
        bool flag = false;
        for(int j=0 ; j<m ; j++)
        {
            if(arr[i][j])
                flag = true;
            else if((!arr[i][j]) && flag)
                ans++;
        }
    }
      for(int i=n-1; i>=0 ; i--)
    {
        bool flag = false;
        for(int j=m-1 ; j>=0; j--)
        {
            if(arr[i][j])
                flag = true;
            else if((!arr[i][j]) && flag)
                ans++;
        }
    }

    for(int i=0 ; i<m ; i++)
    {
        bool flag = false;
        for(int j=0 ; j<n ; j++)
        {
            if(arr[j][i])
                flag = true;
            else if((!arr[j][i])&& flag)
                ans++;
        }
    }
    for(int i=m-1 ; i>=0 ; i--)
    {
        bool flag = false;
        for(int j=n-1 ;j>=0 ; j--)
        {
            if(arr[j][i])
                flag = true;
            else if((!arr[j][i])&& flag)
                ans++;
        }
    }

    cout<<ans<<endl;

}




 
