class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans(2);
        
        int i=0, j = numbers.size()-1;
        int k = target;
        
        while(i<j){
            if(numbers[i] + numbers[j] == k){
                ans[0] = i+1;
                ans[1] = j+1;
                break;
            }
            else if(numbers[i] + numbers[j] < k){
                i++;
            }
            else{
                j--;
            }   
        }
        
        return ans;
        
    }
};