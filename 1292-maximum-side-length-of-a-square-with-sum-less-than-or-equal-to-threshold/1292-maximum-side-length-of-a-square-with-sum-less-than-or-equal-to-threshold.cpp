class Solution {
public:
    
        bool valid(vector<vector<int>> &sum, int len, int threshold) {
        for (int i = 0; i < sum.size() - len; ++i) {
            for (int j = 0; j < sum[0].size() - len; ++j) {
                if (sum[i + len][j + len] - sum[i + len][j] - sum[i][j + len] + sum[i][j] <= threshold)               return true;
            }
         }
        return false;
        }
    
    int maxSideLength(vector<vector<int>>& A, int threshold) {
                int M = A.size(), N = A[0].size(), L = 0, R = min(M, N);
        vector<vector<int>> sum(M + 1, vector<int>(N + 1));
        for (int i = 0; i < M; ++i) {
            int s = 0;
            for (int j = 0; j < N; ++j) sum[i + 1][j + 1] = sum[i][j + 1] + (s += A[i][j]);
        }
        while (L <= R) {
            int M = (L + R) / 2;
            if (valid(sum, M, threshold)) L = M + 1;
            else R = M - 1;
        }
        return R;
        
    }
};