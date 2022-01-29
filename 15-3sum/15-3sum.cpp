class Solution {
public:
    
    vector<vector<int>> threeSum(vector<int>& nums) {
        
              vector<vector<int> > res;
        
        sort(nums.begin(), nums.end());
        int sum, n= nums.size();
        
        for(int i=0; i<n-2 ;i++) {
            if(i==0 || nums[i] !=nums[i-1]) {
                int l=i+1;
                int r=n-1;
                
                while(l<r) {
                    sum = nums[i]+nums[l]+nums[r];
                    
                    if(sum==0) {
                        res.push_back({nums[i], nums[l], nums[r]});
                        
                        while(l<r and nums[l] == nums[l+1]) {
                            l++;
                        }
                        while(l<r and nums[r] == nums[r-1]) {
                            r--;
                        }
                        l++;
                        r--;
                        
                    }
                    else if(sum <0) {
                        l++;
                    }
                    else r--;
                }
            }
        }
        return res;
        
        
        
//         vector<vector<int> > res;
        
//         sort(nums.begin(), nums.end());
//         int sum, n= nums.size();
        
//         for(int i=0; i<n-2 ;i++) {
//             if(i==0 || nums[i] !=nums[i-1]) {
//                 int l=i+1;
//                 int r=n-1;
                
//                 while(l<r) {
//                     sum = nums[i]+nums[l]+nums[r];
                    
//                     if(sum==0) {
//                         res.push_back({nums[i], nums[l], nums[r]});
                        
//                         while(l<r and nums[l] == nums[l+1]) {
//                             l++;
//                         }
//                         while(l<r and nums[r] == nums[r-1]) {
//                             r--;
//                         }
//                         l++;
//                         r--;
                        
//                     }
//                     else if(sum <0) {
//                         l++;
                         
//                     }
//                     else r--;
//                 }
//             }
//         }
//         return res;
        
    }
};