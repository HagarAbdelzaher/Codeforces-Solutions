#include <iostream>
#include <bits/stdtr1c++.h>
#include<algorithm>
#define ll  long long
using namespace std;

int main()
{
int vis[10]={0};
int n;
char c;
cin>>n;
for(int i=0 ; i<16 ; i++)
{
    cin>>c;
    if(c!='.')
    {
        vis[c-'0']++;
    }

}
for(int i=0 ; i<10 ; i++)
{

    if(vis[i]>n*2)
    {
          cout<<"NO";
          exit(0);
    }
}
cout<<"YES";

}
