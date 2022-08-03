class Solution {
public:
    void dfs(vector<vector<char>>& grid, int i, int j, vector<vector<bool>>& vis ) {
        if(i <0 || j< 0 || i>=grid.size() || j>=grid[0].size()) return ;
        if(grid[i][j] == '0' ) return;
        if(vis[i][j] == true) return;
        vis[i][j] = true;
        dfs(grid, i+1, j, vis);
        dfs(grid, i-1, j, vis);
        dfs(grid, i, j+1, vis);
        dfs(grid, i, j-1, vis);
     }
    int numIslands(vector<vector<char>>& grid) {
        int  m = grid.size(); int n = grid[0].size();
        int count =0;
        vector<vector<bool>> vis(m, vector<bool>(n, false));
        for(int i= 0; i<m; i++) {
            for(int j =0; j<n; j++) {
                if(grid[i][j] == '1' && vis[i][j] != true) {
                    dfs(grid, i, j, vis);
                    count++;
                }
            }
        }
        return count;
        
    }
};