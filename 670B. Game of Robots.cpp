#include <iostream>
#include <bits/stdtr1c++.h>
#include<algorithm>
#define ll  long long
using namespace std;

const int N = int(1e5 + 3);

int main()
{
ll  n , k , x;
vector<int>vec;
cin>>n>>k;
for(int i=0 ; i<n ; i++)
{
    cin>>x;
    vec.push_back(x);
}
int i=1;
while (true)
{
    if(k-i >0)
    {
        k-=i;
        i++;
    }
    else {
        cout<<vec[k-1];
        exit(0);
    }

}

}
 
