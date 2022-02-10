class Solution {
public:
    string reverseOnlyLetters(string s) {
    string str="";
    int n=s.size();
    
    int j=0;
    int i=n-1;
    
    while(i>-1 && j<n)
    {
        if(!isalpha(s[i])) i--;
        else
        if(!isalpha(s[j]))
        {
            str+=s[j];
            j++;
        }
        else
        {
            str+=s[i];
            i--;
            j++;
        }     
    }
    
    while(i>-1)
    {
        if(isalpha(s[i])) str+=s[i];
        i--;
    }
    while(j<n)
    {
        if(!isalpha(s[j])) str+=s[j];
        j++;
    }
    return str;
    }
};