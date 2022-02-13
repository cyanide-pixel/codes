class Solution {
public:
    int trailingZeroes(int n) {
        int i = 0;
        int mul = 5;
        while((n)/mul > 0){
            i += n/mul;
            mul *= 5;
        }
        return i;
    }
};