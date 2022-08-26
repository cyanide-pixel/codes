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
    int rangeSumBST(TreeNode* root, int low, int high) {
        stack<TreeNode*> st;
        int ans = 0;
        st.push(root);
        
        while(!st.empty()){
            TreeNode* f = st.top();
            st.pop();
            if(f != NULL) {
                    if(f->val>=low && f->val<=high) {
                        ans+=f->val;
                    }
                    if(f->val>low) {
                        st.push(f->left);
                    }
                    if(f->val<high) {
                        st.push(f->right);
                    }  
            }
        }
        return ans;
    }
};