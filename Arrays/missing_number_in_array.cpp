/*
Given an array C of size N-1 and given that there are numbers from 1 to N with one element missing, the missing number is to be found.
*/
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
int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        ll sum=0;
        for(int i=0;i<n-1;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        cout<<(n*(n+1)/2)-sum<<endl;
    }
    return 0;
}
