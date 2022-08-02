class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int sum =0;
        
        for(int i=0; i<customers.size(); i++) {
            if(grumpy[i] == 0) 
                sum+=customers[i];
        }
        int maxSum = sum;
        for(int i=0; i<minutes; i++) {
            if(grumpy[i] == 1) {
                sum+=customers[i];
            }
        }
        if(sum>maxSum) {
            maxSum = sum;
        }
        int i=0;
        int j=minutes;
        
        while(j<customers.size()) {
            if(grumpy[j] == 1) {
                sum+=customers[j];
            }
            if(grumpy[i]== 1) {
                sum-=customers[i];
            }
            if(sum>maxSum) {
                maxSum = sum;
            }
            i++; j++;
        }
        return maxSum;
    }
};