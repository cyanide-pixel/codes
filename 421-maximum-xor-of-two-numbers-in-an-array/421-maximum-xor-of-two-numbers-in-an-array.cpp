class Node {
 public:
    Node* one, *zero;
    Node() {
        one = zero = NULL;
    }
};

class Trie {
   public:
    Node* root;
    Trie() {
        root = new Node();
    }
    
    void insert(int val) {
        Node* temp = root;
        for(int i=30; i>=0; i--) {
            if((val >> i)&1) {
                if(temp->one==NULL) {
                    temp->one = new Node();
                }
                temp = temp->one;
            } else {
                if(temp->zero == NULL) {
                    temp->zero = new Node();
                }
                temp = temp->zero;
            }
        }
    }
    
    int max_xor(int val) {
        Node* temp =root;
        int res =0;
        for(int i=30; i>=0; i--) {
            if((val >> i) & 1) {
                if(temp->zero) {
                    res |= 1<<i;
                    temp = temp->zero;
                }
                else {
                    temp = temp->one;
                }
            } else {
                if(temp->one) {
                    res |= 1<<i;
                    temp = temp->one;
                }
                else {
                    temp = temp->zero;
                }
            }
        }
        return res;
    }
};
class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        Trie trie;
        int ans = 0;
        for(auto x:nums) {
            trie.insert(x);
            ans = max(ans, trie.max_xor(x));        
        }
        return ans;
    }
};