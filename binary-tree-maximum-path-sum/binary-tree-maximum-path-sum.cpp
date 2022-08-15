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
    int helper(TreeNode* root, int& ans) {
        if(root == NULL) {
            return 0;
        }
        
        int leftAns = helper(root->left, ans);
        int rightAns = helper(root->right, ans);
        
        int tempAns = max(max(root->val, root->val+leftAns+rightAns), 
                          max(root->val+leftAns, root->val+rightAns));
        
        ans = max(tempAns, ans);
        return max(root->val, max(root->val+leftAns, root->val+rightAns));
    }
    int maxPathSum(TreeNode* root) {
        int ans = INT_MIN;
        helper(root, ans);
        return ans;
    }
};