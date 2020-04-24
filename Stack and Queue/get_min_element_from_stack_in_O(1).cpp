// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};


int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int q;
       cin>>q;
        _stack *a = new _stack();
       while(q--){

       int qt;
       cin>>qt;

       if(qt==1)
       {
           //push
           int att;
           cin>>att;
           a->push(att);
       }
       else if(qt==2)
       {
           //pop
           cout<<a->pop()<<" ";
       }
       else if(qt==3)
       {
           //getMin
           cout<<a->getMin()<<" ";
       }
       }
       cout<<endl;
   }

}


// } Driver Code Ends
/*
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/

/*returns min element from stack*/
int _stack :: getMin()
{
   //Your code here
   if(s.empty())
   {
       return -1;
   }
   else
   {
       return s.top();
   }
}

/*returns poped element from stack*/
int _stack ::pop()
{
    if(s.size()==0)
    {
        return -1;
    }
    else
    {
        int x;
        s.pop();
        x=s.top();
        s.pop();
        if(!(s.empty()))
        {
            minEle=s.top();
        }
        return x;
    }
}

/*push element x into the stack*/
void _stack::push(int x)
{
   //Your code here
   if(s.empty())
   {
       s.push(x);
       minEle=x;
   }
   else
   {
       s.push(x);
       if(x<minEle)
       {
           minEle=x;
       }
   }
   s.push(minEle);
}
