class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> mp;
        int i=0; int j=0;
        int ans = -1;
        while(j<(int)fruits.size()) {
            mp[fruits[j]]++;
            if(mp.size()<=2) {
                ans = max(ans, j-(i-1));
                j++;
            }
            else {
                while(mp.size()>2){
                    mp[fruits[i]]--;
                    if(mp[fruits[i]]==0)mp.erase(fruits[i]);
                    i++;
                }
                ans=max(ans,j-i+1);
                j++;
            }
        }
        return ans;
    }
};