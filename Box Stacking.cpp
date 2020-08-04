/*The function takes an array of heights, width and 
length as its 3 arguments where each index i value 
determines the height, width, length of the ith box. 
Here n is the total no of boxes.*/
vector<pair< int, pair <int,int> > > v;

bool comp(const pair<int,pair<int,int> > &a1,const pair<int,pair<int,int> > &b1)
{ 
    return (b1.first*b1.second.first < a1.first*a1.second.first); 
}

int maxHeight(int height[],int width[],int length[],int n)
{
    for(int i=0;i<n;i++)
    {
        //original box;
        int l, w, h;
        h=height[i];
        l=max(length[i],width[i]);
        w=min(length[i],width[i]);
        v.push_back({l,{w,h}});
        
        //1st rotation of box;
        h=width[i];
        l=max(length[i],height[i]);
        w=min(length[i],height[i]);
        v.push_back({l,{w,h}});
        
        //2nd rotation of box;
        h=length[i];
        l=max(width[i],height[i]);
        w=min(width[i],height[i]);
        v.push_back({l,{w,h}});
    }
    sort(v.begin(),v.end(), comp);
    n*=3;
    int mh[n];
    for(int i=0;i<n;i++)
    {
        mh[i]=v[i].second.second;
    }
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(v[i].second.first < v[j].second.first && v[i].first < v[j].first && mh[i] < mh[j] + v[i].second.second)
            {
                mh[i]=mh[j]+v[i].second.second;
            }
        }
    }
    int ma=-1; 
    for(int i=0;i<n;i++)
    {
        if(ma<mh[i]) 
         ma=mh[i];
    }
    v.clear();
    return ma;
}
