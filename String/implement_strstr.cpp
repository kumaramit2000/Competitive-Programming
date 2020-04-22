/*
Your task is to implement the function strstr. The function takes two strings as arguments (s,x) and  
locates the occurrence of the string x in the string s. The function returns and integer denoting the 
first occurrence of the string x in s.
*/
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    }
}
// } Driver Code Ends
/* The function should return position where the target string 
   matches the string str
Your are required to complete this method */
int strstr(string s, string x)
{
    int l1=s.length();
    int l2=x.length();
    if(l2>l1)
    {
        return -1;
    }
    else
    {
        int flag=0;
        for(int i=0;i<=(l1-l2);i++)
        {
            string hh=s.substr(i,l2);
            if(hh==x)
            {
                return i;
            }
        }
        return -1;
    }
}
