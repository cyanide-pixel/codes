class Solution {
public:
    int count=0;
    
    bool isSafe(int row,int col,vector<string> board,int n)
    {
        int dupRow=row;
        int dupCol=col;
        while(row>=0 && col>=0)
        {
            if(board[row][col]=='Q')
                return false;
            row--;
            col--;
        }
        
        row=dupRow;
        col=dupCol;
        
        while(col>=0)
        {
            if(board[row][col]=='Q')
                return false;
            col--;
        }
        col=dupCol;
        
        while(row<n && col>=0)
        {
            if(board[row][col]=='Q')
                return false;
            row++;
            col--;
        }
        return true;
    }
    
    void solve(int col,vector<string> &board,int n)
    {
        if(col==n)
        {
            count+=1;
            return ;
        }
        
        for(int row=0;row<n;row++)
        {
            if(isSafe(row,col,board,n))
            {
                board[row][col]='Q';
                solve(col+1,board,n);
                board[row][col]='.';
            }
        }
        return ;
    }
    
    int totalNQueens(int n) {
        
        string s(n,'.');
        
        vector<string> board(n,s);
        
        solve(0,board,n);
        
        return count;
    }
};