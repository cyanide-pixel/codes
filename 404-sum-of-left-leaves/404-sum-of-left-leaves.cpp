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
    int sumOfLeftLeaves(TreeNode* root) {
       
        if(!root)
            return 0;
        int x=0;
        if(root->left){
			if(!(root->left->left)&&!(root->left->right)){
				x+= root->left->val;
			}
			else{
				x+= sumOfLeftLeaves(root->left);
			}
        }
         if(root->right){
			  x+= sumOfLeftLeaves(root->right);
        }
        return x;
    }
};