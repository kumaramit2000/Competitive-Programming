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
ll findtriplets(ll a[],ll n)
{
    ll sum=0;
    for(int i=n-1;i>1;i--)
    {
        int j=0;
        int k=i-1;
        while(j<k)
        {
            if(a[j]+a[k]<a[i])
            {
                j++;
            }
            else if(a[j]+a[k]==a[i])
            {
                sum++;
                j++;
                k--;
            }
            else
            {
                k--;
            }
        }
    }
    return sum;
}
