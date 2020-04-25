/*
The task is to design and implement methods of an LRU cache. The class has two methods get() and set() which are defined as follows.
get(x)   : Returns the value of the key x if the key exists in the cache otherwise returns -1.
set(x,y) : inserts the value if the key x is not already present. If the cache reaches its capacity it should invalidate the least 
recently used item before inserting the new item.
In the constructor of the class the size of the cache should be intitialized.
*/
// { Driver Code Starts


#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// design the class:
class LRUCache
{
    public:
    int capc;
    list<pair<int,int>> lis;
    unordered_map<int,list<pair<int,int> > ::iterator > m;
    LRUCache(int cap);
    int get(int key);
    void set(int key, int value);
};
LRUCache:: LRUCache(int cap)
{
    // constructor for cache
    capc=cap;
    lis.clear();
    m.clear();
}
int LRUCache:: get(int key)
{
        // this function should return value corresponding to key
        if(m.find(key)==m.end())
        {
            return -1;
        }
        auto it=m.find(key);
        int val=(*(it->second)).second;
        lis.erase(it->second);
        lis.push_front({key,val});
        m[key]=lis.begin();
        return val;
}
void LRUCache:: set(int key, int value)
{
        // storing key, value pair
        if(m.find(key)==m.end())
        {
            if(lis.size()==capc)
            {
                int lf=lis.back().first;
                int ls=lis.back().second;
                lis.pop_back();
                lis.push_front({key,value});
                m.erase(lf);
                m[key]=lis.begin();
            }
            else
            {
                lis.push_front({key,value});
                m[key]=lis.begin();   
            }
        }
        else
        {
            auto it=m.find(key);
            lis.erase(it->second);
            lis.push_front({key,value});
            m[key]=lis.begin();
        }
}

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int capacity;
        cin >> capacity;
        LRUCache *cache = new LRUCache(capacity);
        
        int queries;
        cin >> queries;
        while (queries--)
        {
            string q;
            cin >> q;
            if (q == "SET")
            {
                int key;
                cin >> key;
                int value;
                cin >> value;
                cache->set(key, value);
            }
            else
            {
                int key;
                cin >> key;
                cout << cache->get(key) << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends
