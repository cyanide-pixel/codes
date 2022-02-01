class Solution {
public:
    int numJewelsInStones(string j, string s) {
        
        int c = 0;
		unordered_map<char, int> m;
		for(int i = 0; i < j.length(); i++){
			m[j[i]]++;
		}
		for(int j = 0; j < s.length(); j++){
			if(m.count(s[j])){
				c++;
			}
		}
		return c;
        
    }
};