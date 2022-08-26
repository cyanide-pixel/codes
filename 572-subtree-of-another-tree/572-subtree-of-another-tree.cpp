
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
    bool ishelper(TreeNode* s, TreeNode* t) {
        if(s == NULL && t == NULL) return true;
        if(s != NULL and t == NULL) return false;
        if(s== NULL and t!= NULL) return false;
        return s->val == t->val && ishelper(s->left, t->left) && ishelper(s->right, t->right);
        
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root == NULL) {
            return false;
        }
        
        if(ishelper(root, subRoot)) {
            return true;
        }
        
        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
};