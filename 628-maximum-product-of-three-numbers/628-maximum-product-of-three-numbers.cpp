class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int i=0,j=n-1;
        int x=nums[j]*nums[j-1]*nums[j-2];
        int y=nums[i]*nums[i+1]*nums[j];
        return max(x,y);
    }
};