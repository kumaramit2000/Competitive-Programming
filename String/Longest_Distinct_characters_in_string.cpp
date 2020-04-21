/*
Given a string S, find length of the longest substring with all distinct characters.  
For example, for input "abca", the output is 3 as "abc" is the longest substring with all distinct characters.
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
        string s;
        cin>>s;
        ll n=s.length();
        ll ans=0;
        ll freq[26];
        ll j=0;
        memset(freq,0,sizeof(freq));
        for(int i=0;i<n;i++)
        {
            freq[s[i]-'a']++;
            if(freq[s[i]-'a']>1)
            {
                ans=max(ans,(i-j));
                while(freq[s[i]-'a']>1)
                {
                    freq[s[j]-'a']--;
                    j++;
                }
            }
        }
        ans=max(ans,n-j);
        cout<<ans<<endl;
    }
    return 0;
}
