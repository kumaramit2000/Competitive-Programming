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
            int n,i;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int s1=a[0],s2=a[0];
	    for(i=1;i<n;i++)
	    {
	        s1=max(a[i],s1+a[i]);
	        s2=max(s2,s1);
	    }
	    cout<<s2<<endl; 
    }
    return 0;
}
      
