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
    unordered_map<int, int> m;
    bool siblings = true;
    bool isCousins(TreeNode* root, int x, int y) {
        dfs(root, 0, x, y);
        return m[x] == m[y] && siblings;
    }
    void dfs(TreeNode* v, int level, int x, int y) {
        if (!v) {
            return;
        }
        if (v->left && v->right) {
            if (v->left->val == x && v->right->val == y || 
                v->left->val == y && v->right->val == x) {
            siblings = false;
            return;
            }
        }
        if (v->val == x || v->val == y) {
            m[v->val] = level;
        }
        if (v->left) {
            dfs(v->left, level + 1, x, y);
        }
        if (v->right) {
            dfs(v->right, level+1, x, y); 
        }
    }        
        
};