// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        //Your code here
        
        int res =0;
        int n = str.size();
        int i=0;
        
        
        bool neg =false;
        
        if(str[0] == '-')
        {
            neg = true;
            i=1;
            --n;
        }
        
        while(n)
        {
            if(str[i]>'9' || str[i]< '0') return -1;
            
            res+=(str[i++]-'0') *pow(10, --n);
        }
        
        return (neg)? res*-1:res;
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}  // } Driver Code Ends