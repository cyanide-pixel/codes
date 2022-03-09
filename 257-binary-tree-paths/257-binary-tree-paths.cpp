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
     void helper(TreeNode* root, string s, vector<string> &ans)
    {
        if(!root)
            return;
        
        if(!root->left && !root->right)
        {s=s+ to_string(root->val); ans.push_back(s);}
        
        if(root->left)
            helper(root->left, s+to_string(root->val)+"->",ans);
        
        if(root->right)
            helper(root->right, s + to_string(root->val)+"->", ans);
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        
        if(!root)
            return ans;
        
        string s="";
        
        helper(root,s,ans);
        
        return ans;
        
    }
};