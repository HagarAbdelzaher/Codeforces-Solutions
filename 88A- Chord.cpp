
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

map<string , int> mp;
string in[3];
int distance (string s1 , string s2)
{
    return (mp[s2]-mp[s1]+mp.size())%mp.size();
}
int main()
{
    mp["C"]=0;
    mp["C#"]=1;
    mp["D"]=2;
    mp["D#"]=3;
    mp["E"]=4;
    mp["F"]=5;
    mp["F#"]=6;
    mp["G"]=7;
    mp["G#"]=8;
    mp["A"]=9;
    mp["B"]=10;
    mp["H"]=11;
    cin>>in[0]>>in[1]>>in[2];
    sort(in , in+3);
    do
    {
        if(distance(in[0], in[1])==4 && distance(in[1], in[2])==3)
        {
            cout<<"major"<<endl;
            return 0;
        }
        if(distance(in[0], in[1])==3 && distance(in[1], in[2])==4)
        {
            cout<<"minor"<<endl;
            return 0;
        }
    }
    while (next_permutation(in , in+3));
    cout<<"strange"<<endl;

}











 
