class Solution {
public:
    string addStrings(string n1, string n2) {
         
        
        if (n1.size() > n2.size()) swap(n1, n2);
        
        int l1 = n1.size(), l2 = n2.size(), sum = 0;
        string res(l2 + 1, '0');
        for (int i = l1 - 1, j = l2 - 1, k = 0; j >= 0;) {
            sum = (i >= 0 ? n1[i--] - 48 : 0) + (n2[j--] - 48) + sum;
            res[k++] = (sum > 9? sum - 10 : sum) + 48;
            sum = sum > 9;
        }
        
        if (sum) res.back() = 49;
        else res.pop_back();
        
        reverse(begin(res), end(res));
        return res;
    }
};