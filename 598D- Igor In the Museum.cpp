#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int ans;
int vis [1005][1005]={};
int t[100001]={};
char arr[1005][1005]={};
int i , n , m , k , x , y , j;
void visit(int x, int y)
{
    if(x==0 || y==0 || x==n+1 || y==m+1)
        return;
    if(arr[x][y]=='*')
    {
        ans++;
        return;
    }
    if(vis[x][y]!=0)
        return;
    vis[x][y]=i;
    visit(x+1 , y);
    visit(x,y+1);
    visit(x , y-1);
    visit(x-1 , y);
    return;
}
int main()
{

 cin>>n>>m>>k;
 for( i=1 ; i<=n ; i++)
 {
     for(j=1 ; j<=m ; j++)
     {
         cin>>arr[i][j];
     }
 }
 for( i=1 ; i<=k ; i++)
 {
     cin>>x>>y;
     ans = 0;
     if(!vis[x][y])
        visit(x,y);
    else
        ans = t[vis[x][y]];
    t[i]=ans;
    cout<<ans<<endl;
 }
}
