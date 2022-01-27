class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        
        
        bool flag;
        int res=0;
        unordered_map<char, int> mp;
        for(auto ch : chars)
            mp[ch]++;
        for(auto& it : words)
        {
            unordered_map<char, int> cur;
            for(auto ch : it)
                cur[ch]++;
            flag = true;
            for(auto it : cur)
            {
                if(cur[it.first] > mp[it.first])
                {
                    flag = false;
                    break;
                }
            }
            if(flag) res+=it.size();
        }
        return res;
        
    }
};