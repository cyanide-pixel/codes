class Solution {
public:
    bool backspaceCompare(string S, string T) {
                
       stack<char> s1, s2;
        
        for(int i=0; i< S.size(); i++){
            if(S[i]=='#'){
                if(s1.size()>0)
                    s1.pop();
            }
            else
                s1.push(S[i]);
        }
        
        
        for(int i=0; i< T.size(); i++){
            if(T[i]=='#'){
                if(s2.size()>0)
                    s2.pop();
            }
            else
                s2.push(T[i]);
        }
        
        if(s1.size() != s2.size())
            return false;
        
        while(!s1.empty()){
            if(s1.top() != s2.top())
                return false;
            s1.pop();
            s2.pop();
            
        }
        
        return true;
    }
};