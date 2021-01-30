#define  FOR(i,n) for(int i=0;i<n;i++)
#define rFOR(i,x,n) for(int i=x;i>n;i--)
#define SZ(x) (int)x.size()
#define pb push_back
#define mp make_pair
#define fi first
#define se second
typedef long long ll;
const int oo=(1LL<<30);
const ll  OO=(1LL<<62);
const int MaxSize=1e2+2;
const double PI=3.141592653589;
#include <stdio.h>
#include <iostream>
#include<bits/stdc++.h>
typedef long long ll;
const int sz = 1e5+5;
using namespace std;
void run() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
}
const int maxn = 1e3+5;
const int maxm = 1e6+5;
int a [maxn];

bool checkTaxi(string s)
{
    if(s[0]==s[1] && s[0]==s[3] && s[0]==s[4]&& s[0]==s[6] && s[0]==s[7])
        return true;
    else
        return false;
}
bool checkPizza(string s)
{
    if(s[0]>s[1] && s[1]>s[3] && s[3]>s[4]&& s[4]>s[6] && s[6]>s[7] )
        return true;
    else
        return false;
}





int main()
{
  run();
  int t;
  cin>>t;
  vector<pair<int , string> > taxis , phones , pizzas;
  int maxtaxi = -1 , maxphone = -1 , maxpizza= -1;
  while(t--)
  {
      int n , ph=0 , tx=0 , pz = 0;
      string name , phone;
      cin>>n>>name;
      for(int i=0 ; i<n ; i++)
      {
          cin>>phone;
          if(checkTaxi(phone))
            tx++;
          else if(checkPizza(phone))
            pz++;
          else
              ph++;
      }
      if(tx >= maxtaxi)
      {
          maxtaxi = tx;
          taxis.push_back(make_pair( tx , name));
      }
      if(pz >= maxpizza)
      {
          maxpizza = pz;
          pizzas.push_back(make_pair( pz , name));
      }
      if(ph >= maxphone)
      {
          maxphone = ph;
          phones.push_back(make_pair(ph , name));
      }
  }
 


  vector <string> ans1 , ans2 , ans3;
  for(int i=0 ; i<taxis.size() ; i++)
  {
      if(taxis[i].first == maxtaxi)
      {
          ans1.push_back(taxis[i].second);
      }
  }
  for(int i=0 ; i<pizzas.size() ; i++)
  {
      if(pizzas[i].first == maxpizza )
        ans2.push_back(pizzas[i].second);
  }

  for(int i=0 ; i<phones.size() ; i++)
  {
      if(phones[i].first == maxphone)
        ans3.push_back(phones[i].second);
  }


//----------------------------------------------------------------------------
cout<<"If you want to call a taxi, you should call: ";
for(int i=0 ; i<ans1.size() ; i++)
{
    if(i==ans1.size()-1)
        cout<<ans1[i]<<"."<<endl;
    else
        cout<<ans1[i]<<", ";
}
cout<<"If you want to order a pizza, you should call: ";
for(int i=0 ; i<ans2.size() ; i++)
{
    if(i==ans2.size()-1)
        cout<<ans2[i]<<"."<<endl;
    else
        cout<<ans2[i]<<", ";
}
cout<<"If you want to go to a cafe with a wonderful girl, you should call: ";
for(int i=0 ; i<ans3.size() ; i++)
{
    if(i==ans3.size()-1)
        cout<<ans3[i]<<"."<<endl;
    else
        cout<<ans3[i]<<", ";
}

}
