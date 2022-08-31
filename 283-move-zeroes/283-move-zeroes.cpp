class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0;
        int n =nums.size();
        int l = 0;

        while(l<n) 
        {
            if(nums[l]!=0)
            {
                swap(nums[l], nums[j]);
                j++;
            }
            l++;
            
        }
        
        
    }
};


        
        
        
        
    