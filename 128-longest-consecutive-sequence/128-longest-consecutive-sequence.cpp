class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
             int n=nums.size();
         if(n==0)
        return 0;
        if(n==1)
        return 1;
        
        // normal sorting function takes O(NLogn) but 
        set<int> st; // it takes it O(lognN)
        
        for(int &it:nums)
        {
            st.insert(it);
        }
        
        int maxel=0;
        int curl=1;
        for(auto &it: st)
        {
            if(st.count(it+1)) curl++;
            else curl=1; // resetting the current counter
            
            if(curl>maxel) maxel=curl;
        }
        
        return maxel;
    }
};