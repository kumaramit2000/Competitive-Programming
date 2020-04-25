/*
Given an array A and an integer K. Find the maximum for each and every contiguous subarray of size K.
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
#include <iostream>
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
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        deque<int> q;
        for(int i=0;i<k;i++)
        {
            while(q.size()>0&&a[i]>=a[q.back()])
            {
                q.pop_back();
            }
            q.push_back(i);
        }
        cout<<a[q.front()]<<" ";
        for(int i=k;i<n;i++)
        {
            while(q.size()>0&&q.front()<=i-k)
            {
                q.pop_front();
            }
            while(q.size()>0&&a[i]>=a[q.back()])
            {
                q.pop_back();
            }
            q.push_back(i);
            cout<<a[q.front()]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
