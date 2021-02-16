#include <iostream>
#include <bits/stdtr1c++.h>
#include<algorithm>
using namespace std;



int cnt[5];
int main()
{
int n;
int x,y;
int a1 , a2;
bool used[105];
memset(used,0,sizeof(used));
cin>>n;
cin>>a1>>a2;
for(int i=0 ; i< n-1; i++)
    {
        cin>>x>>y;
        for(int j=x+1 ; j<=y ; j++)
        {
            used[j]=true;
        }
    }
    int c=0;
    for(int i=a1+1 ; i<=a2; i++)
    {
        if(used[i]==false)
            c++;

    }
    cout<<c<<endl;
}


 
