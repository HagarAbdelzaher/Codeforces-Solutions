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
    int n;
    string s;
    cin>>n>>s;
     int A = 0 , C=0 , G=0 , T=0 , QU = 0;
     for( int i=0 ; i<n ; i++)
     {
         if(s[i]=='A')
            A++;
         else if (s[i]=='C')
            C++;
         else if (s[i]=='G')
            G++;
         else if (s[i]=='T')
            T++;
         else if (s[i]=='?')
            QU++;
     }
     int len = n/4;
//--------------------------------------------------------------------------------------------------------------------------------------------------------
       if( n % 4 != 0 ||  A > len|| C > len ||  G > len || T > len || n-(A+C+G+T) != QU) // hena
         {
             cout<< "==="<<endl;
             exit(0);
         }

     for (int i=0 ; i<n  ; i++)
     {
         if(s[i]=='?')
         {
             if(A < len)
             {
                 s[i]='A';
                 QU--;
                 A++;
             }
              else if( C<len )
             {
                 s[i]='C';
                 QU--;
                 C++;
             }
            else if( G<len )
             {
                 s[i]='G';
                 QU--;
                 G++;
             }
            else if( T<len )
             {
                 s[i]='T';
                 QU--;
                 T++;
             }
         }
     }

     if(A==len && C==len && G==len && T==len)
        cout<<s<<endl;
     else
        cout<<"==="<<endl;
}

 
