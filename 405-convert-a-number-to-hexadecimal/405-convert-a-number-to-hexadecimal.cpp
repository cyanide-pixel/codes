class Solution {
public:
    string toHex(int num) {
        
        
    unordered_map<int,char> m;
    m[0] = '0';m[1] = '1';m[2] = '2'; m[3]='3'; m[4]='4';m[5]='5';m[6]='6'; m[7]='7';m[8] ='8';
    m[9] = '9'; m[10] = 'a'; m[11] = 'b';m[12] = 'c'; m[13] = 'd';m[14] = 'e';m[15] = 'f';
    int rem = 0;
    string res = "";
    unsigned int n = num;
    if(num == 0){
      return "0";
    }
    while(n > 0){
     
        rem = n % 16;
        res = m[rem] + res;
        n /=16;
        
    }
        return res;
    }
};