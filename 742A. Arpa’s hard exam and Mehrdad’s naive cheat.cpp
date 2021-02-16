#include <iostream>
#include <bits/stdtr1c++.h>
#include<algorithm>
using namespace std;

int main()
{
long long  n;
cin>>n;
if(n==0)
{
    cout<<"1";
    return(0);
}
if(n%4==0)
    cout<<"6";
else if (n%4==1)
    cout<<"8";
else if(n%4==2)
    cout<<"4";
else if (n%4==3)
    cout<<"2";
}
