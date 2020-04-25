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
        char a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<char> v;
        unordered_map<char,int> m;
        for(int i=0;i<n;i++)
        {
            m[a[i]]++;
            if(m[a[i]]==1)
            {
                v.pb(a[i]);
            }
            ll flag=0;
            for(int j=0;j<v.size();j++)
            {
                if(m[v[j]]==1)
                {
                    cout<<v[j]<<" ";
                    flag=1;
                    goto label;
                }
            }
            label:;
            if(flag==0)
            {
                cout<<-1<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
