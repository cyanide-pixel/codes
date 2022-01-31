class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i = 0; i < (int)s.length();i++){
            if(s[i] == '[' || s[i] == '(' || s[i] == '{'){
                st.push(s[i]);
            }else if(st.empty()){
                return false;
            }else if(s[i] == ')' && !st.empty()){
                if(st.top() == '(' ){
                    st.pop();
                }else{
                    return false;
                }
            }else if(s[i] == '}' && !st.empty()){
                if(st.top() == '{'){
                    st.pop();
                }else{
                    return false;
                }
            }else if(s[i] == ']' && !st.empty() ){
                if(st.top() == '['){
                    st.pop();
                }else{
                    return false;
                }
            }
        }
        if(!st.empty()){
            return false;
        }
        return true;
    }
};