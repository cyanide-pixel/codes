// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    #define ll long long 
    
    ll merge(ll arr[],ll l, ll mid, ll r)
    {
        ll invcnt=0;
        ll n=mid-l+1;
        ll m=r-mid;
        ll lft[n], rht[m];
        
        ll k=0;
         for (ll i = 0; i < n; i++)
          lft[i] = arr[l + i];
         for (ll j = 0; j < m; j++)
          rht[j] = arr[mid + 1 + j];
        
        
        ll i=0,j=0;
        ll p=l;
        
        while(i<n && j<m)
        {
            if(lft[i]<=rht[j])
            {
                arr[p]=lft[i];
                i++;
                p++;
            }
            else
            {
                invcnt+=(n-i);
                arr[p]=rht[j];
                j++;
                p++;
            }
        }
        
        while(i<n)
        {
            arr[p]=lft[i];
            i++;
            p++;
        }
        
        while(j<m)
        {
            arr[p]=rht[j];
            j++;
            p++;
        }
        
        
        return invcnt;
    }
    
    ll mergesort(ll arr[],ll l ,ll r)
    {
        ll mid,invcnt=0;
        
        
        if(l<r)
        {
           mid=(l+r)/2;
            
            invcnt+=mergesort(arr,l,mid);
            invcnt+=mergesort(arr,mid+1,r);
            invcnt+=merge(arr,l,mid,r);
            
        }
        
        return invcnt;
    }
    
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        ll l=0, r=N-1;
        
        return mergesort(arr,l,r);
    }

};

// { Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}
  // } Driver Code Ends