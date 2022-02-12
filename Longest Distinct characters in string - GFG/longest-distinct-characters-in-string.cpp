// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends


int longestSubstrDistinctChars (string S)
{
    // your code here
    int ans=INT_MIN; map<char,int> mp;
    int i=0,j=0;
    while(i < S.length())
    {
        mp[S[i]]++;
        if(mp[S[i]] > 1)
        {
            ans = max(ans,i-j);
            while(mp[S[i]] > 1)
            {
                mp[S[j]]--;
                j++;
            }
        }
        i++;
    }
    ans = max(ans,i-j);
    return ans;
}