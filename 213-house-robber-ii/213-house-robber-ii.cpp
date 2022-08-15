class Solution {
public:
    int helper(vector<int>& nums) {
        int prev = nums[0];
        int prev2 = 0;
        int curMax;
        for(int i=1; i<nums.size(); i++) {
            int pick = nums[i];
            if(i>1) pick+=prev2;
            int notPick = 0+prev;
            
            curMax = max(pick, notPick);
            prev2= prev;
            prev = curMax;
        }
        
        return curMax;
    }
    
    int rob(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        int n = nums.size();
        vector<int> temp1(n), temp2(n);
        for(int i=0; i<nums.size()-1; i++) {
            temp1[i] = nums[i];
        }
        for(int i=1; i<nums.size(); i++) {
            temp2[i] = nums[i];
        }
        int k = max(helper(temp1), helper(temp2));
        return k;
    }
};