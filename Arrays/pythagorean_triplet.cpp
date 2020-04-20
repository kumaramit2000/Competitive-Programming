/*
Given an array of integers, write a function that returns true if there is a triplet (a, b, c) that satisfies a2 + b2 = c2.
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
        ll n;
        cin>>n;
        ll a[n];ll mm=0;
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mm=max(mm,a[i]);
        }
        ll freq[mm+1];
        memset(freq,0,sizeof(freq));
        for(int i=0;i<n;i++)
        {
            freq[a[i]]++;
        }
        ll flag=0;
        for(int i=1;i<=mm;i++)
        {
            if(freq[i]==0)
            {
                continue;
            }
            for(int j=1;j<=mm;j++)
            {
                if((i==j&&freq[i]==1)||freq[j]==0)
                {
                    continue;
                }
                ll val=sqrt(i*i+j*j);
                if((val*val)!=(i*i+j*j))
                {
                   continue;
                }
                if(val>mm)
                {
                   continue; 
                } 
                if(freq[val])
                {
                    flag=1;
                    goto label;
                }
            }
        }
        label:;
        if(flag==0)
        {
            cout<<"No"<<endl;
        }
        else
        {
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}
