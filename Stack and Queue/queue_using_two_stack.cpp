// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

class StackQueue{
private:
    stack<int> s1;
    stack<int> s2;
public:
    void push(int B);
    int pop();

};
int main()
{

    int T;
    cin>>T;
    while(T--)
    {
        StackQueue *sq = new StackQueue();

        int Q;
        cin>>Q;
        while(Q--){
        int QueryType=0;
        cin>>QueryType;
        if(QueryType==1)
        {
            int a;
            cin>>a;
            sq->push(a);
        }else if(QueryType==2){
            cout<<sq->pop()<<" ";

        }
        }
        cout<<endl;
    }


}
// } Driver Code Ends
/*This is a function problem.You only need to complete the function given below*/
/* The structure of the class is
class StackQueue{
private:   
    // These are STL stacks ( http://goo.gl/LxlRZQ )
    stack<int> s1;
    stack<int> s2;
public:
    void push(int);
    int pop();
}; */
/* The method push to push element into the queue */
void StackQueue :: push(int x)
 {
    while(!s1.empty()) 
    { 
        s2.push(s1.top()); 
        s1.pop(); 
    } 
        // Push item into s1 
    s1.push(x); 
        // Push everything back to s1 
    while(!s2.empty())
    { 
        s1.push(s2.top()); 
        s2.pop(); 
    }
 }
/*The method pop which return the element poped out of the queue*/
int StackQueue :: pop()
{
    if (s1.empty())
    { 
        return -1; 
    } 
    // Return top of s1 
    int x=s1.top(); 
    s1.pop(); 
    return x;    
}
