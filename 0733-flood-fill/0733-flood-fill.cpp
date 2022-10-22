class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int old_pixel = image[sr][sc];
        if(old_pixel != color) {
            dfs(image, sr, sc, color, old_pixel);
        }
        return image;
    }
    
    void dfs(vector<vector<int>> &image, int r, int c, int color, int old_pixel) {
        if(image[r][c] == old_pixel) {
            image[r][c] = color;
            if(r>0) dfs(image, r-1, c, color, old_pixel);
            if(c>0) dfs(image,r, c-1, color, old_pixel);
            if(r<image.size()-1) dfs(image, r+1, c, color, old_pixel);
            if(c<image[0].size()-1) dfs(image, r, c+1, color, old_pixel);
        }
    }
};