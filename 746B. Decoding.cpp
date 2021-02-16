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
    int n , len ;
    string s;
    cin>>len>>s;
    n =(int) s.size();
    vector<char> ans;
    while (n!=0)
    {
        if(n%2==1)
            ans.push_back(s[0]);
        else
            ans.insert(ans.begin() , s[0]);
        s.erase(0,1);
        n = (int)s.size();
    }

 for(int i=0 ; i<len ; i++)
    cout<<ans[i];
}


 
