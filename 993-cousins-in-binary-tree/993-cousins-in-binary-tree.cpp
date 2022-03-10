/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int dfs(TreeNode* root,int x,int y,bool &ans){
        if(!root) return 0;
        else if(root->val == x or root->val == y) return 1;
        
        int lc = dfs(root->left,x,y,ans);
        int rc = dfs(root->right,x,y,ans);
        
        if(lc and rc){
            if(lc == 1 and rc == 1) ans = false;
            else if(lc == rc) ans = true;
            return lc+1;
        }
        if(lc) return lc+1;
        if(rc) return rc+1;
        
		return 0;
    }
    bool isCousins(TreeNode* root, int x, int y) {
        bool ans = false;
        dfs(root,x,y,ans);
        return ans;
        
    }
};