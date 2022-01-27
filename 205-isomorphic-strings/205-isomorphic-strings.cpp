class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
       //char for key and vector for its respective indexes.
        unordered_map <char,vector<int>> s1;
        unordered_map <char,vector<int>> s2;
        int len = s.length();
        for(int i =0;i<len;i++) {
            s1[s[i]].push_back(i);
            s2[t[i]].push_back(i);
			//compare vector. if there indexes doesn't match its mean they are not isomorphic.
            if(s1[s[i]] != s2[t[i]]) {
              return false;
           }
        }
        
        return true;;
    }
};