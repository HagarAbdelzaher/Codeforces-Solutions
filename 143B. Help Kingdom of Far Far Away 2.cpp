#include <iostream>
#include <bits/stdtr1c++.h>
#include<algorithm>
#define ll  long long
using namespace std;
const int N = int(1e5 + 3);
const long double PI = 3.1415926536;
//freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
int a[int(1e6)];

int main()
{
   string s;
   cin>>s;
   vector<char> whole , frac;
   bool dec = false;

   int i=0;
   while (i<s.size())
  {
    if(s[i]=='.')
        dec=true;
    else if (dec)
    {
        frac.push_back(s[i]);
    }
    else
    {
        whole.push_back(s[i]);
    }
    i++;
  }


   if(frac.size()== 0)
   {
       frac.push_back('0');
       frac.push_back('0');
   }
   else if(frac.size() == 1)
   {
        frac.push_back('0');
   }
   else if (frac.size()>2)
   {
       frac.erase(frac.begin()+2 , frac.end());
   }


   bool neg = false;
   if(whole[0]== '-' )
   {
       neg = true;
       whole.erase(whole.begin() , whole.begin()+1);
   }


   for(int i= whole.size()-3 ; i>0 ; i-=3)
   {
       whole.insert(whole.begin()+i , 1  , ',');
   }


   vector<char> ans;

   if (neg)
    ans.push_back('(');

   ans.push_back('$');
   for(int i=0 ; i<whole.size() ; i++)
    ans.push_back(whole[i]);
    ans.push_back('.');
   for(int i=0 ; i< 2 ; i++)
    ans.push_back(frac[i]);

    if(neg)
        ans.push_back(')');
   for(int i=0 ; i<ans.size() ; i++)
    cout<<ans[i];


}

 
