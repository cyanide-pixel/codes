class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<int> v(n, 1);
        
        for(int i=1; i<n; i++) v[i]+=v[i-1];
        
        sort(v.begin(), v.end(), [&](int x, int y) {
            return to_string(x)<to_string(y);
        });
        return v;
    }
};