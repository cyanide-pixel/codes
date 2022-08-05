class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<int> dist(n+1, INT_MAX);
        vector<vector<int>> adj[n+1];
        
        priority_queue<pair<int,int>, vector<pair<int, int>>, greater<pair<int,int>>> pq;
        
        for(int i=0; i<times.size(); i++) {
            int u = times[i][0];
            int v = times[i][1];
            int w = times[i][2];
            adj[u].push_back({v,w});
        }
        dist[k] = 0;
        pq.push({0, k});
        
        while(!pq.empty()) {
            int u = pq.top().second;
            pq.pop();
            
            for(auto vc:adj[u]) {
                int v = vc[0];
                int w = vc[1];
                
                if(dist[u]+w<dist[v]) {
                    pq.push({dist[u]+w, v});
                    dist[v] = dist[u]+w;
                }
            }
        }
        
        int ans = 0;
        for(int i=1; i<n+1; i++) {
            ans = max(dist[i], ans);
        }
        if(ans == INT_MAX) return -1;
        
        return ans;
    }
};