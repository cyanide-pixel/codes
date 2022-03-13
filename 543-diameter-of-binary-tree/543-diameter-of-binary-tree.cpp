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
  int maxi = 0;
  int diameterOfBinaryTree(TreeNode* root) {
    
    int temp = dfsHeight(root);
    return maxi;
  }

  int dfsHeight(TreeNode* root){
    
    if(root == NULL) return 0;
    
    int lh = dfsHeight(root->left);
    int rh = dfsHeight(root->right);
    
    maxi = max(maxi, lh+rh);
    
    return 1 + max(lh,rh);
    
  }
};