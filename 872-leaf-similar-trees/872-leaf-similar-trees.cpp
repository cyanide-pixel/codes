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
     void leaf(TreeNode* root, vector<int> &l)
    {
        if(!root)
            return;
        if(!root->left && !root->right)
            l.push_back(root->val);
        else
        {
            if(root->left)
                leaf(root->left, l);
            if(root->right)
                leaf(root->right,l);
        }
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        if(!root1 && !root2)
            return true;
        if(!root1 || !root2)
            return false;
        vector<int> l1,l2;
        leaf(root1,l1); leaf(root2,l2);
        return (l1==l2);
        
    }
};