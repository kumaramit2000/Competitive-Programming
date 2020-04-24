/*
Given an expression string exp. Examine whether the pairs and the orders of “{“,”}”,”(“,”)”,”[“,”]” are correct in exp.
For example, the program should print 'balanced' for exp = “[()]{}{[()()]()}” and 'not balanced' for exp = “[(])”
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
        ll len=s.length();
        stack<char> st;
        ll flag=0;
        for(int i=0;i<len;i++)
        {
            if(s[i]=='[')
            {
                st.push(s[i]);
            }
            else if(s[i]=='{')
            {
                st.push(s[i]);
            }
            else if(s[i]=='(')
            {
                st.push(s[i]);
            }
            else 
            {
                if(s[i]==']')
                {
                ll sz=st.size();
                if(sz==0||st.top()!='[')
                {
                    flag=1;
                    break;
                }
                else
                {
                    st.pop();
                }
                }
                else if(s[i]=='}')
                {
                ll sz=st.size();
                if(sz==0||st.top()!='{')
                {
                    flag=1;
                    break;
                }
                else
                {
                    st.pop();
                }
                }
                else if(s[i]==')')
                {
                ll sz=st.size();
                if(sz==0||st.top()!='(')
                {
                    flag=1;
                    break;
                }
                else
                {
                    st.pop();
                }
                }
            }
        }
        ll sz=st.size();
        if(sz>0)
        {
            flag=1;
        }
        if(flag==0)
        {
            cout<<"balanced"<<endl;
        }
        else
        {
            cout<<"not balanced"<<endl;
        }
    }
    return 0;
}
