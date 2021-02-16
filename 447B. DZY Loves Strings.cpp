#include <iostream>
#include <bits/stdtr1c++.h>
#include<algorithm>
#define ll  long long
using namespace std;

const int N = int(1e5 + 3);

int main()
{
ll  n , k , x , sum = 0;
vector <int> main;
string s;
cin>>s>>k;
n = s.size();
main.push_back(-2000);
for(int i=1 ; i<=26 ; i++)
{
    cin>>x;
    main.push_back(x);
}
for(int i=0 ; i<n ; i++)
{
     sum +=( main[ s[i]-'a' +1]*(i+1));
}
int tot1 = ((n+k)*(n+k+1))/2;
int tot2 = ((n)*(n+1))/2;
int tot = tot1-tot2;
int large = *max_element(main.begin() , main.end());
cout<<(large*tot)+sum<<endl;


}
 
