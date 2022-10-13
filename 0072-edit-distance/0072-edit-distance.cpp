class Solution {
public:
    int helper(string w1, string w2, int i, int j, vector<vector<int>> &dp) {
        if(dp[i][j]) return dp[i][j];
        if(i == w1.size()) {
            return w2.size()-j;
        }
        else if( j == w2.size()) {
            return w1.size()-i;
        }
        else if(w1[i] == w2[j]) {
            dp[i][j] = helper(w1, w2, i+1, j+1, dp);
            return dp[i][j];
        }
        else {
            dp[i][j] =  1 + min(min (helper(w1, w2, i+1, j+1, dp), helper(w1, w2, i, j+1, dp)), helper(w1, w2, i+1, j, dp));
            return dp[i][j];
        }
    }
    int minDistance(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();
        vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
        return helper(word1, word2, 0, 0, dp);
    }
};