class Solution {
public:
      
    unordered_set<string> s;
    void solve(string path,vector<bool>& visited,string tiles)
    {
        s.insert(path);
        
        for(int i=0;i<tiles.size();i++)
        {
            if(visited[i])
            {
                continue;
            }
            visited[i]=true;
            
            path+=tiles[i];
            
            solve(path,visited,tiles);
            
            visited[i]=false;
            
            path.pop_back();
        }
    }
    
    
    
    int numTilePossibilities(string tiles) {
        
        string path="";
        
        int n=tiles.size();
        
        vector<bool> visited(n,false);
        
        solve(path,visited,tiles);
        return s.size()-1;
    }
};