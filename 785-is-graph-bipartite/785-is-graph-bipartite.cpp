class Solution {
public:
    bool bfs(int i, vector<vector<int>>& graph, vector<int>& color){
        queue<int> q;
        q.push(i);
        color[i] = 1;
        
        while(!q.empty()) {
            int x = q.front();
            q.pop();
            
            for(auto it:graph[x]) {
                if(color[it] == -1) {
                    color[it] = 1 - color[x];
                    q.push(it);
                } else if(color[it] == color[x]) {
                    return false;
                }
            }
        }
        return true;
    }
    bool solve(vector<vector<int>>& graph, int n) {
        vector<int> color(n, -1);
        // memset(color, -1, sizeof color);
        for(int i=0; i<n; i++) {
            if(color[i] == -1) {
                if(!bfs(i, graph, color)) {
                    return false;
                }
            }
        }
        return true;
        
    }
    bool isBipartite(vector<vector<int>>& graph) {
        return solve(graph, graph.size());
    }
};