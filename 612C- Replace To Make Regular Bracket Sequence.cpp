#include <bits/stdc++.h>
using namespace std;
vector <string> v1;
vector<pair<int , int>> vec;


int fun (char c)
{
    int x = c;
    return x/30;
}
int main()
{
string s;
cin>>s;
stack<char>st;
int cnt = 0 , ans = 0 , a , b;
bool flag = true;
for(int i=0 ; i<s.size() ; i++ )
{
    if(s[i]=='<' || s[i]=='(' || s[i]=='{' || s[i]=='[')
        {
            st.push(s[i]);
            cnt++;
        }
    else
    {
        a = fun(s[i]);
        if(st.size())
        {
            b = fun(st.top());
            st.pop();
            cnt--;
            if(cnt<0)
            {
                flag = false;
                break;
            }

        }
        else
        {
            flag = false;
            break;
        }
        if(a!=b ) ans++;
    }
}
 if(cnt!=0)
        flag = false;
    if(flag)
        cout<<ans;
    else
        cout<<"Impossible"<<endl;
}
