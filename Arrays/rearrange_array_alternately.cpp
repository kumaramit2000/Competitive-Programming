/*
Given a sorted array of positive integers. Your task is to rearrange  the array elements alternatively i.e first element 
should be max value, second should be min value, third should be second max, fourth should be second min and so on...
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
void rearrange(ll arr[], ll n) 
{ 
    ll max_idx=n-1,min_idx=0; 
    ll max_elem=arr[n-1]+1; 
    for(int i=0;i<n;i++) 
    {  
        if(i%2==0) 
        { 
            arr[i]+=(arr[max_idx]%max_elem)*max_elem; 
            max_idx--; 
        } 
        else 
        { 
            arr[i]+=(arr[min_idx]%max_elem)*max_elem; 
            min_idx++; 
        } 
    } 
    for(int i=0;i<n;i++)
    {
        arr[i]=arr[i]/max_elem;
    }
}
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
        rearrange(a,n);
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
