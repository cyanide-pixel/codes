class Solution {
public:
    int calculate(string s) {
        
         int n=s.length();
    int sum=0;
    int sign=1;
    stack<int> st;
    int val=0;
    
    for(int i=0;i<n;i++)
    {
        while(i<n && isdigit(s[i]))
        {
            val=val*10+(s[i]-'0');
            i++;
        }
        sum+=val*sign;
        val=0;
        if(s[i]=='+')
            sign=1;
        else if(s[i]=='-')
            sign=-1;
        else if(s[i]=='(')
        {
            st.push(sum);
            sum=0;
            st.push(sign);
            sign=1;
        }
        else if(s[i]==')')
        {
            sum=sum*st.top();
            st.pop();
            sum=sum+st.top();
            st.pop();
        }
            
    }
    return sum;
    }
};