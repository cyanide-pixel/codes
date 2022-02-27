// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//Function to determine if graph can be coloured with at most M colours such
//that no two adjacent vertices of graph are coloured with same colour.
bool isSafe(bool graph[101][101], int color,int r,vector<int> & colors){
    for(int j=0;j<101;j++){
        if(graph[r][j]==1){
            if(colors[j]==color){
                return false;
            }
        }
    }
    return true;
}

bool solve(bool graph[101][101],vector<int> & colors,int i,int m){
    if(i >= colors.size()){
        return true;
    }
    for(int k=0;k<m;k++){
        if(isSafe(graph,k,i,colors)){
            colors[i]=k;
            if(solve(graph,colors,i+1,m)){
               return true;
            }
            colors[i]=-colors[i];
        }
    }
    return false;
}
bool graphColoring(bool graph[101][101], int m, int V)
{
    // your code here
    vector<int> colors(V,-1);
    bool res =solve(graph,colors,0,m);
    return res;
}

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, e;
        cin >> n >> m >> e;
        int i;
        bool graph[101][101];
        for (i = 0; i < n; i++) {
            memset(graph[i], 0, sizeof(graph[i]));
        }
        for (i = 0; i < e; i++) {
            int a, b;
            cin >> a >> b;
            graph[a - 1][b - 1] = 1;
            graph[b - 1][a - 1] = 1;
        }
        cout << graphColoring(graph, m, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends