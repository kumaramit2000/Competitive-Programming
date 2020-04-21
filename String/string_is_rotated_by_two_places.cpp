/*
Given two strings a and b. The task is to find if a string 'a' can be obtained by rotating another string 'b' by 2 places.
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
void solve()
{
    string a,b;
    cin>>a>>b;
    string c,d;
    if(a.length()==1)
    {
        if(a==b)
        {
           cout<<1<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }
    else
    {
    for(int i=2;i<a.length();i++)
    {
        c+=a[i];
    }
    c+=a[0];
    c+=a[1];
    for(int i=0;i<a.length()-2;i++)
    {
        d+=a[i];
    }
    d=a[a.length()-1]+d;
    d=a[a.length()-2]+d;
    if(c==b||d==b)
    {
        cout<<1<<endl;
    }
    else
    {
        cout<<0<<endl;
    }
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
        solve();
    }
    return 0;
}
