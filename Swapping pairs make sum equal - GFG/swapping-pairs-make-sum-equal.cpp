// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	int findSwapValues(int A[], int n, int B[], int m)
	{
        // Your code goes here
        int s1 = accumulate(A, A+n, 0);
	    int s2 = accumulate(B, B+m, 0);
	    unordered_set <int> us;
	    for(int i=0; i<n; i++)
	        us.insert(s2+2*A[i]);
	    for(int i=0; i<m; i++){
	        if(us.find(s1+2*B[i]) != us.end())
	            return 1;
	    }
	    return -1;
	}
 

};

// { Driver Code Starts.

int main() 
{
   	
   	int t;
    cin >> t;
    while (t--)
    {
    	int n,m;
        cin>>n>>m;
        int a[n];
        int b[m];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<m;i++)
            cin>>b[i];
        

        Solution ob;
        cout <<  ob.findSwapValues(a, n, b, m);
	    cout << "\n";
	     
    }
    return 0;
}





  // } Driver Code Ends