class Solution {
public:
    int longestSubstring(string s, int k) {
        if(k == 1) return (int)s.length();
        int ans =0;
        if(k>s.length()) return 0;
        int l =0, r=0;
        unordered_map<int, int> mp;
        
        for(auto i: s) {
            mp[i]++;
        }
        bool flag = false;
        int i=0;
        while(i<s.length() && mp[s[i]]>=k) {
            i++;
        }
        if(i == s.length()) return s.length(); 
        l = longestSubstring(s.substr(0, i), k);
        while(i<s.length() && mp[s[i]]<k) i++;
        
        if(i == s.length()) return l;
        
        r = longestSubstring(s.substr(i), k);
        
        return max(l, r);
    }
};