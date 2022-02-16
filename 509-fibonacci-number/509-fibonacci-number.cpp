class Solution {
public:
    void multiply(vector<vector<int>> &M ,vector<vector<int>> &A){
        int M11 = M[0][0] * A[0][0] + M[0][1] * A[1][0];
        int M12 = M[0][0] * A[0][1] + M[0][1] * A[1][1];
        int M21 = M[1][0] * A[0][0] + M[1][1] * A[1][0];
        int M22 = M[1][0] * A[0][1] + M[1][1] * A[1][1];
        
        M[0][0] = M11 , M[0][1] =M12 , M[1][0] =M21 , M[1][1] = M22;   
    }
    void power(vector<vector<int>> &M , int k){  
        if(k==0 or k==1)
            return ;
        power(M , k/2);
        multiply(M,M);
        if(k&1){
            vector<vector<int> > A {{1,1},{1,0}};
            multiply(M, A);
        }
    }
public:
    int fib(int n) {
       if(n==0) return  0 ;
        vector<vector<int> > M {{1,1},{1,0}};
        power(M , n-1);
        return M[0][0];
        
    }
};