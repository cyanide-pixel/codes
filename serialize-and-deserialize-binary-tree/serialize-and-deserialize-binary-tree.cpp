/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(root==NULL)
            return "#,";
        return to_string(root->val) + ',' + serialize(root->left) + serialize(root->right) ;
    }

    // Decodes your encoded data to tree.
    int ind=0;
    TreeNode* deserialize(string data) {
        return fun(data);
    }
    TreeNode* fun(string& data){
        if(ind==data.length())
            return NULL;
        
        string t;
        while(ind<data.length() && data[ind]!=',')
        {
            t+=data[ind++];
        }
        ind++;
        if(t=="#")
            return NULL;
        int val=stoi(t);
        TreeNode* root= new TreeNode(val);
        root->left=fun(data);
        root->right=fun(data);
        return root;
    }
};