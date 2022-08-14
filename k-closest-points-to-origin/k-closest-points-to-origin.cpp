class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        multimap<int, int> mp;
        vector<vector<int>> ans;
        for(int i=0; i<points.size(); i++) {
            int x = points[i][0]; int y = points[i][1];
            mp.insert({(x*x)+(y*y), i});
        }
        for(auto it = mp.begin(); it != mp.end() && k>0; it++, k-- ) {
            ans.push_back({points[it->second][0], points[it->second][1]});
        }
        return ans;
    }
};