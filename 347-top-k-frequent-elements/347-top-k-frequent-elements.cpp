class Solution {
    static bool cmp(pair<int,int> p, pair<int, int> q) {
        return p.second > q.second;
    }
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> out(k);
        map<int,int> m;
        priority_queue<pair<int,int>> pq;
        
        for(int num: nums)
            m[num]++;
        
        for(auto it: m) {
            pq.push({it.second, it.first});
        }
        
        for(int i=0;i<k;i++) {
            int f = pq.top().first, val = pq.top().second;
            pq.pop();
            out[i] = val;
        }
        
        return out;
    }
};