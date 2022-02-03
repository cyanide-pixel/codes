class Solution {
public:
    int scoreOfParentheses(string s) {
        
        stack<int> st;
        int i=0,n=s.length();
        
        for(i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                st.push(-1);
            }
            else
            {
                if(st.top()==-1)
                {
                    st.pop();
                    st.push(1);
                    continue;
                }
                else
                {
                    int tmp=0;
                    while(st.top()!=-1)
                    {
                        tmp=tmp+st.top();
                        st.pop();
                    }
                    st.pop();
                    st.push(tmp*2);
                }
            }
        }
        int an=0;
        while(st.size()!=0)
        {
            an=an+st.top();
            st.pop();
        }
        return an;
    }
};