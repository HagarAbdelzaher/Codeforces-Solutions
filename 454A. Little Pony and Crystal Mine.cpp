#include <iostream>
#include <bits/stdtr1c++.h>
#include<algorithm>
using namespace std;

int main()
{
int n , stars , d;
cin>>n;
stars = n/2;
for (int i=0 ; i< n ; i++)
{
        d = n - (stars*2);

    for ( int j = 0 ; j < stars; j++) cout<<"*";
    for ( int j = 0 ; j < d  ; j++) cout<<"D";
    for ( int j = 0 ; j < stars ; j++  ) cout<<"*";
    cout<<endl;

    if(i < (n/2))
        stars--;
    else
        stars++;

}
}
