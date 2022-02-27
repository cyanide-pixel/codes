// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
   public:
   vector<string>ans;
   bool isSafe(int r,int c,vector<vector<int>> m){
       if(m[r][c]==0) return false;
       return true;
   }
   
   void bck(int r,int c,vector<vector<int>> m,int n,string s){
       if(r==n-1 && c==n-1){
           ans.push_back(s);
           return;
       }
       m[r][c]=0;
       if(r<n-1 && isSafe(r+1,c,m)){
           m[r+1][c]=0;
           string temp=s;
           temp=temp+"D";
           bck(r+1,c,m,n,temp);
           m[r+1][c]=1;
       }
       if(r>0 && isSafe(r-1,c,m)){
           m[r-1][c]=0;
           string temp=s;
           temp=temp+"U";
           bck(r-1,c,m,n,temp);
           m[r-1][c]=1;
       }
       if(c<n-1 && isSafe(r,c+1,m)){
           m[r][c+1]=0;
           string temp=s;
           temp=temp+"R";
           bck(r,c+1,m,n,temp);
           m[r][c+1]=1;
       }
       if(c>0 && isSafe(r,c-1,m)){
           m[r][c-1]=0;
           string temp=s;
           temp=temp+"L";
           bck(r,c-1,m,n,temp);
           m[r][c-1]=1;
       }
       return;
       
   }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
             
       string s="";
       if(m[0][0]==0) return ans;
       bck(0,0,m,n,s);
       return ans;
    }
};

    


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends