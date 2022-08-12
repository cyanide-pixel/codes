class Solution {
public:
    int myAtoi(string input) {
        int sign = 1; 
        int result = 0; 
        int index = 0;
        int n = input.size();
        
        //shurat ke white space hatnae ke liye
        while (index < n && input[index] == ' ') { 
            index++; 
        }
        
        // sign = +1, agr positive hai tho otherwise negative kr do. 
        if (index < n && input[index] == '+') {
            sign = 1;
            index++;
        } else if (index < n && input[index] == '-') {
            sign = -1;
            index++;
        }
        
        // Traverse kr next ke digits ko and if digit nhi hai tho ruk jao 
        // end of string bhi non digit character hoga
        while (index < n && isdigit(input[index])) {
            int digit = input[index] - '0';

            // Check kro for underflow and overflow conditions
            if ((result > INT_MAX / 10) || (result == INT_MAX / 10 && digit > INT_MAX % 10)) { 
                // If integer overflowed return 2^31-1, otherwise if underflowed return -2^31.    
                return sign == 1 ? INT_MAX : INT_MIN;
            }
            
            result = 10 * result + digit;
            index++;
        }
        
        return sign * result;
    }
};