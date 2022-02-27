class Solution {
public:
        void backtrack(string s, int i, vector<string> &v, vector<vector<string>> &res){
        if(i == s.length()){
            res.push_back(v);
            return;
        }
        
        for(int k=i; k<s.length(); k++){
            if(isPal(s.substr(i, k+1-i))){
                v.push_back(s.substr(i, k+1-i));
                backtrack(s, k+1, v, res);
                v.pop_back();
            }
        }
    }
    
    bool isPal(string s){
        int i=0, j=s.length()-1;
        while(i < j){
            if(s[i++] != s[j--]) return false;
        }
        return true;
    }
    vector<vector<string>> partition(string s) {
       
        vector<vector<string>> res;
        vector<string> v;
        backtrack(s, 0, v, res);
        return res;
    }
};