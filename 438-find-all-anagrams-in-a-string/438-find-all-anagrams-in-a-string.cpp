class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        int n=s.length();
        int m=p.length();
        map<char,int>mp1;
        for(auto ch:p)
            mp1[ch]++;
        vector<int>ans;
       int start=0;
        int cnt=0;
        map<char,int>mp2;
        for(int i=0;i<n;i++){
            mp2[s[i]]++;
            if(mp2[s[i]]>mp1[s[i]]){
                while(mp2[s[i]]>mp1[s[i]]){
                    mp2[s[start]]--;
                    start++;
                }
            }
            if(mp1==mp2)
                ans.push_back(start);
        }
        return ans;
        
    }
};