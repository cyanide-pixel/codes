class Solution {
public:
vector<vector<int>> kClosest(vector<vector<int>> &points, int k)
{
    // make a heap of size k and add the first k elements
    priority_queue<pair<int, int>, vector<pair<int, int>>> pq;
    for (int i = 0; i < points.size(); i++)
    {
        int x = points[i][0], y = points[i][1];
        int d = x * x + y * y;
        pq.push({d, i});
        // if the heap size is greater than k, remove the smallest element
        if (pq.size() > k)
            pq.pop();
    }
    // now the heap contains the k closest elements to the origin push them in a vector
    vector<vector<int>> ans;
    while (!pq.empty())
    {
        ans.push_back(points[pq.top().second]);
        pq.pop();
    }
    return ans;
}
};