/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/


class Solution {
public:
    void preorderf(Node* root, vector<int> &results){
        if(root == NULL) return;
        //Add it to the results array
        results.push_back(root->val);
        //Recursilvely call on children
        for(Node* child : root->children){
            preorderf(child, results);
        }
    }
    vector<int> preorder(Node* root) {
        vector<int> results;
        preorderf(root, results);
        return results;
        
    }
};