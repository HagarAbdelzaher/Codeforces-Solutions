#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void run() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
}


int main()
{
  run();
 int n , x , y;
 cin>>n;
 map <int , int > add;
 map <int , int > sub;

 long long cnt = 0;
 for(int i=0 ; i<n ; i++)
 {
     cin>>x>>y;

     cnt+= add[x+y];
     add[x+y]++;
     cnt+= sub[x-y];
     sub[x-y]++;
 }

 cout<<cnt<<endl;

}
