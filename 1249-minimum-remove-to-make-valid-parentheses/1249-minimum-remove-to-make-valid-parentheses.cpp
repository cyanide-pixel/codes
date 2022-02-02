class Solution {
public:
    string minRemoveToMakeValid(string s) {
        
        stack<int>st;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(isalpha(s[i]))
                continue;
            else{
                if(s[i]=='(')
                    st.push(i);
                else{
                    if(!st.empty() and s[st.top()]=='(')
                        st.pop();
                    else
                        st.push(i);
                }
            }
        }
        while(!st.empty()){
            s[st.top()]='#';
            st.pop();
        }
        string ans="";
        for(auto ch:s){
            if(ch!='#')
                ans+=ch;
        }
        return ans;
        
    }
};