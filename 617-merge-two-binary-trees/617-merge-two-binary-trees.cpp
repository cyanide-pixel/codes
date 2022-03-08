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

    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(!root1 && !root2)return NULL;
        TreeNode* root;
        if(root1 && root2){
             root = new TreeNode(root1->val+root2->val);
        }
        if(!root1 && root2 ){
             root = new TreeNode(root2->val);
        }
        if( !root2 && root1){
             root = new TreeNode(root1->val);
        }
        TreeNode* leftchild = mergeTrees(root1?root1->left:NULL,root2?root2->left:NULL);
        TreeNode* rightchild = mergeTrees(root1?root1->right:NULL,root2?root2->right:NULL);
        root->left = leftchild;
        root->right = rightchild;
        return root;
    }
};