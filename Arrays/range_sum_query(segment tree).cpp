/*love_for_code*/
/*code_for_love*/
//Code_written_by: @AMIT KUMAR;
#define ll long long int
#define ull unsigned long long int
#define MODM 998244353
#define MODS 10000007
#define pb push_back
#define INF 2000000000000000000LL
#include <bits/stdc++.h>
using namespace std;
ll evaluate_sum(ll *st, ll starting_index, ll ending_index, ll l, ll r, ll current_index)
{
    // if segment of givenn node is the part of the range then return the sum of segment;
    if(starting_index>=l&&ending_index<=r)
    {
        return st[current_index];
    }
    // segment of the current node is outside of the given range;
    if(starting_index<l||ending_index>r)
    {
        return 0;
    }
    // if a part of the segment overlap the range;
    ll mid=(starting_index+ending_index)/2;
    return evaluate_sum(st,starting_index,mid,l,r,2*current_index+1)+
           evaluate_sum(st,mid+1,ending_index,l,r,2*current_index+2);
}
void updateall(ll *st, ll starting_index, ll ending_index, ll index, ll different, ll current_index)
{
    if(index<starting_index||index>ending_index)
    {
        return;
    }
    st[current_index]+=different;
    if(starting_index!=ending_index)
    {
        ll mid=(starting_index+ending_index)/2;
        updateall(st,starting_index,mid,index,different,current_index*2+1);
        updateall(st,mid+1,ending_index,index,different,current_index*2+2);
    }
}
void update(ll a[],ll *st, ll n, ll index, ll value)
{
    if(index<0||index>n-1) // for invalid index value;
    {
        return ;
    }
    ll different = value-a[index];
    a[index]=value;
    updateall(st,0,n-1,index,different,0);
}
ll get_sum(ll *st, ll n, ll l, ll r)
{
    if(l<0 || r>n-1 || l>r) //for wrong values;
    {
        return -1;
    }
    return evaluate_sum(st,0,n-1,l,r,0);
}
ll fill_segment_tree(ll a[],ll starting_index, ll ending_index, ll *st, ll current_index)
{
    //if there is one element in the array then store it into the current_index and return;
    if(starting_index==ending_index)
    {
        st[current_index]=a[starting_index];
        return st[current_index];
    }
    //if there is more then one elements in the array then call recursively for the left and the right subtree 
    //and store the sum in current_index;
    ll mid = (starting_index+ending_index)/2;
    st[current_index] = fill_segment_tree(a,starting_index,mid,st,current_index*2+1)+
                        fill_segment_tree(a,mid+1,ending_index,st,current_index*2+2);
    return st[current_index];                    
}
ll *construct_segment_tree(ll a[], ll n)
{
    ll height = (ll)(ceil(log2(n))); // height of segment tree;
    ll size = 2*(ll)pow(2,height)-1; // maximum size of the segment tree;
    ll *st = new ll[size]; // create memory space for the segment tree;
    fill_segment_tree(a,0,n-1,st,0); // fill the memory which we allocate for segment tree;
    return st;
}
int main() 
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll n;
	cin>>n;
	ll a[n];
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	ll *pointer = construct_segment_tree(a,n);
	ll q;
	cin>>q;
	for(int i=0;i<q;i++)
	{
	    ll x;
	    cin>>x;
	    if(x==1)
	    {
	        ll l,r;
	        cin>>l>>r;
	        ll res=get_sum(pointer,n,l,r);
	        cout<<res<<endl;
	    }
	    else
	    {
	        ll ind, val;
	        cin>>ind>>val;
	        update(a,pointer,n,ind,val);
	    }
	}
	return 0;
}
