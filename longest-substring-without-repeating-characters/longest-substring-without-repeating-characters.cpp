class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mp;
        
        int left = 0;
        int right = 0;
        int res = 0;
        
        while(right<s.length()) {
            char r = s[right];
            mp[r]++;
            
            while(mp[r]>1) {
                char l = s[left];
                mp[l]--;
                left++;
            }
            
            res = max(res, right-left+1);
            right++;
        }
        return res;
        
    }
};