/*
Given an array arr[] of N non-negative integers representing height of blocks at index i as Ai where the width of each block is 1. 
Compute how much water can be trapped in between blocks after raining.
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
        ll a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll leftmax[n];
        leftmax[0]=a[0];
        ll rightmax[n];
        rightmax[n-1]=a[n-1];
        for(int i=1;i<n;i++)
        {
            leftmax[i]=max(leftmax[i-1],a[i]);
        }
        for(int i=n-2;i>=0;i--)
        {
            rightmax[i]=max(a[i],rightmax[i+1]);
        }
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            ans+=min(leftmax[i],rightmax[i])-a[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}
