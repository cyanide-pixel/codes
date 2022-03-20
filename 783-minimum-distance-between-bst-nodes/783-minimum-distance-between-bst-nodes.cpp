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
    int pre = INT_MAX;
    int res = INT_MAX;
    void loop(TreeNode* root)
    {
        if(root==nullptr)
        {
            return ;
        }
        loop(root->left);
        res= min(res,abs(pre-root->val));
        pre=root->val;
        loop(root->right);
    }
    int minDiffInBST(TreeNode* root) {
        loop(root);
        return res;
    }
};