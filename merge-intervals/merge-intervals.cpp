class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        
        int n=intervals.size();
        vector<vector<int>> ans;
        
        
        for(int i=0; i<n; i++)
        {
            if(ans.empty() || ans.back()[1] <intervals[i][0]) {
                vector<int> v= {intervals[i][0], intervals[i][1]};
                ans.push_back(v);
            }
            
            else {
                ans.back()[1] = max(intervals[i][1], ans.back()[1]);
            }
        }
        return ans;
    }
};