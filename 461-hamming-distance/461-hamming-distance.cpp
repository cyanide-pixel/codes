class Solution {
public:
    int hammingDistance(int x, int y) {
        		x=x^y; 

//         Then i used y as a counter to see how many bits are set
		y=0;

//         This loop will run until x become 0
		while(x){

//             This if condition will check whether the 0th index is set or not
			if(x&1){

//             increasing the counter if the bit is set    
				y++;    
			}

//             right shifting the bits of x by 1 
			x=x>>1;
		}
		return y;
    }
};