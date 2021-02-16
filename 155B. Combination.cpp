#include <iostream>
#include <bits/stdtr1c++.h>
using namespace std;
#define ll  long long
#define ld long double
#define pb push_back
#define INF 0x3f3f3f3f
//#define for(i,n) for(int i = 0 ; i < n ; i++)
#define vi vector<int>
#define print(el) cout<<(el)<<endl;
//    freopen ("input.txt", "r", stdin);
//    freopen ("output.txt", "w", stdout);

const int N = int(1e5 + 3);
const long double PI = 3.1415926536;
ll a[int(1e6)];
ll pre[int(1e6)];
//int sum[int(1e6)];
struct card
{
    int a;
    int b;
};
bool comp( card &x , card &y)
{
    return (x.b > y.b) || (x.b == y.b && x.a > y.a);
}
int main()
{
 card arr [10000];
 int n;
 cin>>n;
 for(int i=0 ; i<n ; i++)
 {
     cin >> arr[i].a >> arr[i].b;
 }
 sort(arr , arr+n , comp);
 int score = arr[0].a , cards = arr[0].b;
 for(int i=1 ; i<n  && i<= cards ; i++)
 {
     score+=arr[i].a;
     cards+=arr[i].b;
 }
cout<<score<<endl;
}
 
