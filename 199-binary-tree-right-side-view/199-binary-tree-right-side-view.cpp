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
    
    void reversePreorder(TreeNode* root, int level, vector<int> &res) {
        if(root == nullptr) return;
        
        // If you are coming to this level for first time, then push
        if(res.size() < level) res.push_back(root->val);
        
        reversePreorder(root->right, level + 1, res);
        reversePreorder(root->left, level + 1, res);
    }
    
    vector<int> rightSideView(TreeNode* root) {
        // Traverse in order, Root Right Left.
        vector<int> res;
        reversePreorder(root, 1, res);
        return res;
        
    }
};