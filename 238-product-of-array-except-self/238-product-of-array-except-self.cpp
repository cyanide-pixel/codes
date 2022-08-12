class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> lp(nums.size());
        vector<int> rp(nums.size());
        vector<int> ans(nums.size());
        int n =nums.size();
        lp[0] = 1;
        rp[n-1] = 1;
        
        for(int i=1; i<nums.size(); i++) {
            lp[i] = nums[i-1]*lp[i-1];
        }
        for(int i=nums.size()-2; i>=0; i--) {
            rp[i] = nums[i+1]*rp[i+1];
        }
        
        for(int i=0; i<n; i++) {
            ans[i] = lp[i]* rp[i];
        }
        return ans;
    }
};