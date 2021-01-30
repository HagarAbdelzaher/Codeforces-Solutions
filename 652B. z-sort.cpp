
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i , j , n;
    cin>>n;
    long long a[n] , b[n];

   for(int i=0 ; i<n ; i++)
   {
       cin>>a[i];
   }
   sort(a , a+n, greater<long long> ());

   i=0 , j=1;
   while (j<n)
   {
       b[j]=a[i];
       i++;
       j+=2;
   }

   j=0;
   while (j<n)
   {
       b[j]=a[i];
       i++;
       j+=2;
   }
   for(i=1 ; i<n ; i+=2)
   {
       if(b[i]<b[i-1])
       {
           cout<<"Impossible"<<endl;
           return 0;
       }
   }
   for(i=2 ; i<n ; i+=2)
   {
       if(b[i]>b[i-1])
       {
           cout<<"Impossible"<<endl;
           return 0;
       }
   }
   for(i=0 ; i<n ; i++)
    cout<<b[i]<<" " ;
}
 
