/*love_for_code*/
/*code_for_love*/
//Code_written_by: @AMIT KUMAR;
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define MODM 1000000007
#define MODS 10000007
#define INF 2000000000000000000LL
#include <bits/stdc++.h>
using namespace std;
int solve(ll a[],ll n,ll s)
{
    ll csum=a[0],start=0,i;
    for(int i=1;i<=n;i++)
    {
        while(csum>s&&start<i-1)
        {
            csum-=a[start];
            start++;
        }
        if(csum==s)
        {
            cout<<start+1<<" "<<i<<endl;
            return 1;
        }
        if(i<n)
        {
            csum+=a[i];
        }
    }
    return -1;
}
int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,s;
        cin>>n>>s;
        ll a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll h=solve(a,n,s);
        if(h==-1)
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}
