/*
Given an array A of size N containing 0s, 1s, and 2s; you need to sort the array in ascending order.
*/
/*love_for_code*/
/*code_for_love*/
//Code_written_by: @AMIT KUMAR;
#define ll long long int
#define ull unsigned long long int
#define MODM 998244353
#define MODS 10000007
#define pb push_back
#define INF 2000000000000000000LL
#include <bits/stdc++.h>
using namespace std;
int main()
{	
    ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ll t;
	cin>>t;
	while(t--)
	{
	    int n,i;
	    cin>>n;
	    int a[n];
	    int freq[5]={0};
	    for(i=0;i<n;i++)
	    {
	      cin>>a[i];
	      freq[a[i]]++;
	    }
	    for(i=0;i<=2;i++)
	    {
	        while(freq[i]>0)
	        {
	            cout<<i<<" ";
	            freq[i]--;
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
