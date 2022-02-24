class CombinationIterator {
    string s;
	int cl=0;
	vector<string> v; 
	int pos=0;
public:
    
    void helper(string &s,int idx,int cl,string &op){
		 if(idx==s.length()){
			 if(op.length()==cl)  //we need string with length combinationLength
				 v.push_back(op);
			 return;
		 }
		op.push_back(s[idx]); //current element lena hai
		helper(s,idx+1,cl,op);
		op.pop_back(); //current element nhi lena hai
		helper(s,idx+1,cl,op);
	}
    CombinationIterator(string characters, int combinationLength) {
        s=characters;
		cl=combinationLength;
		string op="";
		helper(s,0,cl,op);
    }
    
    string next() {
        return v[pos++];
    }
    
    bool hasNext() {
        return pos<v.size();
    }
};

/**
 * Your CombinationIterator object will be instantiated and called as such:
 * CombinationIterator* obj = new CombinationIterator(characters, combinationLength);
 * string param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */