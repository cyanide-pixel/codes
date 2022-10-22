class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> arr(nums.size());
        arr = nums;
        sort(arr.begin(), arr.end());
        int i=0; int j= nums.size()-1;
        for(int k = 0; k<nums.size(); k++) {
            if(arr[i] == nums[i]) {
                i++;
            }
            else if(arr[j] == nums[j]) {
                j--;
            }
        }
        
        return j-i+1;
    }
};