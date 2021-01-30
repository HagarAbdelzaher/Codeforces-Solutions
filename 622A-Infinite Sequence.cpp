#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll               long long



int main() {
   long long n , k;
   cin>>n;
   k=n;
   for(int i=1 ; i<n ; i++)
   {
       if(k<=i)
        break;
       k-=i;
   }
   cout<<k;

}
