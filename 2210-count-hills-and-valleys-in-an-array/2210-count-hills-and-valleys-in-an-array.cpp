class Solution {
public:
    int countHillValley(vector<int>& nums) 
    {
        int count=0;
        int n=nums.size();
        
        vector<int> v;
        v.push_back(nums[0]);
        
        for(int i=1;i<n;i++)
        {
            if(nums[i]!=nums[i-1])v.push_back(nums[i]);
        }
        if(v.size()<=2) return 0;
        for(int i=1;i<=v.size()-2;i++)//why not i<=v.size()-2?;
        {
            if((v[i]>v[i+1]&&v[i]>v[i-1])||(v[i]<v[i+1]&&v[i]<v[i-1]))
                count++;
        }
        
        return count; 
            
    }
};
