class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l =0;
        int r= (int)nums.size()-1;
        int mid;
        while(l<r){
            mid = (l+r)/2;
            if(nums[mid]>nums[mid+1]) r=mid;
            else l =mid+1;
        }
        return l;
    }
};