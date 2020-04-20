/*
Given an array A of N positive numbers. The task is to find the position where equilibrium first occurs in the array. 
Equilibrium position in an array is a position such that the sum of elements before it is equal to the sum of elements after it.
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
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        ll flag=0,pos=0;
        ll sum1=0;
        sum1=a[0];
        sum-=a[0];
        for(int i=1;i<n;i++)
        {
            sum-=a[i];
            if(sum1>sum)
            {
                break;
            }
            else
            {
                if(sum==sum1)
                {
                    flag=1;
                    pos=i;
                    break;
                }
                else
                {
                     sum1+=a[i];
                }
            }
        }
        if(n==1)
        {
            cout<<1<<endl;
        }
        else
        {
            if(flag==1)
            {
                cout<<pos+1<<endl;
            }
            else
            {
                cout<<-1<<endl;
            }
        }
    }
    return 0;
}
