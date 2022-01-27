class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        unordered_map<int,int> count,count2;
        
        
        for(int i=0;i<arr.size();i++)count[arr[i]]++;
        for(auto i:count)count2[i.second]++;
        for(auto i:count2)if(i.second>1)return false;
        
        return true;
        
    }
};