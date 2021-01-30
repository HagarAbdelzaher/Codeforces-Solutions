#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void run() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
}
long  arr[1009][1009];
int  row[1009] ,  col[1009];
int main()
{
   run();
   int n , m , k;
   cin>>n>>m>>k;
    for(int i=0 ; i<n ; i++)
    {for(int j=0 ; j<m ; j++)
        {
            cin>>arr[i][j];
        }
    }
   for(int i=0 ; i<1009; i++)
 {
    row[i]=i;
    col[i]=i;
 }
  while(k--){
    char c;
    int x,y;
    cin >> c >> x >> y;
    x--;
    y--;
    if(c=='r'){
            swap(row[x],row[y]);
    }else if(c=='c'){
            swap(col[x],col[y]);
    }else
       {cout << arr[row[x]][col[y]] <<'\n';}
}
}
