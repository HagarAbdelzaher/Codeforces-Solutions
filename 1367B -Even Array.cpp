#define  FOR(i,n) for(int i=0;i<n;i++)
#define rFOR(i,x,n) for(int i=x;i>n;i--)
#define SZ(x) (int)x.size()
#define pb push_back
#define mp make_pair
#define fi first
#define se second
typedef long long ll;
#include <stdio.h>
#include <iostream>
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void run() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
}
int arr[50];
int main()
{
    run();
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int even = 0 , odd = 0;
        for(int i=0 ; i<n ; i++)
            cin>>arr[i];
        for(int i=0 ; i<n ; i+=2)
        {
            if(arr[i]%2!=0)
                odd++;
        }
        for(int i=1 ; i<n ; i+=2)
        {
            if(arr[i]%2==0)
                even++;
        }
        if(even==odd)
            cout<<even<<"\n";
        else
            cout<<-1<<"\n";
    }

}




 
