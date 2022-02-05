class Solution {
public:
    string removeKdigits(string num, int k) {
        string ans = "";
		for(auto n : num)
		{
			while(!ans.empty() && k>0 && n < ans.back())
			{
				ans.pop_back();
				k--;
			}
			ans += n;
			if (ans.length() == 1 && ans.back() == '0')
				ans.pop_back();
		}
		return ans.length() > k ? ans.substr(0, ans.length() - k) : "0";
    }
};