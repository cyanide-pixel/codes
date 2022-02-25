// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/* The function returns 1 if
IP string is valid else return 0
You are required to complete this method */
class Solution {
    public:
    int isValid(string str) {
        int n = str.size();
            
            int dots = 0;
            
            for(int i = 0; i < n; i++)
            {
                if(str[i] == '.')
                {
                    dots++;
                }
            }
            
            if(dots != 3)
            return false;
            
            string temp = "";
            
            int words = 0;
            
            for(int i = 0; i < n; i++)
            {
                if(isalpha(str[i]))
                return false;
                
                if(str[i] != '.')
                {
                    temp += str[i];
                }
                
                else
                {
                    if(temp.size() == 0)
                    return false;
                    
                    if(temp.size() > 1 && temp[0] == '0')
                    return false;
                    
                    if(stoi(temp) >= 0 && stoi(temp) <= 255)
                    {
                        words++;
                        
                        temp = "";
                    }
                    
                    else
                    return false;
                }
            }
            
            if(temp.size() == 0)
            return false;
            
            if(temp.size() > 1 && temp[0] == '0')
                    return false;
            
            if(stoi(temp) >= 0 && stoi(temp) <= 255)
            {
                words++;
                
                temp = "";
            }
            
            if(words == 4)
            return true;
            
            return false;
}
};

// { Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isValid(s) << endl;
    }
    return 0;
}  // } Driver Code Ends