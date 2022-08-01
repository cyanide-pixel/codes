class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int ans = 0;
        
        for(int i=0, j=0; i<nums.size(); i++) {
            if(nums[i]==0) k--;
            while(k<0) {
                if(nums[j] == 0) k++;
                j++;
            }
            
            int pop = i-j+1;
            ans = max(ans, pop);
        }
        return ans;
    }
};