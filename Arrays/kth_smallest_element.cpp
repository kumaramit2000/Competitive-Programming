/*
Given an array arr[] and a number K where K is smaller than size of array, the task is to find the Kth smallest element 
in the given array. It is given that all array elements are distinct.
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
        ll mm=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mm=max(mm,a[i]);
        }
        ll freq[mm+1];
        memset(freq,0,sizeof(freq));
        ll k;
        cin>>k;
        for(int i=0;i<n;i++)
        {
            freq[a[i]]++;
        }
        for(int i=1;i<=mm;i++)
        {
            while(freq[i]>0)
            {
                freq[i]--;
                k--;
                if(k==0)
                {
                    cout<<i<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}
