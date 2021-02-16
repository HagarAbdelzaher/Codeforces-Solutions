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
ll n ,k , m , j;
cin>>n>>k;

m = pow(2,n-1);

while (m!=k)
{
    if(k>m)
    {
        j=k-m;
        k=m-j;
    }
    n--;
    m = pow(2,n-1);
}
cout<<n<<endl;


}


 
