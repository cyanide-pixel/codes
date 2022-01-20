class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zeroptr=-1, twoptr=nums.size(), ptr=0;
        
        while(ptr<twoptr)
        {
            if(nums[ptr]==0)
            {
                swap(nums[++zeroptr],nums[ptr]);
            }
            else if(nums[ptr]==2)
            {
                swap(nums[--twoptr],nums[ptr]);
                ptr--;
            }
            ptr++;
        }
        
    }
};