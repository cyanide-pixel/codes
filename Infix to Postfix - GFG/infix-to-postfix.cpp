// { Driver Code Starts
// C++ implementation to convert infix expression to postfix
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
    public:
    int priority(char c)
    {
        if(c=='^') return 3;
        if(c=='*' or c=='/') return 2;
        if(c=='+' or c=='-') return 1;
        if(c=='(') return 0;
    }
    //Function to convert an infix expression to a postfix expression.
    string infixToPostfix(string s)
    {
        // Your code here
        stack<char> st;
        string ans="";
        for(auto c : s)
        {
            if(isalpha(c)) ans+=c;
            else if(c=='(') st.push(c);
            else 
            {
                if(c==')')
                {
                    while(st.top()!='(')
                    {
                        ans+=st.top();
                        st.pop();
                    }
                    st.pop();
                }
                else if(st.empty() or priority(c)>priority(st.top()))
                {
                    st.push(c);
                }
                else
                {
                    while(!st.empty() and priority(c)<=priority(st.top())) // stk   +
                    {
                        ans+=st.top(); 
                        st.pop();
                    }
                    st.push(c);
                }
            }
            
        }
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};


// { Driver Code Starts.
//Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string exp;
        cin>>exp;
        Solution ob;
        cout<<ob.infixToPostfix(exp)<<endl;
    }
    return 0;
}
  // } Driver Code Ends