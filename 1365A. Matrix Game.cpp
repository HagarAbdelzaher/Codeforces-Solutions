#include <iostream>
#include <bits/stdtr1c++.h>
#include<algorithm>
#define ll  long long
using namespace std;
vector <string> ans;
int main()

{
    int t,n,m,x;
    cin>>t;
    while(t--)
    {
        int turn=0;
        cin>>n>>m;
        bool visRow[n];
        bool visCols[m];
        for( int i = 0; i < n; ++i )
		visRow[ i ] = true;
		for( int i = 0; i < m; ++i )
		visCols[ i ] = true;
        for(int i=0 ; i<n ; i++)
       {
            for(int j=0 ; j<m ; j++)
        {
                cin>>x;
                if(x==1)
                    {
                        visRow[i]=false;
                        visCols[j]=false;
                    }
        }
       }
       for(int i=0 ; i<n ; i++)
       {
           for(int j=0 ; j<m ; j++)
           {
               if(visRow[i]== true && visCols[j]== true)
               {
                   turn++;
                   visRow[i]=false;
                   visCols[j]=false;
               }
           }
       }
       if(turn%2==0)
        ans.push_back("Vivek");
       else
        ans.push_back("Ashish");

    }

    for(int i=0 ; i<ans.size() ; i++)
        cout<<ans[i]<<endl;
}
 
