#include <iostream>
#include <bits/stdtr1c++.h>
using namespace std;
#define ll  long long
#define ld long double
#define pb push_back
#define INF 0x3f3f3f3f

#define vi vector<int>
#define vl vector<long long>
#define print(el) cout<<(el)<<endl;
const int N = int(1e5 + 3);
const long double PI = 3.1415926536;
//ll a[int(1e6)];
//ll b[int(1e6)];


int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int x;
        cin>>x;
        if(x==1)
        {
            cout<<-1;
        }
        else
        {
            cout<<"2";
            --x;
            while (x--)
                cout<<"3";
        }
        cout<<endl;
    }
}
//
