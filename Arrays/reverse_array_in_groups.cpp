/*
Given an array arr[] of positive integers of size N. Reverse every sub-array of K group elements.
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
int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        stack<ll> s;
        for(int i=0;i<n;i++)
        {
            s.push(a[i]);
            ll sz=s.size();
            if(sz==k)
            {
                while(sz!=0)
                {
                   ll to=s.top();
                   cout<<to<<" ";
                   s.pop();
                   sz--;
                }
            }
        }
        ll sz=s.size();
        while(sz!=0)
        {
            ll to=s.top();
            cout<<to<<" ";
            s.pop();
            sz--;
        }
        cout<<endl;
    }
    return 0;
}
