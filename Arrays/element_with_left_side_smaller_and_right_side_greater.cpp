/*
Given an unsorted array of size N. Find the first element in array such that all of its left elements 
are smaller and all right elements to it are greater than it.
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
        ll ls[n];
        ll rm[n];
        ls[0]=a[0];
        rm[n-1]=a[n-1];
        for(int i=1;i<n;i++)
        {
            ls[i]=max(a[i],ls[i-1]);
        }
        for(int i=n-2;i>=0;i--)
        {
            rm[i]=min(rm[i+1],a[i]);
        }
        ll flag=0;
        for(int i=1;i<n-1;i++)
        {
            if(ls[i-1]<=a[i]&&a[i]<=rm[i+1])
            {
                flag=1;
                cout<<a[i]<<endl;
                break;
            }
        }
        if(flag==0)
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}
