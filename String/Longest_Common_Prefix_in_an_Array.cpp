/*
Given a array of N strings, find the longest common prefix among all strings present in the array.
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
        string s[n];
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        string longprefix=s[0];
        ll flag=0;
        for(int i=1;i<n;i++)
        {
            ll len=longprefix.length();
            if(len==0)
            {
                flag=1;
                break;
            }
            string rr="";
            for(int j=0;j<len;j++)
            {
                if(s[i][j]==longprefix[j])
                {
                    rr+=s[i][j];
                }
                else
                {
                    break;
                }
            }
            longprefix=rr;
        }
        if(flag==1)
        {
            cout<<-1<<endl;
        }
        else
        {
            if(longprefix.length()==0)
            {
                cout<<-1<<endl;
            }
            else
            {
                cout<<longprefix<<endl;
            }
        }
    }
    return 0;
}
