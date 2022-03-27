class Solution {
public:
    string frequencySort(string s) {
        priority_queue<pair<int, char>, vector<pair<int, char>>, MyComparison> my_pq;
        // first, use a hashmap to count frequency
        unordered_map<char, int> ctr;
        for(char& c : s) {
            ctr[c] += 1;
        }
        // secondly, use a max-heap to store (frequency, char) pair
        for(auto it = ctr.begin(); it != ctr.end(); ++it) {
            my_pq.push(make_pair(it->second, it->first));
        }
        string res = "";
        // finally, pop the pq and construct the result 
        while(!my_pq.empty()) {
            pair<int, char> temp = my_pq.top();
            my_pq.pop();
            res += string(temp.first, temp.second);
        }
        return res;
    }
private:
    struct MyComparison {
        bool operator() (pair<int, char> a, pair<int, char> b) {
            return a.first < b.first;
        }
    } ;
};