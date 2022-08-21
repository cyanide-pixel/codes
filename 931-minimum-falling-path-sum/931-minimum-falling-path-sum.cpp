class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int minFallingSum = INT_MAX;
        vector<vector<optional<int>>> memo(
            matrix.size(), vector<optional<int>>(matrix.size(), nullopt));

       
        for (int startCol = 0; startCol < matrix.size(); startCol++) {
            minFallingSum = min(minFallingSum, findMinFallingPathSum(
                                                   matrix, 0, startCol, memo));
        }
        return minFallingSum;
    }

    int findMinFallingPathSum(vector<vector<int>>& matrix, int row, int col,
                              vector<vector<optional<int>>>& memo) {
     
        if (col < 0 || col == matrix.size()) {
            return INT_MAX;
        }
        if (row == matrix.size() - 1) {
            return matrix[row][col];
        }
        if (memo[row][col] != nullopt) {
            return (memo[row][col]).value_or(0);
        }
        int left = findMinFallingPathSum(matrix, row + 1, col - 1, memo);
        int middle = findMinFallingPathSum(matrix, row + 1, col, memo);
        int right = findMinFallingPathSum(matrix, row + 1, col + 1, memo);

        int minSum = min(left, min(middle, right)) + matrix[row][col];

        memo[row][col] = minSum;
        return minSum;
    }
};

