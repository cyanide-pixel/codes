class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
         sort(timePoints.begin(), timePoints.end());
        int m1 = stoi(timePoints[timePoints.size() - 1].substr(0, 2)) * 60 +            stoi(timePoints[timePoints.size() - 1].substr(3, 2));
        int m2 = stoi(timePoints[0].substr(0, 2)) * 60 + stoi(timePoints[0].substr(3, 2));
        int res = m1 - m2 > 720 ? 1440 - (m1 - m2) : m1-m2;
        
        for(int i = 1; i < timePoints.size(); i++)
        {
            m1 = stoi(timePoints[i].substr(0, 2)) * 60 + stoi(timePoints[i].substr(3, 2));
            m2 = stoi(timePoints[i - 1].substr(0, 2)) * 60 + stoi(timePoints[i - 1].substr(3, 2));
            res = min(res, m1 - m2);
        }
        
        return res;
    }
};