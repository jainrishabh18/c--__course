class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix)
    {
        vector<int>ans;
        int row = matrix.size();
        int col =matrix[0].size();
        
        int startingRow = 0;
        int endingRow = row-1;
        int startingCol = 0; 
        int endingCol = col-1;
        
        int count=0;
        int totalcount = row*col;
        
        while(count<totalcount)
        {
//       printing starting row
            for(int index=startingCol; index<=endingCol && count<totalcount; index++)
            {
                ans.push_back(matrix[startingRow][index]);
                count++;
            }
             
            startingRow++;
            // cout << ans ;
     
            for(int index = startingRow; index<=endingRow && count<totalcount; index++)
            {
                ans.push_back(matrix[index][endingCol]);
                count++;
            }
            endingCol--;
            for(int index = endingCol ; index>= startingCol && count<totalcount; index--)
            {
                ans.push_back(matrix[endingRow][index]);
                count++;
            }
            // return ans;
            endingRow--;
            for(int index = endingRow ; index>= startingRow && count<totalcount; index--)
            {
                ans.push_back(matrix[index][startingCol]);
                count++;
            }
            startingCol++;
            
        }
        return ans;
       //  vector<int>a;
       // return a;  
    }
    
    
};