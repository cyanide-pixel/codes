class Node {
    public:
    char ch;
    Node* child[26];
    bool isEnd;
    Node(char c) {
        ch =c;
        isEnd = false;
        for(int i=0; i<26; i++) child[i] = NULL;
    }
};

class Trie {
public:
    Node* root;
    Trie() {
        root = new Node('$');
    }
    
    void insert(string word) {
        Node* temp = root;
        for(auto c: word) {
            if(temp->child[c-'a'] == NULL) {
                temp->child[c-'a'] = new Node(c);
            }
            temp = temp->child[c-'a'];
        }
        temp->isEnd = true;
    }
    
    bool search(string word) {
        Node* temp = root;
        for(auto c:word) {
            if(temp->child[c-'a'] == NULL) return false;
            temp = temp->child[c-'a'];
        }
        return temp->isEnd;
    }
    
    bool startsWith(string prefix) {
        Node* temp = root;
        for(char c:prefix) {
            if(temp->child[c-'a'] == NULL) return false;
            temp = temp->child[c-'a'];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */