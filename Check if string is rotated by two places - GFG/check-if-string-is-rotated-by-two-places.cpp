// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        // Your code here
        // Your code here
       int m=str1.length();
       int n=str2.length();
       string s1="",s2="";
       s1+=str1[m-2];
       s1+=str1[m-1];
       s1+=str1.substr(0,m-2);
       s2+=str1.substr(2,m-2);
       s2+=str1[0];
       s2+=str1[1];
       if(str2==s1 || str2==s2){
           return true;
       }
       return false;
    }

};


// { Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}
  // } Driver Code Ends