class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
        int surface = 0;
        int i =0,j=0;
        int row = grid.size();
        int column = grid[0].size();
        int count = 0;
        if(row == 1 && column == 1)
            return (grid[0][0]*6 - 2*(grid[0][0]-1));
        for(int i =0;i<row;i++)
        {
            if( i == 0 || i == row-1)
            {
                surface+=grid[i][0]+grid[i][column-1];
            }
            for(int j=0;j<column;j++)
            {
                
                if((i == 0 || i == column-1) || (j == 0 || j == column-1))
                {
                    surface += grid[i][j];
                }
                
                 if(j!=column-1 )
                 {
                     surface += abs(grid[i][j] - grid[i][j+1]);
                }
                 if(i!=row-1)
                 { 
                     surface+= abs(grid[i+1][j] - grid[i][j]);
                    
                }
                if(grid[i][j] == 0)
                {
                    count++;
                }
                
            }
        }
    
       surface += (2*row*column) - count*2 ;
        return surface;
    }
};