/*
Given a matrix mat[][] of size M*N. Traverse and print the matrix in spiral form.
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
        cin>>m>>n;
        ll a[m][n];
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        }
        ll up=0,down=m-1,left=0,right=n-1;
        while(up<=down&&left<=right)
        {
            for(int i=up;i<=right;i++)
            {
                cout<<a[up][i]<<" ";
            }
            up++;
            for(int i=up;i<=down;i++)
            {
                cout<<a[i][right]<<" ";
            }
            right--;
            if(up<=down)
            {
               for(int i=right;i>=left;i--)
               {
                  cout<<a[down][i]<<" ";
               } 
               down--;
            }
            if(left<=right)
            {
               for(int i=down;i>=up;i--)
               {
                  cout<<a[i][left]<<" ";
               }
               left++;
            }
        }
        cout<<endl;
    }
    return 0;
}
//1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
