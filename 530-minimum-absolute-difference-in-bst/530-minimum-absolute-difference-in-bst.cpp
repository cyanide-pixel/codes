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
    int ans = INT_MAX;
    TreeNode *p = NULL;
    void helper(TreeNode *root){
        if(!root) return;
        helper(root->left);
        if(p) ans = min(ans, abs(root->val - p->val));
        p = root;
        helper(root->right);
    }
    
    int getMinimumDifference(TreeNode* root) {
        helper(root);
        return ans;
    }
};