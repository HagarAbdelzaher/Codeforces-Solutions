#include<bits/stdc++.h>
using namespace std;
bool cmp (string a , string b)
{
    return (a+b < b+a);
}
int main()
{
    int n;
    cin>>n;
    string *arr = new string [n];
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
    sort(arr , arr+n , cmp);
    for(int i=0 ; i<n ; i++)
        cout<<arr[i];
}
