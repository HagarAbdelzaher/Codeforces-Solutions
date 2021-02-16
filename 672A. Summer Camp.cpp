#include <iostream>
#include <bits/stdtr1c++.h>
#include<algorithm>
using namespace std;


vector <int> getDigits(int n)
{
    vector <int> ans;
    while (n>0)
    {
        ans.push_back(n%10);
        n/=10;
    }
    reverse(ans.begin() , ans.end());
    return ans;
}


int N=1000;

int main()
{
int n , cnt =0 , ans = -1;
cin>>n;
for(int p= 1 ; p<=N ; p++)
{
    vector <int> dig = getDigits(p);
    for(int j=0 ; j <dig.size() ; j++)
    {
        if((++cnt) >= n)
          {
               ans = dig[j];
               break;
          }
    }
    if(ans>=0)
        break;
}
cout<<ans;
}
