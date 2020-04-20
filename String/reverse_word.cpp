/*
Given a String of length S, reverse the whole string without reversing the individual words in it. Words are separated by dots.
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    char a[20000];
	    cin>>a;
	    int i,l=strlen(a);
	    string s;
	    vector<string> v;
	    for(i=0;i<l;i++)
	    {
	       if(a[i]=='.')
	       {
	         v.push_back(s);
	         s="";
	       }
	       else
	       {
	           s=s+a[i];
	       }
	    }
	    v.push_back(s);
	    reverse(v.begin(),v.end());
	    for(i=0;i<v.size();i++)
	    {
	       cout<<v[i];
	       if(i<v.size()-1)
	       {
	           cout<<".";
	       }
	    }
	    cout<<endl;
	}
	return 0;
}
