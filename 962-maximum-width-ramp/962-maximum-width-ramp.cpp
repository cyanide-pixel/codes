class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        
        stack<int> st;
        int n = nums.size();
        
        for(int i=0; i<n; i++)
        {
            if(st.empty() || nums[i]<nums[st.top()])
            {
                st.push(i);
            }
        }
        
        int res = 0;
        
        for(int i = n-1; i>=0; i--)
        {
            while(!st.empty() and nums[i]>=nums[st.top()])
            {
                res = max(i - st.top(), res);
                st.pop();
            }
        }
        return res;
        
    }
};