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
    ll n;
    char c;
    cin>>n;
    set <char> st;
    
    for( int i=0; i<n ; i++)
    {
        cin>>c;
        st.insert(c);
    }
    if(n>26)
    {
        cout<<-1<<endl;
        exit(0);
    }
    cout<< n-st.size();
}
