class NumArray {
public:
    int n;
    vector<int> a;
    int sum;
    
    NumArray(vector<int>& nums) {
        n=nums.size();
        a = nums;
        sum = accumulate(nums.begin(), nums.end(), 0);
    }
    
    void update(int index, int val) {
        int prev=a[index];
        a[index]=val;
        sum-=prev;
        sum+=val;
    }
    
    int sumRange(int left, int right) {
        int leftSum=0,rightSum=0;
        for(int i=0;i<left;i++) 
            leftSum+=a[i];
        for(int i=right+1;i<n;i++) 
            rightSum+=a[i];
        return (sum-leftSum-rightSum);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */