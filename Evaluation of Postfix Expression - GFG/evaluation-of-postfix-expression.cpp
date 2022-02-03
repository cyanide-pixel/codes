// { Driver Code Starts
// C++ program to evaluate value of a postfix expression

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string S)
    {
        // Your code here
        stack<int>st;
        
        for(char ch : S){
            
            if(ch <= '9' && ch >= '0') st.push(ch-'0');
            else{
                int num1 = st.top();
                st.pop();
                int num2 = st.top();
                st.pop();
                switch(ch){
                    case '+' : st.push(num2+num1);
                    break;
                    case '-' : st.push(num2-num1);
                    break;
                    case '*' : st.push(num2*num1);
                    break;
                    case '/' : st.push(num2/num1);
                    break;
                }
            }
        }
        return st.top();
    }
};

// { Driver Code Starts.

// Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string S;
        cin>>S;
        Solution obj;
    
    cout<<obj.evaluatePostfix(S)<<endl;
    }
    return 0;
}
  // } Driver Code Ends