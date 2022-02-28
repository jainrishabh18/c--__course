class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
//         finding row and col size here 
        int row = matrix.size();
        int col = matrix[0].size();
            
        int start=0;
        int end =  row*col - 1;
        
        
        while(start <= end)
        {
            int mid = start + (end-start)/2;
            
//      In 2d matrix we have to find the row and col of the mid element below code is doing that
            
            // row --> mid/ col (mid/col) because totla no of colums tell us row length
            // col --> mid % col
            int midindex = matrix[mid/col][mid%col];
            
            if( midindex == target )
                return 1;
            
            if(midindex < target)
            {
                start =  mid+1;
            }
            else
            {
                end = mid-1;
            }
        }
        return 0;
    }
};