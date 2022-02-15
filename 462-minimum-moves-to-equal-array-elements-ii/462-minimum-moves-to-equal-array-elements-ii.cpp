class Solution {
public:
    int minMoves2(vector<int>& nums) {
         sort(nums.begin(),nums.end());
        int a=0,b=nums.size()-1;
        
        int moves=0;
        while(a<b){
            moves+=nums[b]-nums[a];
            a++;
            b--;
            
        }
        return moves;
    }
};