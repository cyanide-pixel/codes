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
    
    int total=0;
    int find(TreeNode* root,int x)
    {
        if(!root||root->val!=x)
            return 0;
        else
           return max(find(root->left,root->val),find(root->right,root->val))+1;
            
      
    }
    int longestUnivaluePath(TreeNode* root) {
        
        if(!root)
            return 0;
        return max({find(root->left,root->val)+find(root->right,root->val),longestUnivaluePath(root->left),longestUnivaluePath(root->right)});
    }
};