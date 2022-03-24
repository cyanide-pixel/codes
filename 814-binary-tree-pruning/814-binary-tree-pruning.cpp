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
    bool trimmer(TreeNode* root)
    {
        if(!root) return false;
        bool pres = false;
        if(!trimmer(root->left)) root->left = nullptr;
        else pres = true;
        if(!trimmer(root->right)) root->right = nullptr;
        else pres = true;
        return root->val == 1 || pres;
    }
    
    TreeNode* pruneTree(TreeNode* root) {
        if(trimmer(root))
        return root;
        else
        return nullptr;
    }
};