class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size()-1;
        vector<int> arr(n+1, 0);
        int l = 0;
        int r = n;
        for(int i=n; i>=0; i--) {
            if(abs(nums[l])>nums[r]) {
                arr[i] = nums[l]*nums[l];
                l++;
            }
            else {
                arr[i] = nums[r]*nums[r];
                r--;
            }
        }
        return arr;
    }
};