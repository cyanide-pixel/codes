class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        
        string table[26] = {".-","-...","-.-.","-..",".","..-.",
                             "--.","....","..",".---","-.-",".-..",
                             "--","-.","---",".--.","--.-",".-.",
                             "...","-","..-","...-",".--","-..-",
                             "-.--","--.."};
        string morse;
        set<string> mapped;
        for(auto word:words)
        {
            morse.clear();
            for(auto c:word)
            {
                morse += table[c - 'a'];
            }
            mapped.insert(morse);
        }
        return mapped.size();
    }
};