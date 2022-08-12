class Solution {
public:
    int maxArea(vector<int>& nums) {
        int ans =0;
        int low = 0;
        int high = nums.size()-1;
        int area;
        
        while(low<high) {
            area = (high-low)*min(nums[low], nums[high]);
            ans = max(ans, area);
            if(nums[low]<nums[high]) {
                low++;
            }
            else high--;
            
        }
        return ans;
    }
};