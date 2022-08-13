class Solution {
public:
    int strStr(string S, string P) {
        int m = P.size();
        P = P + "#" + S;
        int n  = P.size();
        int lps[n];
        lps[0] = 0;
        int len =0, i =1;
        
        while(i<n) {
            if(P[i] == P[len]) {
                lps[i] = ++len;
                if(lps[i] == m) return i - 2*m;
                i++;
            }
            else {
                if(len>0)  len = lps[len-1];
                else lps[i++] = 0 ; 
            }
        }
        return -1;
    }
};