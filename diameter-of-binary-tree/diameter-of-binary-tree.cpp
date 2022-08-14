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
    pair<int, int> hd(TreeNode* root) {
        if(root == NULL) {
            pair<int, int> k;
            k.first = 0;
            k.second = 0;
            return k;
        }
        
        pair<int, int> leftAns = hd(root->left);
        pair<int, int> rightAns = hd(root->right);
        
        int lh = leftAns.first;
        int ld = leftAns.second;
        int rh = rightAns.first;
        int rd = rightAns.second;
        
        pair<int, int> overAll;
        overAll.first = 1 + max(lh ,rh);
        overAll.second = max(lh+rh, max(ld, rd));
        return overAll;
        
    }
    int diameterOfBinaryTree(TreeNode* root) {
        pair<int, int> p = hd(root);
        return p.second;
    }
};
