/*
Given a string S. The task is to print all permutations of a given string.
*/
/*love_for_code*/
/*code_for_love*/
//Code_written_by: @AMIT KUMAR;
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define pob pop_back
#define MODM 1000000007
#define MODS 10000007
#define INF 2000000000000000000LL
#include <bits/stdc++.h>
using namespace std;
vector<string> v;
void permute(string str, string out) 
{ 
    if(str.size()==0) 
    {
        v.pb(out);
        return; 
    } 
    for(int i=0;i<str.size();i++) 
    {  
        permute(str.substr(1),out+str[0]); 
        rotate(str.begin(),str.begin()+1,str.end()); 
    } 
}
int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
       string s;
       cin>>s;
       permute(s,"");
       ll sz=v.size();
       sort(v.begin(),v.end());
       for(int i=0;i<sz;i++)
       {
           cout<<v[i]<<" ";
       }
       cout<<endl;
       v.clear();
    }
    return 0;
}
