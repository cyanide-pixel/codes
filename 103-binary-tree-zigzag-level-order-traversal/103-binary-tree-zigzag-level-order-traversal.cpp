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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if(root == NULL) {
            return res;
        }
        
        bool ltr = true;
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()) {
            int sz = q.size();
            vector<int> row(sz);
            
            for(int i=0; i<sz; i++) {
                TreeNode* f = q.front();
                q.pop();
                
                int idx = (ltr) ? i :  (sz-1-i);
                row[idx] = f->val;
                
                if(f->left) q.push(f->left);
                if(f->right) q.push(f->right);
            }
            ltr = !ltr;
            res.push_back(row);
        }
        return res;
    }
};