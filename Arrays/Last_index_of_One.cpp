/*
Given a string S consisting only '0's and '1's,  print the last index of the '1' present in it.
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
        ll flag=0;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='1')
            {
                cout<<i<<endl;
                flag=1;
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
