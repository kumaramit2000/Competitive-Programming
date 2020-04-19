/*
Given an array of positive integers. The task is to find inversion count of array.

Inversion Count : For an array, inversion count indicates how far (or close) the array is from being sorted. If array is already sorted then inversion count is 0. If array is sorted in reverse order that inversion count is the maximum. 
Formally, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.
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
ll merge(ll a[], ll temp[], ll l, ll mid, ll r)
{
    ll i,j,k,count=0;
    i=l,j=mid,k=l;
    while((i<=mid-1)&&(j<=r))
    {
         if(a[i]<=a[j])
         {
             temp[k]=a[i];
             i++;k++;
         }
         else
         {
             temp[k]=a[j];
             k++;j++;
             count+=(mid-i);
         }
    }
    while(i<=mid-1)
    {
        temp[k]=a[i];
        k++;i++;
    }
    while(j<=r)
    {
        temp[k]=a[j];
        k++;j++;
    }
    for(int i=l;i<=r;i++)
    {
        a[i]=temp[i];
    }
    return count;
}
ll mergesort(ll a[], ll temp[], ll l, ll r)
{
    ll mid=0,count=0;
    if(r>l)
    {
        mid=(l+r)/2;
        count+=mergesort(a,temp,l,mid);
        count+=mergesort(a,temp,mid+1,r);
        count+=merge(a,temp,l,mid+1,r);
    }
    return count;
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
        ll temp[n];
        ll ans=mergesort(a,temp,0,n-1);
        cout<<ans<<endl;
    }
    return 0;
}
