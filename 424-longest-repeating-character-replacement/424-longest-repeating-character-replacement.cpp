class Solution {
public:
    int characterReplacement(string s, int k) {
    vector<int> freq(26, 0); //keeps frequency of character of the window

	int l = 0;
	int maxLength = 0, maxFreq = 0;

	for (int r = 0; r < s.size(); ++r){
		freq[s[r]-'A']++;
		maxFreq = max (maxFreq, freq[s[r]-'A']);

		int windowSize = r - l + 1;

		if (windowSize - maxFreq > k){
			//character replacement not affordable
			freq[s[l]-'A']--;
			l++;
		}else{
			maxLength = max(maxLength, windowSize);
		}
	}

	return maxLength;
        
          
        
    }
};