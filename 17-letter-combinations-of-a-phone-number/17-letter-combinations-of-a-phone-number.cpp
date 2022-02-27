class Solution {
public:
    vector<string>keypad={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    void create(vector<string>&ans,string digits,int n,int i,string s){
        if(i==n){
            ans.push_back(s);
            return;
        }
        string temp=keypad[digits[i]-'0'];
        for(int j=0;j<temp.size();j++){
            create(ans,digits,n,i+1,s+temp[j]);
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0)
            return {};
        vector<string>ans;
        int n=digits.size();
        create(ans,digits,n,0,"");
        return ans;
    }
};