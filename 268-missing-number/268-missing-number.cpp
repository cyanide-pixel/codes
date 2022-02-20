class Solution {
public:
    int missingNumber(vector<int>& nums) {
    int res{0}, res1{0};
    for(auto& i:nums)
    {
        res ^=i;
    }
    for(int i=0; i<=nums.size();i++)
    {
        res1 ^= i;
    }
    
    return res^res1;
    }
};