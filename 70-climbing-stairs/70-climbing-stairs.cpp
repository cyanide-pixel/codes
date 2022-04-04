class Solution {
public:

    int climbStairs(int n) {
        vector<int> arr(n+1,0);
        return td(arr,0,n);
    }
    
    int td(vector<int>& arr,int step, int& n)
    {
        if(step > n) return 0;
        if(step == n)
        {
            arr[step] = 1;
            return arr[step];
        }
        if(arr[step])
            return arr[step];
        
        arr[step] = td(arr, step+1,n) + td(arr,step+2,n);
        return arr[step];
    }
    
};