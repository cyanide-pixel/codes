class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
    int i=0;
    int j=0;
    vector<int> result;
    int ans=INT_MIN;
    deque<int> q;
    
    
     while(j<nums.size()){
         if(q.empty())
             q.push_back(nums[j]);
         
         else if(!q.empty() && q.back()<nums[j]){               
             while(!q.empty() && q.back()<nums[j]){             
                 q.pop_back();
             }
             q.push_back(nums[j]);
         }
         else{
             q.push_back(nums[j]);
         }
        
         if(j-i+1 <k){
             j++;
         
         }

        else if(j-i+1==k){
            result.push_back(q.front());
            if(q.front()!=nums[i]){
                i++;
                j++;
            }
            else{
                q.pop_front();
                i++;
                j++;
            }
        }
     }
    return result;
    }
};