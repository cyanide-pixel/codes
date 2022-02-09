// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        string S2;
        int r;
        int n=S.size();
        
        for(int i =n-1; i>=0; i--)
        {
            if(S[i]=='.')
            {
                r = n-i;
                n= i-1;
                S2.append(S.substr(i+1, r));
                S2.append(".");
            }
        }
        
        
        S2.append(S.substr(0, n+1));
        return S2;
    } 
};

// { Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}  // } Driver Code Ends