class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        unordered_map<int,int> ans;
        for(int i=0;i<arr.size();i++)
            ans[arr[i]]++;
        for(auto x:ans){
            for(auto y:ans){
                if(x.first!=y.first && x.second==y.second)
                    return false;
            }
        }
        return true;
    
    }
};