class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target)
    {
        int rowsize = matrix.size();
        int colsize = matrix[0].size();
     
//         starting row index from 0
//         starting col index from last colum as row are soughted from left to right and col from top to                  bottom

        int row = 0;
        int col = colsize-1;
        while(row < rowsize && col >=0)
        {
            if(matrix[row][col] == target)
                return 1;
            if(matrix[row][col] < target)
            {
                row++;
            }
            else
            {
                col--;
            }
        }
        return 0;
    }
};