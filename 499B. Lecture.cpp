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
    int n , m;
    vector <pair<string,string>> vec;
    cin>>n>>m;
    string s1 , s2;
    for( int i=0 ; i<m ; i++)
    {
        cin>>s1>>s2;
        vec.push_back(make_pair(s1,s2));
    }
    vector <string> s , ans;
    for(int i=0 ; i<n ; i++)
    {
        cin>>s1;
        s.push_back(s1);
    }
    for( int i=0 ; i<n ; i++)
    {
        string srch = s[i];
        for( int j=0 ; j<m ; j++)
        {
            if (vec[j].first == srch || vec[j].second == srch)
            {
                if(vec[j].first.size() <= vec[j].second.size())
                {
                    ans.push_back(vec[j].first);

                }
                else
                {
                    ans.push_back(vec[j].second);
                }

            }

        }
    }
    for(int i=0 ; i<n ; i++)
        cout<<ans[i]<<" ";

}

 
