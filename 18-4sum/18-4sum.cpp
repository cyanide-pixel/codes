class Solution {
public:
    #define ll long long  
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        
        int n = nums.size();
        
        set<vector<int>>ans;
        
        if(n<=3)return {};
        vector<int>temp;
        sort(nums.begin(),nums.end());
        int k,l;
        for(int i=0;i<=n-4;i++){
            for(int j=i+1;j<=n-3;j++){
                k=j+1;
                l=n-1;
                ll int first = nums[i]+nums[j];
                while(k<l){
                    ll int sum = first+nums[k]+nums[l];
                    if(sum==target){
                        temp={nums[i],nums[j],nums[k],nums[l]};
                        ans.insert(temp);
                        temp.clear();
                        k++;
                    }
                    else if(sum<target)k++;
                    else l--;
                }
            }
        }
        vector<vector<int>>Ans;
        for(auto i:ans)Ans.push_back(i);
        return Ans;
        
    }
};