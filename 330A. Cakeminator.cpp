#include <iostream>
#include <bits/stdtr1c++.h>
#include<algorithm>
#define ll  long long
using namespace std;
char s[101] , ans[101];
int main()
{

   string s;
   int r ,c;
   set<int> rst , cst;
   cin>>r>>c;
   for(int i=0 ; i<r ; i++)
   {
       cin>>s;
       for(int j=0 ; j<c;j++)
       {
           if(s[j]=='S')
           {
               rst.insert(i);
               cst.insert(j);
           }
       }
   }
   int rd = rst.size();
   int cd = cst.size();

   cout<<(r*c)-(rd*cd);

}
