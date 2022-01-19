class Solution {
public:
    void sortColors(vector<int>& nums) {
              
        
        
        for(int i=0; i<2; i++){
            int j=-1, k=0;
            while(k < nums.size()){
                if(nums[k] != i+1){
                    swap(nums[k], nums[j+1]);
                    j++;
                }
                k++;
            }
            k=j;
        }
        
    }
};