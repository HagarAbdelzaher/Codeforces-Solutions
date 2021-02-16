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
   vector <char> temp;
   cin>>s;
   temp.push_back(s[0]);
   for( int i=1 ; i<s.size() ; i++)
   {
       char c = s[i];
       bool found = false;
       for(int j = 0 ; j<temp.size() ; j++)
       {
           if(c == temp[j])
           {
               found = true;
           }
       }
       if(!found)
       {
           temp.push_back(c);
       }
   }
//   for(int i=0 ; i<temp.size() ; i++)
//   {
//       cout<<temp[i];
//   }
   bool flag = true;
   if(s[0]!='a')
   {
       flag = false;
   }
   else
   {
       for(int i=0 ; i<temp.size()-1 ; i++)
       {
           if(temp[i+1]-temp[i]!=1)
           {
               cout<<"NO"<<endl;
               exit(0);
           }
       }
   }
   if(!flag)
    cout<<"NO"<<endl;
   else
   cout<<"YES"<<endl;

}






 
