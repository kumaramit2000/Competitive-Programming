/*
Your task  is to implement the function atoi. The function takes a string(str) as argument and converts it to an integer and returns it.
*/
// { Driver Code Starts
 #include <bits/stdc++.h>
using namespace std;

int atoi(string str);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		cout<<atoi(s)<<endl;
	}
}// } Driver Code Ends
/*You are required to complete this method */
int atoi(string s)
{
    int n=s.length();
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]<'0'||s[i]>'9')
        {
            flag=1;
        }
        if(i==0)
        {
            if(s[i]=='-')
            {
                flag=0;
            }
        }
    }
    if(flag==1)
    {
        return -1;
    }
    else
    {
        int ans=stoi(s);
        return ans;
    }
}
