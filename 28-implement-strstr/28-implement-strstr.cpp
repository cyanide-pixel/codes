class Solution {
public:
    int strStr(string haystack, string needle) {
        
       
        auto n = haystack.length(); auto m = needle.length();
        if (m == 0) return 0;
        if (n == 0 || n < m) return -1;
                                            
        int d = 31;                                   
        int q = 15486703;                        
        long p = 0; long t = 0; long h = 1;
       
        for (auto i = 0; i < m; ++i) {          
            if (i != m - 1) 
                h = (d * h) % q;
            p = (d * p + needle[i]) % q;
            t = (d * t + haystack[i]) % q;
        }
        
        for (auto s = 0; s < n - m + 1; ++s) {
            if (t < 0) t += q;                          
            if (p == t)                                 
                if (needle == haystack.substr(s, m))   
                    return s;
            if (s < n - m)                     
                t = (d * (t - haystack[s] * h) + haystack[s+m]) % q;
        }
        
        return -1;   
    }
};