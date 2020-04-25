// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct petrolPump
{
    int petrol;
    int distance;
};

int tour(petrolPump [],int );

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        petrolPump p[n];
        for(int i=0;i<n;i++)
            cin>>p[i].petrol>>p[i].distance;
        cout<<tour(p,n)<<endl;
    }
}
// } Driver Code Ends
/*
The structure of petrolPump is 
struct petrolPump
{
    int petrol;
    int distance;
};*/

/*You are required to complete this method*/
int tour(petrolPump p[],int n)
{
    int x=0,y=0,pos=0;
    for(int i=0;i<n;i++)
    {
        y+=p[i].petrol-p[i].distance;
        if(y<0)
        {
            pos=i+1;
            x+=y;
            y=0;
        }
    }
    if(x+y>0)
    {
        return pos;
    }
    else
    {
        return -1;
    }
}
