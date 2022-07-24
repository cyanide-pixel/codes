class Solution {
public:
    bool searchMatrix(vector<vector<int>>& a, int k) {
        int n=a.size(),m=a[0].size();
        int l=0,h=n-1,mid=0,r=0;
        while(h>=l)
        {
            mid=(l+h)/2;
            if(a[mid][0]<=k)
            {
                r=mid;
                l=mid+1;
            }
            else
                h=mid-1;
        }
        return (binary_search(a[r].begin(),a[r].end(),k));
    }
};