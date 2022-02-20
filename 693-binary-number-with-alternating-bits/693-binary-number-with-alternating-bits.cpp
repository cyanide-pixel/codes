class Solution {
public:
    bool hasAlternatingBits(int n) {
    
        int lastBit = n & 1;
	    while(n != 0)
        {
		
            n >>= 1;
            if((n & 1) == lastBit){
			return false;
		}
            
		
            lastBit = n & 1;
	     }
	
        return true;
    }
};