class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans = 0;
        for(int i = 31; i>=0; i--) {
            int cnt = 0;
            for(auto x: nums) {
                if((x>>i)&1) cnt++;
            }
            if(cnt>(int)nums.size()/2) {
                ans |= (1<<i);
            }
        }
        return ans;
    }
};