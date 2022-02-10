// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool sameFreq(string s)
	{
	    // code here 
	    int x=0;
	    int k=0;
	    int n=s.size();
	    if(n==1){
	        return true;
	    }
	    unordered_map<char,int>mp;
	    for(int i=0;i<n;i++){
	        mp[s[i]]++;
	    }
	    k=mp[s[0]];
	    for(int i=0;i<n;i++){
	        if(mp[s[i]]==1){
	            mp.erase(s[i]);
	            break;
	        }
	    }
	    int checker=0;
	    for(auto &it:mp){
	        if(it.second==k){
	            checker++;
	        }
	    }
	    
	    if(checker==mp.size()){
	        return true;
	    }
	    for(auto &it:mp){
	        x=max(it.second,x);
	    }
	    for(auto &it:mp){
	        if(it.second==x){
	            it.second--;
	            x--;
	            break;
	        }
	    }
	    
	    for(auto &it:mp){
	        if(it.second!=x){
	            return false;
	        }
	    }
	    return true;
	}
};

// { Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.sameFreq(s)<<endl;
    }
}


  // } Driver Code Ends