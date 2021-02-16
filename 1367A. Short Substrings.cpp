#include <iostream>
#include <bits/stdtr1c++.h>
#include<algorithm>
#define ll  long long
using namespace std;
vector <string> ans;

int main()
{
    int t;
    string b;
    cin>>t;
    while(t--)
    {
        cin>>b;
        string a;
        for(int i=0 ; i<b.size()-1 ; i+=2)
        {
            a.push_back(b[i]);
        }
        a.push_back(b[b.size()-1]);
        ans.push_back(a);

    }
for(int i=0 ; i<ans.size() ; i++)
        cout<<ans[i]<<endl;
}
