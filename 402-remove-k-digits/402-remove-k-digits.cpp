class Solution {
public:
    string removeKdigits(string num, int k) {
        
        stack<char> s;
        s.push(num[0]);
        int i=1;
        int len=num.length();
        while(i<len)
        {
            //char top=s.top();
            if(num[i]>=s.top())
            {
                s.push(num[i]);
            }
            else
            {
                while(k>0 && !s.empty())
                {
                    if(num[i]<s.top())
                    {s.pop();
                    k--;}
                    else
                        break;
                }
                s.push(num[i]);
            }
            i++;
        }
        while(k>0)
        {
            s.pop();
            k--;
        }
        string ans="";
        while(!s.empty())
        {
            char a=s.top();
            ans+=a;
            s.pop();
        }
        reverse(ans.begin(),ans.end());
        i = 0;
        while(i< ans.length() && ans[i] == '0'){
            i++;
        }
        if(i == ans.length()){
            return "0";
        }
        return ans.substr(i, len-i);
    }
};