/*
Given two arrays X and Y of positive integers, find number of pairs such that xy > yx (raised to power of) 
where x is an element from X and y is an element from Y.
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
    ll n,m;
    cin>>n>>m;
    ll a[n];
    ll b[m];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    int excep[5];
    for(int i=0;i<5;i++)
    {
        excep[i]=0;
    }
    for(int i=0;i<m;i++)
    {
        if(b[i]<5)
        {
            excep[b[i]]++;
        }
    }
    sort(b,b+m);
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            if(a[i]==1)
            {
                ans+=excep[0];
            }
            else
            {
               ll* flag=upper_bound(b,b+m,a[i]);
               ans+=(b+m)-flag;
               if(a[i]==2)
               {
                  ans-=(excep[3]+excep[4]);
               }
               if(a[i]==3)
               {
                  ans+=excep[2];
               }
               ans+=(excep[0]+excep[1]);
            }
        }
    }
    cout<<ans<<endl;
    }
    return 0;
}
