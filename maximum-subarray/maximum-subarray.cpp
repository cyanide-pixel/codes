class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxSumHere = 0;
        int maxSumAns = nums[0];
        
        for(int i=0; i<n; i++) {
            maxSumHere+=nums[i];
            if(maxSumHere<nums[i]) maxSumHere = nums[i];
            if(maxSumHere>maxSumAns) maxSumAns = maxSumHere;
        }
        return maxSumAns;
    }
};