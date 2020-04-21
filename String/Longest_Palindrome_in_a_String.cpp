/*
Given a string S, find the longest palindromic substring in S. Substring of string S: S[ i . . . . j ] where 0 ≤ i ≤ j < len(S). 
Palindrome string: A string which reads the same backwards. More formally, S is palindrome if reverse(S) = S. 
Incase of conflict, return the substring which occurs first ( with the least starting index ).
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
void solve()
{
    string s;
    cin>>s;
    ll ans=1,len=s.length();
    ll start=0;
    for(int i=1;i<len;i++)
    {
        ll l=0,r=0;
        //for odd length;
        l=i-1;r=i;
        while(l>=0&&r<len&&s[l]==s[r])
        {
            if(r-l+1>ans)
            {
                ans=r-l+1;
                start=l;
            }
            l--;r++;
        }
        //for even length;
        l=i-1;r=i+1;
        while(l>=0&&r<len&&s[l]==s[r])
        {
            if(r-l+1>ans)
            {
                ans=r-l+1;
                start=l;
            }
            l--;r++;
        }
    }
    for(int i=start;i<=start+ans-1;i++)
    {
        cout<<s[i];
    }
    cout<<endl;
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
        solve();
    }
    return 0;
}
