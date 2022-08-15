class Solution {
public:
    int helper(vector<int>& nums, vector<int>&dp, int idx) {
        if(idx == 0) return nums[idx];
        if(idx<0) return 0;
        if(dp[idx] != -1) return dp[idx];
        
        int pick = nums[idx]+helper(nums, dp, idx-2);
        int nonPick = 0 + helper(nums, dp, idx-1);
        
        return dp[idx] = max(pick, nonPick);
    }
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size(), -1);
        int k = helper(nums, dp,  nums.size()-1);
        
        
        return k ;
    }
};