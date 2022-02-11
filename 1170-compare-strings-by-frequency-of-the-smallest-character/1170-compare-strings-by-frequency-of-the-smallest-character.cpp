class Solution {
int calculateMinCount(const string& word){
        char smallestChar=word[0];
        int smallestCharCount = 1;
        for(int j=1;j<word.size();j++){
            if(word[j]<smallestChar){
                smallestChar=word[j];
                smallestCharCount=1;
            }else if(word[j]==smallestChar)smallestCharCount++;
        }
        return smallestCharCount;
    }
public:
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        vector<int>counts(words.size());
        for(int i=0;i<words.size();i++){
            counts[i]=calculateMinCount(words[i]);
        }
        sort(counts.begin(),counts.end());
        vector<int>answer;
        for(auto& query:queries){
            int s = calculateMinCount(query);
            int n = counts.end()-upper_bound(counts.begin(),counts.end(),s);
            answer.push_back(n);
        }
        return answer;
        
    }
};