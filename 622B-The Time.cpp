#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll               long long



int main() {
   int oldm , oldh , newm , newh , mtp , htp , x;
   char c;
   cin>>oldh>>c>>oldm>>x;
   newm  = oldm +x;
   mtp = newm%60;
   newh = oldh + (newm/60);
   htp = newh%24;

   if(htp<10)
    cout<<0;
   cout<<htp;
   cout<<c;
   if(mtp<10)
    cout<<0;
   cout<<mtp;

}
