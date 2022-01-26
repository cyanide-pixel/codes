class Solution {
public:
    bool isAnagram(string s, string t) {
        
        int n=s.size();
        if(s==t)
            return true;
        
        if(s.size()!=t.size())
            return false;
        
        
        unordered_map<char,int>mymap;
        
        for(int i=0;i<n;i++)
        {
            mymap[s[i]]++;
            mymap[t[i]]--;
        }
        
        for(auto it=mymap.begin();it!=mymap.end();it++)
        {
            if(it->second)
                return false;
        }
        return true;

    }
};