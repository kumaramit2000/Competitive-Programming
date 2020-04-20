/*
Given arrival and departure times of all trains that reach a railway station. Your task is to find the minimum number of 
platforms required for the railway station so that no train waits.

Note: Consider that all the trains arrive on the same day and leave on the same day. Also, arrival and departure times will 
not be same for a train, but we can have arrival time of one train equal to departure of the other. In such cases, we need 
different platforms, i.e at any given instance of time, same platform can not be used for both departure of a train and arrival 
of another.
*/
/*love_for_code*/
/*code_for_love*/
//Code_written_by: @AMIT KUMAR;
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define mp make_pair
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
        multimap<int,char> m;
        for(int i=0;i<n;i++)
        {
            string x;
            cin>>x;
            int val=stoi(x);
            m.insert(mp(val,'a'));
        }
        for(int i=0;i<n;i++)
        {
            string x;
            cin>>x;
            int val=stoi(x);
            m.insert(mp(val,'d'));
        }
        ll ans=0,res=0;
        multimap<int,char>::iterator it=m.begin();
        for(;it!=m.end();it++)
        {
            if((*it).second =='a')
            {
                ans++;
            }
            else
            {
                ans--;
            }
            if(ans>res)
            {
                res=ans;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}
