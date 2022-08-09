class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int msh=0; int msf= nums[0];
        int n=nums.size();
        
        for(int i=0; i<n; i++)
        {
            msh+=nums[i];
            if(msh<nums[i]) msh= nums[i];
            if(msf<msh) msf = msh;
        }
        return msf;
    }
};