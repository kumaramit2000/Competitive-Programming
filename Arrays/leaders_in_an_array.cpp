/*
Given an array of positive integers. Your task is to find the leaders in the array.
Note: An element of array is leader if it is greater than or equal to all the elements to its right side. 
      Also, the rightmost element is always a leader.
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
        ll b[n]; 
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll max_elem=-1;
        for(int i=n-1;i>=0;i--)
        {
            max_elem=max(max_elem,a[i]);
            b[i]=max_elem;
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]==b[i])
            {
                cout<<a[i]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
