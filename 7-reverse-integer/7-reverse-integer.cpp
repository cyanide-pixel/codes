class Solution {
public:
    int reverse(int x) {
        int new_num = 0;
        int flag = 0;
        if(x < 0){
            flag = -1;
            if(x <= INT_MIN){
                return 0;
            } else{
                x = x * -1;
            }
        }
        
       // int pow = 1;
        while(x > 0){
            int temp = x % 10;
            
            if(new_num > INT_MAX / 10 || new_num < INT_MIN/10){
                return 0;
            }
            
            if(x % 10 == 0){
                new_num = new_num * 10;// This condition is added in case of any integer having 0 in between eg for 1201 then at some point x = 120, then when we do 120 % 10 ans becomes 0 but we dont want to discard this 0.
            } else {
                
                new_num = new_num * 10 + temp;
                
            }
             
            x = x / 10;
        }
        
        if(flag == -1){
            new_num = new_num * -1;
        }
        
        return new_num;
        
        
    }
};