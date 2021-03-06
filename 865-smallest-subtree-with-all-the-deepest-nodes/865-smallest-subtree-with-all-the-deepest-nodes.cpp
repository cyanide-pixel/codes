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
	// maximum depth
    int maxDepth = -1;
	// reference node
    TreeNode* res =NULL;
    TreeNode* subtreeWithAllDeepest(TreeNode* root){
        postOrder(root,0); // postorder traversal
        return res;
    }
    int postOrder(TreeNode* root,int Depth){
        if(root==NULL) return Depth;
        int left = postOrder(root->left,Depth+1); // left height
        int right = postOrder(root->right,Depth+1); // right height
        
        if(left==right){ // if both are same then only move forward
            maxDepth = max(maxDepth,left); // since left & right are equal you can take anyone for comparison
            if(maxDepth==left){ // you can take **right** as well
                res=root;
            }
        }
        return max(left, right);
    }
};