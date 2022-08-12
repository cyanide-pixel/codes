class Solution {
public:
int romanToInt(string s) {
    unordered_map<char,int>data;
    data['I']=1;
    data['V']=5;
    data['X']=10;
    data['L']=50;
    data['C']=100;
    data['D']=500;
    data['M']=1000;
    
    int ans=0;
    
    int n=s.length();
    
    int i=0;
    while(i<n){
        
        
        if(i+1<n && data[s[i+1]]>data[s[i]]){
            ans=ans+data[s[i+1]]-data[s[i]];
            i=i+2;
        }
                                      
                                      
        else{
            ans = ans +data[s[i]];
            i++;
        }
                                      }
                                      
    return ans ;  
}

};