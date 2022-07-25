class Solution {
    
    private:
    
    int firstOccur(vector<int>& v, int target, int l, int r){
        int mid,ans= -1;
        while(l<=r){
            mid = l+(r-l)/2;
            if(v[mid]==target){
                ans = mid;
                r = mid-1;
            }
            else if(v[mid]<target){
                l = mid+1;
            }
            else{
                r = mid-1;
            }
        }
        
        return ans;
    }
    
    int lastOccur(vector<int>& v, int target, int l, int r){
        int mid,ans= -1;
        while(l<=r){
            mid = l+(r-l)/2;
            if(v[mid]==target){
                ans = mid;
                l = mid+1;
            }
            else if(v[mid]<target){
                l = mid+1;
            }
            else{
                r = mid-1;
            }
        }
        
        return ans;
    }
    public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v;
        int l = firstOccur(nums,target,0,nums.size()-1);
        int r = lastOccur(nums,target,0,nums.size()-1);
        v.push_back(l);
        v.push_back(r);
        return v;
    }
};