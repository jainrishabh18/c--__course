class Solution {
public:
    
//     transpose reflect 
//     transpose reverse 
    void rotate(vector<vector<int>>& matrix) {
        int n  = matrix.size();
        int rowsize = matrix.size();
        int colsize = matrix[0].size();
        
        // int startingCol = 0;
        // int startingRow = 0;
        // int endingCol = col-1;
        // int endingRow = row-1;
      
//         transpose 
        for(int row=0; row<rowsize; row++)
        {
            for(int col=row+1; col<colsize; col++)
            {
                swap(matrix[row][col],matrix[col][row]);
                
            }
        }
        
// reverse it from left and right
        for(int row=0; row<rowsize; row++)
        {
            for(int col=0; col<colsize/2; col++)
            {
                swap(matrix[row][col],matrix[row][n-col-1]);
                // colsize--;
                
            }
        }
        
        
        
    }
};