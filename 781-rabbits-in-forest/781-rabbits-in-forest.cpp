class Solution {
public:
    int numRabbits(vector<int>& ans) {
        int n=ans.size();
        unordered_map<int,int> mp;
        for(auto x:ans){
            mp[x+1]++;
        }
        int res=0;
        int c;
        for(auto x:mp){
            int idx=x.first;
            int cnt=x.second;
            c=ceil((int)cnt*1.0/idx);
            res+=idx*c;
        }
        return res;
    }
};