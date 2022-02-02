class Solution {
public:
    int calPoints(vector<string>& ops) {
        
        stack<int> st;
        int sum =0;
        int n =ops.size();
        for(int i=0; i<n; i++)
        {
            if(ops[i]=="C")
            {
                st.pop();
            }
            else if(ops[i]=="+")
            {
                int sum1 = st.top();
                st.pop();
                int sum2 = st.top();
                st.push(sum1);
                st.push(sum1+sum2);
            }
            else if(ops[i]=="D")
            {
                st.push((st.top())*2);
            }
            else 
            {
                st.push(stoi(ops[i]));
            }
        }
        
        while(!st.empty())
        {
            sum+=st.top();
            st.pop();
        }
        return sum;
    }
};