#include <iostream>
#include <bits/stdtr1c++.h>
#include<algorithm>
#define ll  long long
using namespace std;


int main()
{
int t;
string s;
int cnt=0;
cin>>t;
while(t--)
{
    cnt=0;
    cin>>s;
    for(int i=0 ; i<s.size() ; i++)
    {
        if((s[i]=='0' && s[i+1]=='1' )||(s[i]=='1' && s[i+1]=='0'))
          {
              cnt++;
              s.erase(s.begin()+i , s.begin()+i+2 );
              i=-1;

          }
    }
    if( cnt%2 != 0)
        cout<<"DA"<<endl;
    else
        cout<<"NET"<<endl;

}
}
 
