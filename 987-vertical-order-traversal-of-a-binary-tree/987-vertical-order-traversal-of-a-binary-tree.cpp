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

    map<int, vector<pair<int,int>>> mp;
    void sol(TreeNode* r ,int d, int rt) {
        if(!r)
            return;
        mp[d].push_back({rt, r->val});
        sol(r->left, d-1, rt+1);
        sol(r->right,d+1, rt+1);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        sol(root, 0, 0);
        vector<vector<int>> v;
        for(auto it:mp) {
            vector<pair<int,int>> a = it.second;
            sort(a.begin(), a.end());
            vector<int> x;
            for(auto i:a) 
                x.push_back(i.second);
            v.push_back(x);
            
        }
        return v;
    }
};