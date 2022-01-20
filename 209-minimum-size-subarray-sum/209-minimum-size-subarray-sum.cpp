class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int size = INT_MAX;
        int sum =0;
        int i=0;
        int j =0;
        
        
        while(j<nums.size())
            
        {
            sum+=nums[j];
            if(sum<target)
            {
                j++;
            }
            
            else if(sum>=target) {
                while(sum>=target)
                {
                    size= min(size, j-i+1);
                    sum-=nums[i];
                    i++;
                }
                
                j++;
            }
        }
        
        if(size==INT_MAX) return 0;
        return size;
        
    }
};