/*
Given a string s, recursively remove adjacent duplicate characters from the string s. 
The output string should not have any adjacent duplicates.
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
        string a;
        cin>>a;
        ll n=a.length();
        stack<int> s;
        label:;
        s.push(0);
        for(int i=1;i<n;)
        {
            if((!s.empty()) &&(s.top()+1==i) && (a[s.top()]==a[i]))
            {
                while(i<n&&a[s.top()]==a[i])
                {
                    i++;
                }
                s.pop();
            }
            else
            {
                s.push(i);
                i++;
            }
        }
        string ans;
        while(!(s.empty()))
        {
            ll h=s.top();
            ans=a[h]+ans;
            s.pop();
        }
        if(ans==a)
        {
            cout<<a<<endl;
        }
        else
        {
            a=ans;
            n=ans.length();
            goto label;
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
        solve();
    }
    return 0;
}
