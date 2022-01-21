class Solution {
public:
    int characterReplacement(string s, int k) {
        
        
        unordered_map<char,int> mp;
        int start = 0;
        int end =0;
        int maxCharCount = 0;
        int n = s.length();
        int result = 0;
        while(end<n){
            
            char initialch = s[end];
            mp[initialch]++;
            maxCharCount = max(maxCharCount, mp[initialch]);
            end++;
            while(end-start-maxCharCount > k) {
                char startch = s[start];
                mp[startch]--;
                start++;
            }
            result = max(result, end-start);
        }
        return result;
        
    }
};