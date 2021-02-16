#include <iostream>
#include <bits/stdtr1c++.h>
#include<algorithm>
#define ll  long long
using namespace std;
char s[101] , ans[101];
int main()
{

    int i,j , n;
    cin>>n>>s;
    i=0 , j=0;
    while (i<n)
    {
        while (i<n-2 && s[i]=='o'&& s[i+1]=='g' && s[i+2]=='o')
           {
                ans[j++]='*';
                ans[j++]='*';
                ans[j++]='*';
                i++;
                while (i<n-1 &&s[i]=='g' && s[i+1]=='o')
                    i+=2;
           }
           ans[j++]=s[i];
           i++;
    }
    cout<<ans;

}
