// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    }
}
// } Driver Code Ends


//Function to locate the occurrence of the string x in the string s.
int strstr(string h, string n)
{
     //Your code here
      if(n=="") return 0;
        h=n+"$"+h;
        int N=h.size();
        vector<int> pi(N);
        for(int i=1; i<N; i++)
        {
            int j=pi[i-1];
            while(j>0&&h[i]!=h[j])
                j=pi[j-1];
            if(h[i]==h[j])
                j++;
            if(j==n.size())
                return i-n.size()*2;
            pi[i]=j;
        }
        return -1;
}