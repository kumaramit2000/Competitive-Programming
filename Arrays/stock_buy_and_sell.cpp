/*
The cost of stock on each day is given in an array A[] of size N. Find all the days on which you buy and sell 
the stock so that in between those days your profit is maximum. 
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
        ll a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll diff[n-1];
        for(int i=1;i<n;i++)
        {
            diff[i-1]=a[i]-a[i-1];
        }
        ll flag=0;
        for(int i=0;i<n-1;i++)
        {
            if(diff[i]>0)
            {
                flag=1;
                cout<<"("<<i<<" ";
                while(diff[i]>0&&i<n)
                {
                    i++;
                }
                i--;
                if(i==n-1)
                {
                   cout<<i<<")"<<" ";
                }
                else
                {
                    cout<<i+1<<")"<<" ";
                }
            }
        }
        if(flag==0)
        {
            cout<<"No Profit"<<endl;
        }
        else
        {
            cout<<endl;
        }
    }
    return 0;
}
