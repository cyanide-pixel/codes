class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int i,j, size;
        string result;
        size = s.size();
       
        for(i=size-2; i>=0; i--)
            shifts[i] = (shifts[i]+shifts[i+1])%26;
        for(i=0; i<size; i++)
           s[i] = (s[i]-'a'+shifts[i])%26 +'a';

        return s;
    }
};