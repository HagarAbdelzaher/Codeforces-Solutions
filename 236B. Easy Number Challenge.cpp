#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void run() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
}
int arr[1000050];
long long mod = 1073741824, sum = 0;
vector<long> vec;
int main()
{
   run();
   for(int i=1;i<=1000000;i++){
    	for(int j=i;j<=1000000;j+=i){
    	    arr[j]++;
    	}
   }
   int a,b,c;
   cin>>a>>b>>c;
   for(int i=1 ; i<=a ; i++){
    for(int j=1;j<=b;j++){
        for(int k=1;k<=c;k++){
            sum = (sum%mod+arr[i*j*k]%mod)%mod;
        }
    }
   }
   cout<<sum<<endl;

}
