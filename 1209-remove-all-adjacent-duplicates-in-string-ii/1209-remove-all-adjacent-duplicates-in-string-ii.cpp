class Solution {
public:
    string removeDuplicates(string s, int k) {
        
        stack<pair<char, int>> st;
        
        for(auto c:s)
        {
            if(st.size()==0 || st.top().first!=c)
            {
                st.push({c, 1});
            }
            else if(++st.top().second==k)
                st.pop();
        }
        
        
        string ans = "";
        while(!st.empty()) {
            auto temp = st.top();
            st.pop();
            ans+= string(temp.second, temp.first);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};