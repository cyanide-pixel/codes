class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> lp(n);
        vector<int> rp(n); 
        vector<int> ans(n);
        
        lp[0] = 1;
        rp[n-1] = 1;
        for(int i=1; i<n; i++) {
            lp[i] = nums[i-1]*lp[i-1];
        }
        
        for(int i = n-2; i>=0; i--) {
            rp[i] = nums[i+1]*rp[i+1];
        }
        
        for(int i=0; i<n; i++) {
            ans[i] = rp[i] *lp[i];
        }
        
        return ans;
        
    }
}; 