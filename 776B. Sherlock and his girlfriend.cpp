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



bool isPrime(int n)
{
    if(n<=1)
        return false;
    if(n<=3)
        return true;
    if(n%2==0 || n%3 ==0)
        return false;
    for( int i = 5 ; i*i<=n ; i+=6)
        if( n%i ==0 || n%(i+2) == 0)
            return false;
    return true;
}
int main()
{
vector <int> ans;
int n;
cin>>n;
bool nonPrime = false;


for( int i=2 ; i<=n+1 ; i++)
{
    if(isPrime(i))
        ans.push_back(1);
    else

        {
            ans.push_back(2);
            nonPrime = true;
        }
}


if (nonPrime)
        cout<<"2"<<endl;
else
        cout<<"1"<<endl;
for(int i=0 ; i<ans.size() ; i++)
{
    cout<<ans[i]<<" ";
}




}


 
