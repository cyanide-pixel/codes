class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int oldcolor = image[sr][sc];
        if(oldcolor != color) dfs(image, sr, sc, oldcolor, color);
        return image;
    }
    
    void dfs(vector<vector<int>>& image, int r, int c, int oldcolor, int color) {
        if(image[r][c]== oldcolor) {
            image[r][c] = color;
            if(r>=1) dfs(image, r-1, c, oldcolor, color);
            if(c>=1) dfs(image, r, c-1, oldcolor, color);
            if(r+1<image.size()) dfs(image, r+1, c, oldcolor, color);
            if(c+1<image[0].size()) dfs(image, r, c+1 ,oldcolor, color);
        }
    }
};