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

    int q;
    cin>>q;
    vector<string> New , old;
    string snew , sold;
    bool flag;

    for( int i=0 ; i<q ; i++)
    {
        flag  = false;
        cin>>sold>>snew;
        for( int j =0 ; j< New.size() ; j++)
        {
            if(sold == New[j])
            {
                flag = true;
                New[j] = snew;
            }
        }
        if(!flag)
        {
            old.push_back(sold);
            New.push_back(snew);
        }
    }
    cout<<old.size()<<endl;
    for( int i=0 ; i<old.size() ; i++)
    {
        cout<<old[i]<< " " << New[i] <<endl;
    }
}
