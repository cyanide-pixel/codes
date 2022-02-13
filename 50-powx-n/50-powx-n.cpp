class Solution {
public:
    
    double be(double x, int n)
    {
        double r =1.00;
        while(n!=0)
        {
            if(n&1)
                r=r*x;
            x= x*x;
            n =n/2;
        }
        return r;
    }
    double myPow(double x, int n) {
        int s=0;
        if(n<0)
        {
            n =abs(n);
            s =1;
        }
        
        double ans =be (x, n);
        if(s==1)
            ans=1/ans;
        return ans;
    }
};