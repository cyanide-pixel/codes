class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        
        unordered_map <string,int> ump;
        int count=0,Plus,At;
        string localname,Domain;
        for(auto &it:emails){
            Plus = -1;
            At = it.find('@');
            localname = it.substr(0,At);
            localname.erase(remove(localname.begin(), localname.end(), '.'),localname.end());
            Plus=localname.find('+');
            if(Plus != -1){
                localname.erase(Plus, At-Plus);
            }
            Domain = it.substr(At, it.size());
            localname += Domain;
            ump[localname]++;
        }
        
        return ump.size();
    }
};