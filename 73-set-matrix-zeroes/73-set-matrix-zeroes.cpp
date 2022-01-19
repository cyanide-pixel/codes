class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        
        int rownum = matrix.size();
        if(rownum==0) return;
        int colnum = matrix[0].size();
        if(colnum==0) return;
        
        bool hasZeroFirstRow = false;
        bool hasZeroFirstCol = false;
        
        /// check kar raha ki does first row have ZERO element ?
        for(int j=0;j<colnum;j++){
            if(matrix[0][j] == 0){
                hasZeroFirstRow = true;
                break;
            }
        }
        /// then check kr rha ki does first Col have ZERO element ?
        for(int j=0;j<rownum;j++){
            if(matrix[j][0] == 0){
                hasZeroFirstCol = true;
                break;
            }
        }
        
        ///  use  krenge first row and col ko
        /// find zero and store info in first row and col
        for(int i=1;i<rownum;i++){
            for(int j=1;j<colnum;j++){
                if(matrix[i][j] == 0){
                    matrix[i][0] = 0; // top most ko 0 kiya
                    matrix[0][j] = 0; // leftmost most ko 0 kiya
                }
            }
        }
        
        for(int i=1;i<rownum;i++){
            for(int j=1;j<colnum;j++){
                if(matrix[0][j]==0 || matrix[i][0]==0){
                    matrix[i][j] = 0;  //check kiya ki if top most 0 hai ya leftmost 0 hai then element 0 kiya
                }
            }
        }
        
        /// set zeroes for first row
        if(hasZeroFirstRow){
            for(int i=0;i<colnum;i++){
                matrix[0][i] = 0;
            }
        }
        
        /// set zeroes for first col
        if(hasZeroFirstCol){
            for(int i=0;i<rownum;i++){
                matrix[i][0] = 0;
            }
        }
        
    }
};