/*
Given a matrix of dimension r*c where each cell in the matrix can have values 0, 1 or 2 which has the following meaning:
0 : Empty cell
1 : Cells have fresh oranges
2 : Cells have rotten oranges

So, we have to determine what is the minimum time required to rot all oranges. A rotten orange at index [i,j] can rot other 
fresh orange at indexes [i-1,j], [i+1,j], [i,j-1], [i,j+1] (up, down, left and right) in unit time. If it is impossible to 
rot every orange then simply return -1.
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
        ll n,m;
        cin>>n>>m;
        ll a[n+10][m+10];
        memset(a,0,sizeof(a));
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                cin>>a[i][j];
            }
        }
        queue<pair<int,int> > q;
        ll sum=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(a[i][j]==2)
                {
                    q.push({i,j});
                }
            }
        }
        while(!q.empty())
        {
            sum++;
            pair<int,int> x;
            int sz=q.size();
            while(sz--)
            {
                x=q.front();
                q.pop();
                ll l=x.first;
                ll r=x.second;
                if(a[l][r-1]==1)
                {
                    a[l][r-1]=2;
                    q.push({l,r-1});
                }
                if(a[l][r+1]==1)
                {
                    a[l][r+1]=2;
                    q.push({l,r+1});
                }
                if(a[l-1][r]==1)
                {
                    a[l-1][r]=2;
                    q.push({l-1,r});
                }
                if(a[l+1][r]==1)
                {
                    a[l+1][r]=2;
                    q.push({l+1,r});
                }
            }
        }
        ll flag=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(a[i][j]==1)
                {
                    flag=1;
                    goto label;
                }
            }
        }
        label:;
        if(flag==0)
        {
            cout<<sum-1<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}
