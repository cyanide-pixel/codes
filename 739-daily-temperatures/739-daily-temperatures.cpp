class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        
        int size = t.size();
        vector<int> v(size);
        stack<pair<int, int>> s;
        s.push({size-1, t[size-1]});
        for(int i=size-2; i>=0; i--)
        {
            while(s.size()>0 && s.top().second <= t[i])         
                s.pop();
            if(s.size() > 0)
                v[i] = s.top().first - i;
            s.push({i, t[i]});
        }
        return v;
        
    }
};