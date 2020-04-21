/*
Given an string in roman no format (s)  your task is to convert it to integer .
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
int val(char ch)
{
    if(ch=='I')
    {
        return 1;
    }
    else if(ch=='V')
    {
        return 5;
    }
    else if(ch=='X')
    {
        return 10;
    }
    else if(ch=='L')
    {
        return 50;
    }
    else if(ch=='C')
    {
        return 100;
    }
    else if(ch=='D')
    {
        return 500;
    }
    else if(ch=='M')
    {
        return 1000;
    }
    else 
    {
        return -1;
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
        ll n=s.length();
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            if(i!=n-1)
            {
                ll x=val(s[i]);
                ll y=val(s[i+1]);
                if(x>=y)
                {
                    ans+=x;
                }
                else
                {
                    ans-=x;
                }
            }
            else
            {
                ans+=val(s[i]);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
