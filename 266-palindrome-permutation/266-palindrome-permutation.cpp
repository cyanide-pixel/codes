class Solution {
public:
    bool canPermutePalindrome(string s) {
        vector<int> v(128);
        
        int cnt = 0;
        for(auto x:s) {
            v[x]++;
            if(v[x]%2 == 0) {
                cnt--;
            }
            else
                cnt++;
        }
        return cnt<=1;
    }
};