vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int>ans;
    for(int col=0; col<mCols; col++)
        {
            if(col % 2 == 0)
            {
                for(int row=0; row<nRows; row++)
                {
//                     cout<< arr[row][col] << " ";
                    ans.push_back(arr[row][col]);
                }
            }
            else
            {
                for(int row=nRows-1; row>=0; row--)
                {
//                     cout << arr[row][col]<<" ";
                    ans.push_back(arr[row][col]);
                }
            }
            
            // cout<< endl;
        }
    return ans;
}

// same code we can run below on vs code just initialise array 
// wave pattern input
        for(int col=0; col<4; col++)
        {
            if(col % 2 == 0)
            {
                for(int row=0; row<5; row++)
                {
                    cin >> arr[row][col];
                }
            }
            else
            {
                for(int row=5-1; row>=0; row--)
                {
                    cin >> arr[row][col];
                }
            }
            
            // cout<< endl;
        }
        

    // wave pattern print
        for(int row=0; row<5; row++)
        {
            for(int col=0; col<4; col++)
            {
                cout << arr[row][col]<< " ";
            }
            cout<< endl;
        }
