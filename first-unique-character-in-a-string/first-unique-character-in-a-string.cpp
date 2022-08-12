class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> count(26);
        int n = s.length();
        
        for(int i=0; i<n; i++) {
            int index = s[i]-'a';
            count[index]++;
        }
        
        for(int i=0; i<n; i++) {
            int index = s[i]-'a';
            if(count[index] == 1) {
                return i;
            }
        }
        return -1;
    }
};