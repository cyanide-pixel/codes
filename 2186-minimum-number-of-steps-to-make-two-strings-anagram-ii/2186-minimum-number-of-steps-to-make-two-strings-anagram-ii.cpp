class Solution {
public:
    int minSteps(string s, string t) {
        
        unordered_map<char, int> mp;
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]++;
        }
        
        int count=0;
        for(int j=0;j<t.length();j++)
        {
            if(mp[t[j]] && mp[t[j]] >0)
            {
                mp[t[j]]--;
            }
            
            else
                count++;
        }
        for(auto it:mp)
        {
            count = count + it.second;
        }
        
        return count;
    }
};