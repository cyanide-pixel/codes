class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& pre) {
        //create graph first;
        //will be using map list for this
        /*
                    4
                  /   \
                 /     \
                1       2
                 \     /
                  \   /
                    3
                    
                    here the map will be 
                    1 - 3
                    2 - 3
                    4 - 1->2
                    3 will be empty.
                    
        */
        map<int, vector<int>> graph;
        vector<int> indegree(numCourses, 0);
        
        for(int i=0; i<pre.size(); i++) {
            int ai = pre[i][0];
            int bi = pre[i][1];
            graph[bi].push_back(ai);
            indegree[ai]++;
        }
        /* 
        yha pe maine graph and indegree array populate kiya hai
        graph    int ,     vector<int>
                  4         1, 2
                  1          3
                  2          3
                  3          NULL 
        indegree array bhi populate kiya sath mien
         indegree[]  = [1, 1, 2 ,0]
                        |  |  |  |
                        ^
                        1  2  3  4
        */
        queue<int> q;
        
        for(int i=0; i<indegree.size(); i++) {
            if(indegree[i] == 0) {
                q.push(i);
            }
        }
        int finished = 0;
        while(q.size()>0) {
            int course = q.front();
            q.pop();
            finished++;
            vector<int> children = graph[course];
            for(int i=0; i<children.size(); i++) {
                indegree[children[i]]--;
                if(indegree[children[i]] == 0) {
                    q.push(children[i]);
                }
            }
        }
        return finished == numCourses;
        
    }
};