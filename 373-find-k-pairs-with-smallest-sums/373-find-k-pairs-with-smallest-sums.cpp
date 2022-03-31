class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        
    int n1=nums1.size();
    int n2=nums2.size();
    priority_queue<pair<int, pair<int, int> >, vector<pair<int, pair<int, int> > >,     greater<pair<int, pair<int, int> > > >pq;

    pair<int, pair<int,int> >p;
    p.first=nums1[0]+nums2[0];
    p.second=make_pair(0,0);
    pq.push(p);
    vector<vector<int>>ans;
    map<pair<int,int>, bool >mp;
    pair<int,int>s=make_pair(0,0);
    mp[s]=true;
    while(k>0 && !pq.empty())
    {
        p=pq.top();
        pq.pop();
        int i=p.second.first;
        int j=p.second.second;
        
        ans.push_back({nums1[i],nums2[j]});
        
        s=make_pair(i+1,j);
        if(i+1<n1 && mp.find(s)==mp.end()){
           p.first=nums1[i+1]+nums2[j];
           p.second=s;
           pq.push(p);
           mp[s]=true;
        }
        s=make_pair(i,j+1);
        if(j+1<n2 && mp.find(s)==mp.end()){
           p.first=nums1[i]+nums2[j+1];
           p.second=s;
           pq.push(p);
           mp[s]=true;
        }
       
        k--;
    }
    return ans;
    }
};