// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
  public:
        vector <int> rotate (int n, int d)
        {
            //code here.
            
            if(d > 16)
                d = d%16;
            int a ,b ;
            a = (n << d) | (n >> (16 - d));
            b = (n >> d) | (n << (16 - d));
            
            a = (a & ((1 << 16)-1));
            b = (b & ((1 << 16)-1));
            
            return {a , b};
        }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        
        int n, d; cin >> n >> d;
        Solution ob;
        vector <int> res = ob.rotate (n, d);
        cout << res[0] << endl << res[1] << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends